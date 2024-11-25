// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2020 The PIVX developers
// Copyright (c) 2021-2024 The DECENOMY Core Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "fs.h"
#include "logging.h"
#include "main.h"
#include "masternode.h"
#include "masternodeman.h"
#include "masternode-sync.h"
#include "rewards.h"
#include "sqlite3/sqlite3.h"
#include "timedata.h"
#include "utilmoneystr.h"
#include "utiltime.h"

#include <algorithm>
#include <cstdio>
#include <sstream>
#include <boost/unordered_map.hpp>

boost::unordered_map<int, CAmount> mDynamicRewards;

sqlite3* db = nullptr;
sqlite3_stmt* insertStmt = nullptr;
sqlite3_stmt* deleteStmt = nullptr;

bool CRewards::Init(bool fReindex)
{
    std::ostringstream oss;
    auto ok = true;

    if(db == nullptr) {
        try
        {
            const std::string dirname = (GetDataDir() / "chainstate").string();
            const std::string filename = (GetDataDir() / "chainstate" / "rewards.db").string();

            // Create the chainstate directory if it doesn't exist
            if (!fs::exists(dirname.c_str())) {
                // Directory doesn't exist, create it
                if (fs::create_directory(dirname.c_str())) {
                    oss << "Created directory: " << dirname << std::endl;
                } else {
                    oss << "Failed to create directory: " << dirname << std::endl;
                    ok = false;
                }
            }

            // Delete the database file if it exists when reindexing
            if(ok && fReindex) 
            {
                if (auto file = std::fopen(filename.c_str(), "r")) {
                    std::fclose(file);
                    // File exists, delete it
                    if (std::remove(filename.c_str()) == 0) {
                        oss << "Deleted existing database file: " << filename << std::endl;
                    } else {
                        oss << "Failed to delete existing database file: " << filename << std::endl;
                        ok = false;
                    }
                }
            }

            if(ok) { // Create and/or open the database
                // the wallet sometimes restarts
                // and the restart starts by spawnning a new wallet instance
                // before the current instance closes
                // so let's try to open it several times before giving up
                for (auto attempt = 1; attempt <= DB_OPEN_ATTEMPTS; attempt++) { 
                    oss << "Opening database: " << filename << std::endl;
                    auto rc = sqlite3_open(filename.c_str(), &db);

                    if (rc) { // NOK
                        if(attempt < DB_OPEN_ATTEMPTS) {
                            MilliSleep(DB_OPEN_WAITING_TIME);
                        } else {
                            oss << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
                            ok = false;
                            break; // giving up
                        }
                    } else {
                        break; // all good
                    }
                }
            }

            if(ok) { // database is open and working
                // Create the rewards table if not exists
                const auto create_table_query = "CREATE TABLE IF NOT EXISTS rewards (height INT PRIMARY KEY, amount INTEGER)";
                auto rc = sqlite3_exec(db, create_table_query, NULL, NULL, NULL);

                if (rc != SQLITE_OK) {
                    oss << "SQL error: " << sqlite3_errmsg(db) << std::endl;
                    ok = false;
                }
            }

            if(ok) { // Create insert statement
                const std::string insertSql = "INSERT OR REPLACE INTO rewards (height, amount) VALUES (?, ?)";
                auto rc = sqlite3_prepare_v2(db, insertSql.c_str(), insertSql.length(), &insertStmt, nullptr);
                if (rc != SQLITE_OK) {
                    oss << "SQL error: " << sqlite3_errmsg(db) << std::endl;
                    ok = false;
                }
            }

            if(ok) { // Create delete statement
                const std::string deleteSql = "DELETE FROM rewards WHERE height >= ?";
                auto rc = sqlite3_prepare_v2(db, deleteSql.c_str(), deleteSql.length(), &deleteStmt, nullptr);
                if (rc != SQLITE_OK) {
                    oss << "SQL error: " << sqlite3_errmsg(db) << std::endl;
                    ok = false;
                }
            }

            if(ok) { // Loads the database into the in-memory map
                const char* sql = "SELECT height, amount FROM rewards";
                auto rc = sqlite3_exec(db, sql, [](void* data, int argc, char** argv, char** /* azColName */) -> int {
                    int height = std::stoi(argv[0]);
                    CAmount amount = std::stoll(argv[1]);
                    mDynamicRewards[height] = amount;
                    return 0;
                }, nullptr, nullptr);

                if (rc != SQLITE_OK) {
                    oss << "SQL error: " << sqlite3_errmsg(db) << std::endl;
                    ok = false;
                }
            }

            if(ok && mDynamicRewards.size() > 0) { // Printing the map
                oss << "Dynamic Rewards:" << std::endl;
                for (const auto& pair : mDynamicRewards) {
                    oss << "Height: " << pair.first << ", Amount: " << FormatMoney(pair.second) << std::endl;
                }
            }
        }
        catch(const std::exception& e)
        {
            oss << "An exception was thrown: " << e.what() << std::endl;
            ok = false;
        }
    } else {
        oss << "Already initialized" << std::endl;
    }

    std::string log = oss.str();
    if (!log.empty()) {
        std::istringstream iss(log);
        std::string line;
        while (std::getline(iss, line)) {
            LogPrintf("CRewards::%s: %s\n", __func__, line);
        }
    }
        
    return ok;
}

void CRewards::Shutdown()
{
    if(insertStmt != nullptr) sqlite3_finalize(insertStmt);
    if(deleteStmt != nullptr) sqlite3_finalize(deleteStmt);
    if(db != nullptr) sqlite3_close(db);

    return;
}

int CRewards::GetDynamicRewardsEpoch(int nHeight)
{
    auto& consensus = Params().GetConsensus();
    const auto nRewardAdjustmentInterval = consensus.nRewardAdjustmentInterval;
    return nHeight / nRewardAdjustmentInterval;
}

int CRewards::GetDynamicRewardsEpochHeight(int nHeight)
{
    auto& consensus = Params().GetConsensus();
    const auto nRewardAdjustmentInterval = consensus.nRewardAdjustmentInterval;
    return GetDynamicRewardsEpoch(nHeight) * nRewardAdjustmentInterval;
}

bool CRewards::IsDynamicRewardsEpochHeight(int nHeight)
{
    return GetDynamicRewardsEpochHeight(nHeight) == nHeight;
}

bool CRewards::ConnectBlock(CBlockIndex* pindex, CAmount nSubsidy, CCoinsViewCache& coins)
{
    auto& params = Params();
    auto& consensus = params.GetConsensus();
    const auto nHeight = pindex->nHeight;
    const auto nEpochHeight = GetDynamicRewardsEpochHeight(nHeight);
    std::ostringstream oss;
    auto ok = true;

    if (consensus.NetworkUpgradeActive(nHeight, Consensus::UPGRADE_DYNAMIC_REWARDS))
    {
        CAmount nNewSubsidy = 0;

        if (
            masternodeSync.IsSynced() &&
            IsDynamicRewardsEpochHeight(nHeight)  
        ) {
            auto nBlocksPerDay = DAY_IN_SECONDS / consensus.nTargetSpacing;
            auto nBlocksPerWeek = WEEK_IN_SECONDS / consensus.nTargetSpacing;
            auto nBlocksPerMonth = MONTH_IN_SECONDS / consensus.nTargetSpacing;

            // get total money supply
            const auto nMoneySupply = pindex->nMoneySupply.get();
            oss << "nMoneySupply: " << FormatMoney(nMoneySupply) << std::endl;

            // get the current masternode collateral, and the next week collateral
            auto nCollateralAmount = CMasternode::GetMasternodeNodeCollateral(nHeight);
            auto nNextWeekCollateralAmount = CMasternode::GetMasternodeNodeCollateral(nHeight + nBlocksPerWeek);

            // calculate the current circulating supply
            CAmount nCirculatingSupply = 0;
            FlushStateToDisk();
            std::unique_ptr<CCoinsViewCursor> pcursor(coins.Cursor());

            while (pcursor->Valid()) {
                COutPoint key;
                Coin coin;
                if (pcursor->GetKey(key) && pcursor->GetValue(coin) && !coin.IsSpent()) {
                    // ----------- burn address scanning -----------
                    CTxDestination source;
                    if (ExtractDestination(coin.out.scriptPubKey, source)) {
                        const std::string addr = EncodeDestination(source);
                        if (consensus.mBurnAddresses.find(addr) != consensus.mBurnAddresses.end() &&
                            consensus.mBurnAddresses.at(addr) < nHeight
                        ) {
                            pcursor->Next(); // Skip
                            continue;
                        }
                    }

                    // ----------- masternode collaterals scanning ----------- 
                    if(
                        coin.out.nValue == nCollateralAmount || 
                        coin.out.nValue == nNextWeekCollateralAmount
                    ) {
                        pcursor->Next(); // Skip
                        continue;
                    }

                    // ----------- UTXOs age related scanning -----------
                    auto nBlocksDiff = static_cast<int64_t>(nHeight - coin.nHeight);
                    const auto nMultiplier = 100000000LL;

                    // y = mx + b 
                    // 3 months old or less => 100%
                    // 12 months old or greater => 0%
                    const auto nSupplyWeightRatio = 
                        std::min(
                            std::max(
                                (100LL * nMultiplier - (((100LL * nMultiplier)/(9LL * nBlocksPerMonth)) * (nBlocksDiff - 3LL * nBlocksPerMonth))) / nMultiplier, 
                            0LL), 
                        100LL);

                    nCirculatingSupply += coin.out.nValue * nSupplyWeightRatio / 100LL;
                }

                pcursor->Next();
            }
            oss << "nCirculatingSupply: " << FormatMoney(nCirculatingSupply) << std::endl;

            // calculate the epoch's average staking power
            const auto nRewardAdjustmentInterval = consensus.nRewardAdjustmentInterval;
            oss << "nRewardAdjustmentInterval: " << nRewardAdjustmentInterval << std::endl;
            const auto nTimeSlotLength = consensus.TimeSlotLength(nHeight);
            oss << "nTimeSlotLength: " << nTimeSlotLength << std::endl;
            const auto endBlock = chainActive.Tip();
            const auto startBlock = chainActive[endBlock->nHeight - std::min(nRewardAdjustmentInterval, endBlock->nHeight)];
            const auto nTimeDiff = endBlock->GetBlockTime() - startBlock->GetBlockTime();
            const auto nWorkDiff = endBlock->nChainWork - startBlock->nChainWork;
            const auto nNetworkHashPS = static_cast<int64_t>(nWorkDiff.getdouble() / nTimeDiff);
            oss << "nNetworkHashPS: " << nNetworkHashPS << std::endl;
            const auto nStakedCoins = static_cast<CAmount>(nNetworkHashPS * nTimeSlotLength * 100);
            oss << "nStakedCoins: " << FormatMoney(nStakedCoins) << std::endl;

            // Remove the staked supply from circulating supply
            nCirculatingSupply = std::max(nCirculatingSupply - nStakedCoins, CAmount(0));
            oss << "nCirculatingSupply without staked coins: " << FormatMoney(nCirculatingSupply) << std::endl;

            // calculate target emissions
            const auto nTotalEmissionRate = TOT_SPLY_TRGT_EMISSION;
            oss << "nTotalEmissionRate: " << nTotalEmissionRate << std::endl;
            const auto nCirculatingEmissionRate = CIRC_SPLY_TRGT_EMISSION;
            oss << "nCirculatingEmissionRate: " << nCirculatingEmissionRate << std::endl;
            const auto nActualEmission = nSubsidy * nRewardAdjustmentInterval;
            oss << "nActualEmission: " << FormatMoney(nActualEmission) << std::endl;
            const auto nSupplyTargetEmission = ((nMoneySupply / (365LL * nBlocksPerDay)) / 1000000) * nTotalEmissionRate * nRewardAdjustmentInterval;
            oss << "nSupplyTargetEmission: " << FormatMoney(nSupplyTargetEmission) << std::endl;
            const auto nCirculatingTargetEmission = ((nCirculatingSupply / (365LL * nBlocksPerDay)) / 1000000) * nCirculatingEmissionRate * nRewardAdjustmentInterval;
            oss << "nCirculatingTargetEmission: " << FormatMoney(nCirculatingTargetEmission) << std::endl;
            const auto nTargetEmission = (nSupplyTargetEmission + nCirculatingTargetEmission) / 2LL;
            oss << "nTargetEmission: " << FormatMoney(nTargetEmission) << std::endl;

            // calculate required delta values
            const auto nDelta = (nActualEmission - nTargetEmission) / nRewardAdjustmentInterval;
            oss << "nDelta: " << FormatMoney(nDelta) << std::endl;
            
            // y = mx + b
            // <= 0% |ratio| => 1%
            // >= 100% |ratio| => 10%
            
            const auto nRatio = std::llabs((nDelta * 100) / nSubsidy); // percentage of the difference on emissions and the current reward 
            oss << "nRatio: " << nRatio << std::endl;

            const auto nWeightRatio = ((std::min(nRatio, 100LL) * 9LL) / 100LL) + 1LL;

            const auto nDampedDelta = nDelta * nWeightRatio / 100LL;
            oss << "nDampedDelta: " << FormatMoney(nDampedDelta) << std::endl;

            // adjust the reward for this epoch
            nNewSubsidy = nSubsidy - nDampedDelta;
            // removes decimal places
            nNewSubsidy = (nNewSubsidy / COIN) * COIN;

            oss << "Adjustment at height " << nHeight << ": " << FormatMoney(nSubsidy) << " => " << FormatMoney(nNewSubsidy) << std::endl;
        }

        if ( // if the wallet is syncing get the reward value from the blocks of the epoch
            !masternodeSync.IsSynced() &&
            nHeight != nEpochHeight && 
            mDynamicRewards.find(nEpochHeight) == mDynamicRewards.end()
        ) {
            nNewSubsidy = nSubsidy;
        }

        if(ok && nNewSubsidy > 0) { // store it
            mDynamicRewards[nEpochHeight] = nNewSubsidy; // on the in-memory map

            sqlite3_bind_int(insertStmt, 1, nEpochHeight); // on the file database
            sqlite3_bind_int64(insertStmt, 2, nNewSubsidy);
            auto rc = sqlite3_step(insertStmt);
            if (rc != SQLITE_DONE) {
                oss << "SQL error: " << sqlite3_errmsg(db) << std::endl;
                ok = false;
            }
            sqlite3_reset(insertStmt);
        }
    }

    std::string log = oss.str();
    if (!log.empty()) {
        std::istringstream iss(log);
        std::string line;
        while (std::getline(iss, line)) {
            LogPrintf("CRewards::%s: %s\n", __func__, line);
        }
    }

    return ok;
}

bool CRewards::DisconnectBlock(CBlockIndex* pindex)
{
    auto& consensus = Params().GetConsensus();
    const auto nHeight = pindex->nHeight;
    std::ostringstream oss;
    auto ok = true;
    
    try
    {
        if (consensus.NetworkUpgradeActive(nHeight, Consensus::UPGRADE_DYNAMIC_REWARDS) &&
            IsDynamicRewardsEpochHeight(nHeight)
        ) {
            auto it = mDynamicRewards.find(nHeight);
            if (it != mDynamicRewards.end()) {
                // delete it
                mDynamicRewards.erase(it); // on the in-memory map

                sqlite3_bind_int(deleteStmt, 1, nHeight); // on the file database
                auto rc = sqlite3_step(deleteStmt);
                if (rc != SQLITE_DONE) {
                    oss << "SQL error: " << sqlite3_errmsg(db) << std::endl;
                    ok = false;
                }
                sqlite3_reset(deleteStmt);
            }
        }
    } 
    catch(const std::exception& e)
    {
        oss << "An exception was thrown: " << e.what() << std::endl;
        ok = false;
    }

    std::string log = oss.str();
    if (!log.empty()) {
        std::istringstream iss(log);
        std::string line;
        while (std::getline(iss, line)) {
            LogPrintf("CRewards::%s: %s\n", __func__, line);
        }
    }
    
    return ok;
}

CAmount GetBlockSubsidy(int nHeight)
{
    // ---- Static reward table ----

    const Consensus::Params& consensus = Params().GetConsensus();

    // Mint for distribution
    if (nHeight == 1700001) return (8100000 * COIN) + GetBlockSubsidy(nHeight + 1);

    if (nHeight > 2700000) return     200 * COIN;
    if (nHeight > 2600000) return     220 * COIN;
    if (nHeight > 2500000) return     240 * COIN;
    if (nHeight > 2400000) return     220 * COIN;
    if (nHeight > 2300000) return     200 * COIN;
    if (nHeight > 2200000) return     160 * COIN;
    if (nHeight > 2100000) return     120 * COIN;
    if (nHeight > 2000000) return      80 * COIN;
    if (nHeight > 1900000) return      40 * COIN;
    if (nHeight > 1800000) return      20 * COIN;
    if (nHeight > 1700000) return      10 * COIN;

    if (nHeight > 1200000) return       4 * COIN;
    if (nHeight > 1000000) return       8 * COIN;
    if (nHeight >  870500) return      15 * COIN;
    if (nHeight >  800888) return      30 * COIN;
    if (nHeight >  500000) return      60 * COIN;
    if (nHeight >  490000) return      68 * COIN;
    if (nHeight >  480000) return      70 * COIN;
    if (nHeight >  470000) return      72 * COIN;
    if (nHeight >  460000) return      74 * COIN;
    if (nHeight >  450000) return      76 * COIN;
    if (nHeight >  440000) return      78 * COIN;
    if (nHeight >  430000) return      80 * COIN;
    if (nHeight >  420000) return      82 * COIN;
    if (nHeight >  410000) return      84 * COIN;
    if (nHeight >  400000) return      86 * COIN;
    if (nHeight >  390000) return      88 * COIN;
    if (nHeight >  380000) return      90 * COIN;
    if (nHeight >  370000) return      92 * COIN;
    if (nHeight >  360000) return      94 * COIN;
    if (nHeight >  350000) return      96 * COIN;
    if (nHeight >  340000) return      98 * COIN;
    if (nHeight >  330000) return     100 * COIN;
    if (nHeight >  320000) return     102 * COIN;
    if (nHeight >  310000) return     104 * COIN;
    if (nHeight >  300000) return     106 * COIN;
    if (nHeight >  290000) return     108 * COIN;
    if (nHeight >  280000) return     110 * COIN;
    if (nHeight >  270000) return     120 * COIN;
    if (nHeight >  260000) return     130 * COIN;
    if (nHeight >  250000) return     140 * COIN;
    if (nHeight >  240000) return     150 * COIN;
    if (nHeight >  230000) return     160 * COIN;
    if (nHeight >  220000) return     170 * COIN;
    if (nHeight >  210000) return     180 * COIN;
    if (nHeight >  200000) return     190 * COIN;
    if (nHeight >  190000) return     200 * COIN;
    if (nHeight >  180000) return     210 * COIN;
    if (nHeight >  170000) return     220 * COIN;
    if (nHeight >  160000) return     230 * COIN;
    if (nHeight >  150000) return     240 * COIN;
    if (nHeight >  140000) return     250 * COIN;
    if (nHeight >  130000) return     260 * COIN;
    if (nHeight >  120000) return     240 * COIN;
    if (nHeight >  110000) return     220 * COIN;
    if (nHeight >  100000) return     200 * COIN;
    if (nHeight >   90000) return     180 * COIN;
    if (nHeight >   80000) return     160 * COIN;
    if (nHeight >   70000) return     140 * COIN;
    if (nHeight >   60000) return     120 * COIN;
    if (nHeight >   50000) return     100 * COIN;
    if (nHeight >   40000) return      80 * COIN;
    if (nHeight >   30000) return      60 * COIN;
    if (nHeight >   20000) return      40 * COIN;
    if (nHeight >       1) return      30 * COIN;
    if (nHeight >       0) return 6000000 * COIN;

    return 0;

    // ---- Static reward table ----
}

CAmount CRewards::GetBlockValue(int nHeight)
{
    auto& consensus = Params().GetConsensus();

    CAmount nSubsidy = GetBlockSubsidy(nHeight);

    if (masternodeSync.IsSynced() &&
        consensus.NetworkUpgradeActive(nHeight, Consensus::UPGRADE_DYNAMIC_REWARDS)
    ) {
        // if this is the block where calculations are made on ConnectBlock
        // return the reward value from the previous block
        if(IsDynamicRewardsEpochHeight(nHeight)) 
            return GetBlockValue(nHeight - 1);

        // find and return the dynamic reward
        const auto nEpochHeight = GetDynamicRewardsEpochHeight(nHeight);
        auto it = mDynamicRewards.find(nEpochHeight);
        if (it != mDynamicRewards.end()) {
            return std::min(nSubsidy, it->second);
        }
    }

    // fallback non-dynamic reward return
    return nSubsidy;
}

// returns = 1 if !pwalletMain, -1 if RPC_IN_WARMUP, 0 if all is good
int 
CBlockchainStatus::getblockchainstatus()
{
    if (!pwalletMain) {
        return 1;
    } else
    if (!masternodeSync.IsSynced()) {
        return -1;
    }

    const auto& params = Params();
    const auto& consensus = params.GetConsensus();

    const auto pTip = chainActive.Tip();
    nHeight = pTip->nHeight;

    // Fetch consensus parameters
    const auto nTargetSpacing = consensus.nTargetSpacing;
    const auto nTargetTimespan = consensus.TargetTimespan(nHeight);
    const auto nTimeSlotLength = consensus.TimeSlotLength(nHeight);

    // Fetch reward details
    nMoneySupplyThisBlock = pTip->nMoneySupply.get();
    nBlockValue = CRewards::GetBlockValue(nHeight);
    nMNReward = CMasternode::GetMasternodePayment(nHeight);
    nStakeReward = nBlockValue - nMNReward;

    nBlocksPerDay = DAY_IN_SECONDS / nTargetSpacing;
    CBlockIndex* BlockReading = pTip;

    if(nHeight > nBlocksPerDay) {
        for (unsigned int i = 0; BlockReading && BlockReading->nHeight > 0; i++) {
            if(BlockReading->nTime < (pTip->nTime - DAY_IN_SECONDS)) {
                nBlocksPerDay = i;
                break;
            }

            BlockReading = BlockReading->pprev;
        }
    }

    // Fetch the network generated hashes per second
    const auto nBlocks = static_cast<int>(nTargetTimespan / nTargetSpacing);
    const auto startBlock = chainActive[nHeight - std::min(nBlocks, nHeight)];
    const auto endBlock = pTip;
    const auto nTimeDiff = endBlock->GetBlockTime() - startBlock->GetBlockTime();
    const auto nWorkDiff = endBlock->nChainWork - startBlock->nChainWork;
    nNetworkHashPS = static_cast<int64_t>(nWorkDiff.getdouble() / nTimeDiff);
    
    const auto nSmoothBlocks = static_cast<int>((3 * HOUR_IN_SECONDS) / nTargetSpacing);
    const auto startSmoothBlock = chainActive[nHeight - std::min(nSmoothBlocks, nHeight)];
    const auto nSmoothTimeDiff = endBlock->GetBlockTime() - startSmoothBlock->GetBlockTime();
    const auto nSmoothWorkDiff = endBlock->nChainWork - startSmoothBlock->nChainWork;
    nSmoothNetworkHashPS = static_cast<int64_t>(nSmoothWorkDiff.getdouble() / nSmoothTimeDiff);

    // Calculate how many coins are allocated in the entire staking algorithm
    nStakedCoins = static_cast<double>(nNetworkHashPS * nTimeSlotLength * 100);
    nSmoothStakedCoins = static_cast<double>(nSmoothNetworkHashPS * nTimeSlotLength * 100);
    const auto nYearlyStakingRewards = nStakeReward * nBlocksPerDay * 365;
    nStakingROI = nYearlyStakingRewards / nStakedCoins;
    nSmoothStakingROI = nYearlyStakingRewards / nSmoothStakedCoins;

    // Fetch the masternode related data
    nMNCollateral = CMasternode::GetMasternodeNodeCollateral(nHeight);
    nMNNextWeekCollateral = CMasternode::GetNextWeekMasternodeCollateral();
    nMNEnabled = mnodeman.CountEnabled();
    nMNCoins = nMNCollateral * nMNEnabled;

    return 0;
}

std::string
CBlockchainStatus::coin2prettyText(CAmount koin)
{
    std::string s = strprintf("%" PRId64, (int64_t)koin);
    int j = 0;
    std::string k;

    for (int i = s.size() - 1; i >= 0;) {
        k.push_back(s[i]);
        j++;
        i--;
        if (j % 3 == 0 && i >= 0) k.push_back(',');
    }
    reverse(k.begin(), k.end());
    return k;
};

// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2017 The PIVX developers
// Copyright (c) 2018 The BirakeCoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"

#include "random.h"
#include "util.h"
#include "utilstrencodings.h"

#include <assert.h>

#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
static Checkpoints::MapCheckpoints mapCheckpoints =
    boost::assign::map_list_of
    (0, uint256("00000c89a16d5d75011aed4ed5e21efc7bf3ffebe7411f46632771c0ceb907c3"))
    (228961, uint256("834881adde0d162c7238fb2537bfc7dbfae9421512d03fd87ca4cf3d645e596f"))
    (591221, uint256("bacce9f47ceb6ac2a1b6d2cc1b30f3eb92f80566ec89df188f41f3361a687d1c"));
static const Checkpoints::CCheckpointData data = {
    &mapCheckpoints,
    1570371599, // * UNIX timestamp of last checkpoint block
    1582802,          // * total number of transactions between genesis and last checkpoint
                //   (the tx=... number in the SetBestChain debug.log lines)
    2000        // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of(0, uint256("00000b2f35d47ebb85440dfbf33d84a296ca8e0f7f1b71942592d9390fc8d411"));
static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1534541116,
    0,
    250
   };

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of(0, uint256("000008496be9d3149959a5a813c29dd27a9fb445b229929f88c072997898d1d068e4b"));
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1534540295,
    0,
    100};

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
        strNetworkID = "main";
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0x3a;
        pchMessageStart[1] = 0x95;
        pchMessageStart[2] = 0x56;
        pchMessageStart[3] = 0x52;
        vAlertPubKey = ParseHex("04bab2b3d8b251fc769dabc7e562e44b958a5f2f46cb069d38032faffe5e9a4c43503d529d8b53f3b082077bd68783bdc4d52410a7eac79a592bba8206130f767c");
        nDefaultPort = 39697;
        bnProofOfWorkLimit = ~uint256(0) >> 20; // BirakeCoin starting difficulty is 1 / 2^12
        nSubsidyHalvingInterval = 210000;
        nMaxReorganizationDepth = 100;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 0;
        nTargetTimespan = 1 * 60; // BirakeCoin: 1 day
        nTargetSpacing = 1 * 60;  // BirakeCoin: 1 minute
        nLastPOWBlock = 750;
        nMaturity = 50;
        nMasternodeCountDrift = 20;
        nMasternodeCollateralLimit = 10000;
        nModifierUpdateBlock = 615800;
        nMaxMoneyOut = 300000000 * COIN;

        /**
         * Build the genesis block. Note that the output of the genesis coinbase cannot
         * be spent as it did not originally exist in the database.
         *
         * CBlock(hash=00000ffd590b14, ver=1, hashPrevBlock=00000000000000, hashMerkleRoot=e0028e, nTime=1390095618, nBits=1e0ffff0, nNonce=28917698, vtx=1)
         *   CTransaction(hash=e0028e, ver=1, vin.size=1, vout.size=1, nLockTime=0)
         *     CTxIn(COutPoint(000000, -1), coinbase 04ffff001d01044c5957697265642030392f4a616e2f3230313420546865204772616e64204578706572696d656e7420476f6573204c6976653a204f76657273746f636b2e636f6d204973204e6f7720416363657074696e6720426974636f696e73)
         *     CTxOut(nValue=50.00000000, scriptPubKey=0xA9037BAC7050C479B121CF)
         *   vMerkleTree: e0028e
         */
        const char* pszTimestamp = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam felis.";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 50 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("04eddc90a654f0335fce2081f682ec2475b935afad5a217ffc9a324b04665054e8a42e14cfdce6a5d11fe0f8e1de9b0ff375905dc58025db46b49f7925d3ff290e") << OP_CHECKSIG;
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = genesis.BuildMerkleTree();
        genesis.nVersion = 1;
        genesis.nTime = 1533728621;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 936030;

        hashGenesisBlock = genesis.GetHash();



        //printf("%s\n",hashGenesisBlock.ToString().c_str());
        //printf("Merkel: %s\n",genesis.hashMerkleRoot.ToString().c_str());
        assert(genesis.hashMerkleRoot == uint256("baf314231c2c162bb4bd33665c67320df47e74812821b1ad78faec22c9795553"));
        assert(hashGenesisBlock == uint256("00000c89a16d5d75011aed4ed5e21efc7bf3ffebe7411f46632771c0ceb907c3"));

        vSeeds.push_back(CDNSSeedData("s1.birake.com", "seeder1.birake.com"));         // Single node address
        vSeeds.push_back(CDNSSeedData("s2.birake.com", "seeder2.birake.com"));

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 45);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 13);
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 179);
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x02)(0x2D)(0x25)(0x33).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x02)(0x21)(0x31)(0x2B).convert_to_container<std::vector<unsigned char> >();
        // 	BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x77).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        fRequireRPCPassword = true;
        fMiningRequiresPeers = false;		// default true
        fAllowMinDifficultyBlocks = false;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = true;		// default false
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 3;
        strSporkKey = "0443b94e8f01b62c33c61a8b53b8d7a4d522dc6183fe04639538470930a4bf7f7bfc2453adcdd0e7e8a1a7208c651054bbb0dcbb723b2013f424fb9badbca39462";
        strObfuscationPoolDummyAddress = "KF5tkvL4jkkUtQtjx6QiwoKHMGZ9mgbSAG";

        nStartMasternodePayments = 1533728621; //Wed, 25 Jun 2014 20:36:16 GMT
        nStakeMinConfirmations = 720;   // Required number of confirmations
        nStakeMinAmount = 5000 * COIN;    // Minimum required staking amount
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        pchMessageStart[0] = 0x26;
        pchMessageStart[1] = 0x2b;
        pchMessageStart[2] = 0x55;
        pchMessageStart[3] = 0x2d;
        vAlertPubKey = ParseHex("04a1428f0163b609865c5292a16d4d65e376806f186eb1ec9f668a078d9c127227f594a59ea6a7fe599966fbd39fa94de99297593ed48bf4e6dff4e87190a945e2");
        nDefaultPort = 39695;
        nEnforceBlockUpgradeMajority = 51;
        nRejectBlockOutdatedMajority = 75;
        nToCheckBlockUpgradeMajority = 100;
        nMinerThreads = 0;
        nTargetTimespan = 1 * 60; // BirakeCoin: 1 day
        nTargetSpacing = 1 * 60;  // BirakeCoin: 1 minute
        nLastPOWBlock = 200;
        nMaturity = 15;
        nMasternodeCountDrift = 4;
        nMasternodeCollateralLimit = 10000;
        nModifierUpdateBlock = 51197; //approx Mon, 17 Apr 2017 04:00:00 GMT
        nMaxMoneyOut = 300000000 * COIN;
        genesis.nBits = 0x1E0FFFF0;
        //! Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1534541116;
        genesis.nNonce = 753411;

        hashGenesisBlock = genesis.GetHash();
        //printf("%s\n",pszTimestamp);
       // printf("%s\n",hashGenesisBlock.ToString().c_str());
        //printf("Merkel: %s\n",genesis.hashMerkleRoot.ToString().c_str());
        assert(hashGenesisBlock == uint256("0000057f2e15761f4a12d7cab16e046130666fd738dbd830cf0786d2e8fa94a71f757"));

        vFixedSeeds.clear();
        vSeeds.clear();

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 139); // Testnet birakecoin addresses start with 'x' or 'y'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 19);  // Testnet birakecoin script addresses start with '8' or '9'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 239);     // Testnet private keys start with '9' or 'c' (Bitcoin defaults)
        // Testnet birakecoin BIP32 pubkeys start with 'DRKV'
        base58Prefixes[EXT_PUBLIC_KEY] = boost::assign::list_of(0x3a)(0x80)(0x61)(0xa0).convert_to_container<std::vector<unsigned char> >();
        // Testnet birakecoin BIP32 prvkeys start with 'DRKP'
        base58Prefixes[EXT_SECRET_KEY] = boost::assign::list_of(0x3a)(0x80)(0x58)(0x37).convert_to_container<std::vector<unsigned char> >();
        // Testnet birakecoin BIP44 coin type is '1' (All coin's testnet default)
        base58Prefixes[EXT_COIN_TYPE] = boost::assign::list_of(0x80)(0x00)(0x00)(0x01).convert_to_container<std::vector<unsigned char> >();

        convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        fRequireRPCPassword = true;
        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = false;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = true;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        strSporkKey = "04f87be33617212d830c551bd670471007358e3f43328ead21bdbcf87ec8d7a3114374ba5b3293460da518e0a48a69f14f74bc7a16cf041675eab05620d1321668";
        strObfuscationPoolDummyAddress = "yJn4sdsMri15nyko6ha473PVXBrQY96MFT";
        nStartMasternodePayments = 1524873600; //Fri, 09 Jan 2015 21:05:58 GMT
        nStakeMinConfirmations = 30;    // Required number of confirmations
        nStakeMinAmount = 1000 * COIN;  // M
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        strNetworkID = "regtest";
        pchMessageStart[0] = 0x2d;
        pchMessageStart[1] = 0x53;
        pchMessageStart[2] = 0x6f;
        pchMessageStart[3] = 0x40;
        nSubsidyHalvingInterval = 150;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 1;
        nTargetTimespan = 24 * 60 * 60; // BirakeCoin: 1 day
        nTargetSpacing = 1 * 60;        // BirakeCoin: 1 minutes
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        genesis.nTime = 1534540295;
        genesis.nBits = 0x1E0FFFF0;
        genesis.nNonce = 1291151;

        hashGenesisBlock = genesis.GetHash();
        nDefaultPort = 39693;
        //printf("%s\n",hashGenesisBlock.ToString().c_str());
        assert(hashGenesisBlock == uint256("000008496be9d3149959a5a813c29dd27a9fb445b229929f88c072997898d1d068e4b"));

        vFixedSeeds.clear(); //! Testnet mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Testnet mode doesn't have any DNS seeds.

        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 39691;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fRequireRPCPassword = false;
        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};
static CUnitTestParams unitTestParams;


static CChainParams* pCurrentParams = 0;

CModifiableParams* ModifiableParams()
{
    assert(pCurrentParams);
    assert(pCurrentParams == &unitTestParams);
    return (CModifiableParams*)&unitTestParams;
}

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    case CBaseChainParams::UNITTEST:
        return unitTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}

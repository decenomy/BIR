/********************************************************************************
** Form generated from reading UI file 'settingsinformationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSINFORMATIONWIDGET_H
#define UI_SETTINGSINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsInformationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonNetworkMonitor;
    QPushButton *pushButtonBackups;
    QPushButton *pushButtonFile;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutOptions1;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelTitleGeneral;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleClient;
    QLabel *labelInfoClient;
    QHBoxLayout *horizontalAgent;
    QLabel *labelTitleAgent;
    QLabel *labelInfoAgent;
    QHBoxLayout *horizontalBerkely;
    QLabel *labelTitleBerkeley;
    QLabel *labelInfoBerkeley;
    QHBoxLayout *horizontalDataDir;
    QLabel *labelTitleDataDir;
    QLabel *labelInfoDataDir;
    QHBoxLayout *horizontalTime;
    QLabel *labelTitleTime;
    QLabel *labelInfoTime;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelTitleNetwork;
    QHBoxLayout *horizontalName;
    QLabel *labelTitleName;
    QLabel *labelInfoName;
    QHBoxLayout *horizontalConnections;
    QLabel *labelTitleConnections;
    QLabel *labelInfoConnections;
    QWidget *layoutOptions2;
    QHBoxLayout *horizontalMasternodes;
    QLabel *labelTitleMasternodes;
    QLabel *labelInfoMasternodes;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelTitleBlockchain;
    QHBoxLayout *horizontalBlockNumber;
    QLabel *labelTitleBlockNumber;
    QLabel *labelInfoBlockNumber;
    QHBoxLayout *horizontalBlockTime;
    QLabel *labelTitleBlockTime;
    QLabel *labelInfoBlockTime;
    QWidget *layoutOptions3;
    QHBoxLayout *horizontalBlockHash;
    QLabel *labelTitleBlockHash;
    QLabel *labelInfoBlockHash;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelTitleMemory;
    QHBoxLayout *horizontalNumberTransactions;
    QLabel *labelTitleNumberTransactions;
    QLabel *labelInfoNumberTransactions;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsInformationWidget)
    {
        if (SettingsInformationWidget->objectName().isEmpty())
            SettingsInformationWidget->setObjectName(QString::fromUtf8("SettingsInformationWidget"));
        SettingsInformationWidget->resize(474, 464);
        verticalLayout = new QVBoxLayout(SettingsInformationWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsInformationWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox = new QGroupBox(left);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonNetworkMonitor = new QPushButton(groupBox);
        pushButtonNetworkMonitor->setObjectName(QString::fromUtf8("pushButtonNetworkMonitor"));
        pushButtonNetworkMonitor->setMinimumSize(QSize(120, 40));
        pushButtonNetworkMonitor->setMaximumSize(QSize(16777215, 40));
        pushButtonNetworkMonitor->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(pushButtonNetworkMonitor);

        pushButtonBackups = new QPushButton(groupBox);
        pushButtonBackups->setObjectName(QString::fromUtf8("pushButtonBackups"));
        pushButtonBackups->setMinimumSize(QSize(120, 40));
        pushButtonBackups->setMaximumSize(QSize(120, 40));
        pushButtonBackups->setFocusPolicy(Qt::NoFocus);
        pushButtonBackups->setCheckable(false);
        pushButtonBackups->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonBackups);

        pushButtonFile = new QPushButton(groupBox);
        pushButtonFile->setObjectName(QString::fromUtf8("pushButtonFile"));
        pushButtonFile->setMinimumSize(QSize(125, 40));
        pushButtonFile->setMaximumSize(QSize(125, 40));
        pushButtonFile->setFocusPolicy(Qt::NoFocus);
        pushButtonFile->setCheckable(false);
        pushButtonFile->setChecked(false);
        pushButtonFile->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonFile);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        layoutOptions1 = new QWidget(left);
        layoutOptions1->setObjectName(QString::fromUtf8("layoutOptions1"));
        verticalLayout_9 = new QVBoxLayout(layoutOptions1);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 10);
        labelTitleGeneral = new QLabel(layoutOptions1);
        labelTitleGeneral->setObjectName(QString::fromUtf8("labelTitleGeneral"));

        verticalLayout_9->addWidget(labelTitleGeneral);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTitleClient = new QLabel(layoutOptions1);
        labelTitleClient->setObjectName(QString::fromUtf8("labelTitleClient"));
        labelTitleClient->setMinimumSize(QSize(290, 0));
        labelTitleClient->setMaximumSize(QSize(290, 16777215));

        horizontalLayout->addWidget(labelTitleClient);

        labelInfoClient = new QLabel(layoutOptions1);
        labelInfoClient->setObjectName(QString::fromUtf8("labelInfoClient"));
        labelInfoClient->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoClient->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoClient->setText(QString::fromUtf8("N/A"));

        horizontalLayout->addWidget(labelInfoClient);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout);

        horizontalAgent = new QHBoxLayout();
        horizontalAgent->setSpacing(0);
        horizontalAgent->setObjectName(QString::fromUtf8("horizontalAgent"));
        labelTitleAgent = new QLabel(layoutOptions1);
        labelTitleAgent->setObjectName(QString::fromUtf8("labelTitleAgent"));
        labelTitleAgent->setMinimumSize(QSize(290, 0));
        labelTitleAgent->setMaximumSize(QSize(290, 16777215));

        horizontalAgent->addWidget(labelTitleAgent);

        labelInfoAgent = new QLabel(layoutOptions1);
        labelInfoAgent->setObjectName(QString::fromUtf8("labelInfoAgent"));
        labelInfoAgent->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoAgent->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoAgent->setText(QString::fromUtf8("N/A"));

        horizontalAgent->addWidget(labelInfoAgent);

        horizontalAgent->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalAgent);

        horizontalBerkely = new QHBoxLayout();
        horizontalBerkely->setSpacing(0);
        horizontalBerkely->setObjectName(QString::fromUtf8("horizontalBerkely"));
        labelTitleBerkeley = new QLabel(layoutOptions1);
        labelTitleBerkeley->setObjectName(QString::fromUtf8("labelTitleBerkeley"));
        labelTitleBerkeley->setMinimumSize(QSize(290, 0));
        labelTitleBerkeley->setMaximumSize(QSize(290, 16777215));

        horizontalBerkely->addWidget(labelTitleBerkeley);

        labelInfoBerkeley = new QLabel(layoutOptions1);
        labelInfoBerkeley->setObjectName(QString::fromUtf8("labelInfoBerkeley"));
        labelInfoBerkeley->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBerkeley->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBerkeley->setText(QString::fromUtf8("N/A"));

        horizontalBerkely->addWidget(labelInfoBerkeley);

        horizontalBerkely->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalBerkely);

        horizontalDataDir = new QHBoxLayout();
        horizontalDataDir->setSpacing(0);
        horizontalDataDir->setObjectName(QString::fromUtf8("horizontalDataDir"));
        labelTitleDataDir = new QLabel(layoutOptions1);
        labelTitleDataDir->setObjectName(QString::fromUtf8("labelTitleDataDir"));
        labelTitleDataDir->setMinimumSize(QSize(290, 0));
        labelTitleDataDir->setMaximumSize(QSize(290, 16777215));

        horizontalDataDir->addWidget(labelTitleDataDir);

        labelInfoDataDir = new QLabel(layoutOptions1);
        labelInfoDataDir->setObjectName(QString::fromUtf8("labelInfoDataDir"));
        labelInfoDataDir->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoDataDir->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoDataDir->setText(QString::fromUtf8("N/A"));
        labelInfoDataDir->setWordWrap(true);

        horizontalDataDir->addWidget(labelInfoDataDir);

        horizontalDataDir->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalDataDir);

        horizontalTime = new QHBoxLayout();
        horizontalTime->setSpacing(0);
        horizontalTime->setObjectName(QString::fromUtf8("horizontalTime"));
        labelTitleTime = new QLabel(layoutOptions1);
        labelTitleTime->setObjectName(QString::fromUtf8("labelTitleTime"));
        labelTitleTime->setMinimumSize(QSize(290, 0));
        labelTitleTime->setMaximumSize(QSize(290, 16777215));

        horizontalTime->addWidget(labelTitleTime);

        labelInfoTime = new QLabel(layoutOptions1);
        labelInfoTime->setObjectName(QString::fromUtf8("labelInfoTime"));
        labelInfoTime->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoTime->setText(QString::fromUtf8("N/A"));

        horizontalTime->addWidget(labelInfoTime);

        horizontalTime->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalTime);


        verticalLayout_2->addWidget(layoutOptions1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);

        labelTitleNetwork = new QLabel(left);
        labelTitleNetwork->setObjectName(QString::fromUtf8("labelTitleNetwork"));

        verticalLayout_2->addWidget(labelTitleNetwork);

        horizontalName = new QHBoxLayout();
        horizontalName->setSpacing(0);
        horizontalName->setObjectName(QString::fromUtf8("horizontalName"));
        labelTitleName = new QLabel(left);
        labelTitleName->setObjectName(QString::fromUtf8("labelTitleName"));
        labelTitleName->setMinimumSize(QSize(290, 0));
        labelTitleName->setMaximumSize(QSize(290, 16777215));

        horizontalName->addWidget(labelTitleName);

        labelInfoName = new QLabel(left);
        labelInfoName->setObjectName(QString::fromUtf8("labelInfoName"));
        labelInfoName->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoName->setText(QString::fromUtf8("N/A"));

        horizontalName->addWidget(labelInfoName);

        horizontalName->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalName);

        horizontalConnections = new QHBoxLayout();
        horizontalConnections->setSpacing(0);
        horizontalConnections->setObjectName(QString::fromUtf8("horizontalConnections"));
        labelTitleConnections = new QLabel(left);
        labelTitleConnections->setObjectName(QString::fromUtf8("labelTitleConnections"));
        labelTitleConnections->setMinimumSize(QSize(290, 0));
        labelTitleConnections->setMaximumSize(QSize(290, 16777215));

        horizontalConnections->addWidget(labelTitleConnections);

        labelInfoConnections = new QLabel(left);
        labelInfoConnections->setObjectName(QString::fromUtf8("labelInfoConnections"));
        labelInfoConnections->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoConnections->setText(QString::fromUtf8("N/A"));

        horizontalConnections->addWidget(labelInfoConnections);

        horizontalConnections->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalConnections);

        layoutOptions2 = new QWidget(left);
        layoutOptions2->setObjectName(QString::fromUtf8("layoutOptions2"));
        horizontalMasternodes = new QHBoxLayout(layoutOptions2);
        horizontalMasternodes->setSpacing(0);
        horizontalMasternodes->setObjectName(QString::fromUtf8("horizontalMasternodes"));
        horizontalMasternodes->setContentsMargins(0, 0, 0, 10);
        labelTitleMasternodes = new QLabel(layoutOptions2);
        labelTitleMasternodes->setObjectName(QString::fromUtf8("labelTitleMasternodes"));
        labelTitleMasternodes->setMinimumSize(QSize(290, 0));
        labelTitleMasternodes->setMaximumSize(QSize(290, 16777215));

        horizontalMasternodes->addWidget(labelTitleMasternodes);

        labelInfoMasternodes = new QLabel(layoutOptions2);
        labelInfoMasternodes->setObjectName(QString::fromUtf8("labelInfoMasternodes"));
        labelInfoMasternodes->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoMasternodes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoMasternodes->setText(QString::fromUtf8("N/A"));

        horizontalMasternodes->addWidget(labelInfoMasternodes);

        horizontalMasternodes->setStretch(1, 1);

        verticalLayout_2->addWidget(layoutOptions2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_4);

        labelTitleBlockchain = new QLabel(left);
        labelTitleBlockchain->setObjectName(QString::fromUtf8("labelTitleBlockchain"));

        verticalLayout_2->addWidget(labelTitleBlockchain);

        horizontalBlockNumber = new QHBoxLayout();
        horizontalBlockNumber->setSpacing(0);
        horizontalBlockNumber->setObjectName(QString::fromUtf8("horizontalBlockNumber"));
        labelTitleBlockNumber = new QLabel(left);
        labelTitleBlockNumber->setObjectName(QString::fromUtf8("labelTitleBlockNumber"));
        labelTitleBlockNumber->setMinimumSize(QSize(290, 0));
        labelTitleBlockNumber->setMaximumSize(QSize(290, 16777215));

        horizontalBlockNumber->addWidget(labelTitleBlockNumber);

        labelInfoBlockNumber = new QLabel(left);
        labelInfoBlockNumber->setObjectName(QString::fromUtf8("labelInfoBlockNumber"));
        labelInfoBlockNumber->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBlockNumber->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBlockNumber->setText(QString::fromUtf8("N/A"));

        horizontalBlockNumber->addWidget(labelInfoBlockNumber);

        horizontalBlockNumber->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalBlockNumber);

        horizontalBlockTime = new QHBoxLayout();
        horizontalBlockTime->setSpacing(0);
        horizontalBlockTime->setObjectName(QString::fromUtf8("horizontalBlockTime"));
        labelTitleBlockTime = new QLabel(left);
        labelTitleBlockTime->setObjectName(QString::fromUtf8("labelTitleBlockTime"));
        labelTitleBlockTime->setMinimumSize(QSize(290, 0));
        labelTitleBlockTime->setMaximumSize(QSize(290, 16777215));

        horizontalBlockTime->addWidget(labelTitleBlockTime);

        labelInfoBlockTime = new QLabel(left);
        labelInfoBlockTime->setObjectName(QString::fromUtf8("labelInfoBlockTime"));
        labelInfoBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBlockTime->setText(QString::fromUtf8("N/A"));

        horizontalBlockTime->addWidget(labelInfoBlockTime);

        horizontalBlockTime->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalBlockTime);

        layoutOptions3 = new QWidget(left);
        layoutOptions3->setObjectName(QString::fromUtf8("layoutOptions3"));
        horizontalBlockHash = new QHBoxLayout(layoutOptions3);
        horizontalBlockHash->setSpacing(0);
        horizontalBlockHash->setObjectName(QString::fromUtf8("horizontalBlockHash"));
        horizontalBlockHash->setContentsMargins(0, 0, 0, 10);
        labelTitleBlockHash = new QLabel(layoutOptions3);
        labelTitleBlockHash->setObjectName(QString::fromUtf8("labelTitleBlockHash"));
        labelTitleBlockHash->setMinimumSize(QSize(290, 0));
        labelTitleBlockHash->setMaximumSize(QSize(290, 16777215));

        horizontalBlockHash->addWidget(labelTitleBlockHash);

        labelInfoBlockHash = new QLabel(layoutOptions3);
        labelInfoBlockHash->setObjectName(QString::fromUtf8("labelInfoBlockHash"));
        labelInfoBlockHash->setCursor(QCursor(Qt::IBeamCursor));
        labelInfoBlockHash->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        labelInfoBlockHash->setText(QString::fromUtf8("N/A"));

        horizontalBlockHash->addWidget(labelInfoBlockHash);

        horizontalBlockHash->setStretch(1, 1);

        verticalLayout_2->addWidget(layoutOptions3);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        labelTitleMemory = new QLabel(left);
        labelTitleMemory->setObjectName(QString::fromUtf8("labelTitleMemory"));

        verticalLayout_2->addWidget(labelTitleMemory);

        horizontalNumberTransactions = new QHBoxLayout();
        horizontalNumberTransactions->setSpacing(0);
        horizontalNumberTransactions->setObjectName(QString::fromUtf8("horizontalNumberTransactions"));
        labelTitleNumberTransactions = new QLabel(left);
        labelTitleNumberTransactions->setObjectName(QString::fromUtf8("labelTitleNumberTransactions"));
        labelTitleNumberTransactions->setMinimumSize(QSize(290, 0));
        labelTitleNumberTransactions->setMaximumSize(QSize(290, 16777215));

        horizontalNumberTransactions->addWidget(labelTitleNumberTransactions);

        labelInfoNumberTransactions = new QLabel(left);
        labelInfoNumberTransactions->setObjectName(QString::fromUtf8("labelInfoNumberTransactions"));
        labelInfoNumberTransactions->setText(QString::fromUtf8("N/A"));

        horizontalNumberTransactions->addWidget(labelInfoNumberTransactions);

        horizontalNumberTransactions->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalNumberTransactions);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsInformationWidget);

        QMetaObject::connectSlotsByName(SettingsInformationWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsInformationWidget)
    {
        SettingsInformationWidget->setWindowTitle(QCoreApplication::translate("SettingsInformationWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsInformationWidget", "Information", nullptr));
        groupBox->setTitle(QString());
        pushButtonNetworkMonitor->setText(QCoreApplication::translate("SettingsInformationWidget", "Network Monitor", nullptr));
        pushButtonBackups->setText(QCoreApplication::translate("SettingsInformationWidget", "Backups", nullptr));
        pushButtonFile->setText(QCoreApplication::translate("SettingsInformationWidget", "Wallet Conf", nullptr));
        labelTitleGeneral->setText(QCoreApplication::translate("SettingsInformationWidget", "General", nullptr));
        labelTitleClient->setText(QCoreApplication::translate("SettingsInformationWidget", "Client Version:", nullptr));
        labelTitleAgent->setText(QCoreApplication::translate("SettingsInformationWidget", "User Agent:", nullptr));
        labelTitleBerkeley->setText(QCoreApplication::translate("SettingsInformationWidget", "BerkeleyDB version:", nullptr));
        labelTitleDataDir->setText(QCoreApplication::translate("SettingsInformationWidget", "Datadir:", nullptr));
        labelTitleTime->setText(QCoreApplication::translate("SettingsInformationWidget", "Startup time:", nullptr));
        labelTitleNetwork->setText(QCoreApplication::translate("SettingsInformationWidget", "Network", nullptr));
        labelTitleName->setText(QCoreApplication::translate("SettingsInformationWidget", "Name:", nullptr));
        labelTitleConnections->setText(QCoreApplication::translate("SettingsInformationWidget", "Connections:", nullptr));
        labelTitleMasternodes->setText(QCoreApplication::translate("SettingsInformationWidget", "Number of Masternodes:", nullptr));
        labelTitleBlockchain->setText(QCoreApplication::translate("SettingsInformationWidget", "Blockchain", nullptr));
        labelTitleBlockNumber->setText(QCoreApplication::translate("SettingsInformationWidget", "Current number of blocks:", nullptr));
        labelTitleBlockTime->setText(QCoreApplication::translate("SettingsInformationWidget", "Last block time:", nullptr));
        labelTitleBlockHash->setText(QCoreApplication::translate("SettingsInformationWidget", "Last block hash:", nullptr));
        labelTitleMemory->setText(QCoreApplication::translate("SettingsInformationWidget", "Memory Pool", nullptr));
        labelTitleNumberTransactions->setText(QCoreApplication::translate("SettingsInformationWidget", "Current number of transactions:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsInformationWidget: public Ui_SettingsInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSINFORMATIONWIDGET_H

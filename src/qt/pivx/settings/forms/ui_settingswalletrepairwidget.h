/********************************************************************************
** Form generated from reading UI file 'settingswalletrepairwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWALLETREPAIRWIDGET_H
#define UI_SETTINGSWALLETREPAIRWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWalletRepairWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollStack;
    QWidget *scrollAreaWidgetStack;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonSalvage;
    QLabel *labelMessageSalvage;
    QSpacerItem *verticalSpacer_1;
    QHBoxLayout *horizontalRescan;
    QVBoxLayout *verticalRescan;
    QPushButton *pushButtonRescan;
    QLabel *labelMessageRescan;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalRecover1;
    QVBoxLayout *verticalRecover1;
    QPushButton *pushButtonRecover1;
    QLabel *labelMessageRecover1;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalRecover2;
    QVBoxLayout *verticalRecover2;
    QPushButton *pushButtonRecover2;
    QLabel *labelMessageRecover2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalUpgrade;
    QVBoxLayout *verticalUpgrade;
    QPushButton *pushButtonUpgrade;
    QLabel *labelMessageUpgrade;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalRebuild;
    QVBoxLayout *verticalRebuild;
    QPushButton *pushButtonRebuild;
    QLabel *labelMessageRebuild;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalDelete;
    QVBoxLayout *verticalDelete;
    QPushButton *pushButtonDelete;
    QLabel *labelMessageDelete;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *SettingsWalletRepairWidget)
    {
        if (SettingsWalletRepairWidget->objectName().isEmpty())
            SettingsWalletRepairWidget->setObjectName(QString::fromUtf8("SettingsWalletRepairWidget"));
        SettingsWalletRepairWidget->resize(400, 622);
        horizontalLayout = new QHBoxLayout(SettingsWalletRepairWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsWalletRepairWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout = new QVBoxLayout(left);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollStack = new QScrollArea(left);
        scrollStack->setObjectName(QString::fromUtf8("scrollStack"));
        scrollStack->setStyleSheet(QString::fromUtf8(""));
        scrollStack->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollStack->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollStack->setWidgetResizable(true);
        scrollStack->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetStack = new QWidget();
        scrollAreaWidgetStack->setObjectName(QString::fromUtf8("scrollAreaWidgetStack"));
        scrollAreaWidgetStack->setGeometry(QRect(0, 0, 398, 620));
        scrollAreaWidgetStack->setAutoFillBackground(true);
        verticalLayout_1 = new QVBoxLayout(scrollAreaWidgetStack);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QString::fromUtf8("verticalLayoutTitle"));
        labelTitle = new QLabel(scrollAreaWidgetStack);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(scrollAreaWidgetStack);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);


        verticalLayout_1->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonSalvage = new QPushButton(scrollAreaWidgetStack);
        pushButtonSalvage->setObjectName(QString::fromUtf8("pushButtonSalvage"));
        pushButtonSalvage->setMinimumSize(QSize(0, 40));
        pushButtonSalvage->setMaximumSize(QSize(16777215, 40));
        pushButtonSalvage->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(pushButtonSalvage);


        horizontalLayout_6->addLayout(verticalLayout_2);

        labelMessageSalvage = new QLabel(scrollAreaWidgetStack);
        labelMessageSalvage->setObjectName(QString::fromUtf8("labelMessageSalvage"));
        labelMessageSalvage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageSalvage->setWordWrap(true);

        horizontalLayout_6->addWidget(labelMessageSalvage);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalLayout_6);

        verticalSpacer_1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_1);

        horizontalRescan = new QHBoxLayout();
        horizontalRescan->setSpacing(20);
        horizontalRescan->setObjectName(QString::fromUtf8("horizontalRescan"));
        verticalRescan = new QVBoxLayout();
        verticalRescan->setSpacing(5);
        verticalRescan->setObjectName(QString::fromUtf8("verticalRescan"));
        pushButtonRescan = new QPushButton(scrollAreaWidgetStack);
        pushButtonRescan->setObjectName(QString::fromUtf8("pushButtonRescan"));
        pushButtonRescan->setMinimumSize(QSize(0, 40));
        pushButtonRescan->setMaximumSize(QSize(16777215, 40));
        pushButtonRescan->setFocusPolicy(Qt::NoFocus);

        verticalRescan->addWidget(pushButtonRescan);


        horizontalRescan->addLayout(verticalRescan);

        labelMessageRescan = new QLabel(scrollAreaWidgetStack);
        labelMessageRescan->setObjectName(QString::fromUtf8("labelMessageRescan"));
        labelMessageRescan->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRescan->setWordWrap(true);

        horizontalRescan->addWidget(labelMessageRescan);

        horizontalRescan->setStretch(0, 1);
        horizontalRescan->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRescan);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_2);

        horizontalRecover1 = new QHBoxLayout();
        horizontalRecover1->setSpacing(20);
        horizontalRecover1->setObjectName(QString::fromUtf8("horizontalRecover1"));
        verticalRecover1 = new QVBoxLayout();
        verticalRecover1->setSpacing(5);
        verticalRecover1->setObjectName(QString::fromUtf8("verticalRecover1"));
        pushButtonRecover1 = new QPushButton(scrollAreaWidgetStack);
        pushButtonRecover1->setObjectName(QString::fromUtf8("pushButtonRecover1"));
        pushButtonRecover1->setMinimumSize(QSize(0, 40));
        pushButtonRecover1->setMaximumSize(QSize(16777215, 40));
        pushButtonRecover1->setFocusPolicy(Qt::NoFocus);

        verticalRecover1->addWidget(pushButtonRecover1);


        horizontalRecover1->addLayout(verticalRecover1);

        labelMessageRecover1 = new QLabel(scrollAreaWidgetStack);
        labelMessageRecover1->setObjectName(QString::fromUtf8("labelMessageRecover1"));
        labelMessageRecover1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRecover1->setWordWrap(true);

        horizontalRecover1->addWidget(labelMessageRecover1);

        horizontalRecover1->setStretch(0, 1);
        horizontalRecover1->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRecover1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_3);

        horizontalRecover2 = new QHBoxLayout();
        horizontalRecover2->setSpacing(20);
        horizontalRecover2->setObjectName(QString::fromUtf8("horizontalRecover2"));
        verticalRecover2 = new QVBoxLayout();
        verticalRecover2->setSpacing(5);
        verticalRecover2->setObjectName(QString::fromUtf8("verticalRecover2"));
        pushButtonRecover2 = new QPushButton(scrollAreaWidgetStack);
        pushButtonRecover2->setObjectName(QString::fromUtf8("pushButtonRecover2"));
        pushButtonRecover2->setMinimumSize(QSize(0, 40));
        pushButtonRecover2->setMaximumSize(QSize(16777215, 40));
        pushButtonRecover2->setFocusPolicy(Qt::NoFocus);

        verticalRecover2->addWidget(pushButtonRecover2);


        horizontalRecover2->addLayout(verticalRecover2);

        labelMessageRecover2 = new QLabel(scrollAreaWidgetStack);
        labelMessageRecover2->setObjectName(QString::fromUtf8("labelMessageRecover2"));
        labelMessageRecover2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRecover2->setWordWrap(true);

        horizontalRecover2->addWidget(labelMessageRecover2);

        horizontalRecover2->setStretch(0, 1);
        horizontalRecover2->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRecover2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_4);

        horizontalUpgrade = new QHBoxLayout();
        horizontalUpgrade->setSpacing(20);
        horizontalUpgrade->setObjectName(QString::fromUtf8("horizontalUpgrade"));
        verticalUpgrade = new QVBoxLayout();
        verticalUpgrade->setSpacing(5);
        verticalUpgrade->setObjectName(QString::fromUtf8("verticalUpgrade"));
        pushButtonUpgrade = new QPushButton(scrollAreaWidgetStack);
        pushButtonUpgrade->setObjectName(QString::fromUtf8("pushButtonUpgrade"));
        pushButtonUpgrade->setMinimumSize(QSize(0, 40));
        pushButtonUpgrade->setMaximumSize(QSize(16777215, 40));
        pushButtonUpgrade->setFocusPolicy(Qt::NoFocus);

        verticalUpgrade->addWidget(pushButtonUpgrade);


        horizontalUpgrade->addLayout(verticalUpgrade);

        labelMessageUpgrade = new QLabel(scrollAreaWidgetStack);
        labelMessageUpgrade->setObjectName(QString::fromUtf8("labelMessageUpgrade"));
        labelMessageUpgrade->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageUpgrade->setWordWrap(true);

        horizontalUpgrade->addWidget(labelMessageUpgrade);

        horizontalUpgrade->setStretch(0, 1);
        horizontalUpgrade->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalUpgrade);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_5);

        horizontalRebuild = new QHBoxLayout();
        horizontalRebuild->setSpacing(20);
        horizontalRebuild->setObjectName(QString::fromUtf8("horizontalRebuild"));
        verticalRebuild = new QVBoxLayout();
        verticalRebuild->setSpacing(5);
        verticalRebuild->setObjectName(QString::fromUtf8("verticalRebuild"));
        pushButtonRebuild = new QPushButton(scrollAreaWidgetStack);
        pushButtonRebuild->setObjectName(QString::fromUtf8("pushButtonRebuild"));
        pushButtonRebuild->setMinimumSize(QSize(0, 40));
        pushButtonRebuild->setMaximumSize(QSize(16777215, 40));
        pushButtonRebuild->setFocusPolicy(Qt::NoFocus);

        verticalRebuild->addWidget(pushButtonRebuild);


        horizontalRebuild->addLayout(verticalRebuild);

        labelMessageRebuild = new QLabel(scrollAreaWidgetStack);
        labelMessageRebuild->setObjectName(QString::fromUtf8("labelMessageRebuild"));
        labelMessageRebuild->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRebuild->setWordWrap(true);

        horizontalRebuild->addWidget(labelMessageRebuild);

        horizontalRebuild->setStretch(0, 1);
        horizontalRebuild->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRebuild);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_6);

        horizontalDelete = new QHBoxLayout();
        horizontalDelete->setSpacing(20);
        horizontalDelete->setObjectName(QString::fromUtf8("horizontalDelete"));
        verticalDelete = new QVBoxLayout();
        verticalDelete->setSpacing(0);
        verticalDelete->setObjectName(QString::fromUtf8("verticalDelete"));
        pushButtonDelete = new QPushButton(scrollAreaWidgetStack);
        pushButtonDelete->setObjectName(QString::fromUtf8("pushButtonDelete"));
        pushButtonDelete->setMinimumSize(QSize(0, 40));
        pushButtonDelete->setMaximumSize(QSize(16777215, 40));
        pushButtonDelete->setFocusPolicy(Qt::NoFocus);

        verticalDelete->addWidget(pushButtonDelete);


        horizontalDelete->addLayout(verticalDelete);

        labelMessageDelete = new QLabel(scrollAreaWidgetStack);
        labelMessageDelete->setObjectName(QString::fromUtf8("labelMessageDelete"));
        labelMessageDelete->setMinimumSize(QSize(0, 0));
        labelMessageDelete->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageDelete->setWordWrap(true);

        horizontalDelete->addWidget(labelMessageDelete);

        horizontalDelete->setStretch(0, 1);
        horizontalDelete->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalDelete);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_7);

        scrollStack->setWidget(scrollAreaWidgetStack);

        verticalLayout->addWidget(scrollStack);


        horizontalLayout->addWidget(left);


        retranslateUi(SettingsWalletRepairWidget);

        QMetaObject::connectSlotsByName(SettingsWalletRepairWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWalletRepairWidget)
    {
        SettingsWalletRepairWidget->setWindowTitle(QCoreApplication::translate("SettingsWalletRepairWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Wallet Repair", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "The buttons below will restart the wallet with command-line options to repair this wallet, fix issues with corrupt blockchain files or missing/obsolete transactions", nullptr));
        pushButtonSalvage->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Salvage wallet", nullptr));
        labelMessageSalvage->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Attempt to recover private keys from a corrupt wallet.dat", nullptr));
        pushButtonRescan->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Rescan blockchain file", nullptr));
        labelMessageRescan->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Rescan the blockchain for missing wallet transactions", nullptr));
        pushButtonRecover1->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Recover transactions 1", nullptr));
        labelMessageRecover1->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Recover transactions from blockchain (keep-meta-data, e.g. account owner)", nullptr));
        pushButtonRecover2->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Recover transactions 2", nullptr));
        labelMessageRecover2->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Recover transactions from blockchain (drop meta-data)", nullptr));
        pushButtonUpgrade->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Upgrade wallet format", nullptr));
        labelMessageUpgrade->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Upgrade wallet to latest format on startup. (Note: this is NOT an update of the wallet itself)", nullptr));
        pushButtonRebuild->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Rebuild index", nullptr));
        labelMessageRebuild->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Rebuild blockchain index from current blk000???.dat files", nullptr));
        pushButtonDelete->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Delete local blockchain", nullptr));
        labelMessageDelete->setText(QCoreApplication::translate("SettingsWalletRepairWidget", "Deletes all local blockchain folders so the wallet synchronizes from scratch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWalletRepairWidget: public Ui_SettingsWalletRepairWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWALLETREPAIRWIDGET_H

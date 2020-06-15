/********************************************************************************
** Form generated from reading UI file 'settingswalletoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWALLETOPTIONSWIDGET_H
#define UI_SETTINGSWALLETOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWalletOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_1;
    QLabel *labelTitleStake;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *spinBoxStakeSplitThreshold;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *radioButtonSpend;
    QSpacerItem *verticalSpacer_1;
    QLabel *labelDivider;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayoutTitle_1;
    QLabel *labelTitleNetwork;
    QLabel *labelSubtitleNetwork;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxMap;
    QCheckBox *checkBoxAllow;
    QCheckBox *checkBoxConnect;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelSubtitleProxy;
    QLineEdit *lineEditProxy;
    QSpacerItem *horizontalSpacer_1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelSubtitlePort;
    QLineEdit *lineEditPort;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsWalletOptionsWidget)
    {
        if (SettingsWalletOptionsWidget->objectName().isEmpty())
            SettingsWalletOptionsWidget->setObjectName(QString::fromUtf8("SettingsWalletOptionsWidget"));
        SettingsWalletOptionsWidget->resize(518, 654);
        verticalLayout = new QVBoxLayout(SettingsWalletOptionsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsWalletOptionsWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_1 = new QVBoxLayout(left);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QString::fromUtf8("verticalLayoutTitle"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout->addLayout(verticalLayoutTitle);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(-1, -1, -1, 9);
        labelTitleStake = new QLabel(left);
        labelTitleStake->setObjectName(QString::fromUtf8("labelTitleStake"));

        horizontalLayout_1->addWidget(labelTitleStake);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);

        spinBoxStakeSplitThreshold = new QDoubleSpinBox(left);
        spinBoxStakeSplitThreshold->setObjectName(QString::fromUtf8("spinBoxStakeSplitThreshold"));
        spinBoxStakeSplitThreshold->setDecimals(8);
        spinBoxStakeSplitThreshold->setMinimum(0);
        spinBoxStakeSplitThreshold->setMaximum(999999);
        spinBoxStakeSplitThreshold->setValue(500);

        horizontalLayout_1->addWidget(spinBoxStakeSplitThreshold);


        verticalLayout_2->addLayout(horizontalLayout_1);

        groupBox = new QGroupBox(left);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButtonSpend = new QCheckBox(groupBox);
        radioButtonSpend->setObjectName(QString::fromUtf8("radioButtonSpend"));

        verticalLayout_3->addWidget(radioButtonSpend);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_1);

        labelDivider = new QLabel(left);
        labelDivider->setObjectName(QString::fromUtf8("labelDivider"));
        labelDivider->setMinimumSize(QSize(0, 1));
        labelDivider->setMaximumSize(QSize(16777215, 1));

        verticalLayout_2->addWidget(labelDivider);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayoutTitle_1 = new QVBoxLayout();
        verticalLayoutTitle_1->setSpacing(5);
        verticalLayoutTitle_1->setObjectName(QString::fromUtf8("verticalLayoutTitle_1"));
        labelTitleNetwork = new QLabel(left);
        labelTitleNetwork->setObjectName(QString::fromUtf8("labelTitleNetwork"));

        verticalLayoutTitle_1->addWidget(labelTitleNetwork);

        labelSubtitleNetwork = new QLabel(left);
        labelSubtitleNetwork->setObjectName(QString::fromUtf8("labelSubtitleNetwork"));
        labelSubtitleNetwork->setWordWrap(true);

        verticalLayoutTitle_1->addWidget(labelSubtitleNetwork);


        horizontalLayout_2->addLayout(verticalLayoutTitle_1);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        groupBox_1 = new QGroupBox(left);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        verticalLayout_4 = new QVBoxLayout(groupBox_1);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBoxMap = new QCheckBox(groupBox_1);
        checkBoxMap->setObjectName(QString::fromUtf8("checkBoxMap"));

        verticalLayout_4->addWidget(checkBoxMap);

        checkBoxAllow = new QCheckBox(groupBox_1);
        checkBoxAllow->setObjectName(QString::fromUtf8("checkBoxAllow"));

        verticalLayout_4->addWidget(checkBoxAllow);

        checkBoxConnect = new QCheckBox(groupBox_1);
        checkBoxConnect->setObjectName(QString::fromUtf8("checkBoxConnect"));

        verticalLayout_4->addWidget(checkBoxConnect);


        verticalLayout_2->addWidget(groupBox_1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelSubtitleProxy = new QLabel(left);
        labelSubtitleProxy->setObjectName(QString::fromUtf8("labelSubtitleProxy"));

        horizontalLayout_4->addWidget(labelSubtitleProxy);

        lineEditProxy = new QLineEdit(left);
        lineEditProxy->setObjectName(QString::fromUtf8("lineEditProxy"));
        lineEditProxy->setMinimumSize(QSize(0, 50));
        lineEditProxy->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_4->addWidget(lineEditProxy);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelSubtitlePort = new QLabel(left);
        labelSubtitlePort->setObjectName(QString::fromUtf8("labelSubtitlePort"));

        horizontalLayout_5->addWidget(labelSubtitlePort);

        lineEditPort = new QLineEdit(left);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setMinimumSize(QSize(0, 50));
        lineEditPort->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_5->addWidget(lineEditPort);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButtonReset = new QPushButton(left);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(160, 50));
        pushButtonReset->setMaximumSize(QSize(50, 16777215));
        pushButtonReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(pushButtonReset);

        pushButtonClean = new QPushButton(left);
        pushButtonClean->setObjectName(QString::fromUtf8("pushButtonClean"));
        pushButtonClean->setMinimumSize(QSize(0, 50));
        pushButtonClean->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(pushButtonClean);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_1->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsWalletOptionsWidget);

        QMetaObject::connectSlotsByName(SettingsWalletOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWalletOptionsWidget)
    {
        SettingsWalletOptionsWidget->setWindowTitle(QCoreApplication::translate("SettingsWalletOptionsWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Wallet", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Customize the internal wallet options", nullptr));
        labelTitleStake->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Stake split threshold", nullptr));
        groupBox->setTitle(QString());
        radioButtonSpend->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Spend unconfirmed change", nullptr));
        labelDivider->setText(QString());
        labelTitleNetwork->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Network", nullptr));
        labelSubtitleNetwork->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Customize the node network options", nullptr));
        groupBox_1->setTitle(QString());
        checkBoxMap->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Map port using UPnP", nullptr));
        checkBoxAllow->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Allow incoming connections", nullptr));
        checkBoxConnect->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Connect through SOCKS5 proxy (default proxy)", nullptr));
        labelSubtitleProxy->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Proxy IP", nullptr));
        lineEditProxy->setPlaceholderText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Enter proxy IP", nullptr));
        labelSubtitlePort->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Port", nullptr));
        lineEditPort->setPlaceholderText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Enter port", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Reset to default", nullptr));
        pushButtonClean->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "Discard changes", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("SettingsWalletOptionsWidget", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWalletOptionsWidget: public Ui_SettingsWalletOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWALLETOPTIONSWIDGET_H

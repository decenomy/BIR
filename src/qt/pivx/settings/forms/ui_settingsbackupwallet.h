/********************************************************************************
** Form generated from reading UI file 'settingsbackupwallet.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSBACKUPWALLET_H
#define UI_SETTINGSBACKUPWALLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsBackupWallet
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelSubtitleLocation;
    QPushButton *pushButtonDocuments;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDivider;
    QVBoxLayout *verticalLayoutTitle_2;
    QLabel *labelTitle_2;
    QLabel *labelSubtitle_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonSave_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsBackupWallet)
    {
        if (SettingsBackupWallet->objectName().isEmpty())
            SettingsBackupWallet->setObjectName(QString::fromUtf8("SettingsBackupWallet"));
        SettingsBackupWallet->resize(400, 410);
        verticalLayout = new QVBoxLayout(SettingsBackupWallet);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsBackupWallet);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_2 = new QVBoxLayout(left);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
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


        verticalLayout_2->addLayout(verticalLayoutTitle);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        labelSubtitleLocation = new QLabel(left);
        labelSubtitleLocation->setObjectName(QString::fromUtf8("labelSubtitleLocation"));

        verticalLayout_9->addWidget(labelSubtitleLocation);

        pushButtonDocuments = new QPushButton(left);
        pushButtonDocuments->setObjectName(QString::fromUtf8("pushButtonDocuments"));
        pushButtonDocuments->setMinimumSize(QSize(0, 50));
        pushButtonDocuments->setMaximumSize(QSize(16777215, 50));
        pushButtonDocuments->setFocusPolicy(Qt::NoFocus);

        verticalLayout_9->addWidget(pushButtonDocuments);


        verticalLayout_2->addLayout(verticalLayout_9);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelDivider = new QLabel(left);
        labelDivider->setObjectName(QString::fromUtf8("labelDivider"));
        labelDivider->setMinimumSize(QSize(0, 1));
        labelDivider->setMaximumSize(QSize(16777215, 1));

        verticalLayout_2->addWidget(labelDivider);

        verticalLayoutTitle_2 = new QVBoxLayout();
        verticalLayoutTitle_2->setSpacing(5);
        verticalLayoutTitle_2->setObjectName(QString::fromUtf8("verticalLayoutTitle_2"));
        labelTitle_2 = new QLabel(left);
        labelTitle_2->setObjectName(QString::fromUtf8("labelTitle_2"));

        verticalLayoutTitle_2->addWidget(labelTitle_2);

        labelSubtitle_2 = new QLabel(left);
        labelSubtitle_2->setObjectName(QString::fromUtf8("labelSubtitle_2"));
        labelSubtitle_2->setWordWrap(true);

        verticalLayoutTitle_2->addWidget(labelSubtitle_2);


        verticalLayout_2->addLayout(verticalLayoutTitle_2);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        pushButtonSave_2 = new QPushButton(left);
        pushButtonSave_2->setObjectName(QString::fromUtf8("pushButtonSave_2"));
        pushButtonSave_2->setMinimumSize(QSize(200, 50));
        pushButtonSave_2->setMaximumSize(QSize(200, 50));
        pushButtonSave_2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(pushButtonSave_2);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(left);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SettingsBackupWallet);

        QMetaObject::connectSlotsByName(SettingsBackupWallet);
    } // setupUi

    void retranslateUi(QWidget *SettingsBackupWallet)
    {
        SettingsBackupWallet->setWindowTitle(QCoreApplication::translate("SettingsBackupWallet", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsBackupWallet", "Backup Wallet", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("SettingsBackupWallet", "Keep your wallet safe by doing regular backups and storing your backup file externally.\n"
"This option creates a wallet.dat file that can be used to recover your whole balance (transactions and addresses) on another device", nullptr));
        labelSubtitleLocation->setText(QCoreApplication::translate("SettingsBackupWallet", "Where", nullptr));
        pushButtonDocuments->setText(QCoreApplication::translate("SettingsBackupWallet", "Select folder...", nullptr));
        labelDivider->setText(QString());
        labelTitle_2->setText(QCoreApplication::translate("SettingsBackupWallet", "Change Wallet Passphrase", nullptr));
        labelSubtitle_2->setText(QCoreApplication::translate("SettingsBackupWallet", "This will decrypt the whole wallet data and encrypt it back with the new passphrase.\n"
"Remember to write it down and store it safely, otherwise you might lose access to your funds", nullptr));
        pushButtonSave_2->setText(QCoreApplication::translate("SettingsBackupWallet", "Change Passphrase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsBackupWallet: public Ui_SettingsBackupWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSBACKUPWALLET_H

/********************************************************************************
** Form generated from reading UI file 'lockunlock.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCKUNLOCK_H
#define UI_LOCKUNLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LockUnlock
{
public:
    QHBoxLayout *horizontalLayout_3;
    QWidget *container;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonUnlocked;
    QHBoxLayout *horizontalLayout_31;
    QPushButton *pushButtonLocked;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStaking;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LockUnlock)
    {
        if (LockUnlock->objectName().isEmpty())
            LockUnlock->setObjectName(QString::fromUtf8("LockUnlock"));
        LockUnlock->resize(528, 141);
        LockUnlock->setStyleSheet(QString::fromUtf8("margin:0px; padding:0px; border:none;"));
        horizontalLayout_3 = new QHBoxLayout(LockUnlock);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        container = new QWidget(LockUnlock);
        container->setObjectName(QString::fromUtf8("container"));
        verticalLayout_2 = new QVBoxLayout(container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(container);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonUnlocked = new QPushButton(groupBox);
        pushButtonUnlocked->setObjectName(QString::fromUtf8("pushButtonUnlocked"));
        pushButtonUnlocked->setMinimumSize(QSize(36, 36));
        pushButtonUnlocked->setMaximumSize(QSize(16777215, 36));
        pushButtonUnlocked->setCheckable(true);
        pushButtonUnlocked->setChecked(true);
        pushButtonUnlocked->setAutoExclusive(true);

        horizontalLayout_2->addWidget(pushButtonUnlocked);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        pushButtonLocked = new QPushButton(groupBox);
        pushButtonLocked->setObjectName(QString::fromUtf8("pushButtonLocked"));
        pushButtonLocked->setMinimumSize(QSize(36, 36));
        pushButtonLocked->setMaximumSize(QSize(16777215, 36));
        pushButtonLocked->setCheckable(true);
        pushButtonLocked->setAutoExclusive(true);

        horizontalLayout_31->addWidget(pushButtonLocked);


        verticalLayout->addLayout(horizontalLayout_31);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonStaking = new QPushButton(groupBox);
        pushButtonStaking->setObjectName(QString::fromUtf8("pushButtonStaking"));
        pushButtonStaking->setMinimumSize(QSize(36, 36));
        pushButtonStaking->setMaximumSize(QSize(16777215, 36));
        pushButtonStaking->setCheckable(true);
        pushButtonStaking->setAutoExclusive(true);

        horizontalLayout->addWidget(pushButtonStaking);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_3->addWidget(container);


        retranslateUi(LockUnlock);

        QMetaObject::connectSlotsByName(LockUnlock);
    } // setupUi

    void retranslateUi(QWidget *LockUnlock)
    {
        LockUnlock->setWindowTitle(QCoreApplication::translate("LockUnlock", "Form", nullptr));
        pushButtonUnlocked->setText(QCoreApplication::translate("LockUnlock", "Unlock Wallet", nullptr));
        pushButtonLocked->setText(QCoreApplication::translate("LockUnlock", "Lock Wallet", nullptr));
        pushButtonStaking->setText(QCoreApplication::translate("LockUnlock", "Staking Only", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LockUnlock: public Ui_LockUnlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCKUNLOCK_H

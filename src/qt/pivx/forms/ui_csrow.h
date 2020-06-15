/********************************************************************************
** Form generated from reading UI file 'csrow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSROW_H
#define UI_CSROW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSRow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *info;
    QHBoxLayout *horizontalLayout_3;
    QWidget *container;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QSpacerItem *horizontalSpacer;
    QLabel *labelAmount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAddress;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelStaking;
    QPushButton *pushButtonMenu;
    QLabel *lblDivisory;

    void setupUi(QWidget *CSRow)
    {
        if (CSRow->objectName().isEmpty())
            CSRow->setObjectName(QString::fromUtf8("CSRow"));
        CSRow->resize(401, 75);
        verticalLayout = new QVBoxLayout(CSRow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 10, 20, 0);
        info = new QWidget(CSRow);
        info->setObjectName(QString::fromUtf8("info"));
        info->setMinimumSize(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(info);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 10);
        container = new QWidget(info);
        container->setObjectName(QString::fromUtf8("container"));
        container->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelName = new QLabel(container);
        labelName->setObjectName(QString::fromUtf8("labelName"));
#if QT_CONFIG(tooltip)
        labelName->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout->addWidget(labelName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelAmount = new QLabel(container);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));

        horizontalLayout->addWidget(labelAmount);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelAddress = new QLabel(container);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
#if QT_CONFIG(tooltip)
        labelAddress->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)

        horizontalLayout_2->addWidget(labelAddress);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        labelStaking = new QLabel(container);
        labelStaking->setObjectName(QString::fromUtf8("labelStaking"));

        horizontalLayout_2->addWidget(labelStaking);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(container);

        pushButtonMenu = new QPushButton(info);
        pushButtonMenu->setObjectName(QString::fromUtf8("pushButtonMenu"));
        pushButtonMenu->setMinimumSize(QSize(24, 24));
        pushButtonMenu->setMaximumSize(QSize(32, 32));
        pushButtonMenu->setFocusPolicy(Qt::NoFocus);
        pushButtonMenu->setStyleSheet(QString::fromUtf8("border:none; background-color:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("://ic-menu-hover"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMenu->setIcon(icon);
        pushButtonMenu->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButtonMenu, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addWidget(info);

        lblDivisory = new QLabel(CSRow);
        lblDivisory->setObjectName(QString::fromUtf8("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(lblDivisory);


        retranslateUi(CSRow);

        QMetaObject::connectSlotsByName(CSRow);
    } // setupUi

    void retranslateUi(QWidget *CSRow)
    {
        CSRow->setWindowTitle(QCoreApplication::translate("CSRow", "Form", nullptr));
        labelName->setText(QCoreApplication::translate("CSRow", "Savings", nullptr));
        labelAmount->setText(QCoreApplication::translate("CSRow", "0,00 BIR", nullptr));
        labelAddress->setText(QCoreApplication::translate("CSRow", "address", nullptr));
        labelStaking->setText(QCoreApplication::translate("CSRow", "Not Staking", nullptr));
        pushButtonMenu->setText(QString());
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CSRow: public Ui_CSRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSROW_H

/********************************************************************************
** Form generated from reading UI file 'addresslabelrow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSLABELROW_H
#define UI_ADDRESSLABELROW_H

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

class Ui_AddressLabelRow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *rowContainer;
    QHBoxLayout *horizontalLayout;
    QLabel *lblLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *lblAddress;
    QPushButton *btnMenu;
    QLabel *lblDivisory;

    void setupUi(QWidget *AddressLabelRow)
    {
        if (AddressLabelRow->objectName().isEmpty())
            AddressLabelRow->setObjectName(QString::fromUtf8("AddressLabelRow"));
        AddressLabelRow->resize(660, 60);
        AddressLabelRow->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(AddressLabelRow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        rowContainer = new QWidget(AddressLabelRow);
        rowContainer->setObjectName(QString::fromUtf8("rowContainer"));
        rowContainer->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(rowContainer);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblLabel = new QLabel(rowContainer);
        lblLabel->setObjectName(QString::fromUtf8("lblLabel"));
        lblLabel->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lblLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblAddress = new QLabel(rowContainer);
        lblAddress->setObjectName(QString::fromUtf8("lblAddress"));
        lblAddress->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lblAddress);

        btnMenu = new QPushButton(rowContainer);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        btnMenu->setStyleSheet(QString::fromUtf8("border:none; background-color:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("://ic-menu-hover"), QSize(), QIcon::Normal, QIcon::Off);
        btnMenu->setIcon(icon);
        btnMenu->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(btnMenu);


        verticalLayout->addWidget(rowContainer);

        lblDivisory = new QLabel(AddressLabelRow);
        lblDivisory->setObjectName(QString::fromUtf8("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(lblDivisory);


        retranslateUi(AddressLabelRow);

        QMetaObject::connectSlotsByName(AddressLabelRow);
    } // setupUi

    void retranslateUi(QWidget *AddressLabelRow)
    {
        AddressLabelRow->setWindowTitle(QCoreApplication::translate("AddressLabelRow", "Form", nullptr));
        lblLabel->setText(QCoreApplication::translate("AddressLabelRow", "Bob Allen", nullptr));
        lblAddress->setText(QCoreApplication::translate("AddressLabelRow", "DN6i46dytMPVhV1JMGZFuQBh7BZZ6nNLox", nullptr));
        btnMenu->setText(QString());
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddressLabelRow: public Ui_AddressLabelRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSLABELROW_H

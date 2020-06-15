/********************************************************************************
** Form generated from reading UI file 'contactdropdownrow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTDROPDOWNROW_H
#define UI_CONTACTDROPDOWNROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactDropdownRow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *rowContainer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblLabel;
    QLabel *lblAddress;
    QLabel *lblDivisory;

    void setupUi(QWidget *ContactDropdownRow)
    {
        if (ContactDropdownRow->objectName().isEmpty())
            ContactDropdownRow->setObjectName(QString::fromUtf8("ContactDropdownRow"));
        ContactDropdownRow->resize(660, 60);
        ContactDropdownRow->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(ContactDropdownRow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        rowContainer = new QWidget(ContactDropdownRow);
        rowContainer->setObjectName(QString::fromUtf8("rowContainer"));
        rowContainer->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(rowContainer);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 12, -1, 12);
        lblLabel = new QLabel(rowContainer);
        lblLabel->setObjectName(QString::fromUtf8("lblLabel"));
        lblLabel->setStyleSheet(QString::fromUtf8(""));
        lblLabel->setText(QString::fromUtf8("Bob Allen"));

        verticalLayout_2->addWidget(lblLabel);

        lblAddress = new QLabel(rowContainer);
        lblAddress->setObjectName(QString::fromUtf8("lblAddress"));
        lblAddress->setStyleSheet(QString::fromUtf8(""));
        lblAddress->setText(QString::fromUtf8("DN6i46dytMPVhV1JMGZFuQBh7BZZ6nNLox"));

        verticalLayout_2->addWidget(lblAddress);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(rowContainer);

        lblDivisory = new QLabel(ContactDropdownRow);
        lblDivisory->setObjectName(QString::fromUtf8("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(lblDivisory);


        retranslateUi(ContactDropdownRow);

        QMetaObject::connectSlotsByName(ContactDropdownRow);
    } // setupUi

    void retranslateUi(QWidget *ContactDropdownRow)
    {
        ContactDropdownRow->setWindowTitle(QCoreApplication::translate("ContactDropdownRow", "Form", nullptr));
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContactDropdownRow: public Ui_ContactDropdownRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTDROPDOWNROW_H

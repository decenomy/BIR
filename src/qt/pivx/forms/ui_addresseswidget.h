/********************************************************************************
** Form generated from reading UI file 'addresseswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSESWIDGET_H
#define UI_ADDRESSESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/pivx/optionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_AddressesWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer11;
    QWidget *sortWidget;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBoxSort;
    QComboBox *comboBoxSortOrder;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QListView *listAddresses;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    OptionButton *btnAddContact;
    QWidget *layoutNewContact;
    QVBoxLayout *verticalLayout_71;
    QVBoxLayout *verticalLayout11;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelAddress;
    QLineEdit *lineEditAddress;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSave;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *AddressesWidget)
    {
        if (AddressesWidget->objectName().isEmpty())
            AddressesWidget->setObjectName(QString::fromUtf8("AddressesWidget"));
        AddressesWidget->resize(629, 406);
        horizontalLayout_2 = new QHBoxLayout(AddressesWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(AddressesWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 10, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayout_8->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));

        verticalLayout_8->addWidget(labelSubtitle1, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_8);

        horizontalSpacer11 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer11);

        sortWidget = new QWidget(left);
        sortWidget->setObjectName(QString::fromUtf8("sortWidget"));
        horizontalLayout_6 = new QHBoxLayout(sortWidget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 22, 0, 0);
        comboBoxSort = new QComboBox(sortWidget);
        comboBoxSort->setObjectName(QString::fromUtf8("comboBoxSort"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBoxSort->sizePolicy().hasHeightForWidth());
        comboBoxSort->setSizePolicy(sizePolicy);
        comboBoxSort->setMinimumSize(QSize(115, 0));

        horizontalLayout_6->addWidget(comboBoxSort);

        comboBoxSortOrder = new QComboBox(sortWidget);
        comboBoxSortOrder->setObjectName(QString::fromUtf8("comboBoxSortOrder"));
        sizePolicy.setHeightForWidth(comboBoxSortOrder->sizePolicy().hasHeightForWidth());
        comboBoxSortOrder->setSizePolicy(sizePolicy);
        comboBoxSortOrder->setMinimumSize(QSize(75, 0));

        horizontalLayout_6->addWidget(comboBoxSortOrder);


        horizontalLayout_3->addWidget(sortWidget);


        verticalLayout_21->addLayout(horizontalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));

        verticalLayout_21->addLayout(verticalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_21->addItem(verticalSpacer_4);

        listAddresses = new QListView(left);
        listAddresses->setObjectName(QString::fromUtf8("listAddresses"));
        listAddresses->setMouseTracking(true);

        verticalLayout_21->addWidget(listAddresses);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QString::fromUtf8("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(emptyContainer);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        emptyScreen = new QFrame(emptyContainer);
        emptyScreen->setObjectName(QString::fromUtf8("emptyScreen"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(emptyScreen->sizePolicy().hasHeightForWidth());
        emptyScreen->setSizePolicy(sizePolicy1);
        emptyScreen->setFrameShape(QFrame::StyledPanel);
        emptyScreen->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(emptyScreen);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushImgEmpty = new QPushButton(emptyScreen);
        pushImgEmpty->setObjectName(QString::fromUtf8("pushImgEmpty"));
        pushImgEmpty->setMinimumSize(QSize(100, 100));
        pushImgEmpty->setMaximumSize(QSize(100, 100));
        pushImgEmpty->setFocusPolicy(Qt::NoFocus);
        pushImgEmpty->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushImgEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmpty = new QLabel(emptyScreen);
        labelEmpty->setObjectName(QString::fromUtf8("labelEmpty"));
        labelEmpty->setStyleSheet(QString::fromUtf8(""));
        labelEmpty->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_7->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 8);

        verticalLayout_21->addWidget(emptyContainer);


        verticalLayout_3->addLayout(verticalLayout_21);


        horizontalLayout_2->addWidget(left);

        right = new QWidget(AddressesWidget);
        right->setObjectName(QString::fromUtf8("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        btnAddContact = new OptionButton(right);
        btnAddContact->setObjectName(QString::fromUtf8("btnAddContact"));
        btnAddContact->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnAddContact);

        layoutNewContact = new QWidget(right);
        layoutNewContact->setObjectName(QString::fromUtf8("layoutNewContact"));
        verticalLayout_71 = new QVBoxLayout(layoutNewContact);
        verticalLayout_71->setSpacing(0);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 10, 0, 20);
        verticalLayout11 = new QVBoxLayout();
        verticalLayout11->setSpacing(10);
        verticalLayout11->setObjectName(QString::fromUtf8("verticalLayout11"));
        labelName = new QLabel(layoutNewContact);
        labelName->setObjectName(QString::fromUtf8("labelName"));

        verticalLayout11->addWidget(labelName);

        lineEditName = new QLineEdit(layoutNewContact);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setPlaceholderText(QString::fromUtf8("e.g. John Doe"));

        verticalLayout11->addWidget(lineEditName);


        verticalLayout_71->addLayout(verticalLayout11);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_71->addItem(verticalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelAddress = new QLabel(layoutNewContact);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));

        verticalLayout_2->addWidget(labelAddress);

        lineEditAddress = new QLineEdit(layoutNewContact);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));
        lineEditAddress->setPlaceholderText(QString::fromUtf8("e.g. K8FpnBdmahyJNRsVzoKzyFHbGjcUbX43QN"));

        verticalLayout_2->addWidget(lineEditAddress);


        verticalLayout_71->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_71->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnSave = new QPushButton(layoutNewContact);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(160, 50));
        btnSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnSave);


        verticalLayout_71->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(layoutNewContact);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_2->addWidget(right);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(AddressesWidget);

        QMetaObject::connectSlotsByName(AddressesWidget);
    } // setupUi

    void retranslateUi(QWidget *AddressesWidget)
    {
        AddressesWidget->setWindowTitle(QCoreApplication::translate("AddressesWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("AddressesWidget", "Contacts", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("AddressesWidget", "You can add a new one in the options menu to the side.", nullptr));
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QCoreApplication::translate("AddressesWidget", "No contacts yet", nullptr));
        labelName->setText(QCoreApplication::translate("AddressesWidget", "Contact name", nullptr));
        labelAddress->setText(QCoreApplication::translate("AddressesWidget", "Enter address", nullptr));
        btnSave->setText(QCoreApplication::translate("AddressesWidget", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressesWidget: public Ui_AddressesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSESWIDGET_H

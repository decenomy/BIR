/********************************************************************************
** Form generated from reading UI file 'send.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEND_H
#define UI_SEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/pivx/optionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_send
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSubtitleAddress;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelSubtitleAmount;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *checkBoxDelegations;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonFee;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonAddRecipient;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_71;
    QWidget *coinWidget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalSend;
    QLabel *labelTitleTotalSend;
    QLabel *labelAmountSend;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelLine;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalRemaining;
    QLabel *labelTitleTotalRemaining;
    QLabel *labelAmountRemaining;
    QWidget *page_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    OptionButton *btnCoinControl;
    OptionButton *btnChangeAddress;
    OptionButton *btnUri;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonReset;

    void setupUi(QWidget *send)
    {
        if (send->objectName().isEmpty())
            send->setObjectName(QString::fromUtf8("send"));
        send->resize(893, 700);
        horizontalLayout_2 = new QHBoxLayout(send);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(send);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));

        verticalLayout->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_22->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_22->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 20, 0);
        labelSubtitleAddress = new QLabel(left);
        labelSubtitleAddress->setObjectName(QString::fromUtf8("labelSubtitleAddress"));
        labelSubtitleAddress->setStyleSheet(QString::fromUtf8("margin-left:8px;"));

        horizontalLayout->addWidget(labelSubtitleAddress);

        horizontalSpacer_3 = new QSpacerItem(40, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelSubtitleAmount = new QLabel(left);
        labelSubtitleAmount->setObjectName(QString::fromUtf8("labelSubtitleAmount"));

        horizontalLayout->addWidget(labelSubtitleAmount);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_22->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(left);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 350));
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea {\n"
"            background:transparent;\n"
"            margin-top:10px;\n"
"}"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 591, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents {\n"
"             background:transparent;\n"
"             }"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_22->addWidget(scrollArea);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_22->addItem(verticalSpacer_4);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(20, -1, 20, -1);
        checkBoxDelegations = new QCheckBox(left);
        checkBoxDelegations->setObjectName(QString::fromUtf8("checkBoxDelegations"));
        checkBoxDelegations->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_20->addWidget(checkBoxDelegations);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_4);

        pushButtonFee = new QPushButton(left);
        pushButtonFee->setObjectName(QString::fromUtf8("pushButtonFee"));
        pushButtonFee->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_20->addWidget(pushButtonFee);

        horizontalSpacer_11 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_11);

        pushButtonClear = new QPushButton(left);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        pushButtonClear->setFocusPolicy(Qt::NoFocus);
        pushButtonClear->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_20->addWidget(pushButtonClear);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_6);

        pushButtonAddRecipient = new QPushButton(left);
        pushButtonAddRecipient->setObjectName(QString::fromUtf8("pushButtonAddRecipient"));
        pushButtonAddRecipient->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_20->addWidget(pushButtonAddRecipient);


        verticalLayout_22->addLayout(horizontalLayout_20);

        verticalSpacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_22->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 20, -1);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(8, -1, -1, -1);
        stackedWidget = new QStackedWidget(left);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 60));
        stackedWidget->setMaximumSize(QSize(16777215, 60));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        verticalLayout_71 = new QVBoxLayout(page1);
        verticalLayout_71->setSpacing(6);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(12, 0, 0, 0);
        coinWidget = new QWidget(page1);
        coinWidget->setObjectName(QString::fromUtf8("coinWidget"));
        coinWidget->setMinimumSize(QSize(0, 60));
        coinWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_9 = new QHBoxLayout(coinWidget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(20, 10, 20, 10);
        verticalSend = new QVBoxLayout();
        verticalSend->setSpacing(0);
        verticalSend->setObjectName(QString::fromUtf8("verticalSend"));
        labelTitleTotalSend = new QLabel(coinWidget);
        labelTitleTotalSend->setObjectName(QString::fromUtf8("labelTitleTotalSend"));

        verticalSend->addWidget(labelTitleTotalSend);

        labelAmountSend = new QLabel(coinWidget);
        labelAmountSend->setObjectName(QString::fromUtf8("labelAmountSend"));
        labelAmountSend->setText(QString::fromUtf8("0.00 BIR"));

        verticalSend->addWidget(labelAmountSend);


        horizontalLayout_9->addLayout(verticalSend);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        labelLine = new QLabel(coinWidget);
        labelLine->setObjectName(QString::fromUtf8("labelLine"));
        labelLine->setMinimumSize(QSize(1, 0));
        labelLine->setMaximumSize(QSize(1, 16777215));

        horizontalLayout_9->addWidget(labelLine);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        verticalRemaining = new QVBoxLayout();
        verticalRemaining->setSpacing(0);
        verticalRemaining->setObjectName(QString::fromUtf8("verticalRemaining"));
        labelTitleTotalRemaining = new QLabel(coinWidget);
        labelTitleTotalRemaining->setObjectName(QString::fromUtf8("labelTitleTotalRemaining"));
        labelTitleTotalRemaining->setText(QString::fromUtf8("N/A"));

        verticalRemaining->addWidget(labelTitleTotalRemaining);

        labelAmountRemaining = new QLabel(coinWidget);
        labelAmountRemaining->setObjectName(QString::fromUtf8("labelAmountRemaining"));
        labelAmountRemaining->setText(QString::fromUtf8("N/A"));

        verticalRemaining->addWidget(labelAmountRemaining);


        horizontalLayout_9->addLayout(verticalRemaining);


        verticalLayout_71->addWidget(coinWidget);

        stackedWidget->addWidget(page1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout_10->addWidget(stackedWidget);


        horizontalLayout_7->addLayout(horizontalLayout_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonSave, 0, Qt::AlignBottom);


        verticalLayout_22->addLayout(horizontalLayout_7);

        verticalLayout_22->setStretch(3, 1);

        verticalLayout_3->addLayout(verticalLayout_22);


        horizontalLayout_2->addWidget(left);

        right = new QWidget(send);
        right->setObjectName(QString::fromUtf8("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        btnCoinControl = new OptionButton(right);
        btnCoinControl->setObjectName(QString::fromUtf8("btnCoinControl"));
        btnCoinControl->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnCoinControl);

        btnChangeAddress = new OptionButton(right);
        btnChangeAddress->setObjectName(QString::fromUtf8("btnChangeAddress"));
        btnChangeAddress->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnChangeAddress);

        btnUri = new OptionButton(right);
        btnUri->setObjectName(QString::fromUtf8("btnUri"));
        btnUri->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnUri);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        pushButtonReset = new QPushButton(right);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(200, 50));
        pushButtonReset->setMaximumSize(QSize(200, 50));
        pushButtonReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(pushButtonReset);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_2->addWidget(right);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(send);

        QMetaObject::connectSlotsByName(send);
    } // setupUi

    void retranslateUi(QWidget *send)
    {
        send->setWindowTitle(QCoreApplication::translate("send", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("send", "Send", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("send", "Send public coins (BIR)", nullptr));
        labelSubtitleAddress->setText(QCoreApplication::translate("send", "BIR address or contact label", nullptr));
        labelSubtitleAmount->setText(QCoreApplication::translate("send", "Amount", nullptr));
        checkBoxDelegations->setText(QCoreApplication::translate("send", "Include delegated", nullptr));
        pushButtonFee->setText(QCoreApplication::translate("send", "Customize fee", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("send", "Clear all", nullptr));
        pushButtonAddRecipient->setText(QCoreApplication::translate("send", "Add recipient", nullptr));
        labelTitleTotalSend->setText(QCoreApplication::translate("send", "Total to send", nullptr));
        labelLine->setText(QString());
        pushButtonSave->setText(QCoreApplication::translate("send", "Send", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("send", "Reset to default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class send: public Ui_send {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEND_H

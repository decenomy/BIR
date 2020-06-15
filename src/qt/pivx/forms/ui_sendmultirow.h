/********************************************************************************
** Form generated from reading UI file 'sendmultirow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMULTIROW_H
#define UI_SENDMULTIROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendMultiRow
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedAddress;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEditAddress;
    QWidget *page_3;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditAmount;
    QVBoxLayout *verticalLayout;
    QPushButton *btnMenu;
    QWidget *layoutLabel;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer;
    QLabel *labelSubtitleDescription;
    QLineEdit *lineEditDescription;

    void setupUi(QWidget *SendMultiRow)
    {
        if (SendMultiRow->objectName().isEmpty())
            SendMultiRow->setObjectName(QString::fromUtf8("SendMultiRow"));
        SendMultiRow->resize(493, 180);
        SendMultiRow->setMinimumSize(QSize(0, 0));
        SendMultiRow->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(SendMultiRow);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 20, 5);
        widget = new QWidget(SendMultiRow);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 60));
        widget->setMaximumSize(QSize(16777215, 85));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(8, 0, 0, 0);
        stackedAddress = new QStackedWidget(widget);
        stackedAddress->setObjectName(QString::fromUtf8("stackedAddress"));
        stackedAddress->setMinimumSize(QSize(0, 50));
        stackedAddress->setMaximumSize(QSize(16777215, 50));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(page_4->sizePolicy().hasHeightForWidth());
        page_4->setSizePolicy(sizePolicy1);
        page_4->setMinimumSize(QSize(0, 50));
        page_4->setMaximumSize(QSize(16777215, 55));
        verticalLayout_7 = new QVBoxLayout(page_4);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(12, 0, 0, 0);
        lineEditAddress = new QLineEdit(page_4);
        lineEditAddress->setObjectName(QString::fromUtf8("lineEditAddress"));
        lineEditAddress->setMinimumSize(QSize(0, 50));
        lineEditAddress->setMaximumSize(QSize(16777215, 50));

        verticalLayout_7->addWidget(lineEditAddress);

        stackedAddress->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedAddress->addWidget(page_3);

        horizontalLayout->addWidget(stackedAddress, 0, Qt::AlignTop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEditAmount = new QLineEdit(widget);
        lineEditAmount->setObjectName(QString::fromUtf8("lineEditAmount"));
        sizePolicy1.setHeightForWidth(lineEditAmount->sizePolicy().hasHeightForWidth());
        lineEditAmount->setSizePolicy(sizePolicy1);
        lineEditAmount->setMinimumSize(QSize(0, 50));
        lineEditAmount->setMaximumSize(QSize(16777215, 50));
        lineEditAmount->setMaxLength(17);
        lineEditAmount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEditAmount->setPlaceholderText(QString::fromUtf8("0.00 BIR"));

        horizontalLayout_2->addWidget(lineEditAmount, 0, Qt::AlignTop);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 14, -1, 0);
        btnMenu = new QPushButton(widget);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        btnMenu->setMinimumSize(QSize(0, 0));
        btnMenu->setMaximumSize(QSize(16777215, 16777215));
        btnMenu->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(btnMenu, 0, Qt::AlignTop);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addWidget(widget, 0, Qt::AlignTop);

        layoutLabel = new QWidget(SendMultiRow);
        layoutLabel->setObjectName(QString::fromUtf8("layoutLabel"));
        layoutLabel->setMinimumSize(QSize(0, 0));
        layoutLabel->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_9 = new QVBoxLayout(layoutLabel);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(20, 0, 0, 10);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer);

        labelSubtitleDescription = new QLabel(layoutLabel);
        labelSubtitleDescription->setObjectName(QString::fromUtf8("labelSubtitleDescription"));
        labelSubtitleDescription->setStyleSheet(QString::fromUtf8("margin-bottom:2px;\n"
"margin-left:0.05px;\n"
"padding:0px;"));

        verticalLayout_9->addWidget(labelSubtitleDescription);

        lineEditDescription = new QLineEdit(layoutLabel);
        lineEditDescription->setObjectName(QString::fromUtf8("lineEditDescription"));
        lineEditDescription->setMinimumSize(QSize(0, 50));
        lineEditDescription->setMaximumSize(QSize(16777215, 50));

        verticalLayout_9->addWidget(lineEditDescription);


        verticalLayout_3->addWidget(layoutLabel);


        retranslateUi(SendMultiRow);

        QMetaObject::connectSlotsByName(SendMultiRow);
    } // setupUi

    void retranslateUi(QWidget *SendMultiRow)
    {
        SendMultiRow->setWindowTitle(QCoreApplication::translate("SendMultiRow", "Form", nullptr));
        lineEditAddress->setPlaceholderText(QCoreApplication::translate("SendMultiRow", "Enter address", nullptr));
        btnMenu->setText(QString());
        labelSubtitleDescription->setText(QCoreApplication::translate("SendMultiRow", "Address label (optional)", nullptr));
        lineEditDescription->setPlaceholderText(QCoreApplication::translate("SendMultiRow", "Enter label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendMultiRow: public Ui_SendMultiRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMULTIROW_H

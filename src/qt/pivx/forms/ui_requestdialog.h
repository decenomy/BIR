/********************************************************************************
** Form generated from reading UI file 'requestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTDIALOG_H
#define UI_REQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEsc;
    QStackedWidget *stack;
    QWidget *page_1;
    QVBoxLayout *layout1;
    QSpacerItem *verticalSpacer_21;
    QLabel *labelMessage;
    QWidget *containerAmount;
    QVBoxLayout *verticalLayout;
    QLabel *labelSubtitleAmount;
    QWidget *layoutAmount;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditAmount;
    QWidget *comboContainer;
    QHBoxLayout *horizontalLayout_31;
    QLabel *comboBoxCoin;
    QSpacerItem *verticalSpacer_31;
    QVBoxLayout *verticalLayoutLabel;
    QLabel *labelSubtitleLabel;
    QLineEdit *lineEditLabel;
    QSpacerItem *verticalSpacer_34;
    QVBoxLayout *verticalLayoutDescription;
    QLabel *labelSubtitleDescription;
    QLineEdit *lineEditDescription;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_2;
    QVBoxLayout *layout2;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelQrImg;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAddress;
    QSpacerItem *verticalSpacer_32;
    QHBoxLayout *horizontal;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnCopyAddress;
    QPushButton *btnCopyUrl;
    QSpacerItem *horizontalSpacer_2;
    QWidget *buttonsStack;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_41;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QDialog *RequestDialog)
    {
        if (RequestDialog->objectName().isEmpty())
            RequestDialog->setObjectName(QString::fromUtf8("RequestDialog"));
        RequestDialog->resize(602, 607);
        verticalLayout_5 = new QVBoxLayout(RequestDialog);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(RequestDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 20, 30, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_21);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QString::fromUtf8("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QString::fromUtf8("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));
        btnEsc->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout_4->addLayout(horizontalLayout_3);

        stack = new QStackedWidget(frame);
        stack->setObjectName(QString::fromUtf8("stack"));
        stack->setMinimumSize(QSize(540, 0));
        stack->setMaximumSize(QSize(540, 16777215));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        page_1->setMinimumSize(QSize(540, 0));
        page_1->setMaximumSize(QSize(540, 16777215));
        layout1 = new QVBoxLayout(page_1);
        layout1->setSpacing(0);
        layout1->setObjectName(QString::fromUtf8("layout1"));
        layout1->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_21 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout1->addItem(verticalSpacer_21);

        labelMessage = new QLabel(page_1);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setMinimumSize(QSize(400, 50));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        layout1->addWidget(labelMessage, 0, Qt::AlignHCenter);

        containerAmount = new QWidget(page_1);
        containerAmount->setObjectName(QString::fromUtf8("containerAmount"));
        verticalLayout = new QVBoxLayout(containerAmount);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelSubtitleAmount = new QLabel(containerAmount);
        labelSubtitleAmount->setObjectName(QString::fromUtf8("labelSubtitleAmount"));
        labelSubtitleAmount->setMinimumSize(QSize(350, 16));
        labelSubtitleAmount->setMaximumSize(QSize(16777215, 16));

        verticalLayout->addWidget(labelSubtitleAmount);

        layoutAmount = new QWidget(containerAmount);
        layoutAmount->setObjectName(QString::fromUtf8("layoutAmount"));
        horizontalLayout = new QHBoxLayout(layoutAmount);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAmount = new QLineEdit(layoutAmount);
        lineEditAmount->setObjectName(QString::fromUtf8("lineEditAmount"));
        lineEditAmount->setMinimumSize(QSize(0, 50));
        lineEditAmount->setMaximumSize(QSize(16777215, 50));
        lineEditAmount->setPlaceholderText(QString::fromUtf8("0.00"));

        horizontalLayout->addWidget(lineEditAmount);

        comboContainer = new QWidget(layoutAmount);
        comboContainer->setObjectName(QString::fromUtf8("comboContainer"));
        comboContainer->setMinimumSize(QSize(100, 50));
        comboContainer->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_31 = new QHBoxLayout(comboContainer);
        horizontalLayout_31->setSpacing(0);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, 0, 10, 0);
        comboBoxCoin = new QLabel(comboContainer);
        comboBoxCoin->setObjectName(QString::fromUtf8("comboBoxCoin"));
        comboBoxCoin->setAlignment(Qt::AlignCenter);

        horizontalLayout_31->addWidget(comboBoxCoin);


        horizontalLayout->addWidget(comboContainer);

        horizontalLayout->setStretch(0, 2);

        verticalLayout->addWidget(layoutAmount, 0, Qt::AlignTop);


        layout1->addWidget(containerAmount, 0, Qt::AlignBottom);

        verticalSpacer_31 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout1->addItem(verticalSpacer_31);

        verticalLayoutLabel = new QVBoxLayout();
        verticalLayoutLabel->setSpacing(9);
        verticalLayoutLabel->setObjectName(QString::fromUtf8("verticalLayoutLabel"));
        labelSubtitleLabel = new QLabel(page_1);
        labelSubtitleLabel->setObjectName(QString::fromUtf8("labelSubtitleLabel"));
        labelSubtitleLabel->setMinimumSize(QSize(0, 16));
        labelSubtitleLabel->setMaximumSize(QSize(16777215, 16));

        verticalLayoutLabel->addWidget(labelSubtitleLabel);

        lineEditLabel = new QLineEdit(page_1);
        lineEditLabel->setObjectName(QString::fromUtf8("lineEditLabel"));
        lineEditLabel->setMinimumSize(QSize(0, 50));
        lineEditLabel->setMaximumSize(QSize(16777215, 50));

        verticalLayoutLabel->addWidget(lineEditLabel);


        layout1->addLayout(verticalLayoutLabel);

        verticalSpacer_34 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout1->addItem(verticalSpacer_34);

        verticalLayoutDescription = new QVBoxLayout();
        verticalLayoutDescription->setSpacing(9);
        verticalLayoutDescription->setObjectName(QString::fromUtf8("verticalLayoutDescription"));
        labelSubtitleDescription = new QLabel(page_1);
        labelSubtitleDescription->setObjectName(QString::fromUtf8("labelSubtitleDescription"));
        labelSubtitleDescription->setMinimumSize(QSize(0, 16));
        labelSubtitleDescription->setMaximumSize(QSize(16777215, 16));

        verticalLayoutDescription->addWidget(labelSubtitleDescription);

        lineEditDescription = new QLineEdit(page_1);
        lineEditDescription->setObjectName(QString::fromUtf8("lineEditDescription"));
        lineEditDescription->setMinimumSize(QSize(0, 50));
        lineEditDescription->setMaximumSize(QSize(16777215, 50));

        verticalLayoutDescription->addWidget(lineEditDescription);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutDescription->addItem(verticalSpacer_4);


        layout1->addLayout(verticalLayoutDescription);

        stack->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        layout2 = new QVBoxLayout(page_2);
        layout2->setObjectName(QString::fromUtf8("layout2"));
        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout2->addItem(verticalSpacer_5);

        labelQrImg = new QLabel(page_2);
        labelQrImg->setObjectName(QString::fromUtf8("labelQrImg"));
        labelQrImg->setMinimumSize(QSize(260, 260));
        labelQrImg->setMaximumSize(QSize(260, 260));
        labelQrImg->setAlignment(Qt::AlignCenter);

        layout2->addWidget(labelQrImg, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout2->addItem(verticalSpacer_2);

        labelAddress = new QLabel(page_2);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));

        layout2->addWidget(labelAddress, 0, Qt::AlignHCenter);

        verticalSpacer_32 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout2->addItem(verticalSpacer_32);

        horizontal = new QHBoxLayout();
        horizontal->setObjectName(QString::fromUtf8("horizontal"));
        horizontal->setContentsMargins(20, -1, 20, 20);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontal->addItem(horizontalSpacer_4);

        btnCopyAddress = new QPushButton(page_2);
        btnCopyAddress->setObjectName(QString::fromUtf8("btnCopyAddress"));
        btnCopyAddress->setMinimumSize(QSize(180, 50));

        horizontal->addWidget(btnCopyAddress);

        btnCopyUrl = new QPushButton(page_2);
        btnCopyUrl->setObjectName(QString::fromUtf8("btnCopyUrl"));
        btnCopyUrl->setMinimumSize(QSize(180, 50));

        horizontal->addWidget(btnCopyUrl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontal->addItem(horizontalSpacer_2);


        layout2->addLayout(horizontal);

        stack->addWidget(page_2);

        verticalLayout_4->addWidget(stack);

        buttonsStack = new QWidget(frame);
        buttonsStack->setObjectName(QString::fromUtf8("buttonsStack"));
        horizontalLayout_5 = new QHBoxLayout(buttonsStack);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, -1, 0, -1);
        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_41);

        btnCancel = new QPushButton(buttonsStack);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(180, 50));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(btnCancel);

        btnSave = new QPushButton(buttonsStack);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(180, 50));
        btnSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(btnSave);


        verticalLayout_4->addWidget(buttonsStack);

        verticalLayout_4->setStretch(0, 1);

        verticalLayout_5->addWidget(frame);


        retranslateUi(RequestDialog);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RequestDialog);
    } // setupUi

    void retranslateUi(QDialog *RequestDialog)
    {
        RequestDialog->setWindowTitle(QCoreApplication::translate("RequestDialog", "Dialog", nullptr));
        labelTitle->setText(QCoreApplication::translate("RequestDialog", "New Payment Request", nullptr));
        btnEsc->setText(QString());
        labelMessage->setText(QCoreApplication::translate("RequestDialog", "Instead of sharing only a BIR address, you can create a payment request, bundling up more information", nullptr));
        labelSubtitleAmount->setText(QCoreApplication::translate("RequestDialog", "Amount", nullptr));
        comboBoxCoin->setText(QCoreApplication::translate("RequestDialog", "BIR", nullptr));
        labelSubtitleLabel->setText(QCoreApplication::translate("RequestDialog", "Label", nullptr));
        lineEditLabel->setPlaceholderText(QCoreApplication::translate("RequestDialog", "Enter a label for the address", nullptr));
        labelSubtitleDescription->setText(QCoreApplication::translate("RequestDialog", "Description (optional)", nullptr));
        lineEditDescription->setPlaceholderText(QCoreApplication::translate("RequestDialog", "Enter description", nullptr));
        labelQrImg->setText(QString());
        labelAddress->setText(QCoreApplication::translate("RequestDialog", "D7VFR83SQbiezrW72hjcWJtcfip5krte2Z ", nullptr));
        btnCopyAddress->setText(QCoreApplication::translate("RequestDialog", "COPY ADDRESS", nullptr));
        btnCopyUrl->setText(QCoreApplication::translate("RequestDialog", "COPY URL", nullptr));
        btnCancel->setText(QCoreApplication::translate("RequestDialog", "CANCEL", nullptr));
        btnSave->setText(QCoreApplication::translate("RequestDialog", "GENERATE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RequestDialog: public Ui_RequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTDIALOG_H

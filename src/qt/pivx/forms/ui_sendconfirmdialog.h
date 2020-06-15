/********************************************************************************
** Form generated from reading UI file 'sendconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCONFIRMDIALOG_H
#define UI_SENDCONFIRMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TxDetailDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_1;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer;
    QWidget *layoutScroll;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QWidget *content;
    QVBoxLayout *verticalLayout_2;
    QWidget *contentID;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *contentID_int;
    QLabel *labelId;
    QLabel *textId;
    QPushButton *pushCopy;
    QLabel *labelDividerID;
    QWidget *contentOutputsLabel;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *contentOutputsLabel_int;
    QLabel *labelSend;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QLabel *textSendLabel;
    QLabel *textSend;
    QPushButton *pushOutputs;
    QScrollArea *outputsScrollArea;
    QWidget *container_outputs_base;
    QLabel *labelDividerOutputs;
    QWidget *gridAmounts;
    QGridLayout *contentAmountInputs;
    QLabel *textAmount;
    QLabel *labelAmount;
    QLabel *labelInputs;
    QHBoxLayout *horizontalLayout;
    QLabel *textInputs;
    QPushButton *pushInputs;
    QFrame *gridInputs;
    QGridLayout *gridLayoutInput;
    QLabel *labelOutputIndex;
    QLabel *labelTitlePrevTx;
    QLabel *labelDividerPrevtx;
    QHBoxLayout *contentFeeSize;
    QVBoxLayout *contentFee;
    QLabel *labelFee;
    QLabel *textFee;
    QWidget *contentSize;
    QVBoxLayout *contentSize_layout;
    QLabel *labelSize;
    QLabel *textSize;
    QLabel *labelDividerFeeSize;
    QWidget *contentChangeAddress;
    QVBoxLayout *contentChangeAddress_layout;
    QLabel *labelChange;
    QLabel *textChange;
    QLabel *labelDividerChange;
    QWidget *gridConfDateStatus;
    QGridLayout *contentConfDateStatus;
    QLabel *textStatus;
    QLabel *labelConfirmations;
    QLabel *labelStatus;
    QLabel *textConfirmations;
    QLabel *labelDate;
    QLabel *textDate;
    QLabel *labelDividerConfs;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelWarning;
    QWidget *containerButtons;
    QHBoxLayout *horizontalLayout1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *TxDetailDialog)
    {
        if (TxDetailDialog->objectName().isEmpty())
            TxDetailDialog->setObjectName(QString::fromUtf8("TxDetailDialog"));
        TxDetailDialog->resize(604, 698);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TxDetailDialog->sizePolicy().hasHeightForWidth());
        TxDetailDialog->setSizePolicy(sizePolicy);
        TxDetailDialog->setMinimumSize(QSize(574, 500));
        TxDetailDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(TxDetailDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(TxDetailDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 10, 20, -1);
        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_1);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QString::fromUtf8("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QString::fromUtf8("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));
        btnEsc->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        layoutScroll = new QWidget(frame);
        layoutScroll->setObjectName(QString::fromUtf8("layoutScroll"));
        layoutScroll->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(layoutScroll);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, -1);
        scrollArea = new QScrollArea(layoutScroll);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea {\n"
"background:transparent;\n"
"}"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 586, 644));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents {\n"
"background:transparent;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        content = new QWidget(scrollAreaWidgetContents);
        content->setObjectName(QString::fromUtf8("content"));
        verticalLayout_2 = new QVBoxLayout(content);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(16, 0, 16, -1);
        contentID = new QWidget(content);
        contentID->setObjectName(QString::fromUtf8("contentID"));
        horizontalLayout_12 = new QHBoxLayout(contentID);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, -1, 0, -1);
        contentID_int = new QVBoxLayout();
        contentID_int->setObjectName(QString::fromUtf8("contentID_int"));
        labelId = new QLabel(contentID);
        labelId->setObjectName(QString::fromUtf8("labelId"));
        labelId->setMaximumSize(QSize(16777215, 16777215));

        contentID_int->addWidget(labelId);

        textId = new QLabel(contentID);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setText(QString::fromUtf8("N/A"));

        contentID_int->addWidget(textId);


        horizontalLayout_12->addLayout(contentID_int);

        pushCopy = new QPushButton(contentID);
        pushCopy->setObjectName(QString::fromUtf8("pushCopy"));
        pushCopy->setMinimumSize(QSize(34, 34));
        pushCopy->setMaximumSize(QSize(34, 34));
        pushCopy->setFocusPolicy(Qt::NoFocus);
        pushCopy->setIconSize(QSize(24, 24));

        horizontalLayout_12->addWidget(pushCopy);


        verticalLayout_2->addWidget(contentID);

        labelDividerID = new QLabel(content);
        labelDividerID->setObjectName(QString::fromUtf8("labelDividerID"));
        labelDividerID->setMaximumSize(QSize(16777215, 1));
        labelDividerID->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerID);

        contentOutputsLabel = new QWidget(content);
        contentOutputsLabel->setObjectName(QString::fromUtf8("contentOutputsLabel"));
        horizontalLayout_11 = new QHBoxLayout(contentOutputsLabel);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 9, 0, 9);
        contentOutputsLabel_int = new QVBoxLayout();
        contentOutputsLabel_int->setObjectName(QString::fromUtf8("contentOutputsLabel_int"));
        contentOutputsLabel_int->setContentsMargins(0, 1, 6, 1);
        labelSend = new QLabel(contentOutputsLabel);
        labelSend->setObjectName(QString::fromUtf8("labelSend"));
        labelSend->setMaximumSize(QSize(16777215, 16777215));

        contentOutputsLabel_int->addWidget(labelSend);

        widget = new QWidget(contentOutputsLabel);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        textSendLabel = new QLabel(widget);
        textSendLabel->setObjectName(QString::fromUtf8("textSendLabel"));
        textSendLabel->setText(QString::fromUtf8("N/A"));

        verticalLayout_6->addWidget(textSendLabel);

        textSend = new QLabel(widget);
        textSend->setObjectName(QString::fromUtf8("textSend"));
        textSend->setText(QString::fromUtf8("N/A"));

        verticalLayout_6->addWidget(textSend);


        contentOutputsLabel_int->addWidget(widget);


        horizontalLayout_11->addLayout(contentOutputsLabel_int);

        pushOutputs = new QPushButton(contentOutputsLabel);
        pushOutputs->setObjectName(QString::fromUtf8("pushOutputs"));
        pushOutputs->setMinimumSize(QSize(34, 20));
        pushOutputs->setMaximumSize(QSize(38, 20));
        pushOutputs->setFocusPolicy(Qt::NoFocus);
        pushOutputs->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_11->addWidget(pushOutputs);


        verticalLayout_2->addWidget(contentOutputsLabel);

        outputsScrollArea = new QScrollArea(content);
        outputsScrollArea->setObjectName(QString::fromUtf8("outputsScrollArea"));
        outputsScrollArea->setMinimumSize(QSize(0, 50));
        outputsScrollArea->setStyleSheet(QString::fromUtf8("#outputsScrollArea {\n"
"background:transparent;\n"
"}"));
        outputsScrollArea->setWidgetResizable(true);
        container_outputs_base = new QWidget();
        container_outputs_base->setObjectName(QString::fromUtf8("container_outputs_base"));
        container_outputs_base->setGeometry(QRect(0, 0, 552, 48));
        container_outputs_base->setStyleSheet(QString::fromUtf8("#container_outputs_base {\n"
"background:transparent;\n"
"}"));
        outputsScrollArea->setWidget(container_outputs_base);

        verticalLayout_2->addWidget(outputsScrollArea);

        labelDividerOutputs = new QLabel(content);
        labelDividerOutputs->setObjectName(QString::fromUtf8("labelDividerOutputs"));
        labelDividerOutputs->setMaximumSize(QSize(16777215, 1));
        labelDividerOutputs->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerOutputs);

        gridAmounts = new QWidget(content);
        gridAmounts->setObjectName(QString::fromUtf8("gridAmounts"));
        contentAmountInputs = new QGridLayout(gridAmounts);
        contentAmountInputs->setObjectName(QString::fromUtf8("contentAmountInputs"));
        contentAmountInputs->setHorizontalSpacing(12);
        contentAmountInputs->setContentsMargins(0, 9, 0, 9);
        textAmount = new QLabel(gridAmounts);
        textAmount->setObjectName(QString::fromUtf8("textAmount"));
        textAmount->setText(QString::fromUtf8("N/A"));

        contentAmountInputs->addWidget(textAmount, 1, 0, 1, 1);

        labelAmount = new QLabel(gridAmounts);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));
        labelAmount->setMaximumSize(QSize(16777215, 16777215));

        contentAmountInputs->addWidget(labelAmount, 0, 0, 1, 1);

        labelInputs = new QLabel(gridAmounts);
        labelInputs->setObjectName(QString::fromUtf8("labelInputs"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelInputs->sizePolicy().hasHeightForWidth());
        labelInputs->setSizePolicy(sizePolicy1);
        labelInputs->setMaximumSize(QSize(16777215, 16777215));
        labelInputs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentAmountInputs->addWidget(labelInputs, 0, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textInputs = new QLabel(gridAmounts);
        textInputs->setObjectName(QString::fromUtf8("textInputs"));
        textInputs->setText(QString::fromUtf8("N/A"));
        textInputs->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(textInputs);

        pushInputs = new QPushButton(gridAmounts);
        pushInputs->setObjectName(QString::fromUtf8("pushInputs"));
        pushInputs->setMaximumSize(QSize(34, 20));
        pushInputs->setFocusPolicy(Qt::NoFocus);
        pushInputs->setLayoutDirection(Qt::LeftToRight);
        pushInputs->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushInputs);


        contentAmountInputs->addLayout(horizontalLayout, 1, 3, 1, 1);


        verticalLayout_2->addWidget(gridAmounts);

        gridInputs = new QFrame(content);
        gridInputs->setObjectName(QString::fromUtf8("gridInputs"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(gridInputs->sizePolicy().hasHeightForWidth());
        gridInputs->setSizePolicy(sizePolicy2);
        gridInputs->setMinimumSize(QSize(0, 90));
        gridInputs->setLineWidth(0);
        gridLayoutInput = new QGridLayout(gridInputs);
        gridLayoutInput->setObjectName(QString::fromUtf8("gridLayoutInput"));
        gridLayoutInput->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayoutInput->setVerticalSpacing(0);
        gridLayoutInput->setContentsMargins(0, -1, 0, -1);
        labelOutputIndex = new QLabel(gridInputs);
        labelOutputIndex->setObjectName(QString::fromUtf8("labelOutputIndex"));
        labelOutputIndex->setLayoutDirection(Qt::LeftToRight);
        labelOutputIndex->setTextFormat(Qt::AutoText);
        labelOutputIndex->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelOutputIndex->setMargin(0);

        gridLayoutInput->addWidget(labelOutputIndex, 0, 1, 1, 1);

        labelTitlePrevTx = new QLabel(gridInputs);
        labelTitlePrevTx->setObjectName(QString::fromUtf8("labelTitlePrevTx"));

        gridLayoutInput->addWidget(labelTitlePrevTx, 0, 0, 1, 1, Qt::AlignLeft);

        gridLayoutInput->setColumnStretch(0, 5);

        verticalLayout_2->addWidget(gridInputs);

        labelDividerPrevtx = new QLabel(content);
        labelDividerPrevtx->setObjectName(QString::fromUtf8("labelDividerPrevtx"));
        labelDividerPrevtx->setMaximumSize(QSize(16777215, 1));
        labelDividerPrevtx->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerPrevtx);

        contentFeeSize = new QHBoxLayout();
        contentFeeSize->setObjectName(QString::fromUtf8("contentFeeSize"));
        contentFeeSize->setContentsMargins(-1, 9, -1, 9);
        contentFee = new QVBoxLayout();
        contentFee->setObjectName(QString::fromUtf8("contentFee"));
        contentFee->setContentsMargins(-1, 0, -1, 0);
        labelFee = new QLabel(content);
        labelFee->setObjectName(QString::fromUtf8("labelFee"));
        labelFee->setMaximumSize(QSize(16777215, 16777215));

        contentFee->addWidget(labelFee);

        textFee = new QLabel(content);
        textFee->setObjectName(QString::fromUtf8("textFee"));
        textFee->setText(QString::fromUtf8("N/A"));

        contentFee->addWidget(textFee);


        contentFeeSize->addLayout(contentFee);

        contentSize = new QWidget(content);
        contentSize->setObjectName(QString::fromUtf8("contentSize"));
        contentSize_layout = new QVBoxLayout(contentSize);
        contentSize_layout->setObjectName(QString::fromUtf8("contentSize_layout"));
        contentSize_layout->setContentsMargins(-1, 0, 0, 0);
        labelSize = new QLabel(contentSize);
        labelSize->setObjectName(QString::fromUtf8("labelSize"));
        labelSize->setMaximumSize(QSize(16777215, 16777215));
        labelSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentSize_layout->addWidget(labelSize);

        textSize = new QLabel(contentSize);
        textSize->setObjectName(QString::fromUtf8("textSize"));
        textSize->setText(QString::fromUtf8("N/A"));
        textSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentSize_layout->addWidget(textSize);


        contentFeeSize->addWidget(contentSize);


        verticalLayout_2->addLayout(contentFeeSize);

        labelDividerFeeSize = new QLabel(content);
        labelDividerFeeSize->setObjectName(QString::fromUtf8("labelDividerFeeSize"));
        labelDividerFeeSize->setMaximumSize(QSize(16777215, 1));
        labelDividerFeeSize->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerFeeSize);

        contentChangeAddress = new QWidget(content);
        contentChangeAddress->setObjectName(QString::fromUtf8("contentChangeAddress"));
        contentChangeAddress_layout = new QVBoxLayout(contentChangeAddress);
        contentChangeAddress_layout->setObjectName(QString::fromUtf8("contentChangeAddress_layout"));
        contentChangeAddress_layout->setContentsMargins(0, 9, 0, 9);
        labelChange = new QLabel(contentChangeAddress);
        labelChange->setObjectName(QString::fromUtf8("labelChange"));
        labelChange->setMaximumSize(QSize(16777215, 16777215));

        contentChangeAddress_layout->addWidget(labelChange);

        textChange = new QLabel(contentChangeAddress);
        textChange->setObjectName(QString::fromUtf8("textChange"));

        contentChangeAddress_layout->addWidget(textChange);


        verticalLayout_2->addWidget(contentChangeAddress);

        labelDividerChange = new QLabel(content);
        labelDividerChange->setObjectName(QString::fromUtf8("labelDividerChange"));
        labelDividerChange->setMaximumSize(QSize(16777215, 1));
        labelDividerChange->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerChange);

        gridConfDateStatus = new QWidget(content);
        gridConfDateStatus->setObjectName(QString::fromUtf8("gridConfDateStatus"));
        contentConfDateStatus = new QGridLayout(gridConfDateStatus);
        contentConfDateStatus->setObjectName(QString::fromUtf8("contentConfDateStatus"));
        contentConfDateStatus->setContentsMargins(0, -1, 0, -1);
        textStatus = new QLabel(gridConfDateStatus);
        textStatus->setObjectName(QString::fromUtf8("textStatus"));
        textStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(textStatus, 1, 3, 1, 1);

        labelConfirmations = new QLabel(gridConfDateStatus);
        labelConfirmations->setObjectName(QString::fromUtf8("labelConfirmations"));
        labelConfirmations->setMaximumSize(QSize(16777215, 16777215));
        labelConfirmations->setAlignment(Qt::AlignCenter);

        contentConfDateStatus->addWidget(labelConfirmations, 0, 1, 1, 1);

        labelStatus = new QLabel(gridConfDateStatus);
        labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
        labelStatus->setMaximumSize(QSize(16777215, 16777215));
        labelStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(labelStatus, 0, 3, 1, 1);

        textConfirmations = new QLabel(gridConfDateStatus);
        textConfirmations->setObjectName(QString::fromUtf8("textConfirmations"));
        textConfirmations->setText(QString::fromUtf8("N/A"));
        textConfirmations->setAlignment(Qt::AlignCenter);

        contentConfDateStatus->addWidget(textConfirmations, 1, 1, 1, 1);

        labelDate = new QLabel(gridConfDateStatus);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setMaximumSize(QSize(16777215, 16777215));
        labelDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(labelDate, 0, 0, 1, 1);

        textDate = new QLabel(gridConfDateStatus);
        textDate->setObjectName(QString::fromUtf8("textDate"));
        textDate->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        contentConfDateStatus->addWidget(textDate, 1, 0, 1, 1);


        verticalLayout_2->addWidget(gridConfDateStatus);

        labelDividerConfs = new QLabel(content);
        labelDividerConfs->setObjectName(QString::fromUtf8("labelDividerConfs"));
        labelDividerConfs->setMaximumSize(QSize(16777215, 1));
        labelDividerConfs->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDividerConfs);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelWarning = new QLabel(content);
        labelWarning->setObjectName(QString::fromUtf8("labelWarning"));
        labelWarning->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelWarning);


        verticalLayout_7->addWidget(content);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout->addWidget(layoutScroll);

        containerButtons = new QWidget(frame);
        containerButtons->setObjectName(QString::fromUtf8("containerButtons"));
        horizontalLayout1 = new QHBoxLayout(containerButtons);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(10, -1, 20, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer_3);

        btnCancel = new QPushButton(containerButtons);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(200, 50));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout1->addWidget(btnCancel);

        btnSave = new QPushButton(containerButtons);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(200, 50));
        btnSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout1->addWidget(btnSave);

        horizontalLayout1->setStretch(0, 1);
        horizontalLayout1->setStretch(1, 2);
        horizontalLayout1->setStretch(2, 2);

        verticalLayout->addWidget(containerButtons);


        verticalLayout_3->addWidget(frame);


        retranslateUi(TxDetailDialog);

        QMetaObject::connectSlotsByName(TxDetailDialog);
    } // setupUi

    void retranslateUi(QWidget *TxDetailDialog)
    {
        TxDetailDialog->setWindowTitle(QCoreApplication::translate("TxDetailDialog", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("TxDetailDialog", "Transaction Details", nullptr));
        btnEsc->setText(QString());
        labelId->setText(QCoreApplication::translate("TxDetailDialog", "ID", nullptr));
        pushCopy->setText(QString());
        labelDividerID->setText(QString());
        labelSend->setText(QCoreApplication::translate("TxDetailDialog", "Sending to", nullptr));
        pushOutputs->setText(QString());
        labelDividerOutputs->setText(QString());
        labelAmount->setText(QCoreApplication::translate("TxDetailDialog", "Total amount", nullptr));
        labelInputs->setText(QCoreApplication::translate("TxDetailDialog", "Coin inputs", nullptr));
        pushInputs->setText(QString());
        labelOutputIndex->setText(QCoreApplication::translate("TxDetailDialog", "Output Index", nullptr));
        labelTitlePrevTx->setText(QCoreApplication::translate("TxDetailDialog", "Previous Transaction", nullptr));
        labelDividerPrevtx->setText(QString());
        labelFee->setText(QCoreApplication::translate("TxDetailDialog", "Fee", nullptr));
        labelSize->setText(QCoreApplication::translate("TxDetailDialog", "Size", nullptr));
        labelDividerFeeSize->setText(QString());
        labelChange->setText(QCoreApplication::translate("TxDetailDialog", "Change address", nullptr));
        textChange->setText(QCoreApplication::translate("TxDetailDialog", "D7VFR83SQbie\342\200\246BhjcWJtcfip5krte2Z ", nullptr));
        labelDividerChange->setText(QString());
        textStatus->setText(QCoreApplication::translate("TxDetailDialog", "Spendable", nullptr));
        labelConfirmations->setText(QCoreApplication::translate("TxDetailDialog", "Confirmations", nullptr));
        labelStatus->setText(QCoreApplication::translate("TxDetailDialog", "Status", nullptr));
        labelDate->setText(QCoreApplication::translate("TxDetailDialog", "Date", nullptr));
        textDate->setText(QCoreApplication::translate("TxDetailDialog", "May 25, 2017", nullptr));
        labelDividerConfs->setText(QString());
        labelWarning->setText(QCoreApplication::translate("TxDetailDialog", "TextLabel", nullptr));
        btnCancel->setText(QCoreApplication::translate("TxDetailDialog", "CANCEL", nullptr));
        btnSave->setText(QCoreApplication::translate("TxDetailDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TxDetailDialog: public Ui_TxDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCONFIRMDIALOG_H

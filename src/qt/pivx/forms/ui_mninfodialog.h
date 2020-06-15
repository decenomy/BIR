/********************************************************************************
** Form generated from reading UI file 'mninfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNINFODIALOG_H
#define UI_MNINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MnInfoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
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
    QLabel *labelId;
    QLabel *textId;
    QPushButton *pushCopy;
    QLabel *labelDivider9;
    QWidget *contentOutputs;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelSend;
    QLabel *textAddress;
    QLabel *labelDivider8;
    QWidget *contentAmount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAmount;
    QLabel *textAmount;
    QPushButton *pushCopyId;
    QLabel *labelDivider6;
    QWidget *contentInputs;
    QHBoxLayout *horizontalLayout;
    QLabel *labelInputs;
    QLabel *textInputs;
    QLabel *labelDivider1;
    QWidget *contentFee;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelFee;
    QLabel *textStatus;
    QLabel *labelDivider4;
    QWidget *contentExport;
    QHBoxLayout *horizontalLayout_8;
    QLabel *textExport;
    QPushButton *pushExport;
    QLabel *labelDivider7;

    void setupUi(QWidget *MnInfoDialog)
    {
        if (MnInfoDialog->objectName().isEmpty())
            MnInfoDialog->setObjectName(QString::fromUtf8("MnInfoDialog"));
        MnInfoDialog->resize(574, 700);
        MnInfoDialog->setMinimumSize(QSize(574, 530));
        MnInfoDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(MnInfoDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(MnInfoDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
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
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

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
        btnEsc->setStyleSheet(QString::fromUtf8("border:none;"));

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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 570, 596));
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
        horizontalLayout_12->setContentsMargins(0, -1, -1, -1);
        labelId = new QLabel(contentID);
        labelId->setObjectName(QString::fromUtf8("labelId"));
        labelId->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_12->addWidget(labelId);

        textId = new QLabel(contentID);
        textId->setObjectName(QString::fromUtf8("textId"));
        textId->setText(QString::fromUtf8("492526e7fa3c810b35016...40a5df85ee227ab00b1156994"));

        horizontalLayout_12->addWidget(textId);

        pushCopy = new QPushButton(contentID);
        pushCopy->setObjectName(QString::fromUtf8("pushCopy"));
        pushCopy->setMinimumSize(QSize(34, 34));
        pushCopy->setMaximumSize(QSize(34, 34));
        pushCopy->setFocusPolicy(Qt::NoFocus);
        pushCopy->setIconSize(QSize(24, 24));

        horizontalLayout_12->addWidget(pushCopy);

        horizontalLayout_12->setStretch(1, 1);

        verticalLayout_2->addWidget(contentID);

        labelDivider9 = new QLabel(content);
        labelDivider9->setObjectName(QString::fromUtf8("labelDivider9"));
        labelDivider9->setMaximumSize(QSize(16777215, 1));
        labelDivider9->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider9);

        contentOutputs = new QWidget(content);
        contentOutputs->setObjectName(QString::fromUtf8("contentOutputs"));
        horizontalLayout_11 = new QHBoxLayout(contentOutputs);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, -1, 12, -1);
        labelSend = new QLabel(contentOutputs);
        labelSend->setObjectName(QString::fromUtf8("labelSend"));
        labelSend->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_11->addWidget(labelSend);

        textAddress = new QLabel(contentOutputs);
        textAddress->setObjectName(QString::fromUtf8("textAddress"));
        textAddress->setText(QString::fromUtf8("127.0.0.2:43223"));

        horizontalLayout_11->addWidget(textAddress);

        horizontalLayout_11->setStretch(1, 3);

        verticalLayout_2->addWidget(contentOutputs);

        labelDivider8 = new QLabel(content);
        labelDivider8->setObjectName(QString::fromUtf8("labelDivider8"));
        labelDivider8->setMaximumSize(QSize(16777215, 1));
        labelDivider8->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider8);

        contentAmount = new QWidget(content);
        contentAmount->setObjectName(QString::fromUtf8("contentAmount"));
        horizontalLayout_4 = new QHBoxLayout(contentAmount);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        labelAmount = new QLabel(contentAmount);
        labelAmount->setObjectName(QString::fromUtf8("labelAmount"));
        labelAmount->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(labelAmount);

        textAmount = new QLabel(contentAmount);
        textAmount->setObjectName(QString::fromUtf8("textAmount"));
        textAmount->setText(QString::fromUtf8("492526e7fa3c810b35016...40a5df85ee227ab00b1156994"));

        horizontalLayout_4->addWidget(textAmount);

        pushCopyId = new QPushButton(contentAmount);
        pushCopyId->setObjectName(QString::fromUtf8("pushCopyId"));
        pushCopyId->setMinimumSize(QSize(34, 34));
        pushCopyId->setMaximumSize(QSize(34, 34));
        pushCopyId->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_4->addWidget(pushCopyId);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addWidget(contentAmount);

        labelDivider6 = new QLabel(content);
        labelDivider6->setObjectName(QString::fromUtf8("labelDivider6"));
        labelDivider6->setMaximumSize(QSize(16777215, 1));
        labelDivider6->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider6);

        contentInputs = new QWidget(content);
        contentInputs->setObjectName(QString::fromUtf8("contentInputs"));
        horizontalLayout = new QHBoxLayout(contentInputs);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 12, -1);
        labelInputs = new QLabel(contentInputs);
        labelInputs->setObjectName(QString::fromUtf8("labelInputs"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelInputs->sizePolicy().hasHeightForWidth());
        labelInputs->setSizePolicy(sizePolicy);
        labelInputs->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(labelInputs);

        textInputs = new QLabel(contentInputs);
        textInputs->setObjectName(QString::fromUtf8("textInputs"));

        horizontalLayout->addWidget(textInputs);

        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(contentInputs);

        labelDivider1 = new QLabel(content);
        labelDivider1->setObjectName(QString::fromUtf8("labelDivider1"));
        labelDivider1->setMaximumSize(QSize(16777215, 1));
        labelDivider1->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider1);

        contentFee = new QWidget(content);
        contentFee->setObjectName(QString::fromUtf8("contentFee"));
        horizontalLayout_7 = new QHBoxLayout(contentFee);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, -1, -1, -1);
        labelFee = new QLabel(contentFee);
        labelFee->setObjectName(QString::fromUtf8("labelFee"));
        labelFee->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(labelFee);

        textStatus = new QLabel(contentFee);
        textStatus->setObjectName(QString::fromUtf8("textStatus"));
        textStatus->setText(QString::fromUtf8("MISSING"));

        horizontalLayout_7->addWidget(textStatus);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_2->addWidget(contentFee);

        labelDivider4 = new QLabel(content);
        labelDivider4->setObjectName(QString::fromUtf8("labelDivider4"));
        labelDivider4->setMaximumSize(QSize(16777215, 1));
        labelDivider4->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider4);

        contentExport = new QWidget(content);
        contentExport->setObjectName(QString::fromUtf8("contentExport"));
        horizontalLayout_8 = new QHBoxLayout(contentExport);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, -1, -1, -1);
        textExport = new QLabel(contentExport);
        textExport->setObjectName(QString::fromUtf8("textExport"));
        textExport->setStyleSheet(QString::fromUtf8("padding-top:1px;"));
        textExport->setLineWidth(0);
        textExport->setWordWrap(true);
        textExport->setIndent(0);

        horizontalLayout_8->addWidget(textExport);

        pushExport = new QPushButton(contentExport);
        pushExport->setObjectName(QString::fromUtf8("pushExport"));
        pushExport->setMinimumSize(QSize(34, 34));
        pushExport->setMaximumSize(QSize(34, 34));
        pushExport->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_8->addWidget(pushExport);

        horizontalLayout_8->setStretch(0, 3);

        verticalLayout_2->addWidget(contentExport);

        labelDivider7 = new QLabel(content);
        labelDivider7->setObjectName(QString::fromUtf8("labelDivider7"));
        labelDivider7->setMaximumSize(QSize(16777215, 1));
        labelDivider7->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider7);


        verticalLayout_7->addWidget(content);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout->addWidget(layoutScroll);


        verticalLayout_3->addWidget(frame);


        retranslateUi(MnInfoDialog);

        QMetaObject::connectSlotsByName(MnInfoDialog);
    } // setupUi

    void retranslateUi(QWidget *MnInfoDialog)
    {
        MnInfoDialog->setWindowTitle(QCoreApplication::translate("MnInfoDialog", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("MnInfoDialog", "Masternode Information", nullptr));
        btnEsc->setText(QString());
        labelId->setText(QCoreApplication::translate("MnInfoDialog", "Public Key:", nullptr));
        pushCopy->setText(QString());
        labelDivider9->setText(QString());
        labelSend->setText(QCoreApplication::translate("MnInfoDialog", "Address: ", nullptr));
        labelDivider8->setText(QString());
        labelAmount->setText(QCoreApplication::translate("MnInfoDialog", "Collaterall tx id:", nullptr));
        pushCopyId->setText(QString());
        labelDivider6->setText(QString());
        labelInputs->setText(QCoreApplication::translate("MnInfoDialog", "Output index:", nullptr));
        textInputs->setText(QCoreApplication::translate("MnInfoDialog", "1 Inputs", nullptr));
        labelDivider1->setText(QString());
        labelFee->setText(QCoreApplication::translate("MnInfoDialog", "Status:", nullptr));
        labelDivider4->setText(QString());
        textExport->setText(QCoreApplication::translate("MnInfoDialog", "Export data to run the Masternode on a remote server", nullptr));
        pushExport->setText(QString());
        labelDivider7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MnInfoDialog: public Ui_MnInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNINFODIALOG_H

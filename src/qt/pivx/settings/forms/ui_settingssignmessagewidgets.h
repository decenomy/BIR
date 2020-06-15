/********************************************************************************
** Form generated from reading UI file 'settingssignmessagewidgets.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSSIGNMESSAGEWIDGETS_H
#define UI_SETTINGSSIGNMESSAGEWIDGETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsSignMessageWidgets
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QWidget *container_sign;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QWidget *containerSwitch;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushSign;
    QPushButton *pushVerify;
    QLabel *labelSubtitleSwitch;
    QSpacerItem *verticalSpacer_2;
    QWidget *containerAddress;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelSubtitleAddress;
    QLineEdit *addressIn_SM;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelSubtitleMessage;
    QPlainTextEdit *messageIn_SM;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelSubtitleSignature;
    QLineEdit *signatureOut_SM;
    QLabel *statusLabel_SM;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsSignMessageWidgets)
    {
        if (SettingsSignMessageWidgets->objectName().isEmpty())
            SettingsSignMessageWidgets->setObjectName(QString::fromUtf8("SettingsSignMessageWidgets"));
        SettingsSignMessageWidgets->resize(438, 579);
        verticalLayout = new QVBoxLayout(SettingsSignMessageWidgets);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsSignMessageWidgets);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        container_sign = new QWidget(left);
        container_sign->setObjectName(QString::fromUtf8("container_sign"));
        verticalLayout_2 = new QVBoxLayout(container_sign);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(40);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QString::fromUtf8("verticalLayoutTitle"));
        labelTitle = new QLabel(container_sign);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(container_sign);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));
        labelSubtitle1->setText(QString::fromUtf8("N/A"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);

        containerSwitch = new QWidget(container_sign);
        containerSwitch->setObjectName(QString::fromUtf8("containerSwitch"));
        containerSwitch->setStyleSheet(QString::fromUtf8("#containerSwitch{\n"
"	padding-top:9px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(containerSwitch);
        verticalLayout_6->setSpacing(4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(containerSwitch);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushSign = new QPushButton(groupBox);
        pushSign->setObjectName(QString::fromUtf8("pushSign"));
        pushSign->setMinimumSize(QSize(120, 30));
        pushSign->setMaximumSize(QSize(120, 30));
        pushSign->setFocusPolicy(Qt::NoFocus);
        pushSign->setCheckable(true);
        pushSign->setAutoExclusive(true);

        horizontalLayout_4->addWidget(pushSign);

        pushVerify = new QPushButton(groupBox);
        pushVerify->setObjectName(QString::fromUtf8("pushVerify"));
        pushVerify->setMinimumSize(QSize(120, 30));
        pushVerify->setMaximumSize(QSize(120, 30));
        pushVerify->setFocusPolicy(Qt::NoFocus);
        pushVerify->setCheckable(true);
        pushVerify->setChecked(true);
        pushVerify->setAutoExclusive(true);

        horizontalLayout_4->addWidget(pushVerify);


        verticalLayout_6->addWidget(groupBox, 0, Qt::AlignRight);

        labelSubtitleSwitch = new QLabel(containerSwitch);
        labelSubtitleSwitch->setObjectName(QString::fromUtf8("labelSubtitleSwitch"));
        labelSubtitleSwitch->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(labelSubtitleSwitch, 0, Qt::AlignHCenter|Qt::AlignTop);


        horizontalLayout_3->addWidget(containerSwitch, 0, Qt::AlignRight|Qt::AlignTop);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        containerAddress = new QWidget(container_sign);
        containerAddress->setObjectName(QString::fromUtf8("containerAddress"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(containerAddress->sizePolicy().hasHeightForWidth());
        containerAddress->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(containerAddress);
        verticalLayout_5->setSpacing(15);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelSubtitleAddress = new QLabel(containerAddress);
        labelSubtitleAddress->setObjectName(QString::fromUtf8("labelSubtitleAddress"));
        labelSubtitleAddress->setMinimumSize(QSize(0, 20));
        labelSubtitleAddress->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(labelSubtitleAddress);

        addressIn_SM = new QLineEdit(containerAddress);
        addressIn_SM->setObjectName(QString::fromUtf8("addressIn_SM"));
        addressIn_SM->setMinimumSize(QSize(0, 50));
        addressIn_SM->setMaximumSize(QSize(16777215, 50));

        verticalLayout_5->addWidget(addressIn_SM);


        verticalLayout_2->addWidget(containerAddress);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        labelSubtitleMessage = new QLabel(container_sign);
        labelSubtitleMessage->setObjectName(QString::fromUtf8("labelSubtitleMessage"));
        labelSubtitleMessage->setMinimumSize(QSize(0, 20));
        labelSubtitleMessage->setMaximumSize(QSize(16777215, 20));

        verticalLayout_9->addWidget(labelSubtitleMessage);

        messageIn_SM = new QPlainTextEdit(container_sign);
        messageIn_SM->setObjectName(QString::fromUtf8("messageIn_SM"));
        messageIn_SM->setMinimumSize(QSize(0, 140));
        messageIn_SM->setMaximumSize(QSize(16777215, 140));

        verticalLayout_9->addWidget(messageIn_SM);


        verticalLayout_2->addLayout(verticalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        widget = new QWidget(container_sign);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 75));
        widget->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelSubtitleSignature = new QLabel(widget);
        labelSubtitleSignature->setObjectName(QString::fromUtf8("labelSubtitleSignature"));
        labelSubtitleSignature->setMinimumSize(QSize(0, 20));
        labelSubtitleSignature->setMaximumSize(QSize(16777215, 20));

        verticalLayout_4->addWidget(labelSubtitleSignature);

        signatureOut_SM = new QLineEdit(widget);
        signatureOut_SM->setObjectName(QString::fromUtf8("signatureOut_SM"));
        signatureOut_SM->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(signatureOut_SM);


        verticalLayout_2->addWidget(widget);

        statusLabel_SM = new QLabel(container_sign);
        statusLabel_SM->setObjectName(QString::fromUtf8("statusLabel_SM"));
        statusLabel_SM->setStyleSheet(QString::fromUtf8("padding-top:5px;"));
        statusLabel_SM->setText(QString::fromUtf8("N/A"));

        verticalLayout_2->addWidget(statusLabel_SM);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(9);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonClear = new QPushButton(container_sign);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        pushButtonClear->setMinimumSize(QSize(200, 50));
        pushButtonClear->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonClear);

        pushButtonSave = new QPushButton(container_sign);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addWidget(container_sign);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsSignMessageWidgets);

        QMetaObject::connectSlotsByName(SettingsSignMessageWidgets);
    } // setupUi

    void retranslateUi(QWidget *SettingsSignMessageWidgets)
    {
        SettingsSignMessageWidgets->setWindowTitle(QCoreApplication::translate("SettingsSignMessageWidgets", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "Sign/Verify Message", nullptr));
        groupBox->setTitle(QString());
        pushSign->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "Sign", nullptr));
        pushVerify->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "Verify", nullptr));
        labelSubtitleSwitch->setText(QString());
        labelSubtitleAddress->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "BIR address or contact label", nullptr));
        addressIn_SM->setPlaceholderText(QCoreApplication::translate("SettingsSignMessageWidgets", "Enter address", nullptr));
        labelSubtitleMessage->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "Message", nullptr));
        messageIn_SM->setPlaceholderText(QCoreApplication::translate("SettingsSignMessageWidgets", "Write message here...", nullptr));
        labelSubtitleSignature->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "Signature", nullptr));
        signatureOut_SM->setPlaceholderText(QCoreApplication::translate("SettingsSignMessageWidgets", "Signature", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "CLEAR ALL", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("SettingsSignMessageWidgets", "SIGN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsSignMessageWidgets: public Ui_SettingsSignMessageWidgets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSSIGNMESSAGEWIDGETS_H

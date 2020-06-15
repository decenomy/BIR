/********************************************************************************
** Form generated from reading UI file 'addnewaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWADDRESSDIALOG_H
#define UI_ADDNEWADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewAddressDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frameContainer;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QSpacerItem *verticalSpacer;
    QLabel *labelQrImg;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAddress;
    QPushButton *pushButtonCopy;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *AddNewAddressDialog)
    {
        if (AddNewAddressDialog->objectName().isEmpty())
            AddNewAddressDialog->setObjectName(QString::fromUtf8("AddNewAddressDialog"));
        AddNewAddressDialog->resize(500, 530);
        AddNewAddressDialog->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(AddNewAddressDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frameContainer = new QFrame(AddNewAddressDialog);
        frameContainer->setObjectName(QString::fromUtf8("frameContainer"));
        frameContainer->setFrameShape(QFrame::StyledPanel);
        frameContainer->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameContainer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, 20);
        labelTitle = new QLabel(frameContainer);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayout->addWidget(labelTitle, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        labelQrImg = new QLabel(frameContainer);
        labelQrImg->setObjectName(QString::fromUtf8("labelQrImg"));
        labelQrImg->setMinimumSize(QSize(260, 260));
        labelQrImg->setMaximumSize(QSize(260, 260));
        labelQrImg->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelQrImg, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelAddress = new QLabel(frameContainer);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));

        horizontalLayout_2->addWidget(labelAddress);

        pushButtonCopy = new QPushButton(frameContainer);
        pushButtonCopy->setObjectName(QString::fromUtf8("pushButtonCopy"));
        pushButtonCopy->setMinimumSize(QSize(24, 24));
        pushButtonCopy->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButtonCopy);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        btnCancel = new QPushButton(frameContainer);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 50));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frameContainer);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setMinimumSize(QSize(0, 50));
        btnSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(2, 2);

        verticalLayout_2->addWidget(frameContainer);


        retranslateUi(AddNewAddressDialog);

        QMetaObject::connectSlotsByName(AddNewAddressDialog);
    } // setupUi

    void retranslateUi(QWidget *AddNewAddressDialog)
    {
        AddNewAddressDialog->setWindowTitle(QCoreApplication::translate("AddNewAddressDialog", "Dialog", nullptr));
        labelTitle->setText(QCoreApplication::translate("AddNewAddressDialog", "New Address", nullptr));
        labelQrImg->setText(QString());
        labelAddress->setText(QCoreApplication::translate("AddNewAddressDialog", "Address", nullptr));
        pushButtonCopy->setText(QCoreApplication::translate("AddNewAddressDialog", "PushButton", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddNewAddressDialog", "CANCEL", nullptr));
        btnSave->setText(QCoreApplication::translate("AddNewAddressDialog", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewAddressDialog: public Ui_AddNewAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWADDRESSDIALOG_H

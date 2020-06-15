/********************************************************************************
** Form generated from reading UI file 'addnewcontactdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWCONTACTDIALOG_H
#define UI_ADDNEWCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddNewContactDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer1;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelMessage;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnOk;

    void setupUi(QDialog *AddNewContactDialog)
    {
        if (AddNewContactDialog->objectName().isEmpty())
            AddNewContactDialog->setObjectName(QString::fromUtf8("AddNewContactDialog"));
        AddNewContactDialog->resize(600, 350);
        verticalLayout_4 = new QVBoxLayout(AddNewContactDialog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(AddNewContactDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 50));
        labelTitle->setMaximumSize(QSize(16777215, 70));
        labelTitle->setStyleSheet(QString::fromUtf8("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer1);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QString::fromUtf8("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));
        btnEsc->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(40, -1, 40, -1);
        labelMessage = new QLabel(frame);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        verticalLayout_2->addWidget(labelMessage);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditName = new QLineEdit(frame);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        verticalLayout->addWidget(lineEditName);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(200, 50));
        btnCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnCancel);

        btnOk = new QPushButton(frame);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setMinimumSize(QSize(200, 50));
        btnOk->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(btnOk);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(frame);


        retranslateUi(AddNewContactDialog);

        QMetaObject::connectSlotsByName(AddNewContactDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewContactDialog)
    {
        AddNewContactDialog->setWindowTitle(QCoreApplication::translate("AddNewContactDialog", "Dialog", nullptr));
        labelTitle->setText(QCoreApplication::translate("AddNewContactDialog", "Edit Contact", nullptr));
        btnEsc->setText(QString());
        labelMessage->setText(QCoreApplication::translate("AddNewContactDialog", "Set a label for the selected address", nullptr));
        lineEditName->setPlaceholderText(QCoreApplication::translate("AddNewContactDialog", "Enter a label for the address (e.g. Exchange)", nullptr));
        btnCancel->setText(QCoreApplication::translate("AddNewContactDialog", "CANCEL", nullptr));
        btnOk->setText(QCoreApplication::translate("AddNewContactDialog", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewContactDialog: public Ui_AddNewContactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWCONTACTDIALOG_H

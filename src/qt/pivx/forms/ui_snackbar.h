/********************************************************************************
** Form generated from reading UI file 'snackbar.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNACKBAR_H
#define UI_SNACKBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnackBar
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *snackContainer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *SnackBar)
    {
        if (SnackBar->objectName().isEmpty())
            SnackBar->setObjectName(QString::fromUtf8("SnackBar"));
        SnackBar->resize(400, 60);
        SnackBar->setMinimumSize(QSize(0, 60));
        SnackBar->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(SnackBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(100, 0, 0, 0);
        snackContainer = new QWidget(SnackBar);
        snackContainer->setObjectName(QString::fromUtf8("snackContainer"));
        snackContainer->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(snackContainer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(snackContainer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("padding-left:45px;\n"
"font-size: 15px;\n"
"color:white;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(snackContainer);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(24, 24));
        pushButton->setMaximumSize(QSize(24, 24));
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(pushButton, 0, Qt::AlignVCenter);

        horizontalLayout_2->setStretch(1, 2);

        horizontalLayout->addWidget(snackContainer);


        retranslateUi(SnackBar);

        QMetaObject::connectSlotsByName(SnackBar);
    } // setupUi

    void retranslateUi(QDialog *SnackBar)
    {
        SnackBar->setWindowTitle(QCoreApplication::translate("SnackBar", "Form", nullptr));
        label->setText(QCoreApplication::translate("SnackBar", "Contact Stored", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SnackBar: public Ui_SnackBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNACKBAR_H

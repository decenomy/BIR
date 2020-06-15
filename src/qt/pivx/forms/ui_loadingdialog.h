/********************************************************************************
** Form generated from reading UI file 'loadingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINGDIALOG_H
#define UI_LOADINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QWidget *cointainerLoading;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelMovie;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelMessage;
    QLabel *labelDots;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *LoadingDialog)
    {
        if (LoadingDialog->objectName().isEmpty())
            LoadingDialog->setObjectName(QString::fromUtf8("LoadingDialog"));
        LoadingDialog->resize(800, 636);
        verticalLayout = new QVBoxLayout(LoadingDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(LoadingDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cointainerLoading = new QWidget(frame);
        cointainerLoading->setObjectName(QString::fromUtf8("cointainerLoading"));
        cointainerLoading->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(cointainerLoading);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelMovie = new QLabel(cointainerLoading);
        labelMovie->setObjectName(QString::fromUtf8("labelMovie"));
        labelMovie->setMinimumSize(QSize(600, 600));
        labelMovie->setMaximumSize(QSize(600, 600));

        verticalLayout_3->addWidget(labelMovie, 0, Qt::AlignHCenter);

        widget = new QWidget(cointainerLoading);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelMessage = new QLabel(widget);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelMessage);

        labelDots = new QLabel(widget);
        labelDots->setObjectName(QString::fromUtf8("labelDots"));
        labelDots->setMinimumSize(QSize(20, 0));

        horizontalLayout->addWidget(labelDots);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(widget, 0, Qt::AlignHCenter);


        verticalLayout_2->addWidget(cointainerLoading);


        verticalLayout->addWidget(frame);


        retranslateUi(LoadingDialog);

        QMetaObject::connectSlotsByName(LoadingDialog);
    } // setupUi

    void retranslateUi(QWidget *LoadingDialog)
    {
        LoadingDialog->setWindowTitle(QCoreApplication::translate("LoadingDialog", "Form", nullptr));
        labelMovie->setText(QCoreApplication::translate("LoadingDialog", "TextLabel", nullptr));
        labelMessage->setText(QCoreApplication::translate("LoadingDialog", "Loading", nullptr));
        labelDots->setText(QCoreApplication::translate("LoadingDialog", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadingDialog: public Ui_LoadingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINGDIALOG_H

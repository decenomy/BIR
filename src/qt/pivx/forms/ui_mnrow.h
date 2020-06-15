/********************************************************************************
** Form generated from reading UI file 'mnrow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNROW_H
#define UI_MNROW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MNRow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *labelName;
    QLabel *labelAddress;
    QSpacerItem *horizontalSpacer;
    QLabel *labelDate;
    QPushButton *pushButtonMenu;
    QLabel *lblDivisory;

    void setupUi(QWidget *MNRow)
    {
        if (MNRow->objectName().isEmpty())
            MNRow->setObjectName(QString::fromUtf8("MNRow"));
        MNRow->resize(475, 65);
        MNRow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(MNRow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 20, 0);
        frame_2 = new QFrame(MNRow);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("border:none;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("border:none;padding:0px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelName = new QLabel(frame);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setText(QString::fromUtf8("N/A"));

        verticalLayout->addWidget(labelName);

        labelAddress = new QLabel(frame);
        labelAddress->setObjectName(QString::fromUtf8("labelAddress"));
        labelAddress->setText(QString::fromUtf8("N/A"));

        verticalLayout->addWidget(labelAddress);


        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelDate = new QLabel(frame_2);
        labelDate->setObjectName(QString::fromUtf8("labelDate"));
        labelDate->setText(QString::fromUtf8("N/A"));

        horizontalLayout->addWidget(labelDate);

        pushButtonMenu = new QPushButton(frame_2);
        pushButtonMenu->setObjectName(QString::fromUtf8("pushButtonMenu"));
        pushButtonMenu->setFocusPolicy(Qt::NoFocus);
        pushButtonMenu->setStyleSheet(QString::fromUtf8("border:none; background-color:transparent; padding:0px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ic-menu-hover"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMenu->setIcon(icon);
        pushButtonMenu->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonMenu);


        verticalLayout_2->addWidget(frame_2);

        lblDivisory = new QLabel(MNRow);
        lblDivisory->setObjectName(QString::fromUtf8("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(lblDivisory);


        retranslateUi(MNRow);

        QMetaObject::connectSlotsByName(MNRow);
    } // setupUi

    void retranslateUi(QWidget *MNRow)
    {
        MNRow->setWindowTitle(QCoreApplication::translate("MNRow", "Form", nullptr));
        pushButtonMenu->setText(QString());
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MNRow: public Ui_MNRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNROW_H

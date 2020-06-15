/********************************************************************************
** Form generated from reading UI file 'masternodeswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODESWIDGET_H
#define UI_MASTERNODESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasterNodesWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QListView *listMn;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonStartAll;
    QPushButton *pushButtonStartMissing;

    void setupUi(QWidget *MasterNodesWidget)
    {
        if (MasterNodesWidget->objectName().isEmpty())
            MasterNodesWidget->setObjectName(QString::fromUtf8("MasterNodesWidget"));
        MasterNodesWidget->resize(629, 406);
        horizontalLayout_2 = new QHBoxLayout(MasterNodesWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(MasterNodesWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayout_8->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));

        verticalLayout_8->addWidget(labelSubtitle1, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));

        verticalLayout_2->addLayout(verticalLayout_6);

        listMn = new QListView(left);
        listMn->setObjectName(QString::fromUtf8("listMn"));
        listMn->setMouseTracking(true);

        verticalLayout_2->addWidget(listMn);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QString::fromUtf8("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(emptyContainer);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        emptyScreen = new QFrame(emptyContainer);
        emptyScreen->setObjectName(QString::fromUtf8("emptyScreen"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyScreen->sizePolicy().hasHeightForWidth());
        emptyScreen->setSizePolicy(sizePolicy);
        emptyScreen->setFrameShape(QFrame::StyledPanel);
        emptyScreen->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(emptyScreen);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushImgEmpty = new QPushButton(emptyScreen);
        pushImgEmpty->setObjectName(QString::fromUtf8("pushImgEmpty"));
        pushImgEmpty->setMinimumSize(QSize(100, 100));
        pushImgEmpty->setMaximumSize(QSize(100, 100));
        pushImgEmpty->setFocusPolicy(Qt::NoFocus);
        pushImgEmpty->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushImgEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmpty = new QLabel(emptyScreen);
        labelEmpty->setObjectName(QString::fromUtf8("labelEmpty"));
        labelEmpty->setStyleSheet(QString::fromUtf8(""));
        labelEmpty->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_7->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 8);

        verticalLayout_2->addWidget(emptyContainer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(283, 50));
        pushButtonSave->setMaximumSize(QSize(283, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonSave);

        pushButtonStartAll = new QPushButton(left);
        pushButtonStartAll->setObjectName(QString::fromUtf8("pushButtonStartAll"));
        pushButtonStartAll->setMinimumSize(QSize(125, 50));

        horizontalLayout_7->addWidget(pushButtonStartAll);

        pushButtonStartMissing = new QPushButton(left);
        pushButtonStartMissing->setObjectName(QString::fromUtf8("pushButtonStartMissing"));
        pushButtonStartMissing->setMinimumSize(QSize(125, 50));

        horizontalLayout_7->addWidget(pushButtonStartMissing);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(left);

        horizontalLayout_2->setStretch(0, 2);

        retranslateUi(MasterNodesWidget);

        QMetaObject::connectSlotsByName(MasterNodesWidget);
    } // setupUi

    void retranslateUi(QWidget *MasterNodesWidget)
    {
        MasterNodesWidget->setWindowTitle(QCoreApplication::translate("MasterNodesWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("MasterNodesWidget", "Masternodes", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("MasterNodesWidget", "Full nodes that incentivize node operators to perform the core consensus functions\n"
"and vote on the treasury system receiving a periodic reward.", nullptr));
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QCoreApplication::translate("MasterNodesWidget", "No active Masternode yet", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("MasterNodesWidget", "Create Masternode Controller", nullptr));
        pushButtonStartAll->setText(QCoreApplication::translate("MasterNodesWidget", "Start All", nullptr));
        pushButtonStartMissing->setText(QCoreApplication::translate("MasterNodesWidget", "Start Inactive/s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MasterNodesWidget: public Ui_MasterNodesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODESWIDGET_H

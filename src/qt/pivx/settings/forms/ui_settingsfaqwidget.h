/********************************************************************************
** Form generated from reading UI file 'settingsfaqwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSFAQWIDGET_H
#define UI_SETTINGSFAQWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/pivx/pfborderimage.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsFaqWidget
{
public:
    QHBoxLayout *horizontalLayout;
    PFBorderImage *container;
    QVBoxLayout *verticalLayoutcont;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonExit;
    QHBoxLayout *horizontalLayout_6;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *containerButtons;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_Intro;
    QPushButton *pushButton_UnspendablePIV;
    QPushButton *pushButton_Stake;
    QPushButton *pushButton_Support;
    QPushButton *pushButton_Masternode;
    QPushButton *pushButton_MNController;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWebLink;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonWebLink;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollAreaFaq;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_Intro;
    QHBoxLayout *horizontalLayout_Intro;
    QLabel *labelNumber_Intro;
    QVBoxLayout *verticalLayout_Intro;
    QLabel *labelSubtitle_Intro;
    QSpacerItem *verticalSpacer1_Intro;
    QLabel *labelContent_Intro;
    QSpacerItem *verticalSpacer2_Intro;
    QWidget *widget_UnspendablePIV;
    QHBoxLayout *horizontalPage_UnspendablePIV;
    QLabel *labelNumber_UnspendablePIV;
    QVBoxLayout *verticalLayout_UnspendablePIV;
    QLabel *labelSubtitle_UnspendablePIV;
    QSpacerItem *verticalSpacer1_UnspendablePIV;
    QLabel *labelContent_UnspendablePIV;
    QSpacerItem *verticalSpacer2_UnspendablePIV;
    QWidget *widget_Stake;
    QHBoxLayout *horizontalpage_Stake;
    QLabel *labelNumber_Stake;
    QVBoxLayout *verticalLayoutpage_Stake;
    QLabel *labelSubtitle_Stake;
    QSpacerItem *verticalSpacer1_Stake;
    QLabel *labelContent_Stake;
    QSpacerItem *verticalSpacer2_Stake;
    QWidget *widget_Support;
    QHBoxLayout *horizontalpage_Support;
    QLabel *labelNumber_Support;
    QVBoxLayout *verticalLayoutpage_Support;
    QLabel *labelSubtitle_Support;
    QSpacerItem *verticalSpacer1_Support;
    QLabel *labelContent_Support;
    QSpacerItem *verticalSpacer2_Support;
    QWidget *widget_Masternode;
    QHBoxLayout *horizontalpage_Masternode;
    QLabel *labelNumber_Masternode;
    QVBoxLayout *verticalLayoutpage_Masternode;
    QLabel *labelSubtitle_Masternode;
    QSpacerItem *verticalSpacer1_Masternode;
    QLabel *labelContent_Masternode;
    QSpacerItem *verticalSpacer2_Masternode;
    QWidget *widget_MNController;
    QHBoxLayout *horizontalpage_MNController;
    QLabel *labelNumber_MNController;
    QVBoxLayout *verticalLayoutpage_MNController;
    QLabel *labelSubtitle_MNController;
    QSpacerItem *verticalSpacer1_MNController;
    QLabel *labelContent_MNController;
    QSpacerItem *verticalSpacer2_MNController;

    void setupUi(QWidget *SettingsFaqWidget)
    {
        if (SettingsFaqWidget->objectName().isEmpty())
            SettingsFaqWidget->setObjectName(QString::fromUtf8("SettingsFaqWidget"));
        SettingsFaqWidget->resize(1203, 1741);
        horizontalLayout = new QHBoxLayout(SettingsFaqWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        container = new PFBorderImage(SettingsFaqWidget);
        container->setObjectName(QString::fromUtf8("container"));
        verticalLayoutcont = new QVBoxLayout(container);
        verticalLayoutcont->setObjectName(QString::fromUtf8("verticalLayoutcont"));
        verticalLayoutcont->setContentsMargins(36, 44, 36, 44);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, -1, 10, -1);
        labelTitle = new QLabel(container);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonExit = new QPushButton(container);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));

        horizontalLayout_3->addWidget(pushButtonExit);


        verticalLayoutcont->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        left = new QWidget(container);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        containerButtons = new QWidget(left);
        containerButtons->setObjectName(QString::fromUtf8("containerButtons"));
        verticalLayout = new QVBoxLayout(containerButtons);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(containerButtons);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_Intro = new QPushButton(groupBox);
        pushButton_Intro->setObjectName(QString::fromUtf8("pushButton_Intro"));
        pushButton_Intro->setMinimumSize(QSize(0, 50));
        pushButton_Intro->setMaximumSize(QSize(16777215, 50));
        pushButton_Intro->setFocusPolicy(Qt::NoFocus);
        pushButton_Intro->setCheckable(true);
        pushButton_Intro->setChecked(true);
        pushButton_Intro->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Intro);

        pushButton_UnspendablePIV = new QPushButton(groupBox);
        pushButton_UnspendablePIV->setObjectName(QString::fromUtf8("pushButton_UnspendablePIV"));
        pushButton_UnspendablePIV->setMinimumSize(QSize(0, 50));
        pushButton_UnspendablePIV->setMaximumSize(QSize(16777215, 50));
        pushButton_UnspendablePIV->setFocusPolicy(Qt::NoFocus);
        pushButton_UnspendablePIV->setCheckable(true);
        pushButton_UnspendablePIV->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_UnspendablePIV);

        pushButton_Stake = new QPushButton(groupBox);
        pushButton_Stake->setObjectName(QString::fromUtf8("pushButton_Stake"));
        pushButton_Stake->setMinimumSize(QSize(0, 50));
        pushButton_Stake->setFocusPolicy(Qt::NoFocus);
        pushButton_Stake->setCheckable(true);
        pushButton_Stake->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Stake);

        pushButton_Support = new QPushButton(groupBox);
        pushButton_Support->setObjectName(QString::fromUtf8("pushButton_Support"));
        pushButton_Support->setMinimumSize(QSize(0, 50));
        pushButton_Support->setFocusPolicy(Qt::NoFocus);
        pushButton_Support->setCheckable(true);
        pushButton_Support->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Support);

        pushButton_Masternode = new QPushButton(groupBox);
        pushButton_Masternode->setObjectName(QString::fromUtf8("pushButton_Masternode"));
        pushButton_Masternode->setMinimumSize(QSize(0, 50));
        pushButton_Masternode->setFocusPolicy(Qt::NoFocus);
        pushButton_Masternode->setCheckable(true);
        pushButton_Masternode->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_Masternode);

        pushButton_MNController = new QPushButton(groupBox);
        pushButton_MNController->setObjectName(QString::fromUtf8("pushButton_MNController"));
        pushButton_MNController->setMinimumSize(QSize(0, 50));
        pushButton_MNController->setFocusPolicy(Qt::NoFocus);
        pushButton_MNController->setCheckable(true);
        pushButton_MNController->setAutoExclusive(true);

        verticalLayout_9->addWidget(pushButton_MNController);


        verticalLayout->addWidget(groupBox);


        verticalLayout_2->addWidget(containerButtons);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelWebLink = new QLabel(left);
        labelWebLink->setObjectName(QString::fromUtf8("labelWebLink"));

        horizontalLayout_2->addWidget(labelWebLink);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButtonWebLink = new QPushButton(left);
        pushButtonWebLink->setObjectName(QString::fromUtf8("pushButtonWebLink"));
        pushButtonWebLink->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pushButtonWebLink);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_6->addWidget(left);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        right = new QWidget(container);
        right->setObjectName(QString::fromUtf8("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        scrollAreaFaq = new QScrollArea(right);
        scrollAreaFaq->setObjectName(QString::fromUtf8("scrollAreaFaq"));
        scrollAreaFaq->setStyleSheet(QString::fromUtf8("#scrollAreaFaq { background:transparent; }"));
        scrollAreaFaq->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaFaq->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollAreaFaq->setWidgetResizable(true);
        scrollAreaFaq->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 642, 1614));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("#scrollAreaWidgetContents { background:transparent; }"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_Intro = new QWidget(scrollAreaWidgetContents);
        widget_Intro->setObjectName(QString::fromUtf8("widget_Intro"));
        widget_Intro->setMinimumSize(QSize(300, 0));
        horizontalLayout_Intro = new QHBoxLayout(widget_Intro);
        horizontalLayout_Intro->setObjectName(QString::fromUtf8("horizontalLayout_Intro"));
        labelNumber_Intro = new QLabel(widget_Intro);
        labelNumber_Intro->setObjectName(QString::fromUtf8("labelNumber_Intro"));
        labelNumber_Intro->setMinimumSize(QSize(24, 24));
        labelNumber_Intro->setMaximumSize(QSize(16777215, 24));
        labelNumber_Intro->setAlignment(Qt::AlignCenter);

        horizontalLayout_Intro->addWidget(labelNumber_Intro, 0, Qt::AlignTop);

        verticalLayout_Intro = new QVBoxLayout();
        verticalLayout_Intro->setObjectName(QString::fromUtf8("verticalLayout_Intro"));
        verticalLayout_Intro->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Intro = new QLabel(widget_Intro);
        labelSubtitle_Intro->setObjectName(QString::fromUtf8("labelSubtitle_Intro"));
        labelSubtitle_Intro->setWordWrap(true);

        verticalLayout_Intro->addWidget(labelSubtitle_Intro);

        verticalSpacer1_Intro = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_Intro->addItem(verticalSpacer1_Intro);

        labelContent_Intro = new QLabel(widget_Intro);
        labelContent_Intro->setObjectName(QString::fromUtf8("labelContent_Intro"));
        labelContent_Intro->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Intro->setWordWrap(true);

        verticalLayout_Intro->addWidget(labelContent_Intro);

        verticalSpacer2_Intro = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_Intro->addItem(verticalSpacer2_Intro);


        horizontalLayout_Intro->addLayout(verticalLayout_Intro);

        horizontalLayout_Intro->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Intro);

        widget_UnspendablePIV = new QWidget(scrollAreaWidgetContents);
        widget_UnspendablePIV->setObjectName(QString::fromUtf8("widget_UnspendablePIV"));
        horizontalPage_UnspendablePIV = new QHBoxLayout(widget_UnspendablePIV);
        horizontalPage_UnspendablePIV->setObjectName(QString::fromUtf8("horizontalPage_UnspendablePIV"));
        labelNumber_UnspendablePIV = new QLabel(widget_UnspendablePIV);
        labelNumber_UnspendablePIV->setObjectName(QString::fromUtf8("labelNumber_UnspendablePIV"));
        labelNumber_UnspendablePIV->setMinimumSize(QSize(24, 24));
        labelNumber_UnspendablePIV->setMaximumSize(QSize(16777215, 24));
        labelNumber_UnspendablePIV->setAlignment(Qt::AlignCenter);

        horizontalPage_UnspendablePIV->addWidget(labelNumber_UnspendablePIV, 0, Qt::AlignTop);

        verticalLayout_UnspendablePIV = new QVBoxLayout();
        verticalLayout_UnspendablePIV->setSpacing(0);
        verticalLayout_UnspendablePIV->setObjectName(QString::fromUtf8("verticalLayout_UnspendablePIV"));
        verticalLayout_UnspendablePIV->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_UnspendablePIV = new QLabel(widget_UnspendablePIV);
        labelSubtitle_UnspendablePIV->setObjectName(QString::fromUtf8("labelSubtitle_UnspendablePIV"));
        labelSubtitle_UnspendablePIV->setWordWrap(true);

        verticalLayout_UnspendablePIV->addWidget(labelSubtitle_UnspendablePIV);

        verticalSpacer1_UnspendablePIV = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_UnspendablePIV->addItem(verticalSpacer1_UnspendablePIV);

        labelContent_UnspendablePIV = new QLabel(widget_UnspendablePIV);
        labelContent_UnspendablePIV->setObjectName(QString::fromUtf8("labelContent_UnspendablePIV"));
        labelContent_UnspendablePIV->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_UnspendablePIV->setWordWrap(true);

        verticalLayout_UnspendablePIV->addWidget(labelContent_UnspendablePIV);

        verticalSpacer2_UnspendablePIV = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_UnspendablePIV->addItem(verticalSpacer2_UnspendablePIV);


        horizontalPage_UnspendablePIV->addLayout(verticalLayout_UnspendablePIV);

        horizontalPage_UnspendablePIV->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_UnspendablePIV);

        widget_Stake = new QWidget(scrollAreaWidgetContents);
        widget_Stake->setObjectName(QString::fromUtf8("widget_Stake"));
        horizontalpage_Stake = new QHBoxLayout(widget_Stake);
        horizontalpage_Stake->setObjectName(QString::fromUtf8("horizontalpage_Stake"));
        labelNumber_Stake = new QLabel(widget_Stake);
        labelNumber_Stake->setObjectName(QString::fromUtf8("labelNumber_Stake"));
        labelNumber_Stake->setMinimumSize(QSize(24, 24));
        labelNumber_Stake->setMaximumSize(QSize(16777215, 24));
        labelNumber_Stake->setAlignment(Qt::AlignCenter);

        horizontalpage_Stake->addWidget(labelNumber_Stake, 0, Qt::AlignTop);

        verticalLayoutpage_Stake = new QVBoxLayout();
        verticalLayoutpage_Stake->setObjectName(QString::fromUtf8("verticalLayoutpage_Stake"));
        verticalLayoutpage_Stake->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Stake = new QLabel(widget_Stake);
        labelSubtitle_Stake->setObjectName(QString::fromUtf8("labelSubtitle_Stake"));
        labelSubtitle_Stake->setWordWrap(true);

        verticalLayoutpage_Stake->addWidget(labelSubtitle_Stake);

        verticalSpacer1_Stake = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Stake->addItem(verticalSpacer1_Stake);

        labelContent_Stake = new QLabel(widget_Stake);
        labelContent_Stake->setObjectName(QString::fromUtf8("labelContent_Stake"));
        labelContent_Stake->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Stake->setWordWrap(true);

        verticalLayoutpage_Stake->addWidget(labelContent_Stake);

        verticalSpacer2_Stake = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Stake->addItem(verticalSpacer2_Stake);


        horizontalpage_Stake->addLayout(verticalLayoutpage_Stake);

        horizontalpage_Stake->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Stake);

        widget_Support = new QWidget(scrollAreaWidgetContents);
        widget_Support->setObjectName(QString::fromUtf8("widget_Support"));
        horizontalpage_Support = new QHBoxLayout(widget_Support);
        horizontalpage_Support->setObjectName(QString::fromUtf8("horizontalpage_Support"));
        labelNumber_Support = new QLabel(widget_Support);
        labelNumber_Support->setObjectName(QString::fromUtf8("labelNumber_Support"));
        labelNumber_Support->setMinimumSize(QSize(24, 24));
        labelNumber_Support->setMaximumSize(QSize(16777215, 24));
        labelNumber_Support->setAlignment(Qt::AlignCenter);

        horizontalpage_Support->addWidget(labelNumber_Support, 0, Qt::AlignTop);

        verticalLayoutpage_Support = new QVBoxLayout();
        verticalLayoutpage_Support->setObjectName(QString::fromUtf8("verticalLayoutpage_Support"));
        verticalLayoutpage_Support->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Support = new QLabel(widget_Support);
        labelSubtitle_Support->setObjectName(QString::fromUtf8("labelSubtitle_Support"));
        labelSubtitle_Support->setWordWrap(true);

        verticalLayoutpage_Support->addWidget(labelSubtitle_Support);

        verticalSpacer1_Support = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Support->addItem(verticalSpacer1_Support);

        labelContent_Support = new QLabel(widget_Support);
        labelContent_Support->setObjectName(QString::fromUtf8("labelContent_Support"));
        labelContent_Support->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Support->setWordWrap(true);

        verticalLayoutpage_Support->addWidget(labelContent_Support);

        verticalSpacer2_Support = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Support->addItem(verticalSpacer2_Support);


        horizontalpage_Support->addLayout(verticalLayoutpage_Support);

        horizontalpage_Support->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Support);

        widget_Masternode = new QWidget(scrollAreaWidgetContents);
        widget_Masternode->setObjectName(QString::fromUtf8("widget_Masternode"));
        horizontalpage_Masternode = new QHBoxLayout(widget_Masternode);
        horizontalpage_Masternode->setObjectName(QString::fromUtf8("horizontalpage_Masternode"));
        labelNumber_Masternode = new QLabel(widget_Masternode);
        labelNumber_Masternode->setObjectName(QString::fromUtf8("labelNumber_Masternode"));
        labelNumber_Masternode->setMinimumSize(QSize(24, 24));
        labelNumber_Masternode->setMaximumSize(QSize(16777215, 24));
        labelNumber_Masternode->setAlignment(Qt::AlignCenter);

        horizontalpage_Masternode->addWidget(labelNumber_Masternode, 0, Qt::AlignTop);

        verticalLayoutpage_Masternode = new QVBoxLayout();
        verticalLayoutpage_Masternode->setObjectName(QString::fromUtf8("verticalLayoutpage_Masternode"));
        verticalLayoutpage_Masternode->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_Masternode = new QLabel(widget_Masternode);
        labelSubtitle_Masternode->setObjectName(QString::fromUtf8("labelSubtitle_Masternode"));
        labelSubtitle_Masternode->setWordWrap(true);

        verticalLayoutpage_Masternode->addWidget(labelSubtitle_Masternode);

        verticalSpacer1_Masternode = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_Masternode->addItem(verticalSpacer1_Masternode);

        labelContent_Masternode = new QLabel(widget_Masternode);
        labelContent_Masternode->setObjectName(QString::fromUtf8("labelContent_Masternode"));
        labelContent_Masternode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_Masternode->setWordWrap(true);

        verticalLayoutpage_Masternode->addWidget(labelContent_Masternode);

        verticalSpacer2_Masternode = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_Masternode->addItem(verticalSpacer2_Masternode);


        horizontalpage_Masternode->addLayout(verticalLayoutpage_Masternode);

        horizontalpage_Masternode->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_Masternode);

        widget_MNController = new QWidget(scrollAreaWidgetContents);
        widget_MNController->setObjectName(QString::fromUtf8("widget_MNController"));
        horizontalpage_MNController = new QHBoxLayout(widget_MNController);
        horizontalpage_MNController->setObjectName(QString::fromUtf8("horizontalpage_MNController"));
        labelNumber_MNController = new QLabel(widget_MNController);
        labelNumber_MNController->setObjectName(QString::fromUtf8("labelNumber_MNController"));
        labelNumber_MNController->setMinimumSize(QSize(24, 24));
        labelNumber_MNController->setMaximumSize(QSize(16777215, 24));
        labelNumber_MNController->setAlignment(Qt::AlignCenter);

        horizontalpage_MNController->addWidget(labelNumber_MNController, 0, Qt::AlignTop);

        verticalLayoutpage_MNController = new QVBoxLayout();
        verticalLayoutpage_MNController->setObjectName(QString::fromUtf8("verticalLayoutpage_MNController"));
        verticalLayoutpage_MNController->setContentsMargins(20, -1, 20, -1);
        labelSubtitle_MNController = new QLabel(widget_MNController);
        labelSubtitle_MNController->setObjectName(QString::fromUtf8("labelSubtitle_MNController"));
        labelSubtitle_MNController->setWordWrap(true);

        verticalLayoutpage_MNController->addWidget(labelSubtitle_MNController);

        verticalSpacer1_MNController = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutpage_MNController->addItem(verticalSpacer1_MNController);

        labelContent_MNController = new QLabel(widget_MNController);
        labelContent_MNController->setObjectName(QString::fromUtf8("labelContent_MNController"));
        labelContent_MNController->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelContent_MNController->setWordWrap(true);

        verticalLayoutpage_MNController->addWidget(labelContent_MNController);

        verticalSpacer2_MNController = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutpage_MNController->addItem(verticalSpacer2_MNController);


        horizontalpage_MNController->addLayout(verticalLayoutpage_MNController);

        horizontalpage_MNController->setStretch(1, 1);

        verticalLayout_7->addWidget(widget_MNController);

        scrollAreaFaq->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollAreaFaq);


        verticalLayout_5->addLayout(verticalLayout_6);


        horizontalLayout_6->addWidget(right);

        horizontalLayout_6->setStretch(0, 2);
        horizontalLayout_6->setStretch(2, 3);

        verticalLayoutcont->addLayout(horizontalLayout_6);


        horizontalLayout->addWidget(container);


        retranslateUi(SettingsFaqWidget);

        QMetaObject::connectSlotsByName(SettingsFaqWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsFaqWidget)
    {
        SettingsFaqWidget->setWindowTitle(QCoreApplication::translate("SettingsFaqWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsFaqWidget", "Frequently Asked Questions", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("SettingsFaqWidget", "Exit", nullptr));
        groupBox->setTitle(QString());
        pushButton_Intro->setText(QCoreApplication::translate("SettingsFaqWidget", "1) What is PIVX?", nullptr));
        pushButton_UnspendablePIV->setText(QCoreApplication::translate("SettingsFaqWidget", "2) Why are my PIV unspendable?", nullptr));
        pushButton_Stake->setText(QCoreApplication::translate("SettingsFaqWidget", "3) How do I stake PIV?", nullptr));
        pushButton_Support->setText(QCoreApplication::translate("SettingsFaqWidget", "4) Where I should go if I need support?", nullptr));
        pushButton_Masternode->setText(QCoreApplication::translate("SettingsFaqWidget", "5) What is a Masternode?", nullptr));
        pushButton_MNController->setText(QCoreApplication::translate("SettingsFaqWidget", "6) What is a Masternode Controller?", nullptr));
        labelWebLink->setText(QCoreApplication::translate("SettingsFaqWidget", "You can read more here", nullptr));
        pushButtonWebLink->setText(QCoreApplication::translate("SettingsFaqWidget", "https://PIVX.org/", nullptr));
        labelNumber_Intro->setText(QCoreApplication::translate("SettingsFaqWidget", "1", nullptr));
        labelSubtitle_Intro->setText(QCoreApplication::translate("SettingsFaqWidget", "What is PIVX?", nullptr));
        labelContent_Intro->setText(QCoreApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           PIVX is a form of digital online money using blockchain technology\n"
"                           that can be easily transferred globally, instantly, and with near\n"
"                           zero fees.  PIVX incorporates market leading security &\n"
"                           privacy and is also the first PoS (Proof of Stake) Cryptocurrency\n"
"                           to implement ZeroCoin(zPIV) and Zerocoin staking.\n"
"                           </p><p align=\"justify\">\n"
"                           PIVX utilizes a Proof of Stake (PoS) consensus system algorithm,\n"
"                           allowing all owners of PIVX to participate in earning block rewards\n"
"                           while securing the network with full node wallets, as well as to\n"
"                           run Masternodes to create and vote on proposals.\n"
"                           </p></body></html>\n"
"          "
                        "               ", nullptr));
        labelNumber_UnspendablePIV->setText(QCoreApplication::translate("SettingsFaqWidget", "2", nullptr));
        labelSubtitle_UnspendablePIV->setText(QCoreApplication::translate("SettingsFaqWidget", "Why are my PIV unspendable?", nullptr));
        labelContent_UnspendablePIV->setText(QCoreApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           Newly received PIVX requires 6 confirmations on the network\n"
"                           to become eligible for spending which can take ~6 minutes.\n"
"                           </p><p align=\"justify\">\n"
"                           Your PIVX wallet also needs to be completely synchronized\n"
"                           to see and spend balances on the network.\n"
"                           </p></body></html>\n"
"                         ", nullptr));
        labelNumber_Stake->setText(QCoreApplication::translate("SettingsFaqWidget", "3", nullptr));
        labelSubtitle_Stake->setText(QCoreApplication::translate("SettingsFaqWidget", "How do I stake PIV?", nullptr));
        labelContent_Stake->setText(QCoreApplication::translate("SettingsFaqWidget", "<html><head/><body><ol style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li align=\"justify\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Make sure your wallet is completely synchronized and you are using the latest release. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You must have a balance of PIVX with a minimum of 600 confirmations. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Your wallet must stay online and be unlocked for staking purposes. </li><li align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Once all those steps are followed staking should be enabled. </li><li align=\"justify\" style=\" ma"
                        "rgin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can see the status of staking in the wallet by mousing over the package icon in the row on the top left of the wallet interface. There package will be lit up and will state &quot;Staking Enabled&quot; to indicate it is staking. Using the command line interface (pivx-cli); the command <span style=\" font-style:italic;\">getstakingstatus</span> will confirm that staking is active. </li></ol></body></html>", nullptr));
        labelNumber_Support->setText(QCoreApplication::translate("SettingsFaqWidget", "4", nullptr));
        labelSubtitle_Support->setText(QCoreApplication::translate("SettingsFaqWidget", "Where should I go if I need support?", nullptr));
        labelContent_Support->setText(QCoreApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           We have support channels in most of our official chat groups, for example\n"
"                           <a style='color: #b088ff' href='https://discord.PIVX.org'>\n"
"                           #support in our Discord</a>.\n"
"                           If you prefer to submit a ticket, One can be\n"
"                           <a style='color: #b088ff' href='https://PIVX.freshdesk.com'>\n"
"                           our Freshdesk support site</a>.\n"
"                           </p></body></html>\n"
"                         ", nullptr));
        labelNumber_Masternode->setText(QCoreApplication::translate("SettingsFaqWidget", "5", nullptr));
        labelSubtitle_Masternode->setText(QCoreApplication::translate("SettingsFaqWidget", "What is a Masternode?", nullptr));
        labelContent_Masternode->setText(QCoreApplication::translate("SettingsFaqWidget", "\n"
"                           <html><head/><body><p align=\"justify\">\n"
"                           A masternode is a computer running a full node PIVX core wallet with a\n"
"                           requirement of 50,000 PIV secured collateral to provide extra services\n"
"                           to the network and in return, receive a portion of the block reward\n"
"                           regularly.  These services include:\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           <ul>\n"
"                           <li>Instant transactions (SwiftX)</li>\n"
"                           <li>A decentralized governance (Proposal Voting)</li>\n"
"                           <li>A decentralized budgeting system (Treasury)</li>\n"
"                           <li>Validation of transactions within each block</li>\n"
"                           <li>Act as an additional full node in the network</li>\n"
"                           </ul>\n"
"\n"
"                           <"
                        "/p><p align=\"justify\">\n"
"                           For providing such services, masternodes are also paid a certain portion\n"
"                           of reward for each block. This can serve as a passive income to the\n"
"                           masternode owners minus their running cost.\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           Masternode Perks:\n"
"                           </p><p align=\"justify\">\n"
"                           <ul>\n"
"                           <li>Participate in PIVX Governance</li>\n"
"                           <li>Earn Masternode Rewards</li>\n"
"                           <li>Commodity option for future sale</li>\n"
"                           <li>Help secure the PIVX network</li>\n"
"                           </ul>\n"
"                           </p><p align=\"justify\">\n"
"\n"
"                           Requirements:\n"
"                           </p><p align=\"justify\">\n"
"                           <ul>\n"
""
                        "                           <li>50,000 PIV per single Masternode instance</li>\n"
"                           <li>Must be stored in a core wallet</li>\n"
"                           <li>Need dedicated IP address</li>\n"
"                           <li>Masternode wallet to remain online</li>\n"
"                           </ul>\n"
"                           </p></body></html>\n"
"                         ", nullptr));
        labelNumber_MNController->setText(QCoreApplication::translate("SettingsFaqWidget", "6", nullptr));
        labelSubtitle_MNController->setText(QCoreApplication::translate("SettingsFaqWidget", "What is a Masternode Controller?", nullptr));
        labelContent_MNController->setText(QCoreApplication::translate("SettingsFaqWidget", "<html><head/><body><p align=\"justify\">A Masternode Controller wallet is where the 50,000 PIV collateral can reside during a Controller-Remote masternode setup. It is a wallet that can activate the remote masternode wallet(s) and allows you to keep your collateral coins offline while the remote masternode remains online. </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsFaqWidget: public Ui_SettingsFaqWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSFAQWIDGET_H

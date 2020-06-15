/********************************************************************************
** Form generated from reading UI file 'dashboardwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARDWIDGET_H
#define UI_DASHBOARDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashboardWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *left_2;
    QVBoxLayout *verticalLayout22;
    QFrame *left_top_container;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelTitle;
    QLabel *labelSubtitle;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBoxSortType;
    QComboBox *comboBoxSort;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWarning;
    QVBoxLayout *verticalLayout_3;
    QWidget *containerWarning;
    QVBoxLayout *verticalLayout_21;
    QFrame *frameWarning;
    QHBoxLayout *horizontalLayout11;
    QPushButton *imgWarning;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblWarning;
    QLabel *lblDivisory;
    QListView *listTransactions;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer12;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout12;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QSpacerItem *verticalSpacer_21;
    QPushButton *btnHowTo;
    QWidget *right;
    QVBoxLayout *verticalLayout_31;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelTitle2;
    QLabel *labelMessage;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelAmountPiv;
    QSpacerItem *verticalSpacer_6;
    QWidget *layoutChart;
    QVBoxLayout *verticalLayout_8;
    QWidget *verticalWidgetChart;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelChart;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelSquarePiv;
    QLabel *labelPiv;
    QWidget *chartContainer2;
    QHBoxLayout *horizontalLayout_11;
    QWidget *containerChartArrow;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_3;
    QWidget *containerArrows;
    QVBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonChartArrow;
    QPushButton *pushButtonChartRight;
    QFrame *chartContainer;
    QWidget *containerSort;
    QHBoxLayout *horizontalLayout_61;
    QGroupBox *groupBoxChart;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonMonth;
    QPushButton *pushButtonYear;
    QPushButton *pushButtonAll;
    QGroupBox *container_chart_dropboxes;
    QHBoxLayout *horizontalLayout_8;
    QWidget *containerBoxMonths;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *comboBoxMonths;
    QWidget *containerBoxYears;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *comboBoxYears;
    QFrame *emptyContainerChart;
    QVBoxLayout *verticalLayout_71;
    QSpacerItem *verticalSpacer11;
    QFrame *emptyScreen1;
    QVBoxLayout *verticalLayout;
    QPushButton *pushImgEmptyChart;
    QLabel *labelEmptyChart;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelMessageEmpty;
    QWidget *layoutShadow;
    QVBoxLayout *verticalLayout_9;

    void setupUi(QWidget *DashboardWidget)
    {
        if (DashboardWidget->objectName().isEmpty())
            DashboardWidget->setObjectName(QString::fromUtf8("DashboardWidget"));
        DashboardWidget->resize(800, 595);
        horizontalLayout_2 = new QHBoxLayout(DashboardWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(DashboardWidget);
        left->setObjectName(QString::fromUtf8("left"));
        left_2 = new QVBoxLayout(left);
        left_2->setSpacing(0);
        left_2->setObjectName(QString::fromUtf8("left_2"));
        left_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout22 = new QVBoxLayout();
        verticalLayout22->setSpacing(0);
        verticalLayout22->setObjectName(QString::fromUtf8("verticalLayout22"));
        verticalLayout22->setContentsMargins(20, 15, 20, -1);
        left_top_container = new QFrame(left);
        left_top_container->setObjectName(QString::fromUtf8("left_top_container"));
        horizontalLayout = new QHBoxLayout(left_top_container);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 5, -1, -1);
        labelTitle = new QLabel(left_top_container);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayout_5->addWidget(labelTitle);

        labelSubtitle = new QLabel(left_top_container);
        labelSubtitle->setObjectName(QString::fromUtf8("labelSubtitle"));
        labelSubtitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(labelSubtitle);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBoxSortType = new QComboBox(left_top_container);
        comboBoxSortType->setObjectName(QString::fromUtf8("comboBoxSortType"));
        comboBoxSortType->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(comboBoxSortType);

        comboBoxSort = new QComboBox(left_top_container);
        comboBoxSort->setObjectName(QString::fromUtf8("comboBoxSort"));
        comboBoxSort->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(comboBoxSort);


        verticalLayout22->addWidget(left_top_container);


        left_2->addLayout(verticalLayout22);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        left_2->addItem(verticalSpacer);

        layoutWarning = new QWidget(left);
        layoutWarning->setObjectName(QString::fromUtf8("layoutWarning"));
        verticalLayout_3 = new QVBoxLayout(layoutWarning);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        containerWarning = new QWidget(layoutWarning);
        containerWarning->setObjectName(QString::fromUtf8("containerWarning"));
        verticalLayout_21 = new QVBoxLayout(containerWarning);
        verticalLayout_21->setSpacing(9);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(20, 9, 20, 0);
        frameWarning = new QFrame(containerWarning);
        frameWarning->setObjectName(QString::fromUtf8("frameWarning"));
        frameWarning->setStyleSheet(QString::fromUtf8("border:none;"));
        frameWarning->setFrameShape(QFrame::StyledPanel);
        frameWarning->setFrameShadow(QFrame::Raised);
        horizontalLayout11 = new QHBoxLayout(frameWarning);
        horizontalLayout11->setObjectName(QString::fromUtf8("horizontalLayout11"));
        horizontalLayout11->setContentsMargins(0, 0, 0, 0);
        imgWarning = new QPushButton(frameWarning);
        imgWarning->setObjectName(QString::fromUtf8("imgWarning"));
        imgWarning->setStyleSheet(QString::fromUtf8("border:none;"));
        imgWarning->setIconSize(QSize(24, 24));

        horizontalLayout11->addWidget(imgWarning, 0, Qt::AlignVCenter);

        horizontalSpacer_3 = new QSpacerItem(12, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout11->addItem(horizontalSpacer_3);

        lblWarning = new QLabel(frameWarning);
        lblWarning->setObjectName(QString::fromUtf8("lblWarning"));
        lblWarning->setStyleSheet(QString::fromUtf8(""));
        lblWarning->setText(QString::fromUtf8("N/A"));
        lblWarning->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout11->addWidget(lblWarning, 0, Qt::AlignVCenter);

        horizontalLayout11->setStretch(2, 2);

        verticalLayout_21->addWidget(frameWarning);

        lblDivisory = new QLabel(containerWarning);
        lblDivisory->setObjectName(QString::fromUtf8("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QString::fromUtf8("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_21->addWidget(lblDivisory);


        verticalLayout_3->addWidget(containerWarning);


        left_2->addWidget(layoutWarning);

        listTransactions = new QListView(left);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setMouseTracking(true);
        listTransactions->setSelectionBehavior(QAbstractItemView::SelectItems);
        listTransactions->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);

        left_2->addWidget(listTransactions);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QString::fromUtf8("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(emptyContainer);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 20);
        verticalSpacer12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer12);

        emptyScreen = new QFrame(emptyContainer);
        emptyScreen->setObjectName(QString::fromUtf8("emptyScreen"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyScreen->sizePolicy().hasHeightForWidth());
        emptyScreen->setSizePolicy(sizePolicy);
        emptyScreen->setFrameShape(QFrame::StyledPanel);
        emptyScreen->setFrameShadow(QFrame::Raised);
        verticalLayout12 = new QVBoxLayout(emptyScreen);
        verticalLayout12->setSpacing(30);
        verticalLayout12->setObjectName(QString::fromUtf8("verticalLayout12"));
        verticalLayout12->setContentsMargins(0, 0, 0, 0);
        pushImgEmpty = new QPushButton(emptyScreen);
        pushImgEmpty->setObjectName(QString::fromUtf8("pushImgEmpty"));
        pushImgEmpty->setMinimumSize(QSize(100, 100));
        pushImgEmpty->setMaximumSize(QSize(100, 100));
        pushImgEmpty->setFocusPolicy(Qt::NoFocus);
        pushImgEmpty->setIconSize(QSize(100, 100));

        verticalLayout12->addWidget(pushImgEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmpty = new QLabel(emptyScreen);
        labelEmpty->setObjectName(QString::fromUtf8("labelEmpty"));
        labelEmpty->setStyleSheet(QString::fromUtf8(""));
        labelEmpty->setAlignment(Qt::AlignCenter);

        verticalLayout12->addWidget(labelEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_7->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_21);

        btnHowTo = new QPushButton(emptyContainer);
        btnHowTo->setObjectName(QString::fromUtf8("btnHowTo"));
        btnHowTo->setMinimumSize(QSize(280, 50));
        btnHowTo->setFocusPolicy(Qt::NoFocus);

        verticalLayout_7->addWidget(btnHowTo, 0, Qt::AlignHCenter);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 8);

        left_2->addWidget(emptyContainer);


        horizontalLayout_2->addWidget(left);

        right = new QWidget(DashboardWidget);
        right->setObjectName(QString::fromUtf8("right"));
        right->setMinimumSize(QSize(200, 0));
        verticalLayout_31 = new QVBoxLayout(right);
        verticalLayout_31->setSpacing(0);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        labelTitle2 = new QLabel(right);
        labelTitle2->setObjectName(QString::fromUtf8("labelTitle2"));
        labelTitle2->setMinimumSize(QSize(0, 30));

        verticalLayout_6->addWidget(labelTitle2);

        labelMessage = new QLabel(right);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));

        verticalLayout_6->addWidget(labelMessage);


        horizontalLayout_3->addLayout(verticalLayout_6);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelAmountPiv = new QLabel(right);
        labelAmountPiv->setObjectName(QString::fromUtf8("labelAmountPiv"));
        labelAmountPiv->setText(QString::fromUtf8("0 BIR"));
        labelAmountPiv->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labelAmountPiv);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        layoutChart = new QWidget(right);
        layoutChart->setObjectName(QString::fromUtf8("layoutChart"));
        verticalLayout_8 = new QVBoxLayout(layoutChart);
        verticalLayout_8->setSpacing(16);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalWidgetChart = new QWidget(layoutChart);
        verticalWidgetChart->setObjectName(QString::fromUtf8("verticalWidgetChart"));
        verticalWidgetChart->setMinimumSize(QSize(0, 190));
        verticalWidgetChart->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_4 = new QVBoxLayout(verticalWidgetChart);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelChart = new QLabel(verticalWidgetChart);
        labelChart->setObjectName(QString::fromUtf8("labelChart"));

        horizontalLayout_4->addWidget(labelChart);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        labelSquarePiv = new QLabel(verticalWidgetChart);
        labelSquarePiv->setObjectName(QString::fromUtf8("labelSquarePiv"));
        labelSquarePiv->setMinimumSize(QSize(14, 14));
        labelSquarePiv->setMaximumSize(QSize(14, 14));

        horizontalLayout_4->addWidget(labelSquarePiv);

        labelPiv = new QLabel(verticalWidgetChart);
        labelPiv->setObjectName(QString::fromUtf8("labelPiv"));
        labelPiv->setText(QString::fromUtf8("BIR"));

        horizontalLayout_4->addWidget(labelPiv);


        verticalLayout_4->addLayout(horizontalLayout_4);

        chartContainer2 = new QWidget(verticalWidgetChart);
        chartContainer2->setObjectName(QString::fromUtf8("chartContainer2"));
        chartContainer2->setMinimumSize(QSize(0, 150));
        chartContainer2->setStyleSheet(QString::fromUtf8("#chartContainer{padding:0px; margin:0px;}"));
        horizontalLayout_11 = new QHBoxLayout(chartContainer2);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        containerChartArrow = new QWidget(chartContainer2);
        containerChartArrow->setObjectName(QString::fromUtf8("containerChartArrow"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(containerChartArrow->sizePolicy().hasHeightForWidth());
        containerChartArrow->setSizePolicy(sizePolicy1);
        containerChartArrow->setMinimumSize(QSize(19, 0));
        containerChartArrow->setMaximumSize(QSize(19, 16777215));
        containerChartArrow->setStyleSheet(QString::fromUtf8("#widget{\n"
"	padding:0px;\n"
"	margin:0px;\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(containerChartArrow);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, -1, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        containerArrows = new QWidget(containerChartArrow);
        containerArrows->setObjectName(QString::fromUtf8("containerArrows"));
        horizontalLayout_6 = new QVBoxLayout(containerArrows);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButtonChartArrow = new QPushButton(containerArrows);
        pushButtonChartArrow->setObjectName(QString::fromUtf8("pushButtonChartArrow"));
        pushButtonChartArrow->setMinimumSize(QSize(19, 19));
        pushButtonChartArrow->setMaximumSize(QSize(19, 19));
        pushButtonChartArrow->setFocusPolicy(Qt::NoFocus);
        pushButtonChartArrow->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(pushButtonChartArrow);

        pushButtonChartRight = new QPushButton(containerArrows);
        pushButtonChartRight->setObjectName(QString::fromUtf8("pushButtonChartRight"));
        pushButtonChartRight->setMinimumSize(QSize(19, 19));
        pushButtonChartRight->setMaximumSize(QSize(19, 19));
        pushButtonChartRight->setFocusPolicy(Qt::NoFocus);
        pushButtonChartRight->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_6->addWidget(pushButtonChartRight);


        verticalLayout_10->addWidget(containerArrows, 0, Qt::AlignVCenter);


        horizontalLayout_11->addWidget(containerChartArrow);

        chartContainer = new QFrame(chartContainer2);
        chartContainer->setObjectName(QString::fromUtf8("chartContainer"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(chartContainer->sizePolicy().hasHeightForWidth());
        chartContainer->setSizePolicy(sizePolicy2);
        chartContainer->setStyleSheet(QString::fromUtf8("padding:0px;\n"
"margin:0px;"));
        chartContainer->setFrameShape(QFrame::StyledPanel);
        chartContainer->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(chartContainer);


        verticalLayout_4->addWidget(chartContainer2);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 5);

        verticalLayout_8->addWidget(verticalWidgetChart);

        containerSort = new QWidget(layoutChart);
        containerSort->setObjectName(QString::fromUtf8("containerSort"));
        horizontalLayout_61 = new QHBoxLayout(containerSort);
        horizontalLayout_61->setSpacing(28);
        horizontalLayout_61->setObjectName(QString::fromUtf8("horizontalLayout_61"));
        horizontalLayout_61->setContentsMargins(0, 0, 0, 0);
        groupBoxChart = new QGroupBox(containerSort);
        groupBoxChart->setObjectName(QString::fromUtf8("groupBoxChart"));
        groupBoxChart->setMinimumSize(QSize(0, 80));
        groupBoxChart->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_7 = new QHBoxLayout(groupBoxChart);
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, -1, 0, -1);
        pushButtonMonth = new QPushButton(groupBoxChart);
        pushButtonMonth->setObjectName(QString::fromUtf8("pushButtonMonth"));
        pushButtonMonth->setMinimumSize(QSize(50, 35));
        pushButtonMonth->setMaximumSize(QSize(16777215, 16777215));
        pushButtonMonth->setFocusPolicy(Qt::NoFocus);
        pushButtonMonth->setCheckable(true);
        pushButtonMonth->setAutoExclusive(true);

        horizontalLayout_7->addWidget(pushButtonMonth);

        pushButtonYear = new QPushButton(groupBoxChart);
        pushButtonYear->setObjectName(QString::fromUtf8("pushButtonYear"));
        pushButtonYear->setMinimumSize(QSize(50, 35));
        pushButtonYear->setMaximumSize(QSize(16777215, 16777215));
        pushButtonYear->setFocusPolicy(Qt::NoFocus);
        pushButtonYear->setCheckable(true);
        pushButtonYear->setAutoExclusive(true);

        horizontalLayout_7->addWidget(pushButtonYear);

        pushButtonAll = new QPushButton(groupBoxChart);
        pushButtonAll->setObjectName(QString::fromUtf8("pushButtonAll"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButtonAll->sizePolicy().hasHeightForWidth());
        pushButtonAll->setSizePolicy(sizePolicy3);
        pushButtonAll->setMinimumSize(QSize(50, 35));
        pushButtonAll->setMaximumSize(QSize(16777215, 16777215));
        pushButtonAll->setFocusPolicy(Qt::NoFocus);
        pushButtonAll->setCheckable(true);
        pushButtonAll->setChecked(true);
        pushButtonAll->setAutoExclusive(true);

        horizontalLayout_7->addWidget(pushButtonAll);


        horizontalLayout_61->addWidget(groupBoxChart);

        container_chart_dropboxes = new QGroupBox(containerSort);
        container_chart_dropboxes->setObjectName(QString::fromUtf8("container_chart_dropboxes"));
        container_chart_dropboxes->setMinimumSize(QSize(55, 80));
        container_chart_dropboxes->setMaximumSize(QSize(16777215, 80));
        horizontalLayout_8 = new QHBoxLayout(container_chart_dropboxes);
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        containerBoxMonths = new QWidget(container_chart_dropboxes);
        containerBoxMonths->setObjectName(QString::fromUtf8("containerBoxMonths"));
        containerBoxMonths->setMinimumSize(QSize(55, 0));
        horizontalLayout_9 = new QHBoxLayout(containerBoxMonths);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        comboBoxMonths = new QComboBox(containerBoxMonths);
        comboBoxMonths->setObjectName(QString::fromUtf8("comboBoxMonths"));
        comboBoxMonths->setMinimumSize(QSize(55, 0));

        horizontalLayout_9->addWidget(comboBoxMonths);


        horizontalLayout_8->addWidget(containerBoxMonths);

        containerBoxYears = new QWidget(container_chart_dropboxes);
        containerBoxYears->setObjectName(QString::fromUtf8("containerBoxYears"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(containerBoxYears->sizePolicy().hasHeightForWidth());
        containerBoxYears->setSizePolicy(sizePolicy4);
        containerBoxYears->setMinimumSize(QSize(50, 0));
        horizontalLayout_10 = new QHBoxLayout(containerBoxYears);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        comboBoxYears = new QComboBox(containerBoxYears);
        comboBoxYears->setObjectName(QString::fromUtf8("comboBoxYears"));
        comboBoxYears->setMinimumSize(QSize(40, 0));

        horizontalLayout_10->addWidget(comboBoxYears);


        horizontalLayout_8->addWidget(containerBoxYears);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        horizontalLayout_61->addWidget(container_chart_dropboxes);

        horizontalLayout_61->setStretch(0, 3);
        horizontalLayout_61->setStretch(1, 2);

        verticalLayout_8->addWidget(containerSort, 0, Qt::AlignVCenter);

        verticalLayout_8->setStretch(0, 3);

        verticalLayout_2->addWidget(layoutChart);

        emptyContainerChart = new QFrame(right);
        emptyContainerChart->setObjectName(QString::fromUtf8("emptyContainerChart"));
        emptyContainerChart->setMinimumSize(QSize(0, 100));
        emptyContainerChart->setFrameShape(QFrame::StyledPanel);
        emptyContainerChart->setFrameShadow(QFrame::Raised);
        verticalLayout_71 = new QVBoxLayout(emptyContainerChart);
        verticalLayout_71->setSpacing(0);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 0, 0, 25);
        verticalSpacer11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_71->addItem(verticalSpacer11);

        emptyScreen1 = new QFrame(emptyContainerChart);
        emptyScreen1->setObjectName(QString::fromUtf8("emptyScreen1"));
        sizePolicy.setHeightForWidth(emptyScreen1->sizePolicy().hasHeightForWidth());
        emptyScreen1->setSizePolicy(sizePolicy);
        emptyScreen1->setFrameShape(QFrame::StyledPanel);
        emptyScreen1->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(emptyScreen1);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushImgEmptyChart = new QPushButton(emptyScreen1);
        pushImgEmptyChart->setObjectName(QString::fromUtf8("pushImgEmptyChart"));
        pushImgEmptyChart->setMinimumSize(QSize(100, 100));
        pushImgEmptyChart->setMaximumSize(QSize(100, 100));
        pushImgEmptyChart->setFocusPolicy(Qt::NoFocus);
        pushImgEmptyChart->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushImgEmptyChart, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmptyChart = new QLabel(emptyScreen1);
        labelEmptyChart->setObjectName(QString::fromUtf8("labelEmptyChart"));
        labelEmptyChart->setStyleSheet(QString::fromUtf8(""));
        labelEmptyChart->setText(QString::fromUtf8("N/A"));
        labelEmptyChart->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelEmptyChart, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_71->addWidget(emptyScreen1, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_71->addItem(verticalSpacer_2);

        labelMessageEmpty = new QLabel(emptyContainerChart);
        labelMessageEmpty->setObjectName(QString::fromUtf8("labelMessageEmpty"));
        labelMessageEmpty->setStyleSheet(QString::fromUtf8("#labelMessageEmpty {\n"
"	padding-left:30px;\n"
"	padding-right:30px;\n"
"}"));
        labelMessageEmpty->setAlignment(Qt::AlignCenter);
        labelMessageEmpty->setWordWrap(true);

        verticalLayout_71->addWidget(labelMessageEmpty);

        verticalLayout_71->setStretch(0, 1);
        verticalLayout_71->setStretch(1, 8);

        verticalLayout_2->addWidget(emptyContainerChart);

        layoutShadow = new QWidget(right);
        layoutShadow->setObjectName(QString::fromUtf8("layoutShadow"));
        verticalLayout_9 = new QVBoxLayout(layoutShadow);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(layoutShadow);


        verticalLayout_31->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(right);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 2);

        retranslateUi(DashboardWidget);

        QMetaObject::connectSlotsByName(DashboardWidget);
    } // setupUi

    void retranslateUi(QWidget *DashboardWidget)
    {
        DashboardWidget->setWindowTitle(QCoreApplication::translate("DashboardWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("DashboardWidget", "Transactions", nullptr));
        labelSubtitle->setText(QCoreApplication::translate("DashboardWidget", "View your account's history", nullptr));
        imgWarning->setText(QString());
        lblDivisory->setText(QString());
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QCoreApplication::translate("DashboardWidget", "No transactions yet", nullptr));
        btnHowTo->setText(QCoreApplication::translate("DashboardWidget", "How to get BIR", nullptr));
        labelTitle2->setText(QCoreApplication::translate("DashboardWidget", "Staking Rewards", nullptr));
        labelMessage->setText(QCoreApplication::translate("DashboardWidget", "Amount of BIR staked.", nullptr));
        labelChart->setText(QCoreApplication::translate("DashboardWidget", "Staking statistics", nullptr));
        labelSquarePiv->setText(QString());
        pushButtonChartArrow->setText(QString());
        pushButtonChartRight->setText(QString());
        groupBoxChart->setTitle(QCoreApplication::translate("DashboardWidget", "Sort by", nullptr));
        pushButtonMonth->setText(QCoreApplication::translate("DashboardWidget", "Days", nullptr));
        pushButtonYear->setText(QCoreApplication::translate("DashboardWidget", "Months", nullptr));
        pushButtonAll->setText(QCoreApplication::translate("DashboardWidget", "Years", nullptr));
        container_chart_dropboxes->setTitle(QCoreApplication::translate("DashboardWidget", "Filter by", nullptr));
        pushImgEmptyChart->setText(QString());
        labelMessageEmpty->setText(QCoreApplication::translate("DashboardWidget", "You can verify the staking activity in the status bar at the top right of the wallet.\n"
"It will start automatically as soon as the wallet has enough confirmations on any unspent balances, and the wallet has synced.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashboardWidget: public Ui_DashboardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARDWIDGET_H

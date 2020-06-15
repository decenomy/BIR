/********************************************************************************
** Form generated from reading UI file 'settingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_1;
    QWidget *titleMenuList;
    QHBoxLayout *horizontalLayout_1;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QWidget *menuFileContainer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonFile;
    QWidget *fileButtonsWidget;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonFile2;
    QPushButton *pushButtonFile3;
    QPushButton *pushButtonExportCsv;
    QWidget *menuToolsContainer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonConfiguration;
    QWidget *configurationButtonsWidget;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButtonConfiguration4;
    QPushButton *pushButtonConfiguration3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonOptions;
    QWidget *optionsButtonsWidget;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonOptions1;
    QPushButton *pushButtonOptions2;
    QPushButton *pushButtonOptions5;
    QHBoxLayout *horizontalTools;
    QPushButton *pushButtonTools;
    QWidget *toolsButtonsWidget;
    QVBoxLayout *verticalTools_11;
    QPushButton *pushButtonTools1;
    QPushButton *pushButtonTools2;
    QPushButton *pushButtonTools5;
    QHBoxLayout *horizontalHelp;
    QPushButton *pushButtonHelp;
    QWidget *helpButtonsWidget;
    QVBoxLayout *verticalHelp;
    QPushButton *pushButtonHelp2;
    QWidget *right;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QStackedWidget *stackedWidgetContainer;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QString::fromUtf8("SettingsWidget"));
        SettingsWidget->resize(629, 430);
        horizontalLayout = new QHBoxLayout(SettingsWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsWidget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(left);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        titleMenuList = new QWidget(left);
        titleMenuList->setObjectName(QString::fromUtf8("titleMenuList"));
        titleMenuList->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_1 = new QHBoxLayout(titleMenuList);
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(20, 0, 20, 0);
        labelTitle = new QLabel(titleMenuList);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        horizontalLayout_1->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);


        verticalLayout_1->addWidget(titleMenuList);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(left);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 244, 451));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setMaximumSize(QSize(16777215, 650));
        scrollAreaWidgetContents->setAutoFillBackground(true);
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(16777215, 450));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        menuFileContainer = new QWidget(groupBox);
        menuFileContainer->setObjectName(QString::fromUtf8("menuFileContainer"));
        menuFileContainer->setMaximumSize(QSize(16777215, 160));
        horizontalLayout_2 = new QHBoxLayout(menuFileContainer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, 0, 20, 0);
        pushButtonFile = new QPushButton(menuFileContainer);
        pushButtonFile->setObjectName(QString::fromUtf8("pushButtonFile"));
        pushButtonFile->setMinimumSize(QSize(0, 50));
        pushButtonFile->setMaximumSize(QSize(16777215, 50));
        pushButtonFile->setFocusPolicy(Qt::NoFocus);
        pushButtonFile->setCheckable(true);
        pushButtonFile->setAutoExclusive(false);

        horizontalLayout_2->addWidget(pushButtonFile, 0, Qt::AlignTop);


        verticalLayout_5->addWidget(menuFileContainer);

        fileButtonsWidget = new QWidget(groupBox);
        fileButtonsWidget->setObjectName(QString::fromUtf8("fileButtonsWidget"));
        fileButtonsWidget->setMaximumSize(QSize(16777215, 165));
        verticalLayout_6 = new QVBoxLayout(fileButtonsWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButtonFile2 = new QPushButton(fileButtonsWidget);
        pushButtonFile2->setObjectName(QString::fromUtf8("pushButtonFile2"));
        pushButtonFile2->setMinimumSize(QSize(0, 50));
        pushButtonFile2->setMaximumSize(QSize(16777215, 50));
        pushButtonFile2->setFocusPolicy(Qt::NoFocus);
        pushButtonFile2->setCheckable(true);
        pushButtonFile2->setAutoExclusive(false);

        verticalLayout_6->addWidget(pushButtonFile2);

        pushButtonFile3 = new QPushButton(fileButtonsWidget);
        pushButtonFile3->setObjectName(QString::fromUtf8("pushButtonFile3"));
        pushButtonFile3->setMinimumSize(QSize(0, 50));
        pushButtonFile3->setMaximumSize(QSize(16777215, 50));
        pushButtonFile3->setFocusPolicy(Qt::NoFocus);
        pushButtonFile3->setCheckable(true);
        pushButtonFile3->setAutoExclusive(false);

        verticalLayout_6->addWidget(pushButtonFile3);

        pushButtonExportCsv = new QPushButton(fileButtonsWidget);
        pushButtonExportCsv->setObjectName(QString::fromUtf8("pushButtonExportCsv"));
        pushButtonExportCsv->setMinimumSize(QSize(0, 50));
        pushButtonExportCsv->setMaximumSize(QSize(16777215, 50));
        pushButtonExportCsv->setFocusPolicy(Qt::NoFocus);
        pushButtonExportCsv->setCheckable(true);
        pushButtonExportCsv->setAutoExclusive(false);

        verticalLayout_6->addWidget(pushButtonExportCsv);


        verticalLayout_5->addWidget(fileButtonsWidget);

        menuToolsContainer = new QWidget(groupBox);
        menuToolsContainer->setObjectName(QString::fromUtf8("menuToolsContainer"));
        menuToolsContainer->setMaximumSize(QSize(16777215, 160));
        horizontalLayout_3 = new QHBoxLayout(menuToolsContainer);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 0, 20, 0);
        pushButtonConfiguration = new QPushButton(menuToolsContainer);
        pushButtonConfiguration->setObjectName(QString::fromUtf8("pushButtonConfiguration"));
        pushButtonConfiguration->setMinimumSize(QSize(0, 50));
        pushButtonConfiguration->setMaximumSize(QSize(16777215, 50));
        pushButtonConfiguration->setFocusPolicy(Qt::NoFocus);
        pushButtonConfiguration->setCheckable(true);
        pushButtonConfiguration->setAutoExclusive(false);

        horizontalLayout_3->addWidget(pushButtonConfiguration, 0, Qt::AlignTop);


        verticalLayout_5->addWidget(menuToolsContainer);

        configurationButtonsWidget = new QWidget(groupBox);
        configurationButtonsWidget->setObjectName(QString::fromUtf8("configurationButtonsWidget"));
        configurationButtonsWidget->setMaximumSize(QSize(16777215, 105));
        verticalLayout_7 = new QVBoxLayout(configurationButtonsWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButtonConfiguration4 = new QPushButton(configurationButtonsWidget);
        pushButtonConfiguration4->setObjectName(QString::fromUtf8("pushButtonConfiguration4"));
        pushButtonConfiguration4->setMinimumSize(QSize(0, 50));
        pushButtonConfiguration4->setMaximumSize(QSize(16777215, 50));
        pushButtonConfiguration4->setFocusPolicy(Qt::NoFocus);
        pushButtonConfiguration4->setCheckable(true);
        pushButtonConfiguration4->setAutoExclusive(false);

        verticalLayout_7->addWidget(pushButtonConfiguration4);

        pushButtonConfiguration3 = new QPushButton(configurationButtonsWidget);
        pushButtonConfiguration3->setObjectName(QString::fromUtf8("pushButtonConfiguration3"));
        pushButtonConfiguration3->setMinimumSize(QSize(0, 50));
        pushButtonConfiguration3->setMaximumSize(QSize(16777215, 50));
        pushButtonConfiguration3->setFocusPolicy(Qt::NoFocus);
        pushButtonConfiguration3->setCheckable(true);
        pushButtonConfiguration3->setAutoExclusive(false);

        verticalLayout_7->addWidget(pushButtonConfiguration3);


        verticalLayout_5->addWidget(configurationButtonsWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, 20, -1);
        pushButtonOptions = new QPushButton(groupBox);
        pushButtonOptions->setObjectName(QString::fromUtf8("pushButtonOptions"));
        pushButtonOptions->setMinimumSize(QSize(0, 50));
        pushButtonOptions->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions->setFocusPolicy(Qt::NoFocus);
        pushButtonOptions->setCheckable(true);
        pushButtonOptions->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonOptions, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalLayout_4);

        optionsButtonsWidget = new QWidget(groupBox);
        optionsButtonsWidget->setObjectName(QString::fromUtf8("optionsButtonsWidget"));
        optionsButtonsWidget->setMaximumSize(QSize(16777215, 160));
        verticalLayout_8 = new QVBoxLayout(optionsButtonsWidget);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonOptions1 = new QPushButton(optionsButtonsWidget);
        pushButtonOptions1->setObjectName(QString::fromUtf8("pushButtonOptions1"));
        pushButtonOptions1->setMinimumSize(QSize(0, 50));
        pushButtonOptions1->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions1->setFocusPolicy(Qt::NoFocus);
        pushButtonOptions1->setCheckable(true);
        pushButtonOptions1->setChecked(false);
        pushButtonOptions1->setAutoExclusive(false);

        verticalLayout_8->addWidget(pushButtonOptions1);

        pushButtonOptions2 = new QPushButton(optionsButtonsWidget);
        pushButtonOptions2->setObjectName(QString::fromUtf8("pushButtonOptions2"));
        pushButtonOptions2->setMinimumSize(QSize(0, 50));
        pushButtonOptions2->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions2->setFocusPolicy(Qt::NoFocus);
        pushButtonOptions2->setCheckable(true);
        pushButtonOptions2->setAutoExclusive(false);

        verticalLayout_8->addWidget(pushButtonOptions2);

        pushButtonOptions5 = new QPushButton(optionsButtonsWidget);
        pushButtonOptions5->setObjectName(QString::fromUtf8("pushButtonOptions5"));
        pushButtonOptions5->setMinimumSize(QSize(0, 50));
        pushButtonOptions5->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions5->setFocusPolicy(Qt::NoFocus);
        pushButtonOptions5->setCheckable(true);
        pushButtonOptions5->setAutoExclusive(false);

        verticalLayout_8->addWidget(pushButtonOptions5);


        verticalLayout_5->addWidget(optionsButtonsWidget);

        horizontalTools = new QHBoxLayout();
        horizontalTools->setSpacing(0);
        horizontalTools->setObjectName(QString::fromUtf8("horizontalTools"));
        horizontalTools->setContentsMargins(20, -1, 20, -1);
        pushButtonTools = new QPushButton(groupBox);
        pushButtonTools->setObjectName(QString::fromUtf8("pushButtonTools"));
        pushButtonTools->setMinimumSize(QSize(0, 50));
        pushButtonTools->setMaximumSize(QSize(16777215, 50));
        pushButtonTools->setFocusPolicy(Qt::NoFocus);
        pushButtonTools->setCheckable(true);
        pushButtonTools->setAutoExclusive(false);

        horizontalTools->addWidget(pushButtonTools, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalTools);

        toolsButtonsWidget = new QWidget(groupBox);
        toolsButtonsWidget->setObjectName(QString::fromUtf8("toolsButtonsWidget"));
        toolsButtonsWidget->setMaximumSize(QSize(16777215, 160));
        verticalTools_11 = new QVBoxLayout(toolsButtonsWidget);
        verticalTools_11->setSpacing(0);
        verticalTools_11->setObjectName(QString::fromUtf8("verticalTools_11"));
        verticalTools_11->setContentsMargins(0, 0, 0, 0);
        pushButtonTools1 = new QPushButton(toolsButtonsWidget);
        pushButtonTools1->setObjectName(QString::fromUtf8("pushButtonTools1"));
        pushButtonTools1->setMinimumSize(QSize(0, 50));
        pushButtonTools1->setMaximumSize(QSize(16777215, 50));
        pushButtonTools1->setFocusPolicy(Qt::NoFocus);
        pushButtonTools1->setCheckable(true);
        pushButtonTools1->setChecked(false);
        pushButtonTools1->setAutoExclusive(false);

        verticalTools_11->addWidget(pushButtonTools1);

        pushButtonTools2 = new QPushButton(toolsButtonsWidget);
        pushButtonTools2->setObjectName(QString::fromUtf8("pushButtonTools2"));
        pushButtonTools2->setMinimumSize(QSize(0, 50));
        pushButtonTools2->setMaximumSize(QSize(16777215, 50));
        pushButtonTools2->setFocusPolicy(Qt::NoFocus);
        pushButtonTools2->setCheckable(true);
        pushButtonTools2->setAutoExclusive(false);

        verticalTools_11->addWidget(pushButtonTools2);

        pushButtonTools5 = new QPushButton(toolsButtonsWidget);
        pushButtonTools5->setObjectName(QString::fromUtf8("pushButtonTools5"));
        pushButtonTools5->setMinimumSize(QSize(0, 50));
        pushButtonTools5->setMaximumSize(QSize(16777215, 50));
        pushButtonTools5->setFocusPolicy(Qt::NoFocus);
        pushButtonTools5->setCheckable(true);
        pushButtonTools5->setAutoExclusive(false);

        verticalTools_11->addWidget(pushButtonTools5);


        verticalLayout_5->addWidget(toolsButtonsWidget);

        horizontalHelp = new QHBoxLayout();
        horizontalHelp->setSpacing(0);
        horizontalHelp->setObjectName(QString::fromUtf8("horizontalHelp"));
        horizontalHelp->setContentsMargins(20, -1, 20, -1);
        pushButtonHelp = new QPushButton(groupBox);
        pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
        pushButtonHelp->setMinimumSize(QSize(0, 50));
        pushButtonHelp->setMaximumSize(QSize(16777215, 50));
        pushButtonHelp->setFocusPolicy(Qt::NoFocus);
        pushButtonHelp->setCheckable(true);
        pushButtonHelp->setAutoExclusive(false);

        horizontalHelp->addWidget(pushButtonHelp, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalHelp);

        helpButtonsWidget = new QWidget(groupBox);
        helpButtonsWidget->setObjectName(QString::fromUtf8("helpButtonsWidget"));
        helpButtonsWidget->setMaximumSize(QSize(16777215, 100));
        verticalHelp = new QVBoxLayout(helpButtonsWidget);
        verticalHelp->setSpacing(0);
        verticalHelp->setObjectName(QString::fromUtf8("verticalHelp"));
        verticalHelp->setContentsMargins(0, 0, 0, 0);
        pushButtonHelp2 = new QPushButton(helpButtonsWidget);
        pushButtonHelp2->setObjectName(QString::fromUtf8("pushButtonHelp2"));
        pushButtonHelp2->setMinimumSize(QSize(0, 50));
        pushButtonHelp2->setMaximumSize(QSize(16777215, 50));
        pushButtonHelp2->setFocusPolicy(Qt::NoFocus);
        pushButtonHelp2->setCheckable(false);
        pushButtonHelp2->setAutoExclusive(false);

        verticalHelp->addWidget(pushButtonHelp2);


        verticalLayout_5->addWidget(helpButtonsWidget);


        verticalLayout_4->addWidget(groupBox, 0, Qt::AlignTop);


        verticalLayout_3->addLayout(verticalLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout_1->addLayout(verticalLayout_2);


        verticalLayout->addLayout(verticalLayout_1);


        horizontalLayout->addWidget(left);

        right = new QWidget(SettingsWidget);
        right->setObjectName(QString::fromUtf8("right"));
        verticalLayout_9 = new QVBoxLayout(right);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        stackedWidgetContainer = new QStackedWidget(right);
        stackedWidgetContainer->setObjectName(QString::fromUtf8("stackedWidgetContainer"));

        verticalLayout_11->addWidget(stackedWidgetContainer);


        verticalLayout_10->addLayout(verticalLayout_11);


        verticalLayout_9->addLayout(verticalLayout_10);


        horizontalLayout->addWidget(right);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QCoreApplication::translate("SettingsWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsWidget", "Settings", nullptr));
        groupBox->setTitle(QString());
        pushButtonFile->setText(QCoreApplication::translate("SettingsWidget", "Wallet Data", nullptr));
        pushButtonFile2->setText(QCoreApplication::translate("SettingsWidget", "Wallet", nullptr));
        pushButtonFile3->setText(QCoreApplication::translate("SettingsWidget", "Multisend", nullptr));
        pushButtonExportCsv->setText(QCoreApplication::translate("SettingsWidget", "Export Accounting", nullptr));
        pushButtonConfiguration->setText(QCoreApplication::translate("SettingsWidget", "Tools", nullptr));
        pushButtonConfiguration4->setText(QCoreApplication::translate("SettingsWidget", "Sign/Verify Message", nullptr));
        pushButtonConfiguration3->setText(QCoreApplication::translate("SettingsWidget", "BIP38 Tool", nullptr));
        pushButtonOptions->setText(QCoreApplication::translate("SettingsWidget", "Options", nullptr));
        pushButtonOptions1->setText(QCoreApplication::translate("SettingsWidget", "Main", nullptr));
        pushButtonOptions2->setText(QCoreApplication::translate("SettingsWidget", "Wallet", nullptr));
        pushButtonOptions5->setText(QCoreApplication::translate("SettingsWidget", "Display", nullptr));
        pushButtonTools->setText(QCoreApplication::translate("SettingsWidget", "Debug", nullptr));
        pushButtonTools1->setText(QCoreApplication::translate("SettingsWidget", "Information", nullptr));
        pushButtonTools2->setText(QCoreApplication::translate("SettingsWidget", "Console", nullptr));
        pushButtonTools5->setText(QCoreApplication::translate("SettingsWidget", "Wallet Repair", nullptr));
        pushButtonHelp->setText(QCoreApplication::translate("SettingsWidget", "Help", nullptr));
        pushButtonHelp2->setText(QCoreApplication::translate("SettingsWidget", "About BIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H

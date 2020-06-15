/********************************************************************************
** Form generated from reading UI file 'settingsmainoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSMAINOPTIONSWIDGET_H
#define UI_SETTINGSMAINOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsMainOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushSwitchStart;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitleSizeDb;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *databaseCache;
    QSpacerItem *verticalThreads2;
    QHBoxLayout *horizontalThreads;
    QLabel *labelTitleThreads;
    QSpacerItem *horizontalSpacerThreads;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *verticalPercentagezPiv;
    QLabel *labelDivider;
    QSpacerItem *verticalThreads;
    QHBoxLayout *horizontalLayout_34;
    QVBoxLayout *verticalLayoutTitle2;
    QLabel *labelTitleDown;
    QLabel *labelSubtitleDown;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkBoxMinTaskbar;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *checkBoxMinClose;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsMainOptionsWidget)
    {
        if (SettingsMainOptionsWidget->objectName().isEmpty())
            SettingsMainOptionsWidget->setObjectName(QString::fromUtf8("SettingsMainOptionsWidget"));
        SettingsMainOptionsWidget->resize(511, 434);
        verticalLayout = new QVBoxLayout(SettingsMainOptionsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsMainOptionsWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QString::fromUtf8("verticalLayoutTitle"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushSwitchStart = new QPushButton(left);
        pushSwitchStart->setObjectName(QString::fromUtf8("pushSwitchStart"));
        pushSwitchStart->setMinimumSize(QSize(0, 30));
        pushSwitchStart->setMaximumSize(QSize(16777215, 30));
        pushSwitchStart->setCheckable(true);
        pushSwitchStart->setChecked(true);

        horizontalLayout->addWidget(pushSwitchStart);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelTitleSizeDb = new QLabel(left);
        labelTitleSizeDb->setObjectName(QString::fromUtf8("labelTitleSizeDb"));

        horizontalLayout_2->addWidget(labelTitleSizeDb);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        databaseCache = new QSpinBox(left);
        databaseCache->setObjectName(QString::fromUtf8("databaseCache"));
        databaseCache->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(databaseCache);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalThreads2 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalThreads2);

        horizontalThreads = new QHBoxLayout();
        horizontalThreads->setObjectName(QString::fromUtf8("horizontalThreads"));
        labelTitleThreads = new QLabel(left);
        labelTitleThreads->setObjectName(QString::fromUtf8("labelTitleThreads"));

        horizontalThreads->addWidget(labelTitleThreads);

        horizontalSpacerThreads = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalThreads->addItem(horizontalSpacerThreads);

        threadsScriptVerif = new QSpinBox(left);
        threadsScriptVerif->setObjectName(QString::fromUtf8("threadsScriptVerif"));
        threadsScriptVerif->setMinimumSize(QSize(120, 0));

        horizontalThreads->addWidget(threadsScriptVerif);


        verticalLayout_2->addLayout(horizontalThreads);

        verticalPercentagezPiv = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalPercentagezPiv);

        labelDivider = new QLabel(left);
        labelDivider->setObjectName(QString::fromUtf8("labelDivider"));
        labelDivider->setMinimumSize(QSize(0, 1));
        labelDivider->setMaximumSize(QSize(16777215, 1));

        verticalLayout_2->addWidget(labelDivider);

        verticalThreads = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalThreads);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(0);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        verticalLayoutTitle2 = new QVBoxLayout();
        verticalLayoutTitle2->setSpacing(5);
        verticalLayoutTitle2->setObjectName(QString::fromUtf8("verticalLayoutTitle2"));
        labelTitleDown = new QLabel(left);
        labelTitleDown->setObjectName(QString::fromUtf8("labelTitleDown"));

        verticalLayoutTitle2->addWidget(labelTitleDown);

        labelSubtitleDown = new QLabel(left);
        labelSubtitleDown->setObjectName(QString::fromUtf8("labelSubtitleDown"));
        labelSubtitleDown->setWordWrap(true);

        verticalLayoutTitle2->addWidget(labelSubtitleDown);


        horizontalLayout_34->addLayout(verticalLayoutTitle2);

        horizontalLayout_34->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_34);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        checkBoxMinTaskbar = new QCheckBox(left);
        checkBoxMinTaskbar->setObjectName(QString::fromUtf8("checkBoxMinTaskbar"));

        verticalLayout_2->addWidget(checkBoxMinTaskbar);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        checkBoxMinClose = new QCheckBox(left);
        checkBoxMinClose->setObjectName(QString::fromUtf8("checkBoxMinClose"));

        verticalLayout_2->addWidget(checkBoxMinClose);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButtonReset = new QPushButton(left);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(160, 50));
        pushButtonReset->setMaximumSize(QSize(50, 16777215));
        pushButtonReset->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonReset);

        pushButtonClean = new QPushButton(left);
        pushButtonClean->setObjectName(QString::fromUtf8("pushButtonClean"));
        pushButtonClean->setMinimumSize(QSize(0, 50));
        pushButtonClean->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonClean);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsMainOptionsWidget);

        QMetaObject::connectSlotsByName(SettingsMainOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsMainOptionsWidget)
    {
        SettingsMainOptionsWidget->setWindowTitle(QCoreApplication::translate("SettingsMainOptionsWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Main", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Customize the main application options", nullptr));
        pushSwitchStart->setText(QString());
        labelTitleSizeDb->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Size of database cache", nullptr));
        labelTitleThreads->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Number of script verification threads", nullptr));
        labelDivider->setText(QString());
        labelTitleDown->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Window", nullptr));
        labelSubtitleDown->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Customize the application window options", nullptr));
        checkBoxMinTaskbar->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Minimize to the tray instead of the taskbar", nullptr));
        checkBoxMinClose->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Minimize on close", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Reset to default", nullptr));
        pushButtonClean->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "Discard changes", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("SettingsMainOptionsWidget", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsMainOptionsWidget: public Ui_SettingsMainOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMAINOPTIONSWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'settingsdisplayoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDISPLAYOPTIONSWIDGET_H
#define UI_SETTINGSDISPLAYOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qvaluecombobox.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDisplayOptionsWidget
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
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitleLanguage;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBoxLanguage;
    QHBoxLayout *horizontalPercentagezPiv;
    QLabel *labelTitleUnit;
    QSpacerItem *horizontalSpacerPercentagezPiv;
    QValueComboBox *comboBoxUnit;
    QHBoxLayout *horizontalDenomzPiv;
    QLabel *labelTitleDigits;
    QSpacerItem *horizontalDenomzPiv_1;
    QComboBox *comboBoxDigits;
    QHBoxLayout *horizontalHideCharts;
    QCheckBox *checkBoxHideCharts;
    QPushButton *pushButtonSwitchBalance;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleUrl;
    QLineEdit *lineEditUrl;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalReset;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsDisplayOptionsWidget)
    {
        if (SettingsDisplayOptionsWidget->objectName().isEmpty())
            SettingsDisplayOptionsWidget->setObjectName(QString::fromUtf8("SettingsDisplayOptionsWidget"));
        SettingsDisplayOptionsWidget->resize(518, 440);
        verticalLayout = new QVBoxLayout(SettingsDisplayOptionsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsDisplayOptionsWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
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


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelTitleLanguage = new QLabel(left);
        labelTitleLanguage->setObjectName(QString::fromUtf8("labelTitleLanguage"));

        horizontalLayout_2->addWidget(labelTitleLanguage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        comboBoxLanguage = new QComboBox(left);
        comboBoxLanguage->setObjectName(QString::fromUtf8("comboBoxLanguage"));
        comboBoxLanguage->setMinimumSize(QSize(380, 0));
        comboBoxLanguage->setMaximumSize(QSize(280, 16777215));

        horizontalLayout_2->addWidget(comboBoxLanguage);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalPercentagezPiv = new QHBoxLayout();
        horizontalPercentagezPiv->setObjectName(QString::fromUtf8("horizontalPercentagezPiv"));
        labelTitleUnit = new QLabel(left);
        labelTitleUnit->setObjectName(QString::fromUtf8("labelTitleUnit"));

        horizontalPercentagezPiv->addWidget(labelTitleUnit);

        horizontalSpacerPercentagezPiv = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalPercentagezPiv->addItem(horizontalSpacerPercentagezPiv);

        comboBoxUnit = new QValueComboBox(left);
        comboBoxUnit->setObjectName(QString::fromUtf8("comboBoxUnit"));
        comboBoxUnit->setMinimumSize(QSize(180, 0));
        comboBoxUnit->setMaximumSize(QSize(180, 16777215));

        horizontalPercentagezPiv->addWidget(comboBoxUnit);


        verticalLayout_2->addLayout(horizontalPercentagezPiv);

        horizontalDenomzPiv = new QHBoxLayout();
        horizontalDenomzPiv->setObjectName(QString::fromUtf8("horizontalDenomzPiv"));
        labelTitleDigits = new QLabel(left);
        labelTitleDigits->setObjectName(QString::fromUtf8("labelTitleDigits"));

        horizontalDenomzPiv->addWidget(labelTitleDigits);

        horizontalDenomzPiv_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalDenomzPiv->addItem(horizontalDenomzPiv_1);

        comboBoxDigits = new QComboBox(left);
        comboBoxDigits->setObjectName(QString::fromUtf8("comboBoxDigits"));
        comboBoxDigits->setMinimumSize(QSize(180, 0));
        comboBoxDigits->setMaximumSize(QSize(180, 16777215));

        horizontalDenomzPiv->addWidget(comboBoxDigits);


        verticalLayout_2->addLayout(horizontalDenomzPiv);

        horizontalHideCharts = new QHBoxLayout();
        horizontalHideCharts->setObjectName(QString::fromUtf8("horizontalHideCharts"));
        checkBoxHideCharts = new QCheckBox(left);
        checkBoxHideCharts->setObjectName(QString::fromUtf8("checkBoxHideCharts"));

        horizontalHideCharts->addWidget(checkBoxHideCharts);


        verticalLayout_2->addLayout(horizontalHideCharts);

        pushButtonSwitchBalance = new QPushButton(left);
        pushButtonSwitchBalance->setObjectName(QString::fromUtf8("pushButtonSwitchBalance"));
        pushButtonSwitchBalance->setMinimumSize(QSize(0, 30));
        pushButtonSwitchBalance->setFocusPolicy(Qt::NoFocus);
        pushButtonSwitchBalance->setCheckable(true);

        verticalLayout_2->addWidget(pushButtonSwitchBalance);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelTitleUrl = new QLabel(left);
        labelTitleUrl->setObjectName(QString::fromUtf8("labelTitleUrl"));

        horizontalLayout->addWidget(labelTitleUrl);

        lineEditUrl = new QLineEdit(left);
        lineEditUrl->setObjectName(QString::fromUtf8("lineEditUrl"));
        lineEditUrl->setMinimumSize(QSize(0, 50));
        lineEditUrl->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(lineEditUrl);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalReset = new QHBoxLayout();
        horizontalReset->setSpacing(12);
        horizontalReset->setObjectName(QString::fromUtf8("horizontalReset"));
        pushButtonReset = new QPushButton(left);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(160, 50));
        pushButtonReset->setMaximumSize(QSize(50, 16777215));
        pushButtonReset->setFocusPolicy(Qt::NoFocus);

        horizontalReset->addWidget(pushButtonReset);

        pushButtonClean = new QPushButton(left);
        pushButtonClean->setObjectName(QString::fromUtf8("pushButtonClean"));
        pushButtonClean->setMinimumSize(QSize(0, 50));
        pushButtonClean->setFocusPolicy(Qt::NoFocus);

        horizontalReset->addWidget(pushButtonClean);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalReset->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalReset->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalReset);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsDisplayOptionsWidget);

        QMetaObject::connectSlotsByName(SettingsDisplayOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsDisplayOptionsWidget)
    {
        SettingsDisplayOptionsWidget->setWindowTitle(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Display", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Customize the display view options", nullptr));
        labelTitleLanguage->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Language", nullptr));
        labelTitleUnit->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Unit to show amount", nullptr));
        labelTitleDigits->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Decimal digits", nullptr));
        checkBoxHideCharts->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Hide stake charts in the dashboard", nullptr));
        pushButtonSwitchBalance->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Hide empty balances", nullptr));
        labelTitleUrl->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Third party transactions URLs", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Reset to default", nullptr));
        pushButtonClean->setText(QCoreApplication::translate("SettingsDisplayOptionsWidget", "Discard changes", nullptr));
        pushButtonSave->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsDisplayOptionsWidget: public Ui_SettingsDisplayOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDISPLAYOPTIONSWIDGET_H

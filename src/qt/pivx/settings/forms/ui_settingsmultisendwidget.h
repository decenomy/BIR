/********************************************************************************
** Form generated from reading UI file 'settingsmultisendwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSMULTISENDWIDGET_H
#define UI_SETTINGSMULTISENDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_SettingsMultisendWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *containerTitle;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushLeft;
    QPushButton *pushRight;
    QSpacerItem *verticalSpacer_2;
    QListView *listView;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxStake;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBoxRewards;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsMultisendWidget)
    {
        if (SettingsMultisendWidget->objectName().isEmpty())
            SettingsMultisendWidget->setObjectName(QString::fromUtf8("SettingsMultisendWidget"));
        SettingsMultisendWidget->resize(437, 434);
        verticalLayout = new QVBoxLayout(SettingsMultisendWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsMultisendWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_2 = new QVBoxLayout(left);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        containerTitle = new QWidget(left);
        containerTitle->setObjectName(QString::fromUtf8("containerTitle"));
        horizontalLayout_3 = new QHBoxLayout(containerTitle);
        horizontalLayout_3->setSpacing(40);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QString::fromUtf8("verticalLayoutTitle"));
        labelTitle = new QLabel(containerTitle);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(containerTitle);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);

        groupBox = new QGroupBox(containerTitle);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushLeft = new QPushButton(groupBox);
        pushLeft->setObjectName(QString::fromUtf8("pushLeft"));
        pushLeft->setMinimumSize(QSize(120, 30));
        pushLeft->setMaximumSize(QSize(120, 30));
        pushLeft->setFocusPolicy(Qt::NoFocus);
        pushLeft->setCheckable(true);
        pushLeft->setAutoExclusive(true);

        horizontalLayout_4->addWidget(pushLeft);

        pushRight = new QPushButton(groupBox);
        pushRight->setObjectName(QString::fromUtf8("pushRight"));
        pushRight->setMinimumSize(QSize(120, 30));
        pushRight->setMaximumSize(QSize(120, 30));
        pushRight->setFocusPolicy(Qt::NoFocus);
        pushRight->setCheckable(true);
        pushRight->setChecked(true);
        pushRight->setAutoExclusive(true);

        horizontalLayout_4->addWidget(pushRight);


        horizontalLayout_3->addWidget(groupBox, 0, Qt::AlignTop);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addWidget(containerTitle);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        listView = new QListView(left);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_3->addWidget(listView);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QString::fromUtf8("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(emptyContainer);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        emptyScreen = new QFrame(emptyContainer);
        emptyScreen->setObjectName(QString::fromUtf8("emptyScreen"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyScreen->sizePolicy().hasHeightForWidth());
        emptyScreen->setSizePolicy(sizePolicy);
        emptyScreen->setFrameShape(QFrame::StyledPanel);
        emptyScreen->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(emptyScreen);
        verticalLayout_5->setSpacing(30);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushImgEmpty = new QPushButton(emptyScreen);
        pushImgEmpty->setObjectName(QString::fromUtf8("pushImgEmpty"));
        pushImgEmpty->setMinimumSize(QSize(100, 100));
        pushImgEmpty->setMaximumSize(QSize(100, 100));
        pushImgEmpty->setFocusPolicy(Qt::NoFocus);
        pushImgEmpty->setIconSize(QSize(100, 100));

        verticalLayout_5->addWidget(pushImgEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmpty = new QLabel(emptyScreen);
        labelEmpty->setObjectName(QString::fromUtf8("labelEmpty"));
        labelEmpty->setStyleSheet(QString::fromUtf8(""));
        labelEmpty->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_4->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 8);

        verticalLayout_3->addWidget(emptyContainer);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        checkBoxStake = new QCheckBox(left);
        checkBoxStake->setObjectName(QString::fromUtf8("checkBoxStake"));

        horizontalLayout_5->addWidget(checkBoxStake);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        checkBoxRewards = new QCheckBox(left);
        checkBoxRewards->setObjectName(QString::fromUtf8("checkBoxRewards"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxRewards->sizePolicy().hasHeightForWidth());
        checkBoxRewards->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(checkBoxRewards);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButtonClear = new QPushButton(left);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));
        pushButtonClear->setMinimumSize(QSize(200, 50));
        pushButtonClear->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonClear);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsMultisendWidget);

        QMetaObject::connectSlotsByName(SettingsMultisendWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsMultisendWidget)
    {
        SettingsMultisendWidget->setWindowTitle(QCoreApplication::translate("SettingsMultisendWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SettingsMultisendWidget", "TextLabel", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("SettingsMultisendWidget", "TextLabel", nullptr));
        groupBox->setTitle(QString());
        pushLeft->setText(QString());
        pushRight->setText(QString());
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QCoreApplication::translate("SettingsMultisendWidget", "N/A", nullptr));
        checkBoxStake->setText(QCoreApplication::translate("SettingsMultisendWidget", "CheckBox", nullptr));
        checkBoxRewards->setText(QCoreApplication::translate("SettingsMultisendWidget", "CheckBox", nullptr));
        pushButtonClear->setText(QString());
        pushButtonSave->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsMultisendWidget: public Ui_SettingsMultisendWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMULTISENDWIDGET_H

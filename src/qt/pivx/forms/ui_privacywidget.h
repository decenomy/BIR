/********************************************************************************
** Form generated from reading UI file 'privacywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVACYWIDGET_H
#define UI_PRIVACYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/pivx/optionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PrivacyWidget
{
public:
    QHBoxLayout *horizontalLayout_1;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutTop;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout11;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QWidget *containerViewPrivacyChecks;
    QVBoxLayout *containerPrivacyChecks;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2_1;
    QPushButton *pushLeft;
    QPushButton *pushRight;
    QLabel *labelSubtitle2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelSubtitleAmount;
    QHBoxLayout *horizontalLayout_3_1;
    QLineEdit *lineEditAmount;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSave;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelListHistory;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QListView *listView;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_71;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    OptionButton *btnCoinControl;
    OptionButton *btnRescanMints;
    OptionButton *btnResetZerocoin;
    OptionButton *btnTotalzBIR;
    QVBoxLayout *verticalLayout_4;
    QWidget *layoutDenom;
    QVBoxLayout *verticalLayoutDenom;
    QHBoxLayout *horizontalLayout_4_1;
    QLabel *labelTitleDenom1;
    QLabel *labelValueDenom1;
    QHBoxLayout *horizontalLayout_4_2;
    QLabel *labelTitleDenom5;
    QLabel *labelValueDenom5;
    QHBoxLayout *horizontalLayout_4_3;
    QLabel *labelTitleDenom10;
    QLabel *labelValueDenom10;
    QHBoxLayout *horizontalLayout_4_4;
    QLabel *labelTitleDenom50;
    QLabel *labelValueDenom50;
    QHBoxLayout *horizontalLayout_4_5;
    QLabel *labelTitleDenom100;
    QLabel *labelValueDenom100;
    QHBoxLayout *horizontalLayout_4_6;
    QLabel *labelTitleDenom500;
    QLabel *labelValueDenom500;
    QHBoxLayout *horizontalLayout_4_7;
    QLabel *labelTitleDenom1000;
    QLabel *labelValueDenom1000;
    QHBoxLayout *horizontalLayout_4_8;
    QLabel *labelTitleDenom5000;
    QLabel *labelValueDenom5000;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *PrivacyWidget)
    {
        if (PrivacyWidget->objectName().isEmpty())
            PrivacyWidget->setObjectName(QString::fromUtf8("PrivacyWidget"));
        PrivacyWidget->resize(629, 549);
        horizontalLayout_1 = new QHBoxLayout(PrivacyWidget);
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(PrivacyWidget);
        left->setObjectName(QString::fromUtf8("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayoutTop = new QVBoxLayout();
        verticalLayoutTop->setSpacing(0);
        verticalLayoutTop->setObjectName(QString::fromUtf8("verticalLayoutTop"));
        verticalLayoutTop->setContentsMargins(20, -1, 20, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout11 = new QVBoxLayout();
        verticalLayout11->setSpacing(5);
        verticalLayout11->setObjectName(QString::fromUtf8("verticalLayout11"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));

        verticalLayout11->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QString::fromUtf8("labelSubtitle1"));
        labelSubtitle1->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout11->addWidget(labelSubtitle1);


        horizontalLayout_2->addLayout(verticalLayout11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        containerViewPrivacyChecks = new QWidget(left);
        containerViewPrivacyChecks->setObjectName(QString::fromUtf8("containerViewPrivacyChecks"));
        containerPrivacyChecks = new QVBoxLayout(containerViewPrivacyChecks);
        containerPrivacyChecks->setSpacing(0);
        containerPrivacyChecks->setObjectName(QString::fromUtf8("containerPrivacyChecks"));
        containerPrivacyChecks->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(containerViewPrivacyChecks);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2_1 = new QHBoxLayout(groupBox);
        horizontalLayout_2_1->setSpacing(0);
        horizontalLayout_2_1->setObjectName(QString::fromUtf8("horizontalLayout_2_1"));
        horizontalLayout_2_1->setContentsMargins(0, 0, 0, 0);
        pushLeft = new QPushButton(groupBox);
        pushLeft->setObjectName(QString::fromUtf8("pushLeft"));
        pushLeft->setMinimumSize(QSize(120, 30));
        pushLeft->setMaximumSize(QSize(120, 30));
        pushLeft->setFocusPolicy(Qt::NoFocus);
        pushLeft->setCheckable(true);
        pushLeft->setAutoExclusive(true);

        horizontalLayout_2_1->addWidget(pushLeft);

        pushRight = new QPushButton(groupBox);
        pushRight->setObjectName(QString::fromUtf8("pushRight"));
        pushRight->setMinimumSize(QSize(120, 30));
        pushRight->setMaximumSize(QSize(120, 30));
        pushRight->setFocusPolicy(Qt::NoFocus);
        pushRight->setCheckable(true);
        pushRight->setChecked(true);
        pushRight->setAutoExclusive(true);

        horizontalLayout_2_1->addWidget(pushRight);


        containerPrivacyChecks->addWidget(groupBox, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelSubtitle2 = new QLabel(containerViewPrivacyChecks);
        labelSubtitle2->setObjectName(QString::fromUtf8("labelSubtitle2"));
        labelSubtitle2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        containerPrivacyChecks->addWidget(labelSubtitle2, 0, Qt::AlignTop);


        horizontalLayout_2->addWidget(containerViewPrivacyChecks);


        verticalLayoutTop->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutTop->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        labelSubtitleAmount = new QLabel(left);
        labelSubtitleAmount->setObjectName(QString::fromUtf8("labelSubtitleAmount"));
        labelSubtitleAmount->setMinimumSize(QSize(0, 20));
        labelSubtitleAmount->setMaximumSize(QSize(16777215, 20));
        labelSubtitleAmount->setText(QString::fromUtf8("N/A"));

        verticalLayout_7->addWidget(labelSubtitleAmount);

        horizontalLayout_3_1 = new QHBoxLayout();
        horizontalLayout_3_1->setSpacing(0);
        horizontalLayout_3_1->setObjectName(QString::fromUtf8("horizontalLayout_3_1"));
        lineEditAmount = new QLineEdit(left);
        lineEditAmount->setObjectName(QString::fromUtf8("lineEditAmount"));
        lineEditAmount->setMinimumSize(QSize(0, 50));
        lineEditAmount->setMaxLength(8);
        lineEditAmount->setPlaceholderText(QString::fromUtf8("0.00 BIR"));

        horizontalLayout_3_1->addWidget(lineEditAmount);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_1->addItem(horizontalSpacer_4);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(180, 50));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_3_1->addWidget(pushButtonSave);

        horizontalLayout_3_1->setStretch(0, 1);

        verticalLayout_7->addLayout(horizontalLayout_3_1);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalLayout_3->setStretch(0, 2);

        verticalLayoutTop->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayoutTop);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, -1, -1);
        labelListHistory = new QLabel(left);
        labelListHistory->setObjectName(QString::fromUtf8("labelListHistory"));

        horizontalLayout_4->addWidget(labelListHistory);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_4);

        listView = new QListView(left);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEnabled(true);
        listView->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(listView);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QString::fromUtf8("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_71 = new QVBoxLayout(emptyContainer);
        verticalLayout_71->setSpacing(0);
        verticalLayout_71->setObjectName(QString::fromUtf8("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_71->addItem(verticalSpacer);

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


        verticalLayout_71->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_71->setStretch(0, 1);
        verticalLayout_71->setStretch(1, 8);

        verticalLayout_6->addWidget(emptyContainer);


        verticalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_1->addWidget(left);

        right = new QWidget(PrivacyWidget);
        right->setObjectName(QString::fromUtf8("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnCoinControl = new OptionButton(right);
        btnCoinControl->setObjectName(QString::fromUtf8("btnCoinControl"));
        btnCoinControl->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnCoinControl);

        btnRescanMints = new OptionButton(right);
        btnRescanMints->setObjectName(QString::fromUtf8("btnRescanMints"));
        btnRescanMints->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnRescanMints);

        btnResetZerocoin = new OptionButton(right);
        btnResetZerocoin->setObjectName(QString::fromUtf8("btnResetZerocoin"));
        btnResetZerocoin->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnResetZerocoin);

        btnTotalzBIR = new OptionButton(right);
        btnTotalzBIR->setObjectName(QString::fromUtf8("btnTotalzBIR"));
        btnTotalzBIR->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnTotalzBIR);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        layoutDenom = new QWidget(right);
        layoutDenom->setObjectName(QString::fromUtf8("layoutDenom"));
        verticalLayoutDenom = new QVBoxLayout(layoutDenom);
        verticalLayoutDenom->setSpacing(12);
        verticalLayoutDenom->setObjectName(QString::fromUtf8("verticalLayoutDenom"));
        verticalLayoutDenom->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4_1 = new QHBoxLayout();
        horizontalLayout_4_1->setObjectName(QString::fromUtf8("horizontalLayout_4_1"));
        labelTitleDenom1 = new QLabel(layoutDenom);
        labelTitleDenom1->setObjectName(QString::fromUtf8("labelTitleDenom1"));

        horizontalLayout_4_1->addWidget(labelTitleDenom1);

        labelValueDenom1 = new QLabel(layoutDenom);
        labelValueDenom1->setObjectName(QString::fromUtf8("labelValueDenom1"));
        labelValueDenom1->setText(QString::fromUtf8("0x1 = 0 zBIR"));
        labelValueDenom1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_1->addWidget(labelValueDenom1);


        verticalLayoutDenom->addLayout(horizontalLayout_4_1);

        horizontalLayout_4_2 = new QHBoxLayout();
        horizontalLayout_4_2->setObjectName(QString::fromUtf8("horizontalLayout_4_2"));
        labelTitleDenom5 = new QLabel(layoutDenom);
        labelTitleDenom5->setObjectName(QString::fromUtf8("labelTitleDenom5"));

        horizontalLayout_4_2->addWidget(labelTitleDenom5);

        labelValueDenom5 = new QLabel(layoutDenom);
        labelValueDenom5->setObjectName(QString::fromUtf8("labelValueDenom5"));
        labelValueDenom5->setText(QString::fromUtf8("0x5 = 0 zBIR"));
        labelValueDenom5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_2->addWidget(labelValueDenom5);


        verticalLayoutDenom->addLayout(horizontalLayout_4_2);

        horizontalLayout_4_3 = new QHBoxLayout();
        horizontalLayout_4_3->setObjectName(QString::fromUtf8("horizontalLayout_4_3"));
        labelTitleDenom10 = new QLabel(layoutDenom);
        labelTitleDenom10->setObjectName(QString::fromUtf8("labelTitleDenom10"));

        horizontalLayout_4_3->addWidget(labelTitleDenom10);

        labelValueDenom10 = new QLabel(layoutDenom);
        labelValueDenom10->setObjectName(QString::fromUtf8("labelValueDenom10"));
        labelValueDenom10->setText(QString::fromUtf8("0x10 = 0 zBIR"));
        labelValueDenom10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_3->addWidget(labelValueDenom10);


        verticalLayoutDenom->addLayout(horizontalLayout_4_3);

        horizontalLayout_4_4 = new QHBoxLayout();
        horizontalLayout_4_4->setObjectName(QString::fromUtf8("horizontalLayout_4_4"));
        labelTitleDenom50 = new QLabel(layoutDenom);
        labelTitleDenom50->setObjectName(QString::fromUtf8("labelTitleDenom50"));

        horizontalLayout_4_4->addWidget(labelTitleDenom50);

        labelValueDenom50 = new QLabel(layoutDenom);
        labelValueDenom50->setObjectName(QString::fromUtf8("labelValueDenom50"));
        labelValueDenom50->setText(QString::fromUtf8("0x50 = 0 zBIR"));
        labelValueDenom50->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_4->addWidget(labelValueDenom50);


        verticalLayoutDenom->addLayout(horizontalLayout_4_4);

        horizontalLayout_4_5 = new QHBoxLayout();
        horizontalLayout_4_5->setObjectName(QString::fromUtf8("horizontalLayout_4_5"));
        labelTitleDenom100 = new QLabel(layoutDenom);
        labelTitleDenom100->setObjectName(QString::fromUtf8("labelTitleDenom100"));

        horizontalLayout_4_5->addWidget(labelTitleDenom100);

        labelValueDenom100 = new QLabel(layoutDenom);
        labelValueDenom100->setObjectName(QString::fromUtf8("labelValueDenom100"));
        labelValueDenom100->setText(QString::fromUtf8("0x100 = 0 zBIR"));
        labelValueDenom100->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_5->addWidget(labelValueDenom100);


        verticalLayoutDenom->addLayout(horizontalLayout_4_5);

        horizontalLayout_4_6 = new QHBoxLayout();
        horizontalLayout_4_6->setObjectName(QString::fromUtf8("horizontalLayout_4_6"));
        labelTitleDenom500 = new QLabel(layoutDenom);
        labelTitleDenom500->setObjectName(QString::fromUtf8("labelTitleDenom500"));

        horizontalLayout_4_6->addWidget(labelTitleDenom500);

        labelValueDenom500 = new QLabel(layoutDenom);
        labelValueDenom500->setObjectName(QString::fromUtf8("labelValueDenom500"));
        labelValueDenom500->setText(QString::fromUtf8("0x500 = 0 zBIR"));
        labelValueDenom500->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_6->addWidget(labelValueDenom500);


        verticalLayoutDenom->addLayout(horizontalLayout_4_6);

        horizontalLayout_4_7 = new QHBoxLayout();
        horizontalLayout_4_7->setObjectName(QString::fromUtf8("horizontalLayout_4_7"));
        labelTitleDenom1000 = new QLabel(layoutDenom);
        labelTitleDenom1000->setObjectName(QString::fromUtf8("labelTitleDenom1000"));

        horizontalLayout_4_7->addWidget(labelTitleDenom1000);

        labelValueDenom1000 = new QLabel(layoutDenom);
        labelValueDenom1000->setObjectName(QString::fromUtf8("labelValueDenom1000"));
        labelValueDenom1000->setText(QString::fromUtf8("0x1000 = 0 zBIR"));
        labelValueDenom1000->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_7->addWidget(labelValueDenom1000);


        verticalLayoutDenom->addLayout(horizontalLayout_4_7);

        horizontalLayout_4_8 = new QHBoxLayout();
        horizontalLayout_4_8->setObjectName(QString::fromUtf8("horizontalLayout_4_8"));
        labelTitleDenom5000 = new QLabel(layoutDenom);
        labelTitleDenom5000->setObjectName(QString::fromUtf8("labelTitleDenom5000"));

        horizontalLayout_4_8->addWidget(labelTitleDenom5000);

        labelValueDenom5000 = new QLabel(layoutDenom);
        labelValueDenom5000->setObjectName(QString::fromUtf8("labelValueDenom5000"));
        labelValueDenom5000->setText(QString::fromUtf8("0x5000 = 0 zBIR"));
        labelValueDenom5000->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_8->addWidget(labelValueDenom5000);


        verticalLayoutDenom->addLayout(horizontalLayout_4_8);


        verticalLayout_4->addWidget(layoutDenom);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_1->addWidget(right);

        horizontalLayout_1->setStretch(0, 2);
        horizontalLayout_1->setStretch(1, 1);

        retranslateUi(PrivacyWidget);

        QMetaObject::connectSlotsByName(PrivacyWidget);
    } // setupUi

    void retranslateUi(QWidget *PrivacyWidget)
    {
        PrivacyWidget->setWindowTitle(QCoreApplication::translate("PrivacyWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("PrivacyWidget", "Privacy", nullptr));
        labelSubtitle1->setText(QCoreApplication::translate("PrivacyWidget", "Minting zBIR anonymizes your BIR by removing any\n"
"transaction history, making transactions untraceable", nullptr));
        groupBox->setTitle(QString());
        pushLeft->setText(QCoreApplication::translate("PrivacyWidget", "Convert", nullptr));
        pushRight->setText(QCoreApplication::translate("PrivacyWidget", "Mint", nullptr));
        labelSubtitle2->setText(QCoreApplication::translate("PrivacyWidget", "Mint new zBIR or convert back to BIR", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("PrivacyWidget", "PushButton", nullptr));
        labelListHistory->setText(QCoreApplication::translate("PrivacyWidget", "Last zBIR Movements", nullptr));
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QCoreApplication::translate("PrivacyWidget", "No transactions yet", nullptr));
        labelTitleDenom1->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 1:", nullptr));
        labelTitleDenom5->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 5:", nullptr));
        labelTitleDenom10->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 10:", nullptr));
        labelTitleDenom50->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 50:", nullptr));
        labelTitleDenom100->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 100:", nullptr));
        labelTitleDenom500->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 500:", nullptr));
        labelTitleDenom1000->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 1000:", nullptr));
        labelTitleDenom5000->setText(QCoreApplication::translate("PrivacyWidget", "Denom. with value 5000:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrivacyWidget: public Ui_PrivacyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVACYWIDGET_H

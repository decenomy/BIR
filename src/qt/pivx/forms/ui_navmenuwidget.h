/********************************************************************************
** Form generated from reading UI file 'navmenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVMENUWIDGET_H
#define UI_NAVMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavMenuWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *navContainer_2;
    QVBoxLayout *navContainer;
    QPushButton *imgLogo;
    QScrollArea *scrollAreaNav;
    QWidget *scrollAreaNavVert;
    QVBoxLayout *verticalLayout_3;
    QToolButton *btnDashboard;
    QToolButton *btnSend;
    QToolButton *btnReceive;
    QToolButton *btnAddress;
    QToolButton *btnMaster;
    QToolButton *btnColdStaking;
    QToolButton *btnSettings;
    QSpacerItem *verticalSpacer;
    QLabel *labelVersion;

    void setupUi(QWidget *NavMenuWidget)
    {
        if (NavMenuWidget->objectName().isEmpty())
            NavMenuWidget->setObjectName(QString::fromUtf8("NavMenuWidget"));
        NavMenuWidget->resize(102, 786);
        NavMenuWidget->setStyleSheet(QString::fromUtf8("padding:0px;\n"
"border:none;\n"
"margin:0px;"));
        verticalLayout = new QVBoxLayout(NavMenuWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        navContainer_2 = new QWidget(NavMenuWidget);
        navContainer_2->setObjectName(QString::fromUtf8("navContainer_2"));
        navContainer = new QVBoxLayout(navContainer_2);
        navContainer->setSpacing(0);
        navContainer->setObjectName(QString::fromUtf8("navContainer"));
        navContainer->setContentsMargins(0, 0, 0, 10);
        imgLogo = new QPushButton(navContainer_2);
        imgLogo->setObjectName(QString::fromUtf8("imgLogo"));
        imgLogo->setMinimumSize(QSize(0, 120));
        imgLogo->setFocusPolicy(Qt::NoFocus);
        imgLogo->setIconSize(QSize(64, 64));

        navContainer->addWidget(imgLogo);

        scrollAreaNav = new QScrollArea(navContainer_2);
        scrollAreaNav->setObjectName(QString::fromUtf8("scrollAreaNav"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaNav->sizePolicy().hasHeightForWidth());
        scrollAreaNav->setSizePolicy(sizePolicy);
        scrollAreaNav->setMinimumSize(QSize(0, 0));
        scrollAreaNav->setStyleSheet(QString::fromUtf8("QScrollBar {\n"
"height:0px;\n"
" width:0px;\n"
"}\n"
"\n"
"#scrollAreaNav{\n"
"background-color:transparent;\n"
"}"));
        scrollAreaNav->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaNav->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollAreaNav->setWidgetResizable(true);
        scrollAreaNav->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaNavVert = new QWidget();
        scrollAreaNavVert->setObjectName(QString::fromUtf8("scrollAreaNavVert"));
        scrollAreaNavVert->setGeometry(QRect(0, 0, 100, 640));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaNavVert->sizePolicy().hasHeightForWidth());
        scrollAreaNavVert->setSizePolicy(sizePolicy1);
        scrollAreaNavVert->setMinimumSize(QSize(0, 0));
        scrollAreaNavVert->setAutoFillBackground(false);
        scrollAreaNavVert->setStyleSheet(QString::fromUtf8("#scrollAreaNavVert{\n"
"background-color:transparent;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(scrollAreaNavVert);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnDashboard = new QToolButton(scrollAreaNavVert);
        btnDashboard->setObjectName(QString::fromUtf8("btnDashboard"));
        btnDashboard->setMinimumSize(QSize(100, 80));
        btnDashboard->setIconSize(QSize(32, 32));
        btnDashboard->setCheckable(true);
        btnDashboard->setChecked(true);
        btnDashboard->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnDashboard);

        btnSend = new QToolButton(scrollAreaNavVert);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setMinimumSize(QSize(100, 80));
        btnSend->setIconSize(QSize(32, 32));
        btnSend->setCheckable(true);
        btnSend->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnSend);

        btnReceive = new QToolButton(scrollAreaNavVert);
        btnReceive->setObjectName(QString::fromUtf8("btnReceive"));
        btnReceive->setMinimumSize(QSize(100, 80));
        btnReceive->setCheckable(true);
        btnReceive->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnReceive);

        btnAddress = new QToolButton(scrollAreaNavVert);
        btnAddress->setObjectName(QString::fromUtf8("btnAddress"));
        btnAddress->setMinimumSize(QSize(100, 80));
        btnAddress->setIconSize(QSize(32, 32));
        btnAddress->setCheckable(true);
        btnAddress->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnAddress);

        btnMaster = new QToolButton(scrollAreaNavVert);
        btnMaster->setObjectName(QString::fromUtf8("btnMaster"));
        btnMaster->setMinimumSize(QSize(100, 80));
        btnMaster->setIconSize(QSize(32, 32));
        btnMaster->setCheckable(true);
        btnMaster->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnMaster);

        btnColdStaking = new QToolButton(scrollAreaNavVert);
        btnColdStaking->setObjectName(QString::fromUtf8("btnColdStaking"));
        btnColdStaking->setMinimumSize(QSize(100, 80));
        btnColdStaking->setIconSize(QSize(32, 32));
        btnColdStaking->setCheckable(true);
        btnColdStaking->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnColdStaking);

        btnSettings = new QToolButton(scrollAreaNavVert);
        btnSettings->setObjectName(QString::fromUtf8("btnSettings"));
        btnSettings->setMinimumSize(QSize(100, 80));
        btnSettings->setIconSize(QSize(32, 32));
        btnSettings->setCheckable(true);
        btnSettings->setAutoExclusive(true);

        verticalLayout_3->addWidget(btnSettings);

        scrollAreaNav->setWidget(scrollAreaNavVert);

        navContainer->addWidget(scrollAreaNav);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        navContainer->addItem(verticalSpacer);

        labelVersion = new QLabel(navContainer_2);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        labelVersion->setMaximumSize(QSize(16777215, 60));
        labelVersion->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        navContainer->addWidget(labelVersion, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(navContainer_2);


        retranslateUi(NavMenuWidget);

        QMetaObject::connectSlotsByName(NavMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *NavMenuWidget)
    {
        NavMenuWidget->setWindowTitle(QCoreApplication::translate("NavMenuWidget", "Form", nullptr));
        imgLogo->setText(QString());
        btnDashboard->setText(QCoreApplication::translate("NavMenuWidget", "HOME\n"
"", nullptr));
        btnSend->setText(QCoreApplication::translate("NavMenuWidget", "SEND\n"
"", nullptr));
        btnReceive->setText(QCoreApplication::translate("NavMenuWidget", "RECEIVE\n"
"", nullptr));
        btnAddress->setText(QCoreApplication::translate("NavMenuWidget", "CONTACTS\n"
"", nullptr));
        btnMaster->setText(QCoreApplication::translate("NavMenuWidget", "MASTER\n"
"NODES", nullptr));
        btnColdStaking->setText(QCoreApplication::translate("NavMenuWidget", "COLD\n"
"STAKING", nullptr));
        btnSettings->setText(QCoreApplication::translate("NavMenuWidget", "SETTINGS\n"
"", nullptr));
        labelVersion->setText(QCoreApplication::translate("NavMenuWidget", "V 1.0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavMenuWidget: public Ui_NavMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVMENUWIDGET_H

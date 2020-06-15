/********************************************************************************
** Form generated from reading UI file 'optionbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONBUTTON_H
#define UI_OPTIONBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionButton
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *layoutOptions2;
    QHBoxLayout *layoutArrow3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutCircle;
    QHBoxLayout *horizontalLayout1;
    QLabel *labelCircle;
    QLabel *labelTitleChange;
    QLabel *labelSubtitleChange;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *labelArrow3;

    void setupUi(QWidget *OptionButton)
    {
        if (OptionButton->objectName().isEmpty())
            OptionButton->setObjectName(QString::fromUtf8("OptionButton"));
        OptionButton->resize(563, 80);
        verticalLayout_2 = new QVBoxLayout(OptionButton);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutOptions2 = new QWidget(OptionButton);
        layoutOptions2->setObjectName(QString::fromUtf8("layoutOptions2"));
        layoutArrow3 = new QHBoxLayout(layoutOptions2);
        layoutArrow3->setSpacing(0);
        layoutArrow3->setObjectName(QString::fromUtf8("layoutArrow3"));
        layoutArrow3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        layoutCircle = new QWidget(layoutOptions2);
        layoutCircle->setObjectName(QString::fromUtf8("layoutCircle"));
        layoutCircle->setMinimumSize(QSize(20, 0));
        layoutCircle->setMaximumSize(QSize(20, 16777215));
        horizontalLayout1 = new QHBoxLayout(layoutCircle);
        horizontalLayout1->setSpacing(0);
        horizontalLayout1->setObjectName(QString::fromUtf8("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(0, 0, 0, 0);
        labelCircle = new QLabel(layoutCircle);
        labelCircle->setObjectName(QString::fromUtf8("labelCircle"));
        labelCircle->setMinimumSize(QSize(10, 10));
        labelCircle->setMaximumSize(QSize(10, 10));

        horizontalLayout1->addWidget(labelCircle, 0, Qt::AlignLeft);


        horizontalLayout->addWidget(layoutCircle);

        labelTitleChange = new QLabel(layoutOptions2);
        labelTitleChange->setObjectName(QString::fromUtf8("labelTitleChange"));
        labelTitleChange->setText(QString::fromUtf8("TextLabel"));

        horizontalLayout->addWidget(labelTitleChange);


        verticalLayout->addLayout(horizontalLayout);

        labelSubtitleChange = new QLabel(layoutOptions2);
        labelSubtitleChange->setObjectName(QString::fromUtf8("labelSubtitleChange"));
        labelSubtitleChange->setText(QString::fromUtf8("TextLabel"));

        verticalLayout->addWidget(labelSubtitleChange);


        layoutArrow3->addLayout(verticalLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutArrow3->addItem(horizontalSpacer_8);

        labelArrow3 = new QPushButton(layoutOptions2);
        labelArrow3->setObjectName(QString::fromUtf8("labelArrow3"));
        labelArrow3->setMinimumSize(QSize(24, 24));
        labelArrow3->setMaximumSize(QSize(24, 24));
        labelArrow3->setFocusPolicy(Qt::NoFocus);
        labelArrow3->setIconSize(QSize(24, 24));
        labelArrow3->setCheckable(true);
        labelArrow3->setChecked(false);

        layoutArrow3->addWidget(labelArrow3);


        verticalLayout_2->addWidget(layoutOptions2);


        retranslateUi(OptionButton);

        QMetaObject::connectSlotsByName(OptionButton);
    } // setupUi

    void retranslateUi(QWidget *OptionButton)
    {
        OptionButton->setWindowTitle(QCoreApplication::translate("OptionButton", "Form", nullptr));
        labelCircle->setText(QString());
        labelArrow3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OptionButton: public Ui_OptionButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONBUTTON_H

/********************************************************************************
** Form generated from reading UI file 'ChartSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYSTERESISSETTINGS_H
#define UI_HYSTERESISSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HysteresisSettings
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_cursor_x_1;
    QPushButton *pushButton_cursor_x_2;
    QPushButton *pushButton_cursor_y_1;
    QPushButton *pushButton_cursor_y_2;
    QPushButton *pushButton_show_cursor;
    QPushButton *pushButton_back;
    QDial *dial_x;
    QPushButton *pushButton_trigger;
    QDial *dial_y;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *HysteresisSettings)
    {
        if (HysteresisSettings->objectName().isEmpty())
            HysteresisSettings->setObjectName(QString::fromUtf8("HysteresisSettings"));
        HysteresisSettings->resize(190, 905);
        gridLayout_2 = new QGridLayout(HysteresisSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_cursor_x_1 = new QPushButton(HysteresisSettings);
        pushButton_cursor_x_1->setObjectName(QString::fromUtf8("pushButton_cursor_x_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_cursor_x_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_1, 0, 0, 1, 1);

        pushButton_cursor_x_2 = new QPushButton(HysteresisSettings);
        pushButton_cursor_x_2->setObjectName(QString::fromUtf8("pushButton_cursor_x_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_x_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_2, 0, 1, 1, 1);

        pushButton_cursor_y_1 = new QPushButton(HysteresisSettings);
        pushButton_cursor_y_1->setObjectName(QString::fromUtf8("pushButton_cursor_y_1"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_1, 1, 0, 1, 1);

        pushButton_cursor_y_2 = new QPushButton(HysteresisSettings);
        pushButton_cursor_y_2->setObjectName(QString::fromUtf8("pushButton_cursor_y_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_2, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton_show_cursor = new QPushButton(HysteresisSettings);
        pushButton_show_cursor->setObjectName(QString::fromUtf8("pushButton_show_cursor"));
        sizePolicy.setHeightForWidth(pushButton_show_cursor->sizePolicy().hasHeightForWidth());
        pushButton_show_cursor->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_show_cursor, 2, 0, 1, 1);

        pushButton_back = new QPushButton(HysteresisSettings);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_back, 9, 0, 1, 1);

        dial_x = new QDial(HysteresisSettings);
        dial_x->setObjectName(QString::fromUtf8("dial_x"));

        gridLayout_2->addWidget(dial_x, 4, 0, 1, 1);

        pushButton_trigger = new QPushButton(HysteresisSettings);
        pushButton_trigger->setObjectName(QString::fromUtf8("pushButton_trigger"));
        sizePolicy.setHeightForWidth(pushButton_trigger->sizePolicy().hasHeightForWidth());
        pushButton_trigger->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_trigger, 8, 0, 1, 1);

        dial_y = new QDial(HysteresisSettings);
        dial_y->setObjectName(QString::fromUtf8("dial_y"));

        gridLayout_2->addWidget(dial_y, 6, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_4, 7, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_3, 3, 0, 1, 1);


        retranslateUi(HysteresisSettings);

        QMetaObject::connectSlotsByName(HysteresisSettings);
    } // setupUi

    void retranslateUi(QWidget *HysteresisSettings)
    {
        HysteresisSettings->setWindowTitle(QApplication::translate("HysteresisSettings", "HysteresisSettings", nullptr));
        pushButton_cursor_x_1->setText(QApplication::translate("HysteresisSettings", "Cursor X_1", nullptr));
        pushButton_cursor_x_2->setText(QApplication::translate("HysteresisSettings", "Cursor X_2", nullptr));
        pushButton_cursor_y_1->setText(QApplication::translate("HysteresisSettings", "Cursor Y_1", nullptr));
        pushButton_cursor_y_2->setText(QApplication::translate("HysteresisSettings", "Cursor Y_2", nullptr));
        pushButton_show_cursor->setText(QApplication::translate("HysteresisSettings", "Show Cursors", nullptr));
        pushButton_back->setText(QApplication::translate("HysteresisSettings", "Back", nullptr));
        pushButton_trigger->setText(QApplication::translate("HysteresisSettings", "Trigger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HysteresisSettings: public Ui_HysteresisSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYSTERESISSETTINGS_H

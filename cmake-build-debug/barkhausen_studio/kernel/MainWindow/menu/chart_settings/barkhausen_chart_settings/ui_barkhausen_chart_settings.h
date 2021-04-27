/********************************************************************************
** Form generated from reading UI file 'barkhausen_chart_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARKHAUSEN_CHART_SETTINGS_H
#define UI_BARKHAUSEN_CHART_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BarkhausenChartSettings
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_cursor_x_1;
    QPushButton *pushButton_cursor_x_2;
    QPushButton *pushButton_cursor_y_1;
    QPushButton *pushButton_cursor_y_2;
    QDial *dial_x;
    QPushButton *pushButton_back;
    QDial *dial_y;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_hide_cursors;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_trigger;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_show_cursor;

    void setupUi(QWidget *BarkhausenChartSettings)
    {
        if (BarkhausenChartSettings->objectName().isEmpty())
            BarkhausenChartSettings->setObjectName(QString::fromUtf8("BarkhausenChartSettings"));
        BarkhausenChartSettings->resize(190, 905);
        gridLayout_2 = new QGridLayout(BarkhausenChartSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_cursor_x_1 = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_x_1->setObjectName(QString::fromUtf8("pushButton_cursor_x_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_cursor_x_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_1, 0, 0, 1, 1);

        pushButton_cursor_x_2 = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_x_2->setObjectName(QString::fromUtf8("pushButton_cursor_x_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_x_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_2, 0, 1, 1, 1);

        pushButton_cursor_y_1 = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_y_1->setObjectName(QString::fromUtf8("pushButton_cursor_y_1"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_1, 1, 0, 1, 1);

        pushButton_cursor_y_2 = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_y_2->setObjectName(QString::fromUtf8("pushButton_cursor_y_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_2, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        dial_x = new QDial(BarkhausenChartSettings);
        dial_x->setObjectName(QString::fromUtf8("dial_x"));

        gridLayout_2->addWidget(dial_x, 5, 0, 1, 1);

        pushButton_back = new QPushButton(BarkhausenChartSettings);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_back, 10, 0, 1, 1);

        dial_y = new QDial(BarkhausenChartSettings);
        dial_y->setObjectName(QString::fromUtf8("dial_y"));

        gridLayout_2->addWidget(dial_y, 7, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_4, 8, 0, 1, 1);

        pushButton_hide_cursors = new QPushButton(BarkhausenChartSettings);
        pushButton_hide_cursors->setObjectName(QString::fromUtf8("pushButton_hide_cursors"));
        sizePolicy.setHeightForWidth(pushButton_hide_cursors->sizePolicy().hasHeightForWidth());
        pushButton_hide_cursors->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_hide_cursors, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_2, 6, 0, 1, 1);

        pushButton_trigger = new QPushButton(BarkhausenChartSettings);
        pushButton_trigger->setObjectName(QString::fromUtf8("pushButton_trigger"));
        sizePolicy.setHeightForWidth(pushButton_trigger->sizePolicy().hasHeightForWidth());
        pushButton_trigger->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_trigger, 9, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer_3, 4, 0, 1, 1);

        pushButton_show_cursor = new QPushButton(BarkhausenChartSettings);
        pushButton_show_cursor->setObjectName(QString::fromUtf8("pushButton_show_cursor"));
        sizePolicy.setHeightForWidth(pushButton_show_cursor->sizePolicy().hasHeightForWidth());
        pushButton_show_cursor->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_show_cursor, 1, 0, 1, 1);


        retranslateUi(BarkhausenChartSettings);

        QMetaObject::connectSlotsByName(BarkhausenChartSettings);
    } // setupUi

    void retranslateUi(QWidget *BarkhausenChartSettings)
    {
        BarkhausenChartSettings->setWindowTitle(QApplication::translate("BarkhausenChartSettings", "BarkhausenChartSettings", nullptr));
        pushButton_cursor_x_1->setText(QApplication::translate("BarkhausenChartSettings", "Cursor X_1", nullptr));
        pushButton_cursor_x_2->setText(QApplication::translate("BarkhausenChartSettings", "Cursor X_2", nullptr));
        pushButton_cursor_y_1->setText(QApplication::translate("BarkhausenChartSettings", "Cursor Y_1", nullptr));
        pushButton_cursor_y_2->setText(QApplication::translate("BarkhausenChartSettings", "Cursor Y_2", nullptr));
        pushButton_back->setText(QApplication::translate("BarkhausenChartSettings", "Back", nullptr));
        pushButton_hide_cursors->setText(QApplication::translate("BarkhausenChartSettings", "Hide Cursors", nullptr));
        pushButton_trigger->setText(QApplication::translate("BarkhausenChartSettings", "Trigger", nullptr));
        pushButton_show_cursor->setText(QApplication::translate("BarkhausenChartSettings", "Show Cursors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BarkhausenChartSettings: public Ui_BarkhausenChartSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARKHAUSEN_CHART_SETTINGS_H

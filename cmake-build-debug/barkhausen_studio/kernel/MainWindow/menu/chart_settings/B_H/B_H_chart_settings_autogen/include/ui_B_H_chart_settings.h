/********************************************************************************
** Form generated from reading UI file 'B_H_chart_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_B_H_CHART_SETTINGS_H
#define UI_B_H_CHART_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BHChartSettings
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_back;
    QPushButton *pushButton_hide_cursors;
    QGridLayout *gridLayout;
    QPushButton *pushButton_cursor_x_1;
    QPushButton *pushButton_cursor_x_2;
    QPushButton *pushButton_cursor_y_1;
    QPushButton *pushButton_cursor_y_2;
    QDial *dial_timebase;
    QPushButton *pushButton_trigger;
    QPushButton *pushButton_show_cursor;
    QDial *dial_range;
    QDial *dial_offset;

    void setupUi(QWidget *BHChartSettings)
    {
        if (BHChartSettings->objectName().isEmpty())
            BHChartSettings->setObjectName(QString::fromUtf8("BHChartSettings"));
        BHChartSettings->resize(190, 905);
        gridLayout_2 = new QGridLayout(BHChartSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_back = new QPushButton(BHChartSettings);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_back, 8, 0, 1, 1);

        pushButton_hide_cursors = new QPushButton(BHChartSettings);
        pushButton_hide_cursors->setObjectName(QString::fromUtf8("pushButton_hide_cursors"));
        sizePolicy.setHeightForWidth(pushButton_hide_cursors->sizePolicy().hasHeightForWidth());
        pushButton_hide_cursors->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_hide_cursors, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_cursor_x_1 = new QPushButton(BHChartSettings);
        pushButton_cursor_x_1->setObjectName(QString::fromUtf8("pushButton_cursor_x_1"));
        sizePolicy.setHeightForWidth(pushButton_cursor_x_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_1, 0, 0, 1, 1);

        pushButton_cursor_x_2 = new QPushButton(BHChartSettings);
        pushButton_cursor_x_2->setObjectName(QString::fromUtf8("pushButton_cursor_x_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_x_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_x_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_x_2, 0, 1, 1, 1);

        pushButton_cursor_y_1 = new QPushButton(BHChartSettings);
        pushButton_cursor_y_1->setObjectName(QString::fromUtf8("pushButton_cursor_y_1"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_1->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_1, 1, 0, 1, 1);

        pushButton_cursor_y_2 = new QPushButton(BHChartSettings);
        pushButton_cursor_y_2->setObjectName(QString::fromUtf8("pushButton_cursor_y_2"));
        sizePolicy.setHeightForWidth(pushButton_cursor_y_2->sizePolicy().hasHeightForWidth());
        pushButton_cursor_y_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_y_2, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        dial_timebase = new QDial(BHChartSettings);
        dial_timebase->setObjectName(QString::fromUtf8("dial_timebase"));

        gridLayout_2->addWidget(dial_timebase, 4, 0, 1, 1);

        pushButton_trigger = new QPushButton(BHChartSettings);
        pushButton_trigger->setObjectName(QString::fromUtf8("pushButton_trigger"));
        sizePolicy.setHeightForWidth(pushButton_trigger->sizePolicy().hasHeightForWidth());
        pushButton_trigger->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_trigger, 7, 0, 1, 1);

        pushButton_show_cursor = new QPushButton(BHChartSettings);
        pushButton_show_cursor->setObjectName(QString::fromUtf8("pushButton_show_cursor"));
        sizePolicy.setHeightForWidth(pushButton_show_cursor->sizePolicy().hasHeightForWidth());
        pushButton_show_cursor->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_show_cursor, 1, 0, 1, 1);

        dial_range = new QDial(BHChartSettings);
        dial_range->setObjectName(QString::fromUtf8("dial_range"));

        gridLayout_2->addWidget(dial_range, 6, 0, 1, 1);

        dial_offset = new QDial(BHChartSettings);
        dial_offset->setObjectName(QString::fromUtf8("dial_offset"));

        gridLayout_2->addWidget(dial_offset, 5, 0, 1, 1);


        retranslateUi(BHChartSettings);

        QMetaObject::connectSlotsByName(BHChartSettings);
    } // setupUi

    void retranslateUi(QWidget *BHChartSettings)
    {
        BHChartSettings->setWindowTitle(QApplication::translate("BHChartSettings", "BHChartSettings", nullptr));
        pushButton_back->setText(QApplication::translate("BHChartSettings", "Back", nullptr));
        pushButton_hide_cursors->setText(QApplication::translate("BHChartSettings", "Hide Cursors", nullptr));
        pushButton_cursor_x_1->setText(QApplication::translate("BHChartSettings", "Cursor X_1", nullptr));
        pushButton_cursor_x_2->setText(QApplication::translate("BHChartSettings", "Cursor X_2", nullptr));
        pushButton_cursor_y_1->setText(QApplication::translate("BHChartSettings", "Cursor Y_1", nullptr));
        pushButton_cursor_y_2->setText(QApplication::translate("BHChartSettings", "Cursor Y_2", nullptr));
        pushButton_trigger->setText(QApplication::translate("BHChartSettings", "Trigger", nullptr));
        pushButton_show_cursor->setText(QApplication::translate("BHChartSettings", "Show Cursors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BHChartSettings: public Ui_BHChartSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_B_H_CHART_SETTINGS_H

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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <state_changing_dial.h>

QT_BEGIN_NAMESPACE

class Ui_BarkhausenChartSettings
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_amplitude_state;
    StateChangingDial *dial_amplitude_offset;
    QPushButton *pushButton_hide_cursors;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_amplitude_offset;
    QPushButton *pushButton_trigger;
    QPushButton *pushButton_auto_range;
    QPushButton *pushButton_back;
    StateChangingDial *dial_timebase_offset;
    StateChangingDial *dial_amplitude;
    StateChangingDial *dial_timebase;
    QLabel *label_timebase_state;
    QGridLayout *gridLayout;
    QPushButton *pushButton_cursor_A;
    QPushButton *pushButton_cursor_B;
    QPushButton *pushButton_cursor_vertical;
    QPushButton *pushButton_cursor_horizontal;
    QPushButton *pushButton_show_cursor;
    QLabel *label_4;
    QLabel *label_timebase_offset_state;

    void setupUi(QWidget *BarkhausenChartSettings)
    {
        if (BarkhausenChartSettings->objectName().isEmpty())
            BarkhausenChartSettings->setObjectName(QString::fromUtf8("BarkhausenChartSettings"));
        BarkhausenChartSettings->resize(190, 905);
        gridLayout_2 = new QGridLayout(BarkhausenChartSettings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_amplitude_state = new QLabel(BarkhausenChartSettings);
        label_amplitude_state->setObjectName(QString::fromUtf8("label_amplitude_state"));

        gridLayout_2->addWidget(label_amplitude_state, 7, 1, 1, 1);

        dial_amplitude_offset = new StateChangingDial(BarkhausenChartSettings);
        dial_amplitude_offset->setObjectName(QString::fromUtf8("dial_amplitude_offset"));

        gridLayout_2->addWidget(dial_amplitude_offset, 10, 0, 1, 2);

        pushButton_hide_cursors = new QPushButton(BarkhausenChartSettings);
        pushButton_hide_cursors->setObjectName(QString::fromUtf8("pushButton_hide_cursors"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_hide_cursors->sizePolicy().hasHeightForWidth());
        pushButton_hide_cursors->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_hide_cursors, 1, 1, 1, 1);

        label_3 = new QLabel(BarkhausenChartSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 9, 0, 1, 1);

        label_2 = new QLabel(BarkhausenChartSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 7, 0, 1, 1);

        label = new QLabel(BarkhausenChartSettings);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        label_amplitude_offset = new QLabel(BarkhausenChartSettings);
        label_amplitude_offset->setObjectName(QString::fromUtf8("label_amplitude_offset"));

        gridLayout_2->addWidget(label_amplitude_offset, 9, 1, 1, 1);

        pushButton_trigger = new QPushButton(BarkhausenChartSettings);
        pushButton_trigger->setObjectName(QString::fromUtf8("pushButton_trigger"));
        sizePolicy.setHeightForWidth(pushButton_trigger->sizePolicy().hasHeightForWidth());
        pushButton_trigger->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_trigger, 11, 0, 1, 2);

        pushButton_auto_range = new QPushButton(BarkhausenChartSettings);
        pushButton_auto_range->setObjectName(QString::fromUtf8("pushButton_auto_range"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_auto_range->sizePolicy().hasHeightForWidth());
        pushButton_auto_range->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButton_auto_range, 2, 0, 1, 1);

        pushButton_back = new QPushButton(BarkhausenChartSettings);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_back, 12, 0, 1, 2);

        dial_timebase_offset = new StateChangingDial(BarkhausenChartSettings);
        dial_timebase_offset->setObjectName(QString::fromUtf8("dial_timebase_offset"));

        gridLayout_2->addWidget(dial_timebase_offset, 6, 0, 1, 2);

        dial_amplitude = new StateChangingDial(BarkhausenChartSettings);
        dial_amplitude->setObjectName(QString::fromUtf8("dial_amplitude"));

        gridLayout_2->addWidget(dial_amplitude, 8, 0, 1, 2);

        dial_timebase = new StateChangingDial(BarkhausenChartSettings);
        dial_timebase->setObjectName(QString::fromUtf8("dial_timebase"));

        gridLayout_2->addWidget(dial_timebase, 4, 0, 1, 2);

        label_timebase_state = new QLabel(BarkhausenChartSettings);
        label_timebase_state->setObjectName(QString::fromUtf8("label_timebase_state"));

        gridLayout_2->addWidget(label_timebase_state, 3, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_cursor_A = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_A->setObjectName(QString::fromUtf8("pushButton_cursor_A"));
        sizePolicy.setHeightForWidth(pushButton_cursor_A->sizePolicy().hasHeightForWidth());
        pushButton_cursor_A->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_A, 0, 0, 1, 1);

        pushButton_cursor_B = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_B->setObjectName(QString::fromUtf8("pushButton_cursor_B"));
        sizePolicy.setHeightForWidth(pushButton_cursor_B->sizePolicy().hasHeightForWidth());
        pushButton_cursor_B->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_B, 0, 1, 1, 1);

        pushButton_cursor_vertical = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_vertical->setObjectName(QString::fromUtf8("pushButton_cursor_vertical"));
        sizePolicy.setHeightForWidth(pushButton_cursor_vertical->sizePolicy().hasHeightForWidth());
        pushButton_cursor_vertical->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_vertical, 1, 0, 1, 1);

        pushButton_cursor_horizontal = new QPushButton(BarkhausenChartSettings);
        pushButton_cursor_horizontal->setObjectName(QString::fromUtf8("pushButton_cursor_horizontal"));
        sizePolicy.setHeightForWidth(pushButton_cursor_horizontal->sizePolicy().hasHeightForWidth());
        pushButton_cursor_horizontal->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_cursor_horizontal, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        pushButton_show_cursor = new QPushButton(BarkhausenChartSettings);
        pushButton_show_cursor->setObjectName(QString::fromUtf8("pushButton_show_cursor"));
        sizePolicy.setHeightForWidth(pushButton_show_cursor->sizePolicy().hasHeightForWidth());
        pushButton_show_cursor->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(pushButton_show_cursor, 1, 0, 1, 1);

        label_4 = new QLabel(BarkhausenChartSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 5, 0, 1, 1);

        label_timebase_offset_state = new QLabel(BarkhausenChartSettings);
        label_timebase_offset_state->setObjectName(QString::fromUtf8("label_timebase_offset_state"));

        gridLayout_2->addWidget(label_timebase_offset_state, 5, 1, 1, 1);


        retranslateUi(BarkhausenChartSettings);

        QMetaObject::connectSlotsByName(BarkhausenChartSettings);
    } // setupUi

    void retranslateUi(QWidget *BarkhausenChartSettings)
    {
        BarkhausenChartSettings->setWindowTitle(QApplication::translate("BarkhausenChartSettings", "BarkhausenChartSettings", nullptr));
        label_amplitude_state->setText(QApplication::translate("BarkhausenChartSettings", "x0.1", nullptr));
        pushButton_hide_cursors->setText(QApplication::translate("BarkhausenChartSettings", "Hide \n"
"Cursors", nullptr));
        label_3->setText(QApplication::translate("BarkhausenChartSettings", "AM offset", nullptr));
        label_2->setText(QApplication::translate("BarkhausenChartSettings", "Ampitude", nullptr));
        label->setText(QApplication::translate("BarkhausenChartSettings", "Timebase", nullptr));
        label_amplitude_offset->setText(QApplication::translate("BarkhausenChartSettings", "x0.1", nullptr));
        pushButton_trigger->setText(QApplication::translate("BarkhausenChartSettings", "Trigger", nullptr));
        pushButton_auto_range->setText(QApplication::translate("BarkhausenChartSettings", "Auto\n"
"Range", nullptr));
        pushButton_back->setText(QApplication::translate("BarkhausenChartSettings", "Back", nullptr));
        label_timebase_state->setText(QApplication::translate("BarkhausenChartSettings", "x0.1", nullptr));
        pushButton_cursor_A->setText(QApplication::translate("BarkhausenChartSettings", "Cursor A", nullptr));
        pushButton_cursor_B->setText(QApplication::translate("BarkhausenChartSettings", "Cursor B", nullptr));
        pushButton_cursor_vertical->setText(QApplication::translate("BarkhausenChartSettings", "Vertical", nullptr));
        pushButton_cursor_horizontal->setText(QApplication::translate("BarkhausenChartSettings", "Horizontal", nullptr));
        pushButton_show_cursor->setText(QApplication::translate("BarkhausenChartSettings", "Show \n"
"Cursors", nullptr));
        label_4->setText(QApplication::translate("BarkhausenChartSettings", "TB offset", nullptr));
        label_timebase_offset_state->setText(QApplication::translate("BarkhausenChartSettings", "x0.1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BarkhausenChartSettings: public Ui_BarkhausenChartSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARKHAUSEN_CHART_SETTINGS_H

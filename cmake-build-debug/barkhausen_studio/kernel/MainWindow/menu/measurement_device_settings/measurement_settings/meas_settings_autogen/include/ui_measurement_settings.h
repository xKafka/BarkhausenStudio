/********************************************************************************
** Form generated from reading UI file 'measurement_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENT_SETTINGS_H
#define UI_MEASUREMENT_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <chartwindow.h>
#include <state_changing_dial.h>

QT_BEGIN_NAMESPACE

class Ui_MeasurementSettings
{
public:
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_back;
    QSplitter *splitter;
    QFrame *frame_mes_settings;
    QGridLayout *gridLayout_4;
    QDial *dial;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_11;
    QDial *dial_2;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_12;
    StateChangingDial *dial_cursor;
    QLabel *label_13;
    QLabel *label_3;
    QLabel *label_cursor_state;
    QFrame *frame_signal_source;
    QVBoxLayout *verticalLayout_5;
    ChartWindow *widget_input_chart;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_amplitude;
    QLabel *label_5;
    QLabel *label_frequency;
    QLabel *label_6;
    QLabel *label_offset;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLabel *label;
    StateChangingDial *dial_frequency;
    QLabel *label_shift;
    StateChangingDial *dial_amplitude;
    QLabel *label_2;
    StateChangingDial *dial_shift;
    QLabel *label_frequency_state;
    QLabel *label_amplitude_state;
    QLabel *label_offset_state;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_triangle;
    QPushButton *pushButton_square;
    QPushButton *pushButton_custom;
    QPushButton *pushButton_save;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *MeasurementSettings)
    {
        if (MeasurementSettings->objectName().isEmpty())
            MeasurementSettings->setObjectName(QString::fromUtf8("MeasurementSettings"));
        MeasurementSettings->resize(1434, 1080);
        gridLayout_5 = new QGridLayout(MeasurementSettings);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_back = new QPushButton(MeasurementSettings);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_back, 1, 0, 1, 1);

        splitter = new QSplitter(MeasurementSettings);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frame_mes_settings = new QFrame(splitter);
        frame_mes_settings->setObjectName(QString::fromUtf8("frame_mes_settings"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_mes_settings->sizePolicy().hasHeightForWidth());
        frame_mes_settings->setSizePolicy(sizePolicy1);
        frame_mes_settings->setFrameShape(QFrame::StyledPanel);
        frame_mes_settings->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_mes_settings);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        dial = new QDial(frame_mes_settings);
        dial->setObjectName(QString::fromUtf8("dial"));

        gridLayout_4->addWidget(dial, 1, 0, 1, 1);

        label_10 = new QLabel(frame_mes_settings);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 1, 1, 1);

        label_7 = new QLabel(frame_mes_settings);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 1, 2, 1, 1);

        label_11 = new QLabel(frame_mes_settings);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        dial_2 = new QDial(frame_mes_settings);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));

        gridLayout_4->addWidget(dial_2, 3, 0, 1, 1);

        label_9 = new QLabel(frame_mes_settings);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 3, 1, 1, 1);

        label_8 = new QLabel(frame_mes_settings);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 3, 2, 1, 1);

        label_12 = new QLabel(frame_mes_settings);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_12, 4, 0, 1, 1);

        dial_cursor = new StateChangingDial(frame_mes_settings);
        dial_cursor->setObjectName(QString::fromUtf8("dial_cursor"));
        sizePolicy1.setHeightForWidth(dial_cursor->sizePolicy().hasHeightForWidth());
        dial_cursor->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(dial_cursor, 5, 0, 1, 1);

        label_13 = new QLabel(frame_mes_settings);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 5, 1, 1, 1);

        label_3 = new QLabel(frame_mes_settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 5, 2, 1, 1);

        label_cursor_state = new QLabel(frame_mes_settings);
        label_cursor_state->setObjectName(QString::fromUtf8("label_cursor_state"));
        label_cursor_state->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_cursor_state, 6, 0, 1, 1);

        splitter->addWidget(frame_mes_settings);

        gridLayout_5->addWidget(splitter, 0, 2, 1, 1);

        frame_signal_source = new QFrame(MeasurementSettings);
        frame_signal_source->setObjectName(QString::fromUtf8("frame_signal_source"));
        frame_signal_source->setFrameShape(QFrame::StyledPanel);
        frame_signal_source->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_signal_source);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_input_chart = new ChartWindow(frame_signal_source);
        widget_input_chart->setObjectName(QString::fromUtf8("widget_input_chart"));
        sizePolicy.setHeightForWidth(widget_input_chart->sizePolicy().hasHeightForWidth());
        widget_input_chart->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(widget_input_chart);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 500, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(1366, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout_5->addWidget(widget_input_chart);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(frame_signal_source);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_amplitude = new QLabel(frame_signal_source);
        label_amplitude->setObjectName(QString::fromUtf8("label_amplitude"));

        gridLayout_2->addWidget(label_amplitude, 0, 1, 1, 1);

        label_5 = new QLabel(frame_signal_source);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_frequency = new QLabel(frame_signal_source);
        label_frequency->setObjectName(QString::fromUtf8("label_frequency"));

        gridLayout_2->addWidget(label_frequency, 1, 1, 1, 1);

        label_6 = new QLabel(frame_signal_source);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        label_offset = new QLabel(frame_signal_source);
        label_offset->setObjectName(QString::fromUtf8("label_offset"));

        gridLayout_2->addWidget(label_offset, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame_signal_source);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        dial_frequency = new StateChangingDial(frame_signal_source);
        dial_frequency->setObjectName(QString::fromUtf8("dial_frequency"));

        gridLayout->addWidget(dial_frequency, 1, 0, 1, 1);

        label_shift = new QLabel(frame_signal_source);
        label_shift->setObjectName(QString::fromUtf8("label_shift"));
        label_shift->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_shift, 3, 2, 1, 1);

        dial_amplitude = new StateChangingDial(frame_signal_source);
        dial_amplitude->setObjectName(QString::fromUtf8("dial_amplitude"));

        gridLayout->addWidget(dial_amplitude, 1, 1, 1, 1);

        label_2 = new QLabel(frame_signal_source);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        dial_shift = new StateChangingDial(frame_signal_source);
        dial_shift->setObjectName(QString::fromUtf8("dial_shift"));

        gridLayout->addWidget(dial_shift, 1, 2, 1, 1);

        label_frequency_state = new QLabel(frame_signal_source);
        label_frequency_state->setObjectName(QString::fromUtf8("label_frequency_state"));
        label_frequency_state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_frequency_state, 2, 0, 1, 1);

        label_amplitude_state = new QLabel(frame_signal_source);
        label_amplitude_state->setObjectName(QString::fromUtf8("label_amplitude_state"));
        label_amplitude_state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_amplitude_state, 2, 1, 1, 1);

        label_offset_state = new QLabel(frame_signal_source);
        label_offset_state->setObjectName(QString::fromUtf8("label_offset_state"));
        label_offset_state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_offset_state, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        pushButton_sin = new QPushButton(frame_signal_source);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        sizePolicy.setHeightForWidth(pushButton_sin->sizePolicy().hasHeightForWidth());
        pushButton_sin->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_sin);

        pushButton_triangle = new QPushButton(frame_signal_source);
        pushButton_triangle->setObjectName(QString::fromUtf8("pushButton_triangle"));
        sizePolicy.setHeightForWidth(pushButton_triangle->sizePolicy().hasHeightForWidth());
        pushButton_triangle->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_triangle);

        pushButton_square = new QPushButton(frame_signal_source);
        pushButton_square->setObjectName(QString::fromUtf8("pushButton_square"));
        sizePolicy.setHeightForWidth(pushButton_square->sizePolicy().hasHeightForWidth());
        pushButton_square->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_square);

        pushButton_custom = new QPushButton(frame_signal_source);
        pushButton_custom->setObjectName(QString::fromUtf8("pushButton_custom"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_custom->sizePolicy().hasHeightForWidth());
        pushButton_custom->setSizePolicy(sizePolicy4);

        verticalLayout_3->addWidget(pushButton_custom);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_2);


        gridLayout_5->addWidget(frame_signal_source, 0, 0, 1, 1);

        pushButton_save = new QPushButton(MeasurementSettings);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        sizePolicy.setHeightForWidth(pushButton_save->sizePolicy().hasHeightForWidth());
        pushButton_save->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(pushButton_save, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 1000, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_2, 0, 1, 1, 1);


        retranslateUi(MeasurementSettings);

        QMetaObject::connectSlotsByName(MeasurementSettings);
    } // setupUi

    void retranslateUi(QWidget *MeasurementSettings)
    {
        MeasurementSettings->setWindowTitle(QApplication::translate("MeasurementSettings", "MeasurementSettings", nullptr));
        pushButton_back->setText(QApplication::translate("MeasurementSettings", "Back", nullptr));
        label_10->setText(QApplication::translate("MeasurementSettings", "Acquisition time [s]:", nullptr));
        label_7->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_9->setText(QApplication::translate("MeasurementSettings", "Pause between \n"
"measurements: [s]:", nullptr));
        label_8->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_12->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("MeasurementSettings", "Cursor", nullptr));
        label_cursor_state->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("MeasurementSettings", "Amplitude:", nullptr));
        label_amplitude->setText(QApplication::translate("MeasurementSettings", "0.0", nullptr));
        label_5->setText(QApplication::translate("MeasurementSettings", "Frequency:", nullptr));
        label_frequency->setText(QApplication::translate("MeasurementSettings", "0.0", nullptr));
        label_6->setText(QApplication::translate("MeasurementSettings", "Offset:", nullptr));
        label_offset->setText(QApplication::translate("MeasurementSettings", "0.0", nullptr));
        label->setText(QApplication::translate("MeasurementSettings", "Frequency", nullptr));
        label_shift->setText(QApplication::translate("MeasurementSettings", "Offset", nullptr));
        label_2->setText(QApplication::translate("MeasurementSettings", "Amplitude", nullptr));
        label_frequency_state->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_amplitude_state->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        label_offset_state->setText(QApplication::translate("MeasurementSettings", "TextLabel", nullptr));
        pushButton_sin->setText(QApplication::translate("MeasurementSettings", "Sin", nullptr));
        pushButton_triangle->setText(QApplication::translate("MeasurementSettings", "Triangle", nullptr));
        pushButton_square->setText(QApplication::translate("MeasurementSettings", "Square", nullptr));
        pushButton_custom->setText(QApplication::translate("MeasurementSettings", "Custom", nullptr));
        pushButton_save->setText(QApplication::translate("MeasurementSettings", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementSettings: public Ui_MeasurementSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENT_SETTINGS_H

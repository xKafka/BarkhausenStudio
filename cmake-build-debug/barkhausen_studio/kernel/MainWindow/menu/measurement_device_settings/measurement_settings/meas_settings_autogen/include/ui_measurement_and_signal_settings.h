/********************************************************************************
** Form generated from reading UI file 'measurement_and_signal_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENT_AND_SIGNAL_SETTINGS_H
#define UI_MEASUREMENT_AND_SIGNAL_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <chartwindow.h>
#include <state_changing_dial.h>

QT_BEGIN_NAMESPACE

class Ui_MeasurementAndSignalSettings
{
public:
    QGridLayout *gridLayout_5;
    QFrame *frame_signal_source;
    QVBoxLayout *verticalLayout_5;
    ChartWindow *widget_input_chart;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_amplitude;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_offset;
    QLabel *label_5;
    QLabel *label_frequency;
    QComboBox *comboBox_source_resource;
    QComboBox *comboBox_source_port;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    StateChangingDial *dial_frequency;
    StateChangingDial *dial_amplitude;
    QLabel *label_amplitude_state;
    StateChangingDial *dial_shift;
    QLabel *label_shift;
    QLabel *label_offset_state;
    QLabel *label_frequency_state;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QSlider *horizontalSlider;
    QLabel *label_8;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_triangle;
    QPushButton *pushButton_square;
    QPushButton *pushButton_custom;
    QPushButton *pushButton_active_out;
    QSpacerItem *verticalSpacer_2;
    QSplitter *splitter;
    QFrame *frame_mes_settings;
    QGridLayout *gridLayout_4;
    QDial *dial_acq_time;
    QLabel *label_measurement_pause;
    QSpacerItem *verticalSpacer;
    QLabel *label_acq_time_dial_state;
    QDial *dial_acq_pause_time;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_acq_time;
    QLabel *label_13;
    QLabel *label_acq_pause_time_dial_state;
    StateChangingDial *dial_cursor;
    QLabel *label_cursor_state;
    QPushButton *pushButton_back;
    QSplitter *splitter_2;
    QPushButton *pushButton_save_signal_settings;
    QPushButton *pushButton_save_mearuement_settings;

    void setupUi(QWidget *MeasurementAndSignalSettings)
    {
        if (MeasurementAndSignalSettings->objectName().isEmpty())
            MeasurementAndSignalSettings->setObjectName(QString::fromUtf8("MeasurementAndSignalSettings"));
        MeasurementAndSignalSettings->resize(1757, 1566);
        gridLayout_5 = new QGridLayout(MeasurementAndSignalSettings);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        frame_signal_source = new QFrame(MeasurementAndSignalSettings);
        frame_signal_source->setObjectName(QString::fromUtf8("frame_signal_source"));
        frame_signal_source->setFrameShape(QFrame::StyledPanel);
        frame_signal_source->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_signal_source);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_input_chart = new ChartWindow(frame_signal_source);
        widget_input_chart->setObjectName(QString::fromUtf8("widget_input_chart"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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
        label_amplitude = new QLabel(frame_signal_source);
        label_amplitude->setObjectName(QString::fromUtf8("label_amplitude"));

        gridLayout_2->addWidget(label_amplitude, 1, 1, 1, 1);

        label_6 = new QLabel(frame_signal_source);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        label_4 = new QLabel(frame_signal_source);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_offset = new QLabel(frame_signal_source);
        label_offset->setObjectName(QString::fromUtf8("label_offset"));

        gridLayout_2->addWidget(label_offset, 3, 1, 1, 1);

        label_5 = new QLabel(frame_signal_source);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        label_frequency = new QLabel(frame_signal_source);
        label_frequency->setObjectName(QString::fromUtf8("label_frequency"));

        gridLayout_2->addWidget(label_frequency, 2, 1, 1, 1);

        comboBox_source_resource = new QComboBox(frame_signal_source);
        comboBox_source_resource->setObjectName(QString::fromUtf8("comboBox_source_resource"));

        gridLayout_2->addWidget(comboBox_source_resource, 0, 0, 1, 1);

        comboBox_source_port = new QComboBox(frame_signal_source);
        comboBox_source_port->setObjectName(QString::fromUtf8("comboBox_source_port"));

        gridLayout_2->addWidget(comboBox_source_port, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dial_frequency = new StateChangingDial(frame_signal_source);
        dial_frequency->setObjectName(QString::fromUtf8("dial_frequency"));

        gridLayout->addWidget(dial_frequency, 1, 0, 1, 1);

        dial_amplitude = new StateChangingDial(frame_signal_source);
        dial_amplitude->setObjectName(QString::fromUtf8("dial_amplitude"));

        gridLayout->addWidget(dial_amplitude, 1, 1, 1, 1);

        label_amplitude_state = new QLabel(frame_signal_source);
        label_amplitude_state->setObjectName(QString::fromUtf8("label_amplitude_state"));
        label_amplitude_state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_amplitude_state, 2, 1, 1, 1);

        dial_shift = new StateChangingDial(frame_signal_source);
        dial_shift->setObjectName(QString::fromUtf8("dial_shift"));

        gridLayout->addWidget(dial_shift, 1, 2, 1, 1);

        label_shift = new QLabel(frame_signal_source);
        label_shift->setObjectName(QString::fromUtf8("label_shift"));
        label_shift->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_shift, 3, 2, 1, 1);

        label_offset_state = new QLabel(frame_signal_source);
        label_offset_state->setObjectName(QString::fromUtf8("label_offset_state"));
        label_offset_state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_offset_state, 2, 2, 1, 1);

        label_frequency_state = new QLabel(frame_signal_source);
        label_frequency_state->setObjectName(QString::fromUtf8("label_frequency_state"));
        label_frequency_state->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_frequency_state, 2, 0, 1, 1);

        label = new QLabel(frame_signal_source);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(frame_signal_source);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 3, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        label_7 = new QLabel(frame_signal_source);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_3->addWidget(label_7);

        horizontalSlider = new QSlider(frame_signal_source);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSlider);

        label_8 = new QLabel(frame_signal_source);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_3->addWidget(label_8);

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
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_custom->sizePolicy().hasHeightForWidth());
        pushButton_custom->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(pushButton_custom);

        pushButton_active_out = new QPushButton(frame_signal_source);
        pushButton_active_out->setObjectName(QString::fromUtf8("pushButton_active_out"));
        sizePolicy.setHeightForWidth(pushButton_active_out->sizePolicy().hasHeightForWidth());
        pushButton_active_out->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_active_out);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_5->addLayout(verticalLayout_2);


        gridLayout_5->addWidget(frame_signal_source, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 1300, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_2, 0, 1, 1, 1);

        splitter = new QSplitter(MeasurementAndSignalSettings);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frame_mes_settings = new QFrame(splitter);
        frame_mes_settings->setObjectName(QString::fromUtf8("frame_mes_settings"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_mes_settings->sizePolicy().hasHeightForWidth());
        frame_mes_settings->setSizePolicy(sizePolicy4);
        frame_mes_settings->setFrameShape(QFrame::StyledPanel);
        frame_mes_settings->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_mes_settings);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        dial_acq_time = new QDial(frame_mes_settings);
        dial_acq_time->setObjectName(QString::fromUtf8("dial_acq_time"));

        gridLayout_4->addWidget(dial_acq_time, 1, 0, 1, 1);

        label_measurement_pause = new QLabel(frame_mes_settings);
        label_measurement_pause->setObjectName(QString::fromUtf8("label_measurement_pause"));

        gridLayout_4->addWidget(label_measurement_pause, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 7, 1, 1, 1);

        label_acq_time_dial_state = new QLabel(frame_mes_settings);
        label_acq_time_dial_state->setObjectName(QString::fromUtf8("label_acq_time_dial_state"));
        label_acq_time_dial_state->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_acq_time_dial_state, 2, 0, 1, 1);

        dial_acq_pause_time = new QDial(frame_mes_settings);
        dial_acq_pause_time->setObjectName(QString::fromUtf8("dial_acq_pause_time"));

        gridLayout_4->addWidget(dial_acq_pause_time, 3, 0, 1, 1);

        label_10 = new QLabel(frame_mes_settings);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 3, 1, 1);

        label_3 = new QLabel(frame_mes_settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 5, 4, 1, 1);

        label_9 = new QLabel(frame_mes_settings);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 3, 3, 1, 1);

        label_acq_time = new QLabel(frame_mes_settings);
        label_acq_time->setObjectName(QString::fromUtf8("label_acq_time"));

        gridLayout_4->addWidget(label_acq_time, 1, 4, 1, 1);

        label_13 = new QLabel(frame_mes_settings);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 5, 3, 1, 1);

        label_acq_pause_time_dial_state = new QLabel(frame_mes_settings);
        label_acq_pause_time_dial_state->setObjectName(QString::fromUtf8("label_acq_pause_time_dial_state"));
        label_acq_pause_time_dial_state->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_acq_pause_time_dial_state, 4, 0, 1, 1);

        dial_cursor = new StateChangingDial(frame_mes_settings);
        dial_cursor->setObjectName(QString::fromUtf8("dial_cursor"));
        sizePolicy4.setHeightForWidth(dial_cursor->sizePolicy().hasHeightForWidth());
        dial_cursor->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(dial_cursor, 5, 0, 1, 1);

        label_cursor_state = new QLabel(frame_mes_settings);
        label_cursor_state->setObjectName(QString::fromUtf8("label_cursor_state"));
        label_cursor_state->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_cursor_state, 6, 0, 1, 1);

        splitter->addWidget(frame_mes_settings);

        gridLayout_5->addWidget(splitter, 0, 2, 1, 1);

        pushButton_back = new QPushButton(MeasurementAndSignalSettings);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(pushButton_back, 1, 0, 1, 1);

        splitter_2 = new QSplitter(MeasurementAndSignalSettings);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButton_save_signal_settings = new QPushButton(splitter_2);
        pushButton_save_signal_settings->setObjectName(QString::fromUtf8("pushButton_save_signal_settings"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_save_signal_settings->sizePolicy().hasHeightForWidth());
        pushButton_save_signal_settings->setSizePolicy(sizePolicy6);
        splitter_2->addWidget(pushButton_save_signal_settings);
        pushButton_save_mearuement_settings = new QPushButton(splitter_2);
        pushButton_save_mearuement_settings->setObjectName(QString::fromUtf8("pushButton_save_mearuement_settings"));
        sizePolicy6.setHeightForWidth(pushButton_save_mearuement_settings->sizePolicy().hasHeightForWidth());
        pushButton_save_mearuement_settings->setSizePolicy(sizePolicy6);
        splitter_2->addWidget(pushButton_save_mearuement_settings);

        gridLayout_5->addWidget(splitter_2, 1, 2, 1, 1);


        retranslateUi(MeasurementAndSignalSettings);

        QMetaObject::connectSlotsByName(MeasurementAndSignalSettings);
    } // setupUi

    void retranslateUi(QWidget *MeasurementAndSignalSettings)
    {
        MeasurementAndSignalSettings->setWindowTitle(QApplication::translate("MeasurementAndSignalSettings", "MeasurementAndSignalSettings", nullptr));
        label_amplitude->setText(QApplication::translate("MeasurementAndSignalSettings", "0.0", nullptr));
        label_6->setText(QApplication::translate("MeasurementAndSignalSettings", "Offset:", nullptr));
        label_4->setText(QApplication::translate("MeasurementAndSignalSettings", "Amplitude:", nullptr));
        label_offset->setText(QApplication::translate("MeasurementAndSignalSettings", "0.0", nullptr));
        label_5->setText(QApplication::translate("MeasurementAndSignalSettings", "Frequency:", nullptr));
        label_frequency->setText(QApplication::translate("MeasurementAndSignalSettings", "0.0", nullptr));
        label_amplitude_state->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_shift->setText(QApplication::translate("MeasurementAndSignalSettings", "Offset", nullptr));
        label_offset_state->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_frequency_state->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label->setText(QApplication::translate("MeasurementAndSignalSettings", "Frequency", nullptr));
        label_2->setText(QApplication::translate("MeasurementAndSignalSettings", "Amplitude", nullptr));
        label_7->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        pushButton_sin->setText(QApplication::translate("MeasurementAndSignalSettings", "Sin", nullptr));
        pushButton_triangle->setText(QApplication::translate("MeasurementAndSignalSettings", "Triangle", nullptr));
        pushButton_square->setText(QApplication::translate("MeasurementAndSignalSettings", "Square", nullptr));
        pushButton_custom->setText(QApplication::translate("MeasurementAndSignalSettings", "Custom", nullptr));
        pushButton_active_out->setText(QApplication::translate("MeasurementAndSignalSettings", "Out On", nullptr));
        label_measurement_pause->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_acq_time_dial_state->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("MeasurementAndSignalSettings", "Acquisition time [s]:", nullptr));
        label_3->setText(QApplication::translate("MeasurementAndSignalSettings", "Cursor", nullptr));
        label_9->setText(QApplication::translate("MeasurementAndSignalSettings", "Pause between \n"
"measurements: [s]:", nullptr));
        label_acq_time->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_acq_pause_time_dial_state->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        label_cursor_state->setText(QApplication::translate("MeasurementAndSignalSettings", "TextLabel", nullptr));
        pushButton_back->setText(QApplication::translate("MeasurementAndSignalSettings", "Back", nullptr));
        pushButton_save_signal_settings->setText(QApplication::translate("MeasurementAndSignalSettings", "Save Signal Source\n"
"Settings", nullptr));
        pushButton_save_mearuement_settings->setText(QApplication::translate("MeasurementAndSignalSettings", "Save Measurement\n"
"Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementAndSignalSettings: public Ui_MeasurementAndSignalSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENT_AND_SIGNAL_SETTINGS_H

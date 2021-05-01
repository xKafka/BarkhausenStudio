/********************************************************************************
** Form generated from reading UI file 'meas_device_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEAS_DEVICE_SETTINGS_H
#define UI_MEAS_DEVICE_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasDeviceSettings
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QComboBox *comboBox_induced_voltage_port;
    QComboBox *comboBox_polarity_mes;
    QSlider *horizontalSlider_sample_rate;
    QLabel *label_voltage_range_vals;
    QLabel *label_sample_rate;
    QLabel *label_port;
    QLabel *label_resource;
    QComboBox *comboBox_resource_mes;
    QComboBox *comboBox_barkhausen_noise_port;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_points_per_chunk_vals;
    QSlider *horizontalSlider_voltage_range;
    QLabel *label_sample_rate_2;
    QLabel *label_voltage_range;
    QLabel *label_polarity;
    QSlider *horizontalSlider_points_per_chunk;
    QLabel *label_sample_rate_vals;
    QLabel *label_3;
    QPushButton *pushButton_back;
    QComboBox *comboBox_sensed_current_port;
    QComboBox *comboBox_gaussmet_port;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox_port_source;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_resource_2;
    QSpacerItem *verticalSpacer_2;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_active_output;
    QComboBox *comboBox_resource_source;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_port_2;
    QDial *dial_tuning;
    QPushButton *pushButton_save;
    QDial *dial_fine_tuning;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *MeasDeviceSettings)
    {
        if (MeasDeviceSettings->objectName().isEmpty())
            MeasDeviceSettings->setObjectName(QString::fromUtf8("MeasDeviceSettings"));
        MeasDeviceSettings->resize(1450, 1066);
        gridLayout_3 = new QGridLayout(MeasDeviceSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(MeasDeviceSettings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox_induced_voltage_port = new QComboBox(frame);
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->setObjectName(QString::fromUtf8("comboBox_induced_voltage_port"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_induced_voltage_port->sizePolicy().hasHeightForWidth());
        comboBox_induced_voltage_port->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_induced_voltage_port, 6, 1, 1, 1);

        comboBox_polarity_mes = new QComboBox(frame);
        comboBox_polarity_mes->addItem(QString());
        comboBox_polarity_mes->addItem(QString());
        comboBox_polarity_mes->setObjectName(QString::fromUtf8("comboBox_polarity_mes"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_polarity_mes->sizePolicy().hasHeightForWidth());
        comboBox_polarity_mes->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_polarity_mes, 1, 1, 1, 1);

        horizontalSlider_sample_rate = new QSlider(frame);
        horizontalSlider_sample_rate->setObjectName(QString::fromUtf8("horizontalSlider_sample_rate"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSlider_sample_rate->sizePolicy().hasHeightForWidth());
        horizontalSlider_sample_rate->setSizePolicy(sizePolicy2);
        horizontalSlider_sample_rate->setMinimum(0);
        horizontalSlider_sample_rate->setMaximum(10);
        horizontalSlider_sample_rate->setSingleStep(1);
        horizontalSlider_sample_rate->setPageStep(10);
        horizontalSlider_sample_rate->setValue(0);
        horizontalSlider_sample_rate->setSliderPosition(0);
        horizontalSlider_sample_rate->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_sample_rate, 13, 0, 1, 2);

        label_voltage_range_vals = new QLabel(frame);
        label_voltage_range_vals->setObjectName(QString::fromUtf8("label_voltage_range_vals"));

        gridLayout->addWidget(label_voltage_range_vals, 16, 1, 1, 1);

        label_sample_rate = new QLabel(frame);
        label_sample_rate->setObjectName(QString::fromUtf8("label_sample_rate"));

        gridLayout->addWidget(label_sample_rate, 12, 0, 1, 1);

        label_port = new QLabel(frame);
        label_port->setObjectName(QString::fromUtf8("label_port"));

        gridLayout->addWidget(label_port, 0, 1, 1, 1);

        label_resource = new QLabel(frame);
        label_resource->setObjectName(QString::fromUtf8("label_resource"));

        gridLayout->addWidget(label_resource, 0, 0, 1, 1);

        comboBox_resource_mes = new QComboBox(frame);
        comboBox_resource_mes->setObjectName(QString::fromUtf8("comboBox_resource_mes"));
        sizePolicy1.setHeightForWidth(comboBox_resource_mes->sizePolicy().hasHeightForWidth());
        comboBox_resource_mes->setSizePolicy(sizePolicy1);
        comboBox_resource_mes->setIconSize(QSize(25, 16));
        comboBox_resource_mes->setFrame(true);

        gridLayout->addWidget(comboBox_resource_mes, 1, 0, 1, 1);

        comboBox_barkhausen_noise_port = new QComboBox(frame);
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->setObjectName(QString::fromUtf8("comboBox_barkhausen_noise_port"));
        sizePolicy.setHeightForWidth(comboBox_barkhausen_noise_port->sizePolicy().hasHeightForWidth());
        comboBox_barkhausen_noise_port->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_barkhausen_noise_port, 8, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        label_points_per_chunk_vals = new QLabel(frame);
        label_points_per_chunk_vals->setObjectName(QString::fromUtf8("label_points_per_chunk_vals"));

        gridLayout->addWidget(label_points_per_chunk_vals, 9, 1, 1, 1);

        horizontalSlider_voltage_range = new QSlider(frame);
        horizontalSlider_voltage_range->setObjectName(QString::fromUtf8("horizontalSlider_voltage_range"));
        sizePolicy2.setHeightForWidth(horizontalSlider_voltage_range->sizePolicy().hasHeightForWidth());
        horizontalSlider_voltage_range->setSizePolicy(sizePolicy2);
        horizontalSlider_voltage_range->setMaximum(10);
        horizontalSlider_voltage_range->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_voltage_range, 17, 0, 1, 2);

        label_sample_rate_2 = new QLabel(frame);
        label_sample_rate_2->setObjectName(QString::fromUtf8("label_sample_rate_2"));

        gridLayout->addWidget(label_sample_rate_2, 9, 0, 1, 1);

        label_voltage_range = new QLabel(frame);
        label_voltage_range->setObjectName(QString::fromUtf8("label_voltage_range"));

        gridLayout->addWidget(label_voltage_range, 16, 0, 1, 1);

        label_polarity = new QLabel(frame);
        label_polarity->setObjectName(QString::fromUtf8("label_polarity"));

        gridLayout->addWidget(label_polarity, 5, 0, 1, 1);

        horizontalSlider_points_per_chunk = new QSlider(frame);
        horizontalSlider_points_per_chunk->setObjectName(QString::fromUtf8("horizontalSlider_points_per_chunk"));
        sizePolicy2.setHeightForWidth(horizontalSlider_points_per_chunk->sizePolicy().hasHeightForWidth());
        horizontalSlider_points_per_chunk->setSizePolicy(sizePolicy2);
        horizontalSlider_points_per_chunk->setMinimum(0);
        horizontalSlider_points_per_chunk->setMaximum(10);
        horizontalSlider_points_per_chunk->setSingleStep(1);
        horizontalSlider_points_per_chunk->setPageStep(10);
        horizontalSlider_points_per_chunk->setValue(0);
        horizontalSlider_points_per_chunk->setSliderPosition(0);
        horizontalSlider_points_per_chunk->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_points_per_chunk, 11, 0, 1, 2);

        label_sample_rate_vals = new QLabel(frame);
        label_sample_rate_vals->setObjectName(QString::fromUtf8("label_sample_rate_vals"));

        gridLayout->addWidget(label_sample_rate_vals, 12, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 1, 1, 1);

        pushButton_back = new QPushButton(frame);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        sizePolicy2.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_back, 18, 0, 1, 2);

        comboBox_sensed_current_port = new QComboBox(frame);
        comboBox_sensed_current_port->addItem(QString());
        comboBox_sensed_current_port->addItem(QString());
        comboBox_sensed_current_port->addItem(QString());
        comboBox_sensed_current_port->addItem(QString());
        comboBox_sensed_current_port->setObjectName(QString::fromUtf8("comboBox_sensed_current_port"));
        sizePolicy1.setHeightForWidth(comboBox_sensed_current_port->sizePolicy().hasHeightForWidth());
        comboBox_sensed_current_port->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox_sensed_current_port, 8, 1, 1, 1);

        comboBox_gaussmet_port = new QComboBox(frame);
        comboBox_gaussmet_port->addItem(QString());
        comboBox_gaussmet_port->addItem(QString());
        comboBox_gaussmet_port->addItem(QString());
        comboBox_gaussmet_port->addItem(QString());
        comboBox_gaussmet_port->setObjectName(QString::fromUtf8("comboBox_gaussmet_port"));
        sizePolicy1.setHeightForWidth(comboBox_gaussmet_port->sizePolicy().hasHeightForWidth());
        comboBox_gaussmet_port->setSizePolicy(sizePolicy1);
        comboBox_gaussmet_port->setIconSize(QSize(50, 16));

        gridLayout->addWidget(comboBox_gaussmet_port, 6, 0, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(MeasDeviceSettings);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        comboBox_port_source = new QComboBox(frame_2);
        comboBox_port_source->addItem(QString());
        comboBox_port_source->addItem(QString());
        comboBox_port_source->setObjectName(QString::fromUtf8("comboBox_port_source"));
        sizePolicy1.setHeightForWidth(comboBox_port_source->sizePolicy().hasHeightForWidth());
        comboBox_port_source->setSizePolicy(sizePolicy1);
        comboBox_port_source->setIconSize(QSize(50, 16));

        gridLayout_2->addWidget(comboBox_port_source, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 0, 1, 1);

        label_resource_2 = new QLabel(frame_2);
        label_resource_2->setObjectName(QString::fromUtf8("label_resource_2"));

        gridLayout_2->addWidget(label_resource_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 7, 0, 1, 1);

        lcdNumber = new QLCDNumber(frame_2);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(lcdNumber, 3, 0, 1, 2);

        pushButton_active_output = new QPushButton(frame_2);
        pushButton_active_output->setObjectName(QString::fromUtf8("pushButton_active_output"));
        sizePolicy3.setHeightForWidth(pushButton_active_output->sizePolicy().hasHeightForWidth());
        pushButton_active_output->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(pushButton_active_output, 8, 0, 1, 1);

        comboBox_resource_source = new QComboBox(frame_2);
        comboBox_resource_source->setObjectName(QString::fromUtf8("comboBox_resource_source"));
        sizePolicy1.setHeightForWidth(comboBox_resource_source->sizePolicy().hasHeightForWidth());
        comboBox_resource_source->setSizePolicy(sizePolicy1);
        comboBox_resource_source->setIconSize(QSize(25, 16));
        comboBox_resource_source->setFrame(true);

        gridLayout_2->addWidget(comboBox_resource_source, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer_3, 9, 0, 1, 1);

        label_port_2 = new QLabel(frame_2);
        label_port_2->setObjectName(QString::fromUtf8("label_port_2"));

        gridLayout_2->addWidget(label_port_2, 0, 1, 1, 1);

        dial_tuning = new QDial(frame_2);
        dial_tuning->setObjectName(QString::fromUtf8("dial_tuning"));

        gridLayout_2->addWidget(dial_tuning, 5, 0, 1, 1);

        pushButton_save = new QPushButton(frame_2);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        sizePolicy2.setHeightForWidth(pushButton_save->sizePolicy().hasHeightForWidth());
        pushButton_save->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_save, 10, 0, 1, 2);

        dial_fine_tuning = new QDial(frame_2);
        dial_fine_tuning->setObjectName(QString::fromUtf8("dial_fine_tuning"));

        gridLayout_2->addWidget(dial_fine_tuning, 5, 1, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 6, 1, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);


        retranslateUi(MeasDeviceSettings);

        QMetaObject::connectSlotsByName(MeasDeviceSettings);
    } // setupUi

    void retranslateUi(QWidget *MeasDeviceSettings)
    {
        MeasDeviceSettings->setWindowTitle(QApplication::translate("MeasDeviceSettings", "MeasDeviceSettings", nullptr));
        comboBox_induced_voltage_port->setItemText(0, QApplication::translate("MeasDeviceSettings", "101", nullptr));
        comboBox_induced_voltage_port->setItemText(1, QApplication::translate("MeasDeviceSettings", "102", nullptr));
        comboBox_induced_voltage_port->setItemText(2, QApplication::translate("MeasDeviceSettings", "103", nullptr));
        comboBox_induced_voltage_port->setItemText(3, QApplication::translate("MeasDeviceSettings", "104", nullptr));

        comboBox_polarity_mes->setItemText(0, QApplication::translate("MeasDeviceSettings", "BIP", nullptr));
        comboBox_polarity_mes->setItemText(1, QApplication::translate("MeasDeviceSettings", "UNIP", nullptr));

        label_voltage_range_vals->setText(QApplication::translate("MeasDeviceSettings", "Points per chunk", nullptr));
        label_sample_rate->setText(QApplication::translate("MeasDeviceSettings", "Sample rate", nullptr));
        label_port->setText(QApplication::translate("MeasDeviceSettings", "Polarity", nullptr));
        label_resource->setText(QApplication::translate("MeasDeviceSettings", "Resource", nullptr));
        comboBox_barkhausen_noise_port->setItemText(0, QApplication::translate("MeasDeviceSettings", "101", nullptr));
        comboBox_barkhausen_noise_port->setItemText(1, QApplication::translate("MeasDeviceSettings", "102", nullptr));
        comboBox_barkhausen_noise_port->setItemText(2, QApplication::translate("MeasDeviceSettings", "103", nullptr));
        comboBox_barkhausen_noise_port->setItemText(3, QApplication::translate("MeasDeviceSettings", "104", nullptr));

        label->setText(QApplication::translate("MeasDeviceSettings", "Induced voltage port", nullptr));
        label_2->setText(QApplication::translate("MeasDeviceSettings", "Barkhausen noise port", nullptr));
        label_points_per_chunk_vals->setText(QApplication::translate("MeasDeviceSettings", "Points per chunk", nullptr));
        label_sample_rate_2->setText(QApplication::translate("MeasDeviceSettings", "Points per chunk", nullptr));
        label_voltage_range->setText(QApplication::translate("MeasDeviceSettings", "Voltage range", nullptr));
        label_polarity->setText(QApplication::translate("MeasDeviceSettings", "Gaussmet signal port", nullptr));
        label_sample_rate_vals->setText(QApplication::translate("MeasDeviceSettings", "Points per chunk", nullptr));
        label_3->setText(QApplication::translate("MeasDeviceSettings", "Sensed current port", nullptr));
        pushButton_back->setText(QApplication::translate("MeasDeviceSettings", "Back", nullptr));
        comboBox_sensed_current_port->setItemText(0, QApplication::translate("MeasDeviceSettings", "101", nullptr));
        comboBox_sensed_current_port->setItemText(1, QApplication::translate("MeasDeviceSettings", "102", nullptr));
        comboBox_sensed_current_port->setItemText(2, QApplication::translate("MeasDeviceSettings", "103", nullptr));
        comboBox_sensed_current_port->setItemText(3, QApplication::translate("MeasDeviceSettings", "104", nullptr));

        comboBox_gaussmet_port->setItemText(0, QApplication::translate("MeasDeviceSettings", "101", nullptr));
        comboBox_gaussmet_port->setItemText(1, QApplication::translate("MeasDeviceSettings", "102", nullptr));
        comboBox_gaussmet_port->setItemText(2, QApplication::translate("MeasDeviceSettings", "103", nullptr));
        comboBox_gaussmet_port->setItemText(3, QApplication::translate("MeasDeviceSettings", "104", nullptr));

        comboBox_port_source->setItemText(0, QApplication::translate("MeasDeviceSettings", "201", nullptr));
        comboBox_port_source->setItemText(1, QApplication::translate("MeasDeviceSettings", "202", nullptr));

        label_resource_2->setText(QApplication::translate("MeasDeviceSettings", "Resource", nullptr));
        pushButton_active_output->setText(QApplication::translate("MeasDeviceSettings", "Activate Output", nullptr));
        label_port_2->setText(QApplication::translate("MeasDeviceSettings", "Port", nullptr));
        pushButton_save->setText(QApplication::translate("MeasDeviceSettings", "Save", nullptr));
        label_4->setText(QApplication::translate("MeasDeviceSettings", "Tuning", nullptr));
        label_5->setText(QApplication::translate("MeasDeviceSettings", "Fine tuning", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasDeviceSettings: public Ui_MeasDeviceSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEAS_DEVICE_SETTINGS_H

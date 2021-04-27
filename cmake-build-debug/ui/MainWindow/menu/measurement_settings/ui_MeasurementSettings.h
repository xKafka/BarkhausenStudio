/********************************************************************************
** Form generated from reading UI file 'MeasurementSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENTSETTINGS_H
#define UI_MEASUREMENTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementSettings
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QComboBox *comboBox_barkhausen_noise_port;
    QComboBox *comboBox_polarity_mes;
    QSlider *horizontalSlider_sample_rate_mes_2;
    QLabel *label_port;
    QLabel *label_points_per_chunk_vals_mes;
    QComboBox *comboBox_induced_voltage_port;
    QPushButton *pushButton_back;
    QComboBox *comboBox_sensed_current_port;
    QComboBox *comboBox_resource_mes;
    QLabel *label_resource;
    QLabel *label_3;
    QLabel *label_sample_rate_2;
    QLabel *label_voltage_range;
    QSlider *horizontalSlider_voltage_range_mes;
    QLabel *label;
    QLabel *label_2;
    QSlider *horizontalSlider_sample_rate_mes;
    QLabel *label_sample_rate;
    QLabel *label_sample_rate_vals_mes;
    QLabel *label_polarity;
    QLabel *label_voltage_range_vals_mes;
    QComboBox *comboBox_gaussmet_port;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_save;
    QLabel *label_sample_rate_3;
    QLabel *label_resource_2;
    QComboBox *comboBox_resource_source;
    QLabel *label_port_2;
    QSlider *horizontalSlider_points_per_chunk_source;
    QSpacerItem *verticalSpacer_2;
    QComboBox *comboBox_port_source;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_points_per_chunk_vals_source;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *MeasurementSettings)
    {
        if (MeasurementSettings->objectName().isEmpty())
            MeasurementSettings->setObjectName(QString::fromUtf8("MeasurementSettings"));
        MeasurementSettings->resize(1450, 1066);
        gridLayout_3 = new QGridLayout(MeasurementSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(MeasurementSettings);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox_barkhausen_noise_port = new QComboBox(frame);
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->addItem(QString());
        comboBox_barkhausen_noise_port->setObjectName(QString::fromUtf8("comboBox_barkhausen_noise_port"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_barkhausen_noise_port->sizePolicy().hasHeightForWidth());
        comboBox_barkhausen_noise_port->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_barkhausen_noise_port, 8, 0, 1, 1);

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

        horizontalSlider_sample_rate_mes_2 = new QSlider(frame);
        horizontalSlider_sample_rate_mes_2->setObjectName(QString::fromUtf8("horizontalSlider_sample_rate_mes_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSlider_sample_rate_mes_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_sample_rate_mes_2->setSizePolicy(sizePolicy2);
        horizontalSlider_sample_rate_mes_2->setMinimum(0);
        horizontalSlider_sample_rate_mes_2->setMaximum(10);
        horizontalSlider_sample_rate_mes_2->setSingleStep(1);
        horizontalSlider_sample_rate_mes_2->setPageStep(10);
        horizontalSlider_sample_rate_mes_2->setValue(0);
        horizontalSlider_sample_rate_mes_2->setSliderPosition(0);
        horizontalSlider_sample_rate_mes_2->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_sample_rate_mes_2, 13, 0, 1, 2);

        label_port = new QLabel(frame);
        label_port->setObjectName(QString::fromUtf8("label_port"));

        gridLayout->addWidget(label_port, 0, 1, 1, 1);

        label_points_per_chunk_vals_mes = new QLabel(frame);
        label_points_per_chunk_vals_mes->setObjectName(QString::fromUtf8("label_points_per_chunk_vals_mes"));

        gridLayout->addWidget(label_points_per_chunk_vals_mes, 9, 1, 1, 1);

        comboBox_induced_voltage_port = new QComboBox(frame);
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->addItem(QString());
        comboBox_induced_voltage_port->setObjectName(QString::fromUtf8("comboBox_induced_voltage_port"));
        sizePolicy.setHeightForWidth(comboBox_induced_voltage_port->sizePolicy().hasHeightForWidth());
        comboBox_induced_voltage_port->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_induced_voltage_port, 6, 1, 1, 1);

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

        comboBox_resource_mes = new QComboBox(frame);
        comboBox_resource_mes->setObjectName(QString::fromUtf8("comboBox_resource_mes"));
        sizePolicy1.setHeightForWidth(comboBox_resource_mes->sizePolicy().hasHeightForWidth());
        comboBox_resource_mes->setSizePolicy(sizePolicy1);
        comboBox_resource_mes->setIconSize(QSize(25, 16));
        comboBox_resource_mes->setFrame(true);

        gridLayout->addWidget(comboBox_resource_mes, 1, 0, 1, 1);

        label_resource = new QLabel(frame);
        label_resource->setObjectName(QString::fromUtf8("label_resource"));

        gridLayout->addWidget(label_resource, 0, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 7, 1, 1, 1);

        label_sample_rate_2 = new QLabel(frame);
        label_sample_rate_2->setObjectName(QString::fromUtf8("label_sample_rate_2"));

        gridLayout->addWidget(label_sample_rate_2, 9, 0, 1, 1);

        label_voltage_range = new QLabel(frame);
        label_voltage_range->setObjectName(QString::fromUtf8("label_voltage_range"));

        gridLayout->addWidget(label_voltage_range, 16, 0, 1, 1);

        horizontalSlider_voltage_range_mes = new QSlider(frame);
        horizontalSlider_voltage_range_mes->setObjectName(QString::fromUtf8("horizontalSlider_voltage_range_mes"));
        sizePolicy2.setHeightForWidth(horizontalSlider_voltage_range_mes->sizePolicy().hasHeightForWidth());
        horizontalSlider_voltage_range_mes->setSizePolicy(sizePolicy2);
        horizontalSlider_voltage_range_mes->setMaximum(10);
        horizontalSlider_voltage_range_mes->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_voltage_range_mes, 17, 0, 1, 2);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 5, 1, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        horizontalSlider_sample_rate_mes = new QSlider(frame);
        horizontalSlider_sample_rate_mes->setObjectName(QString::fromUtf8("horizontalSlider_sample_rate_mes"));
        sizePolicy2.setHeightForWidth(horizontalSlider_sample_rate_mes->sizePolicy().hasHeightForWidth());
        horizontalSlider_sample_rate_mes->setSizePolicy(sizePolicy2);
        horizontalSlider_sample_rate_mes->setMinimum(0);
        horizontalSlider_sample_rate_mes->setMaximum(10);
        horizontalSlider_sample_rate_mes->setSingleStep(1);
        horizontalSlider_sample_rate_mes->setPageStep(10);
        horizontalSlider_sample_rate_mes->setValue(0);
        horizontalSlider_sample_rate_mes->setSliderPosition(0);
        horizontalSlider_sample_rate_mes->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_sample_rate_mes, 11, 0, 1, 2);

        label_sample_rate = new QLabel(frame);
        label_sample_rate->setObjectName(QString::fromUtf8("label_sample_rate"));

        gridLayout->addWidget(label_sample_rate, 12, 0, 1, 1);

        label_sample_rate_vals_mes = new QLabel(frame);
        label_sample_rate_vals_mes->setObjectName(QString::fromUtf8("label_sample_rate_vals_mes"));

        gridLayout->addWidget(label_sample_rate_vals_mes, 12, 1, 1, 1);

        label_polarity = new QLabel(frame);
        label_polarity->setObjectName(QString::fromUtf8("label_polarity"));

        gridLayout->addWidget(label_polarity, 5, 0, 1, 1);

        label_voltage_range_vals_mes = new QLabel(frame);
        label_voltage_range_vals_mes->setObjectName(QString::fromUtf8("label_voltage_range_vals_mes"));

        gridLayout->addWidget(label_voltage_range_vals_mes, 16, 1, 1, 1);

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

        frame_2 = new QFrame(MeasurementSettings);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton_save = new QPushButton(frame_2);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        sizePolicy2.setHeightForWidth(pushButton_save->sizePolicy().hasHeightForWidth());
        pushButton_save->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(pushButton_save, 9, 0, 1, 2);

        label_sample_rate_3 = new QLabel(frame_2);
        label_sample_rate_3->setObjectName(QString::fromUtf8("label_sample_rate_3"));

        gridLayout_2->addWidget(label_sample_rate_3, 4, 0, 1, 1);

        label_resource_2 = new QLabel(frame_2);
        label_resource_2->setObjectName(QString::fromUtf8("label_resource_2"));

        gridLayout_2->addWidget(label_resource_2, 0, 0, 1, 1);

        comboBox_resource_source = new QComboBox(frame_2);
        comboBox_resource_source->setObjectName(QString::fromUtf8("comboBox_resource_source"));
        sizePolicy1.setHeightForWidth(comboBox_resource_source->sizePolicy().hasHeightForWidth());
        comboBox_resource_source->setSizePolicy(sizePolicy1);
        comboBox_resource_source->setIconSize(QSize(25, 16));
        comboBox_resource_source->setFrame(true);

        gridLayout_2->addWidget(comboBox_resource_source, 1, 0, 1, 1);

        label_port_2 = new QLabel(frame_2);
        label_port_2->setObjectName(QString::fromUtf8("label_port_2"));

        gridLayout_2->addWidget(label_port_2, 0, 1, 1, 1);

        horizontalSlider_points_per_chunk_source = new QSlider(frame_2);
        horizontalSlider_points_per_chunk_source->setObjectName(QString::fromUtf8("horizontalSlider_points_per_chunk_source"));
        sizePolicy2.setHeightForWidth(horizontalSlider_points_per_chunk_source->sizePolicy().hasHeightForWidth());
        horizontalSlider_points_per_chunk_source->setSizePolicy(sizePolicy2);
        horizontalSlider_points_per_chunk_source->setMinimum(0);
        horizontalSlider_points_per_chunk_source->setMaximum(10);
        horizontalSlider_points_per_chunk_source->setSingleStep(1);
        horizontalSlider_points_per_chunk_source->setPageStep(10);
        horizontalSlider_points_per_chunk_source->setValue(0);
        horizontalSlider_points_per_chunk_source->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_points_per_chunk_source, 6, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 173, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_2, 7, 0, 1, 1);

        comboBox_port_source = new QComboBox(frame_2);
        comboBox_port_source->addItem(QString());
        comboBox_port_source->addItem(QString());
        comboBox_port_source->addItem(QString());
        comboBox_port_source->addItem(QString());
        comboBox_port_source->setObjectName(QString::fromUtf8("comboBox_port_source"));
        sizePolicy1.setHeightForWidth(comboBox_port_source->sizePolicy().hasHeightForWidth());
        comboBox_port_source->setSizePolicy(sizePolicy1);
        comboBox_port_source->setIconSize(QSize(50, 16));

        gridLayout_2->addWidget(comboBox_port_source, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 171, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_2->addItem(verticalSpacer_3, 8, 0, 1, 1);

        label_points_per_chunk_vals_source = new QLabel(frame_2);
        label_points_per_chunk_vals_source->setObjectName(QString::fromUtf8("label_points_per_chunk_vals_source"));

        gridLayout_2->addWidget(label_points_per_chunk_vals_source, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 2, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);


        retranslateUi(MeasurementSettings);

        QMetaObject::connectSlotsByName(MeasurementSettings);
    } // setupUi

    void retranslateUi(QWidget *MeasurementSettings)
    {
        MeasurementSettings->setWindowTitle(QApplication::translate("MeasurementSettings", "MeasurementSettings", nullptr));
        comboBox_barkhausen_noise_port->setItemText(0, QApplication::translate("MeasurementSettings", "101", nullptr));
        comboBox_barkhausen_noise_port->setItemText(1, QApplication::translate("MeasurementSettings", "102", nullptr));
        comboBox_barkhausen_noise_port->setItemText(2, QApplication::translate("MeasurementSettings", "103", nullptr));
        comboBox_barkhausen_noise_port->setItemText(3, QApplication::translate("MeasurementSettings", "104", nullptr));

        comboBox_polarity_mes->setItemText(0, QApplication::translate("MeasurementSettings", "BIP", nullptr));
        comboBox_polarity_mes->setItemText(1, QApplication::translate("MeasurementSettings", "UNIP", nullptr));

        label_port->setText(QApplication::translate("MeasurementSettings", "Polarity", nullptr));
        label_points_per_chunk_vals_mes->setText(QApplication::translate("MeasurementSettings", "Points per chunk", nullptr));
        comboBox_induced_voltage_port->setItemText(0, QApplication::translate("MeasurementSettings", "101", nullptr));
        comboBox_induced_voltage_port->setItemText(1, QApplication::translate("MeasurementSettings", "102", nullptr));
        comboBox_induced_voltage_port->setItemText(2, QApplication::translate("MeasurementSettings", "103", nullptr));
        comboBox_induced_voltage_port->setItemText(3, QApplication::translate("MeasurementSettings", "104", nullptr));

        pushButton_back->setText(QApplication::translate("MeasurementSettings", "...", nullptr));
        comboBox_sensed_current_port->setItemText(0, QApplication::translate("MeasurementSettings", "101", nullptr));
        comboBox_sensed_current_port->setItemText(1, QApplication::translate("MeasurementSettings", "102", nullptr));
        comboBox_sensed_current_port->setItemText(2, QApplication::translate("MeasurementSettings", "103", nullptr));
        comboBox_sensed_current_port->setItemText(3, QApplication::translate("MeasurementSettings", "104", nullptr));

        label_resource->setText(QApplication::translate("MeasurementSettings", "Resource", nullptr));
        label_3->setText(QApplication::translate("MeasurementSettings", "Sensed current port", nullptr));
        label_sample_rate_2->setText(QApplication::translate("MeasurementSettings", "Points per chunk", nullptr));
        label_voltage_range->setText(QApplication::translate("MeasurementSettings", "Voltage range", nullptr));
        label->setText(QApplication::translate("MeasurementSettings", "Induced voltage port", nullptr));
        label_2->setText(QApplication::translate("MeasurementSettings", "Barkhausen noise port", nullptr));
        label_sample_rate->setText(QApplication::translate("MeasurementSettings", "Sample rate", nullptr));
        label_sample_rate_vals_mes->setText(QApplication::translate("MeasurementSettings", "Points per chunk", nullptr));
        label_polarity->setText(QApplication::translate("MeasurementSettings", "Gaussmet signal port", nullptr));
        label_voltage_range_vals_mes->setText(QApplication::translate("MeasurementSettings", "Points per chunk", nullptr));
        comboBox_gaussmet_port->setItemText(0, QApplication::translate("MeasurementSettings", "101", nullptr));
        comboBox_gaussmet_port->setItemText(1, QApplication::translate("MeasurementSettings", "102", nullptr));
        comboBox_gaussmet_port->setItemText(2, QApplication::translate("MeasurementSettings", "103", nullptr));
        comboBox_gaussmet_port->setItemText(3, QApplication::translate("MeasurementSettings", "104", nullptr));

        pushButton_save->setText(QApplication::translate("MeasurementSettings", "Save", nullptr));
        label_sample_rate_3->setText(QApplication::translate("MeasurementSettings", "Points per chunk", nullptr));
        label_resource_2->setText(QApplication::translate("MeasurementSettings", "Resource", nullptr));
        label_port_2->setText(QApplication::translate("MeasurementSettings", "Port", nullptr));
        comboBox_port_source->setItemText(0, QApplication::translate("MeasurementSettings", "101", nullptr));
        comboBox_port_source->setItemText(1, QApplication::translate("MeasurementSettings", "102", nullptr));
        comboBox_port_source->setItemText(2, QApplication::translate("MeasurementSettings", "103", nullptr));
        comboBox_port_source->setItemText(3, QApplication::translate("MeasurementSettings", "104", nullptr));

        label_points_per_chunk_vals_source->setText(QApplication::translate("MeasurementSettings", "Points per chunk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementSettings: public Ui_MeasurementSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENTSETTINGS_H

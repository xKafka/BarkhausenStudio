/********************************************************************************
** Form generated from reading UI file 'AcqSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACQSETTINGSWIDGET_H
#define UI_ACQSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcqSettingsWidget
{
public:
    QComboBox *comboBox_polarity;
    QComboBox *comboBox_resource;
    QComboBox *comboBox_port;
    QSlider *horizontalSlider_voltage_range;
    QSlider *horizontalSlider_sample_rate;
    QPushButton *pushButton_back;
    QPushButton *pushButton_save;
    QLabel *label_resource;
    QLabel *label_port;
    QLabel *label_polarity;
    QLabel *label_sample_rate;
    QLabel *label_voltage_range;
    QLabel *label_sample_rate_2;
    QSlider *horizontalSlider_points_per_chunk;
    QLabel *label_points_per_chunk_vals;
    QLabel *label_sample_rate_vals;
    QLabel *label_voltage_range_vals;

    void setupUi(QWidget *AcqSettingsWidget)
    {
        if (AcqSettingsWidget->objectName().isEmpty())
            AcqSettingsWidget->setObjectName(QString::fromUtf8("AcqSettingsWidget"));
        AcqSettingsWidget->resize(451, 638);
        comboBox_polarity = new QComboBox(AcqSettingsWidget);
        comboBox_polarity->addItem(QString());
        comboBox_polarity->addItem(QString());
        comboBox_polarity->setObjectName(QString::fromUtf8("comboBox_polarity"));
        comboBox_polarity->setGeometry(QRect(10, 170, 191, 81));
        comboBox_resource = new QComboBox(AcqSettingsWidget);
        comboBox_resource->setObjectName(QString::fromUtf8("comboBox_resource"));
        comboBox_resource->setGeometry(QRect(10, 50, 191, 81));
        comboBox_resource->setIconSize(QSize(25, 16));
        comboBox_resource->setFrame(true);
        comboBox_port = new QComboBox(AcqSettingsWidget);
        comboBox_port->addItem(QString());
        comboBox_port->addItem(QString());
        comboBox_port->addItem(QString());
        comboBox_port->addItem(QString());
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));
        comboBox_port->setGeometry(QRect(230, 50, 191, 81));
        comboBox_port->setIconSize(QSize(50, 16));
        horizontalSlider_voltage_range = new QSlider(AcqSettingsWidget);
        horizontalSlider_voltage_range->setObjectName(QString::fromUtf8("horizontalSlider_voltage_range"));
        horizontalSlider_voltage_range->setGeometry(QRect(20, 475, 401, 21));
        horizontalSlider_voltage_range->setMaximum(10);
        horizontalSlider_voltage_range->setOrientation(Qt::Horizontal);
        horizontalSlider_sample_rate = new QSlider(AcqSettingsWidget);
        horizontalSlider_sample_rate->setObjectName(QString::fromUtf8("horizontalSlider_sample_rate"));
        horizontalSlider_sample_rate->setGeometry(QRect(20, 390, 401, 16));
        horizontalSlider_sample_rate->setMinimum(0);
        horizontalSlider_sample_rate->setMaximum(10);
        horizontalSlider_sample_rate->setSingleStep(1);
        horizontalSlider_sample_rate->setPageStep(10);
        horizontalSlider_sample_rate->setValue(0);
        horizontalSlider_sample_rate->setSliderPosition(0);
        horizontalSlider_sample_rate->setOrientation(Qt::Horizontal);
        pushButton_back = new QPushButton(AcqSettingsWidget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(30, 540, 151, 81));
        pushButton_save = new QPushButton(AcqSettingsWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(250, 540, 151, 81));
        label_resource = new QLabel(AcqSettingsWidget);
        label_resource->setObjectName(QString::fromUtf8("label_resource"));
        label_resource->setGeometry(QRect(20, 20, 67, 17));
        label_port = new QLabel(AcqSettingsWidget);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setGeometry(QRect(240, 20, 111, 16));
        label_polarity = new QLabel(AcqSettingsWidget);
        label_polarity->setObjectName(QString::fromUtf8("label_polarity"));
        label_polarity->setGeometry(QRect(20, 140, 141, 17));
        label_sample_rate = new QLabel(AcqSettingsWidget);
        label_sample_rate->setObjectName(QString::fromUtf8("label_sample_rate"));
        label_sample_rate->setGeometry(QRect(30, 360, 141, 17));
        label_voltage_range = new QLabel(AcqSettingsWidget);
        label_voltage_range->setObjectName(QString::fromUtf8("label_voltage_range"));
        label_voltage_range->setGeometry(QRect(30, 450, 141, 17));
        label_sample_rate_2 = new QLabel(AcqSettingsWidget);
        label_sample_rate_2->setObjectName(QString::fromUtf8("label_sample_rate_2"));
        label_sample_rate_2->setGeometry(QRect(30, 270, 141, 17));
        horizontalSlider_points_per_chunk = new QSlider(AcqSettingsWidget);
        horizontalSlider_points_per_chunk->setObjectName(QString::fromUtf8("horizontalSlider_points_per_chunk"));
        horizontalSlider_points_per_chunk->setGeometry(QRect(20, 300, 401, 16));
        horizontalSlider_points_per_chunk->setMinimum(0);
        horizontalSlider_points_per_chunk->setMaximum(10);
        horizontalSlider_points_per_chunk->setSingleStep(1);
        horizontalSlider_points_per_chunk->setPageStep(10);
        horizontalSlider_points_per_chunk->setValue(0);
        horizontalSlider_points_per_chunk->setOrientation(Qt::Horizontal);
        label_points_per_chunk_vals = new QLabel(AcqSettingsWidget);
        label_points_per_chunk_vals->setObjectName(QString::fromUtf8("label_points_per_chunk_vals"));
        label_points_per_chunk_vals->setGeometry(QRect(270, 270, 151, 17));
        label_sample_rate_vals = new QLabel(AcqSettingsWidget);
        label_sample_rate_vals->setObjectName(QString::fromUtf8("label_sample_rate_vals"));
        label_sample_rate_vals->setGeometry(QRect(270, 360, 151, 17));
        label_voltage_range_vals = new QLabel(AcqSettingsWidget);
        label_voltage_range_vals->setObjectName(QString::fromUtf8("label_voltage_range_vals"));
        label_voltage_range_vals->setGeometry(QRect(270, 450, 151, 17));

        retranslateUi(AcqSettingsWidget);

        QMetaObject::connectSlotsByName(AcqSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *AcqSettingsWidget)
    {
        AcqSettingsWidget->setWindowTitle(QApplication::translate("AcqSettingsWidget", "AcqSettingsWidget", nullptr));
        comboBox_polarity->setItemText(0, QApplication::translate("AcqSettingsWidget", "BIP", nullptr));
        comboBox_polarity->setItemText(1, QApplication::translate("AcqSettingsWidget", "UNIP", nullptr));

        comboBox_port->setItemText(0, QApplication::translate("AcqSettingsWidget", "101", nullptr));
        comboBox_port->setItemText(1, QApplication::translate("AcqSettingsWidget", "102", nullptr));
        comboBox_port->setItemText(2, QApplication::translate("AcqSettingsWidget", "103", nullptr));
        comboBox_port->setItemText(3, QApplication::translate("AcqSettingsWidget", "104", nullptr));

        pushButton_back->setText(QApplication::translate("AcqSettingsWidget", "...", nullptr));
        pushButton_save->setText(QApplication::translate("AcqSettingsWidget", "Save", nullptr));
        label_resource->setText(QApplication::translate("AcqSettingsWidget", "Resource", nullptr));
        label_port->setText(QApplication::translate("AcqSettingsWidget", "Port", nullptr));
        label_polarity->setText(QApplication::translate("AcqSettingsWidget", "Polarity", nullptr));
        label_sample_rate->setText(QApplication::translate("AcqSettingsWidget", "Sample rate", nullptr));
        label_voltage_range->setText(QApplication::translate("AcqSettingsWidget", "Voltage range", nullptr));
        label_sample_rate_2->setText(QApplication::translate("AcqSettingsWidget", "Points per chunk", nullptr));
        label_points_per_chunk_vals->setText(QApplication::translate("AcqSettingsWidget", "Points per chunk", nullptr));
        label_sample_rate_vals->setText(QApplication::translate("AcqSettingsWidget", "Points per chunk", nullptr));
        label_voltage_range_vals->setText(QApplication::translate("AcqSettingsWidget", "Points per chunk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AcqSettingsWidget: public Ui_AcqSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACQSETTINGSWIDGET_H

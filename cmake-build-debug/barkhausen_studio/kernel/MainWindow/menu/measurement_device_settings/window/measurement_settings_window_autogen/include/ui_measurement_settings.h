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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementSettings
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_measurement_settings;
    QPushButton *pushButton_signal_source;
    QPushButton *pushButton_back;
    QPushButton *pushButton_measurement_device;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *MeasurementSettings)
    {
        if (MeasurementSettings->objectName().isEmpty())
            MeasurementSettings->setObjectName(QString::fromUtf8("MeasurementSettings"));
        MeasurementSettings->resize(183, 905);
        gridLayout = new QGridLayout(MeasurementSettings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_measurement_settings = new QPushButton(MeasurementSettings);
        pushButton_measurement_settings->setObjectName(QString::fromUtf8("pushButton_measurement_settings"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_measurement_settings->sizePolicy().hasHeightForWidth());
        pushButton_measurement_settings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measurement_settings, 0, 0, 1, 1);

        pushButton_signal_source = new QPushButton(MeasurementSettings);
        pushButton_signal_source->setObjectName(QString::fromUtf8("pushButton_signal_source"));
        sizePolicy.setHeightForWidth(pushButton_signal_source->sizePolicy().hasHeightForWidth());
        pushButton_signal_source->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_signal_source, 1, 0, 1, 1);

        pushButton_back = new QPushButton(MeasurementSettings);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_back, 3, 0, 1, 1);

        pushButton_measurement_device = new QPushButton(MeasurementSettings);
        pushButton_measurement_device->setObjectName(QString::fromUtf8("pushButton_measurement_device"));
        sizePolicy.setHeightForWidth(pushButton_measurement_device->sizePolicy().hasHeightForWidth());
        pushButton_measurement_device->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measurement_device, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);


        retranslateUi(MeasurementSettings);

        QMetaObject::connectSlotsByName(MeasurementSettings);
    } // setupUi

    void retranslateUi(QWidget *MeasurementSettings)
    {
        MeasurementSettings->setWindowTitle(QApplication::translate("MeasurementSettings", "MeasurementSettings", nullptr));
        pushButton_measurement_settings->setText(QApplication::translate("MeasurementSettings", "Measurement\n"
"Settings", nullptr));
        pushButton_signal_source->setText(QApplication::translate("MeasurementSettings", "Signal Source", nullptr));
        pushButton_back->setText(QApplication::translate("MeasurementSettings", "Back", nullptr));
        pushButton_measurement_device->setText(QApplication::translate("MeasurementSettings", "Measurement\n"
"Device\n"
"Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementSettings: public Ui_MeasurementSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENT_SETTINGS_H

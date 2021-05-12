/********************************************************************************
** Form generated from reading UI file 'measurement_settings_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENT_SETTINGS_WINDOW_H
#define UI_MEASUREMENT_SETTINGS_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeasurementSettingsWindow
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_measurement_device_settings;
    QPushButton *pushButton_back;
    QPushButton *pushButton_measurement_settings;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MeasurementSettingsWindow)
    {
        if (MeasurementSettingsWindow->objectName().isEmpty())
            MeasurementSettingsWindow->setObjectName(QString::fromUtf8("MeasurementSettingsWindow"));
        MeasurementSettingsWindow->resize(183, 905);
        gridLayout = new QGridLayout(MeasurementSettingsWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_measurement_device_settings = new QPushButton(MeasurementSettingsWindow);
        pushButton_measurement_device_settings->setObjectName(QString::fromUtf8("pushButton_measurement_device_settings"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_measurement_device_settings->sizePolicy().hasHeightForWidth());
        pushButton_measurement_device_settings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measurement_device_settings, 1, 0, 1, 1);

        pushButton_back = new QPushButton(MeasurementSettingsWindow);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        sizePolicy.setHeightForWidth(pushButton_back->sizePolicy().hasHeightForWidth());
        pushButton_back->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_back, 2, 0, 1, 1);

        pushButton_measurement_settings = new QPushButton(MeasurementSettingsWindow);
        pushButton_measurement_settings->setObjectName(QString::fromUtf8("pushButton_measurement_settings"));
        sizePolicy.setHeightForWidth(pushButton_measurement_settings->sizePolicy().hasHeightForWidth());
        pushButton_measurement_settings->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_measurement_settings, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(MeasurementSettingsWindow);

        QMetaObject::connectSlotsByName(MeasurementSettingsWindow);
    } // setupUi

    void retranslateUi(QWidget *MeasurementSettingsWindow)
    {
        MeasurementSettingsWindow->setWindowTitle(QApplication::translate("MeasurementSettingsWindow", "MeasurementSettingsWindow", nullptr));
        pushButton_measurement_device_settings->setText(QApplication::translate("MeasurementSettingsWindow", "Measurement\n"
"Device\n"
"Settings", nullptr));
        pushButton_back->setText(QApplication::translate("MeasurementSettingsWindow", "Back", nullptr));
        pushButton_measurement_settings->setText(QApplication::translate("MeasurementSettingsWindow", "Measurement\n"
"Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeasurementSettingsWindow: public Ui_MeasurementSettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENT_SETTINGS_WINDOW_H

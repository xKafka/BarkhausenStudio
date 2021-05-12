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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_measurement_settings
{
public:

    void setupUi(QWidget *measurement_settings)
    {
        if (measurement_settings->objectName().isEmpty())
            measurement_settings->setObjectName(QString::fromUtf8("measurement_settings"));
        measurement_settings->resize(400, 300);

        retranslateUi(measurement_settings);

        QMetaObject::connectSlotsByName(measurement_settings);
    } // setupUi

    void retranslateUi(QWidget *measurement_settings)
    {
        measurement_settings->setWindowTitle(QApplication::translate("measurement_settings", "measurement_settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class measurement_settings: public Ui_measurement_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENT_SETTINGS_H

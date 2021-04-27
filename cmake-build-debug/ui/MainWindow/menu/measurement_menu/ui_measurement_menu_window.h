/********************************************************************************
** Form generated from reading UI file 'measurement_menu_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEASUREMENT_MENU_WINDOW_H
#define UI_MEASUREMENT_MENU_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_measurement_menu_window
{
public:

    void setupUi(QWidget *measurement_menu_window)
    {
        if (measurement_menu_window->objectName().isEmpty())
            measurement_menu_window->setObjectName(QString::fromUtf8("measurement_menu_window"));
        measurement_menu_window->resize(400, 300);

        retranslateUi(measurement_menu_window);

        QMetaObject::connectSlotsByName(measurement_menu_window);
    } // setupUi

    void retranslateUi(QWidget *measurement_menu_window)
    {
        measurement_menu_window->setWindowTitle(QApplication::translate("measurement_menu_window", "measurement_menu_window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class measurement_menu_window: public Ui_measurement_menu_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEASUREMENT_MENU_WINDOW_H

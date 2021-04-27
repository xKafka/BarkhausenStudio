/********************************************************************************
** Form generated from reading UI file 'chart_settings_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHART_SETTINGS_WINDOW_H
#define UI_CHART_SETTINGS_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chart_settings_window
{
public:

    void setupUi(QWidget *chart_settings_window)
    {
        if (chart_settings_window->objectName().isEmpty())
            chart_settings_window->setObjectName(QString::fromUtf8("chart_settings_window"));
        chart_settings_window->resize(400, 300);

        retranslateUi(chart_settings_window);

        QMetaObject::connectSlotsByName(chart_settings_window);
    } // setupUi

    void retranslateUi(QWidget *chart_settings_window)
    {
        chart_settings_window->setWindowTitle(QApplication::translate("chart_settings_window", "chart_settings_window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chart_settings_window: public Ui_chart_settings_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHART_SETTINGS_WINDOW_H

/********************************************************************************
** Form generated from reading UI file 'barkhause_noise_chart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARKHAUSE_NOISE_CHART_H
#define UI_BARKHAUSE_NOISE_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_barkhause_noise_chart
{
public:

    void setupUi(QWidget *barkhause_noise_chart)
    {
        if (barkhause_noise_chart->objectName().isEmpty())
            barkhause_noise_chart->setObjectName(QString::fromUtf8("barkhause_noise_chart"));
        barkhause_noise_chart->resize(400, 300);

        retranslateUi(barkhause_noise_chart);

        QMetaObject::connectSlotsByName(barkhause_noise_chart);
    } // setupUi

    void retranslateUi(QWidget *barkhause_noise_chart)
    {
        barkhause_noise_chart->setWindowTitle(QApplication::translate("barkhause_noise_chart", "barkhause_noise_chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class barkhause_noise_chart: public Ui_barkhause_noise_chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARKHAUSE_NOISE_CHART_H

/********************************************************************************
** Form generated from reading UI file 'BarkhausenNoiseChart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARKHAUSENNOISECHART_H
#define UI_BARKHAUSENNOISECHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BarkhausenNoiseChart
{
public:

    void setupUi(QWidget *BarkhausenNoiseChart)
    {
        if (BarkhausenNoiseChart->objectName().isEmpty())
            BarkhausenNoiseChart->setObjectName(QString::fromUtf8("BarkhausenNoiseChart"));
        BarkhausenNoiseChart->resize(400, 300);

        retranslateUi(BarkhausenNoiseChart);

        QMetaObject::connectSlotsByName(BarkhausenNoiseChart);
    } // setupUi

    void retranslateUi(QWidget *BarkhausenNoiseChart)
    {
        BarkhausenNoiseChart->setWindowTitle(QApplication::translate("BarkhausenNoiseChart", "BarkhausenNoiseChart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BarkhausenNoiseChart: public Ui_BarkhausenNoiseChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARKHAUSENNOISECHART_H

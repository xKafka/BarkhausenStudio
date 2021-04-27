/********************************************************************************
** Form generated from reading UI file 'IntensityFluxChart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTENSITYFLUXCHART_H
#define UI_INTENSITYFLUXCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntensityFluxChart
{
public:

    void setupUi(QWidget *IntensityFluxChart)
    {
        if (IntensityFluxChart->objectName().isEmpty())
            IntensityFluxChart->setObjectName(QString::fromUtf8("IntensityFluxChart"));
        IntensityFluxChart->resize(400, 300);

        retranslateUi(IntensityFluxChart);

        QMetaObject::connectSlotsByName(IntensityFluxChart);
    } // setupUi

    void retranslateUi(QWidget *IntensityFluxChart)
    {
        IntensityFluxChart->setWindowTitle(QApplication::translate("IntensityFluxChart", "IntensityFluxChart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntensityFluxChart: public Ui_IntensityFluxChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTENSITYFLUXCHART_H

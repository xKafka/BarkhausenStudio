/********************************************************************************
** Form generated from reading UI file 'intensity_flux_chart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTENSITY_FLUX_CHART_H
#define UI_INTENSITY_FLUX_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_intensity_flux_chart
{
public:

    void setupUi(QWidget *intensity_flux_chart)
    {
        if (intensity_flux_chart->objectName().isEmpty())
            intensity_flux_chart->setObjectName(QString::fromUtf8("intensity_flux_chart"));
        intensity_flux_chart->resize(400, 300);

        retranslateUi(intensity_flux_chart);

        QMetaObject::connectSlotsByName(intensity_flux_chart);
    } // setupUi

    void retranslateUi(QWidget *intensity_flux_chart)
    {
        intensity_flux_chart->setWindowTitle(QApplication::translate("intensity_flux_chart", "intensity_flux_chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class intensity_flux_chart: public Ui_intensity_flux_chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTENSITY_FLUX_CHART_H

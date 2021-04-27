/********************************************************************************
** Form generated from reading UI file 'hysteresis_chart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYSTERESIS_CHART_H
#define UI_HYSTERESIS_CHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hysteresis_chart
{
public:

    void setupUi(QWidget *hysteresis_chart)
    {
        if (hysteresis_chart->objectName().isEmpty())
            hysteresis_chart->setObjectName(QString::fromUtf8("hysteresis_chart"));
        hysteresis_chart->resize(400, 300);

        retranslateUi(hysteresis_chart);

        QMetaObject::connectSlotsByName(hysteresis_chart);
    } // setupUi

    void retranslateUi(QWidget *hysteresis_chart)
    {
        hysteresis_chart->setWindowTitle(QApplication::translate("hysteresis_chart", "hysteresis_chart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hysteresis_chart: public Ui_hysteresis_chart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYSTERESIS_CHART_H

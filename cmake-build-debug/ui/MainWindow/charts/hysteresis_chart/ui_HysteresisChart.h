/********************************************************************************
** Form generated from reading UI file 'HysteresisChart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYSTERESISCHART_H
#define UI_HYSTERESISCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HysteresisChart
{
public:

    void setupUi(QWidget *HysteresisChart)
    {
        if (HysteresisChart->objectName().isEmpty())
            HysteresisChart->setObjectName(QString::fromUtf8("HysteresisChart"));
        HysteresisChart->resize(400, 300);

        retranslateUi(HysteresisChart);

        QMetaObject::connectSlotsByName(HysteresisChart);
    } // setupUi

    void retranslateUi(QWidget *HysteresisChart)
    {
        HysteresisChart->setWindowTitle(QApplication::translate("HysteresisChart", "HysteresisChart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HysteresisChart: public Ui_HysteresisChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYSTERESISCHART_H

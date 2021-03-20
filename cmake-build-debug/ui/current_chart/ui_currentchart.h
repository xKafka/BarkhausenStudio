/********************************************************************************
** Form generated from reading UI file 'currentchart.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENTCHART_H
#define UI_CURRENTCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurrentChart
{
public:

    void setupUi(QWidget *CurrentChart)
    {
        if (CurrentChart->objectName().isEmpty())
            CurrentChart->setObjectName(QString::fromUtf8("CurrentChart"));
        CurrentChart->resize(400, 300);

        retranslateUi(CurrentChart);

        QMetaObject::connectSlotsByName(CurrentChart);
    } // setupUi

    void retranslateUi(QWidget *CurrentChart)
    {
        CurrentChart->setWindowTitle(QApplication::translate("CurrentChart", "CurrentChart", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurrentChart: public Ui_CurrentChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENTCHART_H

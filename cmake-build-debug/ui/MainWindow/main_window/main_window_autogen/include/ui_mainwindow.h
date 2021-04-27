/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <currentchart.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_command_line;
    CurrentChart *histeresis_chart;
    CurrentChart *intensity_flux_chart;
    CurrentChart *barkhausen_chart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1859, 1122);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_command_line = new QLineEdit(centralwidget);
        lineEdit_command_line->setObjectName(QString::fromUtf8("lineEdit_command_line"));
        lineEdit_command_line->setGeometry(QRect(10, 1050, 691, 25));
        histeresis_chart = new CurrentChart(centralwidget);
        histeresis_chart->setObjectName(QString::fromUtf8("histeresis_chart"));
        histeresis_chart->setGeometry(QRect(11, 1, 771, 501));
        intensity_flux_chart = new CurrentChart(centralwidget);
        intensity_flux_chart->setObjectName(QString::fromUtf8("intensity_flux_chart"));
        intensity_flux_chart->setGeometry(QRect(790, 0, 771, 501));
        barkhausen_chart = new CurrentChart(centralwidget);
        barkhausen_chart->setObjectName(QString::fromUtf8("barkhausen_chart"));
        barkhausen_chart->setGeometry(QRect(10, 520, 1551, 501));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1859, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

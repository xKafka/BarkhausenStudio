/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <barkhausennoisechart.h>
#include <hysteresischart.h>
#include <intensityfluxchart.h>
#include <mainmenuwindow.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    MainMenuWindow *widget_main_menu;
    BarkhausenNoiseChart *barkhausen_chart;
    HysteresisSettings *hysteresis_chart;
    IntensityFluxChart *intensity_flux_chart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1764, 1070);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_main_menu = new MainMenuWindow(centralwidget);
        widget_main_menu->setObjectName(QString::fromUtf8("widget_main_menu"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_main_menu->sizePolicy().hasHeightForWidth());
        widget_main_menu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widget_main_menu, 0, 2, 2, 1);

        barkhausen_chart = new BarkhausenNoiseChart(centralwidget);
        barkhausen_chart->setObjectName(QString::fromUtf8("barkhausen_chart"));
        sizePolicy.setHeightForWidth(barkhausen_chart->sizePolicy().hasHeightForWidth());
        barkhausen_chart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(barkhausen_chart, 1, 0, 1, 2);

        hysteresis_chart = new HysteresisSettings(centralwidget);
        hysteresis_chart->setObjectName(QString::fromUtf8("hysteresis_chart"));

        gridLayout->addWidget(hysteresis_chart, 0, 0, 1, 1);

        intensity_flux_chart = new IntensityFluxChart(centralwidget);
        intensity_flux_chart->setObjectName(QString::fromUtf8("intensity_flux_chart"));

        gridLayout->addWidget(intensity_flux_chart, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1764, 22));
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

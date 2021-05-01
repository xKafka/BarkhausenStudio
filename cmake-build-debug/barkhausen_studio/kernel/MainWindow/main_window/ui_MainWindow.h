/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <B_H_chart.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <barkhausen_chart.h>
#include <hysteresis_chart.h>
#include <mainmenuwindow.h>
#include <core.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    HysteresisChart *hysteresis_chart;
    MainMenuWindow *widget_main_menu;
    BHChart *B_H_chart;
    BarkhausenChart *barkhausen_chart;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(Core *core, QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1630, 1093);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hysteresis_chart = new HysteresisChart(centralwidget);
        hysteresis_chart->setObjectName(QString::fromUtf8("hysteresis_chart"));

        gridLayout->addWidget(hysteresis_chart, 0, 0, 1, 1);

        widget_main_menu = new MainMenuWindow(core, centralwidget);
        widget_main_menu->setObjectName(QString::fromUtf8("widget_main_menu"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_main_menu->sizePolicy().hasHeightForWidth());
        widget_main_menu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widget_main_menu, 0, 2, 2, 1);

        B_H_chart = new BHChart(centralwidget);
        B_H_chart->setObjectName(QString::fromUtf8("B_H_chart"));

        gridLayout->addWidget(B_H_chart, 0, 1, 1, 1);

        barkhausen_chart = new BarkhausenChart(centralwidget);
        barkhausen_chart->setObjectName(QString::fromUtf8("barkhausen_chart"));
        sizePolicy.setHeightForWidth(barkhausen_chart->sizePolicy().hasHeightForWidth());
        barkhausen_chart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(barkhausen_chart, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1630, 22));
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

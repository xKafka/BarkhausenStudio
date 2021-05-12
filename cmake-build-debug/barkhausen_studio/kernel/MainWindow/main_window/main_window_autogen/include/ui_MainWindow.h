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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <barkhausen_chart.h>
#include <hysteresis_chart.h>
#include <mainmenuwindow.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QFrame *frame;
    QGridLayout *gridLayout;
    HysteresisChart *hysteresis_chart;
    BHChart *B_H_chart;
    BarkhausenChart *barkhausen_chart;
    MainMenuWindow *widget_main_menu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1630, 1093);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hysteresis_chart = new HysteresisChart(frame);
        hysteresis_chart->setObjectName(QString::fromUtf8("hysteresis_chart"));

        gridLayout->addWidget(hysteresis_chart, 0, 0, 1, 1);

        B_H_chart = new BHChart(frame);
        B_H_chart->setObjectName(QString::fromUtf8("B_H_chart"));

        gridLayout->addWidget(B_H_chart, 0, 1, 1, 1);

        barkhausen_chart = new BarkhausenChart(frame);
        barkhausen_chart->setObjectName(QString::fromUtf8("barkhausen_chart"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(barkhausen_chart->sizePolicy().hasHeightForWidth());
        barkhausen_chart->setSizePolicy(sizePolicy);

        gridLayout->addWidget(barkhausen_chart, 1, 0, 1, 2);

        splitter->addWidget(frame);

        horizontalLayout->addWidget(splitter);

        widget_main_menu = new MainMenuWindow(centralwidget);
        widget_main_menu->setObjectName(QString::fromUtf8("widget_main_menu"));
        sizePolicy.setHeightForWidth(widget_main_menu->sizePolicy().hasHeightForWidth());
        widget_main_menu->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(widget_main_menu);

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

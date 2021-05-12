#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <mem_types.h>
#include <iostream>

#include <QMainWindow>

#include <core.h>
#include <mainmenuwindow.h>
#include <data_buffer.h>
#include <QToolButton>
#include <core.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    std::unique_ptr<Ui::MainWindow> m_ui;

    std::unique_ptr<Core> m_api_core;

    bool m_cursor_moving{ false };

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

public slots:
    void process_data();

protected:
    void mouseMoveEvent(QMouseEvent *event) override;
};
#endif // MAINWINDOW_H


/*
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

        hysteresis_chart = new HysteresisChart(core->settings_storage_unsafe(), centralwidget);
        hysteresis_chart->setObjectName(QString::fromUtf8("hysteresis_chart"));

        B_H_chart = new BHChart(core->settings_storage_unsafe(), centralwidget);
        B_H_chart->setObjectName(QString::fromUtf8("B_H_chart"));

        barkhausen_chart = new BarkhausenChart(core->settings_storage_unsafe(), centralwidget);
        barkhausen_chart->setObjectName(QString::fromUtf8("barkhausen_chart"));

        widget_main_menu = new MainMenuWindow(core, hysteresis_chart, barkhausen_chart, B_H_chart, centralwidget);
        widget_main_menu->setObjectName(QString::fromUtf8("widget_main_menu"));

        gridLayout->addWidget(hysteresis_chart, 0, 0, 1, 1);

        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_main_menu->sizePolicy().hasHeightForWidth());
        widget_main_menu->setSizePolicy(sizePolicy);

        gridLayout->addWidget(widget_main_menu, 0, 2, 2, 1);

        gridLayout->addWidget(B_H_chart, 0, 1, 1, 1);

        gridLayout->addWidget(barkhausen_chart, 1, 0, 1, 2);

        sizePolicy.setHeightForWidth(barkhausen_chart->sizePolicy().hasHeightForWidth());
        barkhausen_chart->setSizePolicy(sizePolicy);

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

};*/

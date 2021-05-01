//
// Created by fkafka on 1. 4. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainMenuWindow.h" resolved
#include <QMessageBox>

#include "mainmenuwindow.h"
#include "ui_MainMenuWindow.h"

MainMenuWindow::MainMenuWindow(Core *core, QWidget *parent)
    :   QWidget{ parent },
        m_dev_finder{ core->device_finder_unsafe() },
        m_ui{ std::make_unique<Ui::MainMenuWindow>() },
        m_chart_settings_menu{std::make_unique<ChartSettingsMenu>(this) },
        m_mes_settings_menu{ std::make_unique<MeasurementSettings>(core, this) }
{
    m_ui->setupUi(this);

    m_chart_settings_menu->hide();
    m_mes_settings_menu->hide();

    m_ui->pushButton_measurement_start->setDisabled(false);
    m_ui->pushButton_measurement_stop->setDisabled(true);

    connect(m_ui->pushButton_close_application, &QPushButton::clicked, [&](){ close_api(); });

    connect(m_chart_settings_menu.get(), &ChartSettingsMenu::back_clicked, this, [&]()
    {
        swap_widgets(m_chart_settings_menu.get(), this);

        show();
    });

    connect(m_mes_settings_menu.get(), &MeasurementSettings::back_clicked, this, [&]()
    {
        swap_widgets(m_mes_settings_menu.get(), this);

        show();
    });

    connect(m_ui->pushButton_graph_settings, &QPushButton::clicked, [&]()
    {
        swap_widgets(this, m_chart_settings_menu.get());

        hide();
        m_chart_settings_menu->show();
    });

    connect(m_ui->pushButton_measurement_settings, &QPushButton::clicked, [&]()
    {
        swap_widgets(this, m_mes_settings_menu.get());

        hide();
        m_mes_settings_menu->show();
    });

    connect(m_ui->pushButton_measurement_start, &QPushButton::clicked, [&]()
    {
        start_measurement();
    });

    connect(m_ui->pushButton_measurement_stop, &QPushButton::clicked, [&]()
    {
        stop_measurement();
    });

    connect(m_ui->pushButton_single_shot, &QPushButton::clicked, [&]()
    {
        single_shot_measurement();
    });
}

void MainMenuWindow::devices_not_available_window()
{
    QMessageBox::warning(this, tr("Device finder"),
                                   tr("No available usbtmc devices found"),
                                   QMessageBox::Cancel);
}

void MainMenuWindow::swap_widgets(QWidget *src, QWidget *des)
{
    parentWidget()->layout()->replaceWidget(src, des);
}

void MainMenuWindow::start_measurement()
{
    if(m_dev_finder->usbtmc_available())
    {
        emit start();

        m_ui->pushButton_measurement_start->setDisabled(true);
        m_ui->pushButton_measurement_stop->setDisabled(false);
    }
    else
        devices_not_available_window();
}

void MainMenuWindow::stop_measurement()
{
    if(m_dev_finder->usbtmc_available())
    {
        emit stop();

        m_ui->pushButton_measurement_start->setDisabled(false);
        m_ui->pushButton_measurement_stop->setDisabled(true);
    }
    else
        devices_not_available_window();
}

void MainMenuWindow::single_shot_measurement()
{
    if(m_dev_finder->usbtmc_available())
    {
        emit single_shot();
    }
    else
        devices_not_available_window();
}

void MainMenuWindow::close_api()
{

}

MainMenuWindow::~MainMenuWindow()
{
}

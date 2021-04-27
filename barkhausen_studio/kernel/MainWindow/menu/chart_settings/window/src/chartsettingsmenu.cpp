//
// Created by fkafka on 1. 4. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ChartSettingsWindow.h" resolved
#include <chartsettingsmenu.h>
#include <ui_ChartSettingsMenu.h>

ChartSettingsMenu::ChartSettingsMenu(QWidget *parent)
    :   QWidget(parent),
        m_ui{ std::make_unique<Ui::ChartSettingsMenu>() },
        m_B_H_settings{ std::make_unique<BHChartSettings>(this) },
        m_hysteresis_settings{ std::make_unique<HysteresisChartSettings>(this) },
        m_barkhausen_settings{ std::make_unique<BarkhausenChartSettings>(this) }
{
    m_ui->setupUi(this);

    m_B_H_settings->hide();
    m_hysteresis_settings->hide();
    m_barkhausen_settings->hide();

    connect(m_barkhausen_settings.get(), &BarkhausenChartSettings::back_clicked, this, [&]()
    {
        parentWidget()->layout()->replaceWidget(m_barkhausen_settings.get(), this);

        show();
    });

    connect(m_hysteresis_settings.get(), &HysteresisChartSettings::back_clicked, this, [&]()
    {
        parentWidget()->layout()->replaceWidget(m_hysteresis_settings.get(), this);

        show();
    });

    connect(m_B_H_settings.get(), &BHChartSettings::back_clicked, this, [&]()
    {
        parentWidget()->layout()->replaceWidget(m_B_H_settings.get(), this);

        show();
    });

    connect(m_ui->pushButton_hysteresis_chart, &QPushButton::clicked, [&]()
    {
        parentWidget()->layout()->replaceWidget(this, m_hysteresis_settings.get());

        hide();
        m_hysteresis_settings->show();
        m_barkhausen_settings->hide();
        m_B_H_settings->hide();
    });

    connect(m_ui->pushButton_barkhausen_noise_chart, &QPushButton::clicked, [&]()
    {
        parentWidget()->layout()->replaceWidget(this, m_barkhausen_settings.get());

        hide();
        m_hysteresis_settings->hide();
        m_barkhausen_settings->show();
        m_B_H_settings->hide();
    });

    connect(m_ui->pushButton_intensity_flux_chart, &QPushButton::clicked, [&]()
    {
        parentWidget()->layout()->replaceWidget(this, m_B_H_settings.get());

        hide();
        m_hysteresis_settings->hide();
        m_barkhausen_settings->hide();
        m_B_H_settings->show();
    });

    connect(m_ui->pushButton_back, &QPushButton::clicked, this, [&]()
    {
        emit back_clicked();

        hide();
    });
}

void ChartSettingsMenu::set_chart_settings_controller(SharedData<UiSettings> &storage)
{
    m_barkhausen_settings->set_chart_settings_controller(&storage->barkhausen);
    m_B_H_settings->set_chart_settings_controller(&storage->B_H_chart);
    m_hysteresis_settings->set_chart_settings_controller(&storage->hysteresis);
}

void ChartSettingsMenu::set_charts(HysteresisChart *hysteresis_chart, BarkhausenChart *bark_chart, BHChart *B_H_chart)
{
    m_barkhausen_settings->set_chart(bark_chart);
    m_hysteresis_settings->set_chart(hysteresis_chart);
    m_B_H_settings->set_chart(B_H_chart);
}

ChartSettingsMenu::~ChartSettingsMenu()
{
}

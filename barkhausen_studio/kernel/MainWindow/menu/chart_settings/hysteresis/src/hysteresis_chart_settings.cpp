//
// Created by fkafka on 18. 4. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_hysteresis_chart_settings.h" resolved

#include <hysteresis_chart_settings.h>
#include <ui_hysteresis_chart_settings.h>

HysteresisChartSettings::HysteresisChartSettings(HysteresisChart *chart, Core *core, QWidget *parent)
        :   QWidget{ parent },
            m_chart{ chart },
            m_ui{ std::make_unique<Ui::HysteresisChartSettings>() }
{
    m_ui->setupUi(this);

    m_ui->pushButton_show_cursor->setDisabled(false);
    m_ui->pushButton_hide_cursors->setDisabled(true);

    disable_cursor_buttons();

    connect(m_ui->pushButton_show_cursor, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->show();

        m_ui->pushButton_show_cursor->setDisabled(true);
        m_ui->pushButton_hide_cursors->setDisabled(false);

        enable_cursor_buttons();
    });

    connect(m_ui->pushButton_hide_cursors, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->hide();

        m_ui->pushButton_show_cursor->setDisabled(false);
        m_ui->pushButton_hide_cursors->setDisabled(true);

        disable_cursor_buttons();
    });

    connect(m_ui->pushButton_cursor_x_1, &QPushButton::clicked, this, [&]()
    {
        m_ui->pushButton_cursor_x_1->setDisabled(true);
        m_ui->pushButton_cursor_x_2->setDisabled(false);
        m_ui->pushButton_cursor_y_1->setDisabled(false);
        m_ui->pushButton_cursor_y_2->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_x_2, &QPushButton::clicked, this, [&]()
    {
        m_ui->pushButton_cursor_x_1->setDisabled(false);
        m_ui->pushButton_cursor_x_2->setDisabled(true);
        m_ui->pushButton_cursor_y_1->setDisabled(false);
        m_ui->pushButton_cursor_y_2->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_y_1, &QPushButton::clicked, this, [&]()
    {
        m_ui->pushButton_cursor_x_1->setDisabled(false);
        m_ui->pushButton_cursor_x_2->setDisabled(false);
        m_ui->pushButton_cursor_y_1->setDisabled(true);
        m_ui->pushButton_cursor_y_2->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_y_2, &QPushButton::clicked, this, [&]()
    {
        m_ui->pushButton_cursor_x_1->setDisabled(false);
        m_ui->pushButton_cursor_x_2->setDisabled(false);
        m_ui->pushButton_cursor_y_1->setDisabled(false);
        m_ui->pushButton_cursor_y_2->setDisabled(true);
    });

    connect(m_ui->pushButton_back, &QPushButton::clicked, this, [&]()
    {
        emit back_clicked();

        hide();
    });

    connect(m_ui->dial_range, &QDial::valueChanged, this, &HysteresisChartSettings::change_peak_to_peak);

    connect(m_ui->dial_offset, &QDial::valueChanged, this, &HysteresisChartSettings::change_timebase_val);
}

void HysteresisChartSettings::disable_cursor_buttons()
{
    m_ui->pushButton_cursor_x_1->setDisabled(true);
    m_ui->pushButton_cursor_x_2->setDisabled(true);
    m_ui->pushButton_cursor_y_1->setDisabled(true);
    m_ui->pushButton_cursor_y_2->setDisabled(true);
}

void HysteresisChartSettings::enable_cursor_buttons()
{
    m_ui->pushButton_cursor_x_1->setDisabled(false);
    m_ui->pushButton_cursor_x_2->setDisabled(false);
    m_ui->pushButton_cursor_y_1->setDisabled(false);
    m_ui->pushButton_cursor_y_2->setDisabled(false);
}

void HysteresisChartSettings::change_peak_to_peak(const int val)
{
   // m_chart->settings_unsafe()->change(ChartSettingName::PeakToPeak, val);
}

void HysteresisChartSettings::change_timebase_val(const int val)
{

}

HysteresisChartSettings::~HysteresisChartSettings()
{
}


//
// Created by fkafka on 18. 4. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_hysteresis_chart_settings.h" resolved

#include <hysteresis_chart_settings.h>
#include <ui_hysteresis_chart_settings.h>

HysteresisChartSettings::HysteresisChartSettings(QWidget *parent)
        :   QWidget{ parent },
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
        m_chart->view()->chart()->cursors()->move(Cursor::X_1);

        m_ui->pushButton_cursor_x_1->setDisabled(true);
        m_ui->pushButton_cursor_x_2->setDisabled(false);
        m_ui->pushButton_cursor_y_1->setDisabled(false);
        m_ui->pushButton_cursor_y_2->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_x_2, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->move(Cursor::X_2);

        m_ui->pushButton_cursor_x_1->setDisabled(false);
        m_ui->pushButton_cursor_x_2->setDisabled(true);
        m_ui->pushButton_cursor_y_1->setDisabled(false);
        m_ui->pushButton_cursor_y_2->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_y_1, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->move(Cursor::Y_1);

        m_ui->pushButton_cursor_x_1->setDisabled(false);
        m_ui->pushButton_cursor_x_2->setDisabled(false);
        m_ui->pushButton_cursor_y_1->setDisabled(true);
        m_ui->pushButton_cursor_y_2->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_y_2, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->move(Cursor::Y_2);

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

    connect(m_ui->dial_x, SIGNAL(valueChanged(int)), this, SLOT(change_timebase_val(int)));

    connect(m_ui->dial_y, SIGNAL(valueChanged(int)), this, SLOT(change_y_val(int)));
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

void HysteresisChartSettings::change_y_val(const int val)
{
    m_settings->max_y = std::to_string(val);

    m_settings->settings_changed();
}

void HysteresisChartSettings::change_timebase_val(const int val)
{
    m_settings->timebase = std::to_string(val);

    m_settings->settings_changed();
}

void HysteresisChartSettings::set_chart(HysteresisChart *chart)
{
    m_chart = chart;
}

void HysteresisChartSettings::set_chart_settings_controller(ChartSettings *settings)
{
    m_settings = settings;

    m_chart->load_settings(m_settings);
}

HysteresisChartSettings::~HysteresisChartSettings()
{
}


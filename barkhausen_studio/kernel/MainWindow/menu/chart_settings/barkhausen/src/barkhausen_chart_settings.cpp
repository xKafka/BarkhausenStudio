//
// Created by fkafka on 18. 4. 2021.
//

#include <barkhausen_chart_settings.h>
#include <ui_barkhausen_chart_settings.h>

constexpr std::array state_name{"x0.1", "x1", "x10" };

BarkhausenChartSettings::BarkhausenChartSettings(BarkhausenChart *chart, Core *core, QWidget *parent)
        :   QWidget{ parent },
            m_d_creator{ core->data_creator_unsafe() },
            m_chart{ chart },
            m_ui{ std::make_unique<Ui::BarkhausenChartSettings>() },
            m_dial_prev{ }
{
    m_ui->setupUi(this);

    m_dial_prev.amplitude = 50;
    m_dial_prev.timebase = 50;
    m_dial_prev.ampl_offset = 50;
    m_dial_prev.timebase_offset = 50;

    m_ui->pushButton_show_cursor->setDisabled(false);
    m_ui->pushButton_hide_cursors->setDisabled(true);
    m_ui->pushButton_cursor_A->setDisabled(true);
    m_ui->pushButton_cursor_B->setDisabled(true);
    m_ui->pushButton_cursor_horizontal->setDisabled(true);
    m_ui->pushButton_cursor_vertical->setDisabled(true);

    disable_cursor_buttons();

    m_ui->dial_timebase->setValue(m_dial_prev.timebase);
    m_ui->dial_amplitude->setValue(m_dial_prev.amplitude);
    m_ui->dial_amplitude_offset->setValue(m_dial_prev.ampl_offset);
    m_ui->dial_timebase_offset->setValue(m_dial_prev.timebase_offset);

    connect(m_ui->pushButton_show_cursor, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->show_cursors();

        m_ui->pushButton_show_cursor->setDisabled(true);
        m_ui->pushButton_hide_cursors->setDisabled(false);

        enable_cursor_buttons();
    });

    connect(m_ui->pushButton_hide_cursors, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->hide_cursors();

        m_ui->pushButton_show_cursor->setDisabled(false);
        m_ui->pushButton_hide_cursors->setDisabled(true);

        disable_cursor_buttons();
    });

    connect(m_ui->pushButton_cursor_A, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->set_moving_A();

        m_ui->pushButton_cursor_A->setDisabled(true);
        m_ui->pushButton_cursor_B->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_B, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->set_moving_B();

        m_ui->pushButton_cursor_A->setDisabled(false);
        m_ui->pushButton_cursor_B->setDisabled(true);
    });

    connect(m_ui->pushButton_cursor_horizontal, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->set_horizontal();

        m_ui->pushButton_cursor_horizontal->setDisabled(true);
        m_ui->pushButton_cursor_vertical->setDisabled(false);
    });

    connect(m_ui->pushButton_cursor_vertical, &QPushButton::clicked, this, [&]()
    {
        m_chart->view()->chart()->cursors()->set_vertical();

        m_ui->pushButton_cursor_horizontal->setDisabled(false);
        m_ui->pushButton_cursor_vertical->setDisabled(true);
    });

    connect(m_ui->pushButton_auto_range, &QPushButton::clicked, this, [&]()
    {
        m_chart->auto_range();
    });

    connect(m_ui->pushButton_back, &QPushButton::clicked, this, [&]()
    {
        emit back_clicked();

        hide();
    });

    connect(m_ui->dial_timebase, &StateChangingDial::state_changed, this, [&]()
    {
        m_ui->label_timebase_state->setText(state_name[m_ui->dial_timebase->state()]);
    });

    connect(m_ui->dial_amplitude_offset, &StateChangingDial::state_changed, this, [&]()
    {
        m_ui->label_amplitude_offset->setText(state_name[m_ui->dial_amplitude_offset->state()]);
    });

    connect(m_ui->dial_amplitude, &StateChangingDial::state_changed, this, [&]()
    {
        m_ui->label_amplitude_state->setText(state_name[m_ui->dial_amplitude->state()]);
    });

    connect(m_ui->dial_timebase_offset, &StateChangingDial::state_changed, this, [&]()
    {
        m_ui->label_timebase_offset_state->setText(state_name[m_ui->dial_timebase_offset->state()]);
    });

    connect(m_ui->dial_timebase, &QDial::valueChanged, this, &BarkhausenChartSettings::change_timebase);

    connect(m_ui->dial_amplitude_offset, &QDial::valueChanged, this, &BarkhausenChartSettings::change_amplitude_offset);

    connect(m_ui->dial_amplitude, &QDial::valueChanged, this, &BarkhausenChartSettings::change_amplitude);

    connect(m_ui->dial_timebase_offset, &QDial::valueChanged, this, &BarkhausenChartSettings::change_timebase_offset);
}

void BarkhausenChartSettings::disable_cursor_buttons()
{
    m_ui->pushButton_cursor_A->setDisabled(true);
    m_ui->pushButton_cursor_B->setDisabled(true);
    m_ui->pushButton_cursor_horizontal->setDisabled(true);
    m_ui->pushButton_cursor_vertical->setDisabled(true);
}

void BarkhausenChartSettings::enable_cursor_buttons()
{
    m_ui->pushButton_cursor_A->setDisabled(false);
    m_ui->pushButton_cursor_B->setDisabled(false);
    m_ui->pushButton_cursor_horizontal->setDisabled(false);
    m_ui->pushButton_cursor_vertical->setDisabled(false);
}

void BarkhausenChartSettings::change_timebase(int value)
{
    m_chart->timebase_stretch(value, m_ui->dial_timebase->state(), value > m_dial_prev.timebase);

    m_dial_prev.timebase = value;
}

void BarkhausenChartSettings::change_timebase_offset(int value)
{
    m_chart->timebase_offset(value, m_ui->dial_timebase_offset->state(), value > m_dial_prev.timebase_offset);

    m_dial_prev.timebase_offset = value;
}

void BarkhausenChartSettings::change_amplitude(int value)
{
    m_chart->amplitude_stretch(value, m_ui->dial_amplitude->state(), value > m_dial_prev.amplitude);

    m_dial_prev.amplitude = value;
}

void BarkhausenChartSettings::change_amplitude_offset(int value)
{
    m_chart->amplitude_offset(value, m_ui->dial_amplitude_offset->state(), value > m_dial_prev.ampl_offset);

    m_dial_prev.ampl_offset = value;
}

BarkhausenChartSettings::~BarkhausenChartSettings()
{
}


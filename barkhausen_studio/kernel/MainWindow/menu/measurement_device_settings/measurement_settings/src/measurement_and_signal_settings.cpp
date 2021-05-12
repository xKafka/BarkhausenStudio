//
// Created by fkafka on 10. 5. 2021.
//

// You may need to build the project (run Qt uic code generator) to get "ui_measurement_settings.h" resolved

#include <measurement_and_signal_settings.h>
#include <utils.h>
#include <ui_measurement_and_signal_settings.h>

constexpr auto size_of_chart_data { 1024 };
constexpr double pi_const { 22.0 / 7.0 };
constexpr double standard_period{ 2 * pi_const };
constexpr std::array state_name{"x0.1", "x1", "x10" };

template <typename T> inline constexpr
int signum(T x, std::false_type is_signed) {
    return T(0) < x;
}

template <typename T> inline constexpr
int signum(T x, std::true_type is_signed) {
    return (T(0) < x) - (x < T(0));
}

template <typename T> inline constexpr
int signum(T x) {
    return signum(x, std::is_signed<T>());
}

constexpr double triangle_func(double input, double period, double amplitude)
{
    return ((2.0 * amplitude) / pi_const) * asin(sin(((2.0 * pi_const) / period ) * input));
}

constexpr double sin_func(double input, [[maybe_unused]]double period, double amplitude)
{
    return amplitude * sin(input);
}

constexpr double square_func(double input, [[maybe_unused]]double period, double amplitude)
{
    return amplitude * signum(sin(input));
}

MeasurementAndSignalSettings::MeasurementAndSignalSettings(Core *core, QWidget *parent) :
        QWidget(parent),
        m_ui{ std::make_unique<Ui::MeasurementAndSignalSettings>() },
        m_source{ core->data_creator_unsafe()->worker()->source_unsafe() },
        m_data_creator{ core->data_creator_unsafe() },
        m_inc_data{ },
        m_triangle{ },
        m_sin{ },
        m_square{ },
        m_values{ },
        m_dial_values{ }
{
    m_ui->setupUi(this);

    m_inc_data.ampl = m_source->settings()->get<double>(SignalSourceSetting::AmplMinInc);
    m_inc_data.frequency = m_source->settings()->get<double>(SignalSourceSetting::FreqMinInc);
    m_inc_data.offset = m_source->settings()->get<double>(SignalSourceSetting::OffsetMinInc);

    m_values.amplitude.current = m_source->settings()->get<double>(SignalSourceSetting::Amplitude);
    m_values.frequency.current = m_source->settings()->get<double>(SignalSourceSetting::Frequency);
    m_values.offset.current = m_source->settings()->get<double>(SignalSourceSetting::Offset);

    m_values.amplitude.prev = m_values.amplitude.current;
    m_values.frequency.prev = m_values.frequency.current;
    m_values.offset.prev = m_values.offset.current;

    m_values.chart_min = -m_source->settings()->get<double>(SignalSourceSetting::ChartPeakToPeak) / 2.0;
    m_values.chart_max = m_source->settings()->get<double>(SignalSourceSetting::ChartPeakToPeak) / 2.0;

    m_sin.data = create_vector_of_func_data(sin_func, standard_period, m_values.amplitude.current, size_of_chart_data);
    m_triangle.data = create_vector_of_func_data(triangle_func, standard_period, m_values.amplitude.current, size_of_chart_data);
    m_square.data = create_vector_of_func_data(square_func, standard_period, m_values.amplitude.current, size_of_chart_data);

    init(m_source->settings()->get(SignalSourceSetting::WaveType));

    m_ui->widget_input_chart->view()->set_x_range(0.0, standard_period);
    m_ui->widget_input_chart->view()->set_y_range(m_values.chart_min, m_values.chart_max);

    m_ui->dial_amplitude->setValue(m_dial_values.ampl.current);
    m_ui->dial_frequency->setValue(m_dial_values.freq.current);
    m_ui->dial_shift->setValue(m_dial_values.offset.current);
    m_ui->dial_acq_time->setValue(m_dial_values.acq_time.current);
    m_ui->dial_acq_pause_time->setValue(m_dial_values.acq_pause_time.current);

    setMouseTracking(true);

    m_ui->label_amplitude->setText(Utility::Cast::to_string(m_values.amplitude.current).data());
    m_ui->label_frequency->setText(Utility::Cast::to_string(m_values.frequency.current).data());
    m_ui->label_offset->setText(Utility::Cast::to_string(m_values.offset.current).data());

    m_ui->label_amplitude_state->setText(state_name[m_ui->dial_amplitude->state()]);

    m_ui->label_frequency_state->setText(state_name[m_ui->dial_frequency->state()]);

    m_ui->label_offset_state->setText(state_name[m_ui->dial_shift->state()]);

    m_ui->widget_input_chart->setMouseTracking(true);

    connect(m_ui->pushButton_sin, &QPushButton::clicked, this, [&]()
    {
        m_ui->widget_input_chart->view()->update_data(m_sin.data);

        m_sin.is_on_chart = true;
        m_triangle.is_on_chart = false;
        m_square.is_on_chart = false;
    });

    connect(m_ui->pushButton_triangle, &QPushButton::clicked, this, [&]()
    {
        m_ui->widget_input_chart->view()->update_data(m_triangle.data);

        m_sin.is_on_chart = false;
        m_triangle.is_on_chart = true;
        m_square.is_on_chart = false;
    });

    connect(m_ui->pushButton_square, &QPushButton::clicked, this, [&]()
    {
        m_ui->widget_input_chart->view()->update_data(m_square.data);

        m_sin.is_on_chart = false;
        m_triangle.is_on_chart = false;
        m_square.is_on_chart = true;
    });

    connect(m_ui->pushButton_save_signal_settings, &QPushButton::clicked, this, [&]()
    {
        save_signal_source_settings();
    });

    connect(m_ui->pushButton_save_mearuement_settings, &QPushButton::clicked, this, [&]()
    {
        save_measurement_settings();
    });

    connect(m_ui->pushButton_back, &QPushButton::clicked, this, [&]()
    {
        emit back_clicked();
    });

    connect(m_ui->dial_amplitude, &StateChangingDial::state_changed, this, [&]()
    {
        m_ui->label_amplitude_state->setText(state_name[m_ui->dial_amplitude->state()]);
    });

    connect(m_ui->dial_frequency, &StateChangingDial::state_changed, this, [&]()
    {
        m_ui->label_frequency_state->setText(state_name[m_ui->dial_frequency->state()]);
    });

    connect(m_ui->dial_shift, &StateChangingDial::state_changed, this, [&]()
    {
        m_ui->label_offset_state->setText(state_name[m_ui->dial_shift->state()]);
    });

    connect(m_ui->dial_amplitude, &QDial::valueChanged, this, [&](const int value)
    {
        change_amplitude(value);
    });

    connect(m_ui->dial_frequency, &QDial::valueChanged, this, [&](const int value)
    {
        change_freq(value);
    });

    connect(m_ui->dial_shift, &QDial::valueChanged, this, [&](const int value)
    {
        change_offset(value);
    });
}

void MeasurementAndSignalSettings::save_signal_source_settings()
{
    m_source->settings()->change(SignalSourceSetting::Frequency, m_values.frequency.current);
    m_source->settings()->change(SignalSourceSetting::Amplitude, m_values.amplitude.current);
    m_source->settings()->change(SignalSourceSetting::Offset, m_values.offset.current);
}

void MeasurementAndSignalSettings::save_measurement_settings()
{

}

void MeasurementAndSignalSettings::init(const std::string &wave_type)
{
    if(wave_type == "SIN")
    {
        m_ui->widget_input_chart->view()->update_data(m_sin.data);
        m_sin.is_on_chart = true;
    }
    else if(wave_type == "TRIA")
    {
        m_ui->widget_input_chart->view()->update_data(m_triangle.data);
        m_triangle.is_on_chart = true;
    }
    else if(wave_type == "SQR")
    {
        m_ui->widget_input_chart->view()->update_data(m_square.data);
        m_square.is_on_chart = true;
    }
}

void MeasurementAndSignalSettings::change_amplitude_of_data(QVector<QPointF> *to_what, const ChartValues::Values &values) const
{
    const auto grow_factor = values.current / values.prev;

    for(auto &item : *to_what)
    {
        item.setY(item.y() * grow_factor);
    }
}

void MeasurementAndSignalSettings::change_offset_of_data(QVector<QPointF> *to_what, const ChartValues::Values &values) const
{
    const bool is_growing = abs(values.current) > abs(values.prev);

    for(auto &item : *to_what)
    {
        if(is_growing)
            item.setY(item.y() + values.current);
        else
            item.setY(item.y() - values.current);
    }
}

void MeasurementAndSignalSettings::change_freq(int value)
{
    m_dial_values.freq.current = value;

    if(m_dial_values.freq.is_growing())
    {
        m_values.frequency.current += m_inc_data.frequency;
    }
    else
        m_values.frequency.current -= m_inc_data.frequency;

    m_ui->label_frequency->setText(Utility::Cast::to_string(m_values.frequency.current).data());

    m_dial_values.freq.prev = value;
}

void MeasurementAndSignalSettings::change_amplitude(int value)
{
    m_dial_values.ampl.current = value;

    if(m_dial_values.ampl.is_growing())
    {
        m_values.amplitude.current += m_inc_data.ampl;
    }
    else
        m_values.amplitude.current -= m_inc_data.ampl;

    m_ui->label_amplitude->setText(Utility::Cast::to_string(m_values.amplitude.current).data());

    m_dial_values.ampl.prev = value;

    if(m_sin.is_on_chart)
    {
        change_amplitude_of_data(&m_sin.data, m_values.amplitude);

        m_ui->widget_input_chart->view()->update_data(m_sin.data);
    }

    if(m_triangle.is_on_chart)
    {
        change_amplitude_of_data(&m_triangle.data, m_values.amplitude);

        m_ui->widget_input_chart->view()->update_data(m_triangle.data);
    }
    if(m_square.is_on_chart)
    {
        change_amplitude_of_data(&m_square.data, m_values.amplitude);

        m_ui->widget_input_chart->view()->update_data(m_square.data);
    }

    m_values.amplitude.prev = m_values.amplitude.current;
}

void MeasurementAndSignalSettings::change_offset(int value)
{
    m_dial_values.offset.current = value;

    if(m_dial_values.offset.is_growing())
    {
        m_values.offset.current += m_inc_data.offset;
    }
    else
        m_values.offset.current -= m_inc_data.offset;

    m_ui->label_offset->setText(Utility::Cast::to_string(m_values.offset.current).data());

    if(m_sin.is_on_chart)
    {
        change_offset_of_data(&m_sin.data, m_values.offset);

        m_ui->widget_input_chart->view()->update_data(m_sin.data);
    }

    if(m_triangle.is_on_chart)
    {
        change_offset_of_data(&m_triangle.data, m_values.offset);

        m_ui->widget_input_chart->view()->update_data(m_triangle.data);
    }
    if(m_square.is_on_chart)
    {
        change_offset_of_data(&m_square.data, m_values.offset);

        m_ui->widget_input_chart->view()->update_data(m_square.data);
    }

    m_values.offset.prev = m_values.offset.current;

    m_dial_values.offset.prev = value;
}

MeasurementAndSignalSettings::~MeasurementAndSignalSettings()
{
}
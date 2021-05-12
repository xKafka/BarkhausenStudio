//
// Created by fkafka on 10. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_AND_SIGNAL_SETTINGS_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_AND_SIGNAL_SETTINGS_H

#include <QWidget>
#include <memory>
#include <chartwindow.h>
#include <core.h>
#include <signal_source_holder.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MeasurementAndSignalSettings; }
QT_END_NAMESPACE

class MeasurementAndSignalSettings : public QWidget
{
    Q_OBJECT

    ReadWriteRef<SignalSourceHolder> m_source;

    ReadWriteRef<DataCreator> m_data_creator;

    struct ChartData
    {
        using DType = QVector<QPointF>;

        DType data;

        bool is_on_chart{ false };
    };

    struct MinIncrements
    {
        double ampl, frequency, offset;
    };

    struct DialValue
    {
        struct Dial
        {
            int prev{ 50 }, current{ 50 };

            [[nodiscard]] bool is_growing() const { return current > prev; }
        };

        Dial freq, ampl, offset, acq_time, acq_pause_time;
    };

    struct ChartValues
    {
        struct Values
        {
            double prev, current;
        };

        Values frequency, amplitude, offset;

        double chart_min, chart_max;
    };

    std::unique_ptr<Ui::MeasurementAndSignalSettings> m_ui;

    MinIncrements m_inc_data;

    ChartData m_triangle, m_sin, m_square;

    ChartValues m_values;

    DialValue m_dial_values;

    void change_freq(int value);

    void change_amplitude(int value);

    void change_offset(int value);

    void init(const std::string &wave_type);

    template<typename MathFunction>
    inline auto create_vector_of_func_data(MathFunction function, double period, double amplitude, int data_size)
    {
        QVector<QPointF> ret_val(data_size);

        auto at_time = 0.0;

        const auto step = period / static_cast<double>(ret_val.size());

        for(auto &item : ret_val)
        {
            item.setX(at_time);

            item.setY(function(at_time, period, amplitude));

            at_time += step;
        }

        return ret_val;
    }

    void change_amplitude_of_data(QVector<QPointF> *to_what, const ChartValues::Values &values) const;

    void change_offset_of_data(QVector<QPointF> *to_what, const ChartValues::Values &values) const;

    void save_signal_source_settings();

    void save_measurement_settings();

public:
    explicit MeasurementAndSignalSettings(Core *core, QWidget *parent = nullptr);

    ~MeasurementAndSignalSettings() override;

signals:
    void back_clicked();
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_AND_SIGNAL_SETTINGS_H

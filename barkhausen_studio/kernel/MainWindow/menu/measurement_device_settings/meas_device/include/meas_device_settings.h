//
// Created by fkafka on 20. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEAS_DEVICE_SETTINGS_H
#define BARKHAUSEN_STUDIO_MEAS_DEVICE_SETTINGS_H

#include <QWidget>
#include <memory>
#include <usbtmc_settings.h>
#include <device_finder.h>
#include <core.h>
#include <measurement_device_holder.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MeasDeviceSettings; }
QT_END_NAMESPACE

class MeasDeviceSettings : public QWidget
{
    Q_OBJECT

    std::unique_ptr<Ui::MeasDeviceSettings> m_ui;

    ReadOnlyRef<DeviceFinder> m_dev_finder_ref;

    ReadWriteRef<MeasurementDeviceHolder> m_device;

    struct Limits
    {
        double sample_rate{ 0.0 }, points_per_chunk{ 0.0 }, voltage_range{ 0.0 }, source_voltage{ 0.0 };
    };

    struct Tune
    {
        double fine_step{ 0.0 }, standard_step{ 0.0 };

        int fine_val{ 0 }, standard_val{ 0 };
    };

    Limits m_limits;

    Tune m_tune;

    bool m_is_voltage_settings_active;

    void fine_tune_val(int dial_val);

    void tune_val(int dial_val);

    template<typename LeftType, typename RightType>
    double per_to_absolute(const LeftType &val, const RightType &max_val)
    {
        using NumType = double;

        return static_cast<NumType>(val) * (static_cast<NumType>(max_val) / 100.0);
    }

    void show_available_devices();

    void select_resource();

    void setup_ranges();

    void setup_shown();

    void set_voltage();

public:
    explicit MeasDeviceSettings(Core *core, QWidget *parent = nullptr);

    ~MeasDeviceSettings() override;

public slots:
    void save_settings();

    void update_shown();

    void write_settings();

signals:
    void back_clicked();
};


#endif //BARKHAUSEN_STUDIO_MEAS_DEVICE_SETTINGS_H

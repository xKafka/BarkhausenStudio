//
// Created by fkafka on 20. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEAS_DEVICE_SETTINGS_H
#define BARKHAUSEN_STUDIO_MEAS_DEVICE_SETTINGS_H

#include <QWidget>
#include <memory>
#include <parsed_command.h>
#include <usbtmc_settings.h>
#include <device_finder.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MeasDeviceSettings; }
QT_END_NAMESPACE

class MeasDeviceSettings : public QWidget
{
    Q_OBJECT

    ReadWriteRef<UsbtmcSettings> m_settings_ref;

    ReadOnlyRef<DeviceFinder> m_dev_finder_ref;

    double m_sample_rate_max_val;
    double m_points_per_chunk_max_val;
    double m_voltage_range_max_val;

    template<typename LeftType, typename RightType>
    double per_to_absolute(const LeftType &val, const RightType &max_val)
    {
        using NumType = double;

        return static_cast<NumType>(val) * (static_cast<NumType>(max_val) / 100.0);
    }

    void show_available_devices();

    void select_resource();

public:
    explicit MeasDeviceSettings(QWidget *parent = nullptr);

    ~MeasDeviceSettings() override;

    void write_settings();

    void set_usbtmc_settings_controller(SharedData<UsbtmcSettings> &settings);

    void set_device_finder_controller(SharedData<DeviceFinder> &dev_finder);

public slots:
    void save_settings();

private slots:
    void update_shown();

signals:
    void back_clicked();

    void command(const std::vector<uint8_t> &);

private:
    std::unique_ptr<Ui::MeasDeviceSettings> m_ui;
};


#endif //BARKHAUSEN_STUDIO_MEAS_DEVICE_SETTINGS_H

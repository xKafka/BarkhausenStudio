//
// Created by fkafka on 25. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_CORE_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_CORE_H

#include <measurement_device_impl.h>
#include <usbtmc_standard_interface_wrapper.h>
#include <mem_types.h>
#include <measurement_device_settings.h>

constexpr auto buffer_max_len { 1 << 22 }; //2^13 -> 8192

enum BufferPolicy
{
    NoBuffer = 0,
    B
};

class MeasurementDeviceCore : public MeasurementDeviceImpl
{
    UsbtmcStandardInterfaceWrapper m_device{};

    ReadOnlyRef<MeasurementDeviceSettings> m_settings_ref;

    unsigned char m_buffer[buffer_max_len];

    bool m_continuous_acq{ false };

public:
    explicit MeasurementDeviceCore(SharedData<MeasurementDeviceSettings> &usbtmc_settings);

    ~MeasurementDeviceCore() override;

    void init();

    void set_data_len(std::string_view size) override;

    void wait_for_data_ready() override;

    void send_command(std::string_view command) override;

    void reset() override;

    void cont_acq_start();

    void cont_acq_stop();

    void set_ref_voltage(double val);

    [[nodiscard]] std::string get_device_name() const override;

    [[nodiscard]] std::string ask(std::string_view command) override;

    [[nodiscard]] char* read() const override;

    [[nodiscard]] unsigned char* get_sample() override;

    [[nodiscard]] bool is_cont_acq_running() const { return m_continuous_acq; }
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_CORE_H

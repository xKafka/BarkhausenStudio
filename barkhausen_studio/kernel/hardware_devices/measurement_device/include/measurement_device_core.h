//
// Created by fkafka on 25. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_CORE_H
#define BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_CORE_H

#include <measurement_device_impl.h>
#include <usbtmc_settings.h>
#include <agilent_u2541a_wrapper.h>
#include <mem_types.h>

constexpr auto buffer_max_len { 1 << 13 }; //2^13 -> 8192

enum BufferPolicy
{
    NoBuffer = 0,
    B
};

class MeasurementDeviceCore : public MeasurementDeviceImpl
{
    AgilentU2541aWrapper m_device{};

    ReadOnlyRef<UsbtmcSettings> m_settings_ref;

    unsigned char m_buffer[buffer_max_len];

    bool m_continuous_acq{ false };

public:
    explicit MeasurementDeviceCore(SharedData<UsbtmcSettings> &usbtmc_settings);

    ~MeasurementDeviceCore() override;

    void init();

    void set_data_len(std::string_view size) override;

    void wait_for_data_ready() override;

    void send_command(std::string_view command) override;

    void reset() override;

    void cont_acq_start();

    void cont_acq_stop();

    void set_ref_voltage();

    [[nodiscard]] std::string get_device_name() const override;

    [[nodiscard]] std::string ask(std::string_view command) override;

    [[nodiscard]] char* read() const override;

    [[nodiscard]] unsigned char* get_sample() override;

    [[nodiscard]] bool is_cont_acq_running() const { return m_continuous_acq; }
};

#endif //BARKHAUSEN_STUDIO_MEASUREMENT_DEVICE_CORE_H

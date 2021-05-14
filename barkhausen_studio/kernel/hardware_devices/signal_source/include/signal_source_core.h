//
// Created by fkafka on 13. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_SIGNAL_SOURCE_CORE_H
#define BARKHAUSEN_STUDIO_SIGNAL_SOURCE_CORE_H

#include <measurement_device_impl.h>
#include <usbtmc_standard_interface_wrapper.h>
#include <mem_types.h>
#include <signal_source_settings.h>
#include <signal_source_impl.h>

class SignalSourceCore : public SignalSourceImpl
{
    UsbtmcStandardInterfaceWrapper m_device{};

    ReadOnlyRef<SignalSourceSettings> m_settings_ref;

public:
    explicit SignalSourceCore(SharedData<SignalSourceSettings> &usbtmc_settings);

    ~SignalSourceCore() override;

    void init();

    void send_command(std::string_view command) override;

    void reset() override;

    void on();

    void off();

    std::string get_device_name() const;

    [[nodiscard]] std::string ask(std::string_view command) override;

    [[nodiscard]] char* read() const override;
};

#endif //BARKHAUSEN_STUDIO_SIGNAL_SOURCE_CORE_H

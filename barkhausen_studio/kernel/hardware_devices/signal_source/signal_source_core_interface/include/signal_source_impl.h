//
// Created by fkafka on 13. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_SIGNAL_SOURCE_IMPL_H
#define BARKHAUSEN_STUDIO_SIGNAL_SOURCE_IMPL_H

#include <string>

class SignalSourceImpl
{
    bool m_is_open { false };

    bool m_is_on{ false };

protected:
    void set_open() { m_is_open = true; }

    void set_on() { m_is_on = true; }

    void set_off() { m_is_on = false; }

    void set_closed() { m_is_open = false; }

public:
    SignalSourceImpl() = default;

    virtual ~SignalSourceImpl() = default;

    [[nodiscard]] bool is_open() const { return m_is_open; }

    bool is_on() const { return m_is_on; }

    virtual void reset() = 0;

    virtual void send_command(std::string_view command) = 0;

    [[nodiscard]] virtual char* read() const = 0;

    virtual std::string ask(std::string_view command) = 0;
};

#endif //BARKHAUSEN_STUDIO_SIGNAL_SOURCE_IMPL_H

//
// Created by fkafka on 13. 5. 2021.
//


#include <signal_source_core.h>
#include <settings_names.h>
#include <utils.h>
#include <QDebug>

SignalSourceCore::SignalSourceCore(SharedData<SignalSourceSettings> &usbtmc_settings)
        :   m_settings_ref{ usbtmc_settings }
{
}

SignalSourceCore::~SignalSourceCore()
{
    if(is_on())
        off();
}

void SignalSourceCore::init()
{
    if(m_device.init_usbtmc(m_settings_ref->get(SignalSourceSetting::Resource)))
    {
        set_open();
    }
    else
        set_closed();
}

std::string SignalSourceCore::get_device_name() const
{
    return m_device.name();
}

void SignalSourceCore::send_command(std::string_view command)
{
    m_device.send_message(command);
}

char* SignalSourceCore::read() const
{

}

std::string SignalSourceCore::ask(std::string_view command)
{
    return m_device.ask_device(command);
}

void SignalSourceCore::reset()
{
    m_device.reset();
}

void SignalSourceCore::on()
{
    //impl
    /*OUTP %OUTP%
ROUT:CHAN:RSRC EXT,(@201);
OUTP:WAV:ITER %ITER%;
OUTP:WAV:SRAT %Sample rate%
ROUT:ENAB ON, (@201)
ROUT:CHAN:POL BIP, (@201)*/

    m_device.send_message("STOP\n");

    set_on();
}

void SignalSourceCore::off()
{
    //impl
    /*OUTP %OUTP%
ROUT:CHAN:RSRC EXT,(@201);
OUTP:WAV:ITER %ITER%;
OUTP:WAV:SRAT %Sample rate%
ROUT:ENAB ON, (@201)
ROUT:CHAN:POL BIP, (@201)*/

    set_off();
}

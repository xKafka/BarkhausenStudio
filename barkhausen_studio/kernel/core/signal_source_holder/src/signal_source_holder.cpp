//
// Created by fkafka on 12. 5. 2021.
//

#include <signal_source_holder.h>

#include <QDebug>

SignalSourceHolder::SignalSourceHolder(SharedData<SettingsStorage> &settings_storage)
    :   m_settings_storage_ref{ settings_storage },
        m_source{ settings_storage->signal_source_settings }
{
    connect(settings_storage->signal_source_settings.get(), &SignalSourceSettings::changed, this, &SignalSourceHolder::reload_settings);
}

SignalSourceHolder::~SignalSourceHolder() {}

void SignalSourceHolder::active_output()
{
    if(!m_source.is_on())
    {
        if(m_source.is_open())
        {
            m_source.on();
        }
        else
        {
            m_source.init();

            m_source.on();
        }
    }
}

void SignalSourceHolder::deactivate_output()
{
    if(m_source.is_on())
    {
        m_source.off();
    }
}

void SignalSourceHolder::reload_settings(SignalSourceSetting setting_changed)
{
    qDebug() << "settings reloaded";
    deactivate_output();
}
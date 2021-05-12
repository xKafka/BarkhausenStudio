//
// Created by fkafka on 12. 5. 2021.
//

#include <signal_source_holder.h>

#include <QDebug>

SignalSourceHolder::SignalSourceHolder(SharedData<SettingsStorage> &settings_storage)
    :   m_settings_storage_ref{ settings_storage },
        m_is_active{ false }
{
    connect(settings_storage->signal_source_settings.get(), &SignalSourceSettings::changed, this, &SignalSourceHolder::reload_settings);
}

SignalSourceHolder::~SignalSourceHolder() {}

void SignalSourceHolder::active_output()
{
    if(!m_is_active)
    {
        qDebug() << "signal out BitCH";
        m_is_active = true;
    }
}

void SignalSourceHolder::deactivate_output()
{
    if(m_is_active)
    {
        qDebug() << "signal not out BitCH";
        m_is_active = false;
    }
}

void SignalSourceHolder::reload_settings(SignalSourceSetting setting_changed)
{
    qDebug() << "settings reloaded";
    deactivate_output();
}
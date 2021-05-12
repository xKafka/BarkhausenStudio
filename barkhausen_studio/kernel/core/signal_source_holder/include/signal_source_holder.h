//
// Created by fkafka on 12. 5. 2021.
//

#ifndef BARKHAUSEN_STUDIO_SIGNAL_SOURCE_HOLDER_H
#define BARKHAUSEN_STUDIO_SIGNAL_SOURCE_HOLDER_H

#include <QObject>
#include <mem_types.h>
#include <settings_storage.h>
#include <data_buffer.h>

class SignalSourceHolder: public QObject
{
    Q_OBJECT

    ReadWriteRef<SettingsStorage> m_settings_storage_ref;

    bool m_is_active;

private slots:
    void reload_settings(SignalSourceSetting setting_changed);

public:
    explicit SignalSourceHolder(SharedData<SettingsStorage> &settings_storage);
    ~SignalSourceHolder();

    void active_output();

    void deactivate_output();

    template<typename CastType>
    void change_setting(UsbtmcSettingName key, const CastType &val)
    {
        m_settings_storage_ref->signal_source_settings->change(key, val);
    }

    auto &settings() { return m_settings_storage_ref->signal_source_settings; }

signals:
    void opened();
};

#endif //BARKHAUSEN_STUDIO_SIGNAL_SOURCE_HOLDER_H

//
// Created by fkafka on 31. 3. 2021.
//

#ifndef BARKHAUSEN_STUDIO_INI_FILE_H
#define BARKHAUSEN_STUDIO_INI_FILE_H

#include <QSettings>
#include "../../utils/include/utils.h"

class IniFile
{
    QSettings m_ini;

    QString config_q_path(std::string_view name)
    {
        return QString::fromUtf8(std::string(Utility::FileSystem::current_path() + "/config/" + name.data() + ".ini").c_str());
    }

public:
    IniFile(std::string_view name)
        :   m_ini{ config_q_path(name), QSettings::IniFormat }
    {
    }

    auto get_value(const std::string &key) const
    {
        return m_ini.value(key.data()).toString().toStdString();
    }

    auto set_value(const std::string &key, const std::string &value)
    {
        m_ini.setValue(key.data(), value.data());
    }
};

#endif //BARKHAUSEN_STUDIO_INI_FILE_H

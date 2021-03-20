//
// Created by fkafka on 22. 2. 2021.
//

#ifndef BARKHAUSEN_STUDIO_APPLICATION_H
#define BARKHAUSEN_STUDIO_APPLICATION_H

#include <QApplication>
#include <modules_holder.h>

class BarkhausenStudio
{
    QApplication m_application;
    ModulesHolder m_modules{};

public:
    BarkhausenStudio(int &argc, char *argv[])
        : m_application{ argc ,argv }
    {
        qRegisterMetaType<Command>("Command");
        qRegisterMetaType<std::string>("std::string");
        qRegisterMetaType<std::size_t>("std::size_t");
    }

    auto run()
    {
        return m_application.exec();
    }
};

#endif //BARKHAUSEN_STUDIO_APPLICATION_H

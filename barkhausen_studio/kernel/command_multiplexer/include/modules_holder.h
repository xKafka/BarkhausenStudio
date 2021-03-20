//
// Created by fkafka on 28. 2. 2021.
//

#ifndef BARKHAUSEN_STUDIO_MODULES_HOLDER_H
#define BARKHAUSEN_STUDIO_MODULES_HOLDER_H

//custom
#include <mainwindow.h>
#include <command_creator.h>
#include <current_measurement_device.h>
#include <agilent_u2541a.h>

class ModulesHolder : public QObject
{
    Q_OBJECT

    std::unique_ptr<MainWindow> m_main_window;
    std::unique_ptr<CurrentMeasurementDevice> m_current_measurement;

public:
    ModulesHolder();

    ~ModulesHolder() noexcept;

    void choose_module(const Command &what_to_do);


    void do_magic(const Command &cmd);
};

#endif //BARKHAUSEN_STUDIO_MODULES_HOLDER_H

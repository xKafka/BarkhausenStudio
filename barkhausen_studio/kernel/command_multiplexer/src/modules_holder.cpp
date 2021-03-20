//
// Created by fkafka on 28. 2. 2021.
//

#include <modules_holder.h>

#include <iostream>

ModulesHolder::ModulesHolder()
    : m_main_window{ std::make_unique<MainWindow>() },
      m_current_measurement{ std::make_unique<CurrentMeasurementDevice>() }
{
    connect(m_main_window.get(), &MainWindow::command, this, [&](const std::string &cmd)
    {
        choose_module(CommandCreator::parse_cmd(cmd));
    });
    connect(m_current_measurement->worker(), &CurrentMeasurementDeviceWorker::echo, this, [&](const std::string &cmd)
    {
        choose_module(CommandCreator::parse_cmd(cmd));
    });

    connect(m_current_measurement->worker(), &CurrentMeasurementDeviceWorker::new_data_available, m_main_window->current_chart(), &CurrentChart::new_data);

    m_main_window->show();
}

ModulesHolder::~ModulesHolder() = default;

void ModulesHolder::choose_module(const Command &what_to_do)
{
    if(what_to_do.module == m_main_window->name())
    {
        m_main_window->do_magic(what_to_do);
    }
    if(what_to_do.module == m_current_measurement->name())
    {
        m_current_measurement->do_magic(what_to_do);
    }
    if(what_to_do.module == "all")
    {
        m_main_window->do_magic(what_to_do);
        m_current_measurement->do_magic(what_to_do);
    }
}
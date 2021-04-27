//
// Created by fkafka on 21. 4. 2021.
//

#include <device_finder.h>
#include <QDebug>

DeviceFinder::DeviceFinder()
     :  m_file_watcher{ std::make_unique<QFileSystemWatcher>(this) },
        m_usbtmc_available{ false }
{
    m_file_watcher->addPath("/dev/");

    get_usbtmc_devs();

    connect(m_file_watcher.get(), &QFileSystemWatcher::directoryChanged, this, &DeviceFinder::new_dev_connected);

    //!should be reimplemented
}

void DeviceFinder::get_usbtmc_devs()
{
    UsbtmcDeviceFinder finder;

    auto [is_empty, devs] = finder.find_available_devices();

    if(!is_empty)
    {
        m_usbtmc_available = true;

        m_usbtmc_devs = std::move(devs);
    }
    else
    {
        m_usbtmc_available = false;

        m_usbtmc_devs.data_unsafe().clear();
    }
}

void DeviceFinder::new_dev_connected(const QString &data)
{/*
    get_usbtmc_devs();

    qDebug() << "reload;";*/

    emit usb_reloaded();
}


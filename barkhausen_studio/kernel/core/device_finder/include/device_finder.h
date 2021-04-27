//
// Created by fkafka on 21. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_DEVICE_FINER_H
#define BARKHAUSEN_STUDIO_DEVICE_FINER_H

#include <QObject>
#include <QString>
#include <usbtmc_device_finder_wrapper.h>
#include <parsed_command.h>
#include <QFileSystemWatcher>

class DeviceFinder : public QObject
{
    Q_OBJECT

    AvailableDevices m_usbtmc_devs;

    bool m_usbtmc_available;

    std::unique_ptr<QFileSystemWatcher> m_file_watcher;

    void get_usbtmc_devs();

public:
    DeviceFinder();

    auto &usbtmc_devs() const { return m_usbtmc_devs; }

    auto usbtmc_available() const { return m_usbtmc_available; }

public slots:
    void new_dev_connected(const QString &);

signals:
    void usb_reloaded();
};

#endif //BARKHAUSEN_STUDIO_DEVICE_FINER_H

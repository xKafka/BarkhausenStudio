//
// Created by fkafka on 22. 2. 2021.
//

#ifndef BARKHAUSEN_STUDIO_APPLICATION_H
#define BARKHAUSEN_STUDIO_APPLICATION_H

#include <QApplication>
#include <mainwindow.h>
#include <core.h>

class BarkhausenStudio : public QObject
{
    Q_OBJECT

    QApplication m_application;
    std::unique_ptr<MainWindow> m_ui;

public:
    BarkhausenStudio(int &argc, char *argv[]);

    static auto run()
    {
        return QApplication::exec();
    }
};

#endif //BARKHAUSEN_STUDIO_APPLICATION_H

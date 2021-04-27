//
// Created by fkafka on 24. 2. 2021.
//
#include <QVector>
#include <QPointF>
#include <barkhausen_studio.h>

BarkhausenStudio::BarkhausenStudio(int &argc, char **argv)
    :   m_application{ argc ,argv },
        m_ui{ std::make_unique<MainWindow>() }
{
    qRegisterMetaType<std::string>("std::string");
    qRegisterMetaType<std::size_t>("std::size_t");
    qRegisterMetaType<std::vector<uint8_t>>("std::vector<uint8_t>");
    qRegisterMetaType<QVector<QPointF>>("QVector<QPointF>");

    m_ui->showFullScreen();
}

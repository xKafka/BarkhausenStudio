//
// Created by fkafka on 15. 4. 2021.
//

#ifndef BARKHAUSEN_STUDIO_DATA_MATH_H
#define BARKHAUSEN_STUDIO_DATA_MATH_H

#include <memory>
#include <qt5/QtCore/QThread>
#include <qt5/QtCore/QObject>

class DataMath : public QObject
{
    Q_OBJECT

    std::unique_ptr<QThread> m_thread;

public:
    DataMath();


};


#endif //BARKHAUSEN_STUDIO_DATA_MATH_H

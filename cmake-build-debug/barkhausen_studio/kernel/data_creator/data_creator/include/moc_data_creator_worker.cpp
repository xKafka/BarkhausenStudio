/****************************************************************************
** Meta object code from reading C++ file 'data_creator_worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../barkhausen_studio/kernel/data_creator/data_creator/include/data_creator_worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_creator_worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataCreatorWorker_t {
    QByteArrayData data[15];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataCreatorWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataCreatorWorker_t qt_meta_stringdata_DataCreatorWorker = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DataCreatorWorker"
QT_MOC_LITERAL(1, 18, 7), // "command"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "std::vector<uint8_t>"
QT_MOC_LITERAL(4, 48, 29), // "new_hysteresis_data_available"
QT_MOC_LITERAL(5, 78, 16), // "QVector<QPointF>"
QT_MOC_LITERAL(6, 95, 29), // "new_barkhausen_data_available"
QT_MOC_LITERAL(7, 125, 20), // "new_B_data_available"
QT_MOC_LITERAL(8, 146, 20), // "new_H_data_available"
QT_MOC_LITERAL(9, 167, 22), // "measurement_device_cmd"
QT_MOC_LITERAL(10, 190, 13), // "ParsedCommand"
QT_MOC_LITERAL(11, 204, 3), // "cmd"
QT_MOC_LITERAL(12, 208, 10), // "parse_data"
QT_MOC_LITERAL(13, 219, 20), // "const unsigned char*"
QT_MOC_LITERAL(14, 240, 4) // "data"

    },
    "DataCreatorWorker\0command\0\0"
    "std::vector<uint8_t>\0new_hysteresis_data_available\0"
    "QVector<QPointF>\0new_barkhausen_data_available\0"
    "new_B_data_available\0new_H_data_available\0"
    "measurement_device_cmd\0ParsedCommand\0"
    "cmd\0parse_data\0const unsigned char*\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataCreatorWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       8,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   64,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void DataCreatorWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataCreatorWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->command((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 1: _t->new_hysteresis_data_available((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1]))); break;
        case 2: _t->new_barkhausen_data_available((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1]))); break;
        case 3: _t->new_B_data_available((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1]))); break;
        case 4: _t->new_H_data_available((*reinterpret_cast< const QVector<QPointF>(*)>(_a[1]))); break;
        case 5: _t->measurement_device_cmd((*reinterpret_cast< const ParsedCommand(*)>(_a[1]))); break;
        case 6: _t->parse_data((*reinterpret_cast< const unsigned char*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPointF> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataCreatorWorker::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataCreatorWorker::command)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataCreatorWorker::*)(const QVector<QPointF> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataCreatorWorker::new_hysteresis_data_available)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DataCreatorWorker::*)(const QVector<QPointF> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataCreatorWorker::new_barkhausen_data_available)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DataCreatorWorker::*)(const QVector<QPointF> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataCreatorWorker::new_B_data_available)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DataCreatorWorker::*)(const QVector<QPointF> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataCreatorWorker::new_H_data_available)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataCreatorWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DataCreatorWorker.data,
    qt_meta_data_DataCreatorWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataCreatorWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataCreatorWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataCreatorWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataCreatorWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DataCreatorWorker::command(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataCreatorWorker::new_hysteresis_data_available(const QVector<QPointF> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataCreatorWorker::new_barkhausen_data_available(const QVector<QPointF> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DataCreatorWorker::new_B_data_available(const QVector<QPointF> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DataCreatorWorker::new_H_data_available(const QVector<QPointF> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'measurement_device_worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../barkhausen_studio/kernel/hardware_devices/measurement_device/include/measurement_device_worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'measurement_device_worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeasurementDeviceWorker_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeasurementDeviceWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeasurementDeviceWorker_t qt_meta_stringdata_MeasurementDeviceWorker = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MeasurementDeviceWorker"
QT_MOC_LITERAL(1, 24, 18), // "new_data_available"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 20), // "const unsigned char*"
QT_MOC_LITERAL(4, 65, 9), // "read_next"
QT_MOC_LITERAL(5, 75, 4), // "echo"
QT_MOC_LITERAL(6, 80, 11), // "std::string"
QT_MOC_LITERAL(7, 92, 4), // "open"
QT_MOC_LITERAL(8, 97, 28), // "continuous_acquisition_start"
QT_MOC_LITERAL(9, 126, 27), // "continuous_acquisition_stop"
QT_MOC_LITERAL(10, 154, 11), // "single_shot"
QT_MOC_LITERAL(11, 166, 11), // "device_name"
QT_MOC_LITERAL(12, 178, 15) // "set_ref_voltage"

    },
    "MeasurementDeviceWorker\0new_data_available\0"
    "\0const unsigned char*\0read_next\0echo\0"
    "std::string\0open\0continuous_acquisition_start\0"
    "continuous_acquisition_stop\0single_shot\0"
    "device_name\0set_ref_voltage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeasurementDeviceWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   66,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,
      11,    0,   70,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MeasurementDeviceWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeasurementDeviceWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->new_data_available((*reinterpret_cast< const unsigned char*(*)>(_a[1]))); break;
        case 1: _t->read_next(); break;
        case 2: _t->echo((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 3: _t->open(); break;
        case 4: _t->continuous_acquisition_start(); break;
        case 5: _t->continuous_acquisition_stop(); break;
        case 6: _t->single_shot(); break;
        case 7: _t->device_name(); break;
        case 8: _t->set_ref_voltage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MeasurementDeviceWorker::*)(const unsigned char * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeasurementDeviceWorker::new_data_available)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MeasurementDeviceWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeasurementDeviceWorker::read_next)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MeasurementDeviceWorker::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MeasurementDeviceWorker::echo)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MeasurementDeviceWorker::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MeasurementDeviceWorker.data,
    qt_meta_data_MeasurementDeviceWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeasurementDeviceWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeasurementDeviceWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeasurementDeviceWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MeasurementDeviceWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MeasurementDeviceWorker::new_data_available(const unsigned char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MeasurementDeviceWorker::read_next()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MeasurementDeviceWorker::echo(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

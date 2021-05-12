/****************************************************************************
** Meta object code from reading C++ file 'data_creator_worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../barkhausen_studio/kernel/core/data_creator/include/data_creator_worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
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
    QByteArrayData data[11];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataCreatorWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataCreatorWorker_t qt_meta_stringdata_DataCreatorWorker = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DataCreatorWorker"
QT_MOC_LITERAL(1, 18, 21), // "new_ui_data_available"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10), // "force_stop"
QT_MOC_LITERAL(4, 52, 12), // "process_data"
QT_MOC_LITERAL(5, 65, 23), // "change_acquisition_time"
QT_MOC_LITERAL(6, 89, 4), // "time"
QT_MOC_LITERAL(7, 94, 29), // "change_acquisition_pause_time"
QT_MOC_LITERAL(8, 124, 19), // "start_meas_sequence"
QT_MOC_LITERAL(9, 144, 18), // "stop_meas_sequence"
QT_MOC_LITERAL(10, 163, 20) // "single_meas_sequence"

    },
    "DataCreatorWorker\0new_ui_data_available\0"
    "\0force_stop\0process_data\0"
    "change_acquisition_time\0time\0"
    "change_acquisition_pause_time\0"
    "start_meas_sequence\0stop_meas_sequence\0"
    "single_meas_sequence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataCreatorWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       7,    1,   60,    2, 0x0a /* Public */,
       8,    0,   63,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataCreatorWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataCreatorWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->new_ui_data_available(); break;
        case 1: _t->force_stop(); break;
        case 2: _t->process_data(); break;
        case 3: _t->change_acquisition_time((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->change_acquisition_pause_time((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->start_meas_sequence(); break;
        case 6: _t->stop_meas_sequence(); break;
        case 7: _t->single_meas_sequence(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataCreatorWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataCreatorWorker::new_ui_data_available)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DataCreatorWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataCreatorWorker::force_stop)) {
                *result = 1;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DataCreatorWorker::new_ui_data_available()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DataCreatorWorker::force_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

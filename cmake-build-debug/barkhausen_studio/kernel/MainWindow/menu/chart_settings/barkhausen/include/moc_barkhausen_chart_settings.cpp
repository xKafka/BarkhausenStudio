/****************************************************************************
** Meta object code from reading C++ file 'barkhausen_chart_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../barkhausen_studio/kernel/MainWindow/menu/chart_settings/barkhausen/include/barkhausen_chart_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barkhausen_chart_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BarkhausenChartSettings_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BarkhausenChartSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BarkhausenChartSettings_t qt_meta_stringdata_BarkhausenChartSettings = {
    {
QT_MOC_LITERAL(0, 0, 23), // "BarkhausenChartSettings"
QT_MOC_LITERAL(1, 24, 12), // "back_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "change_y_val"
QT_MOC_LITERAL(4, 51, 3), // "val"
QT_MOC_LITERAL(5, 55, 19) // "change_timebase_val"

    },
    "BarkhausenChartSettings\0back_clicked\0"
    "\0change_y_val\0val\0change_timebase_val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BarkhausenChartSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void BarkhausenChartSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BarkhausenChartSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_clicked(); break;
        case 1: _t->change_y_val((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->change_timebase_val((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BarkhausenChartSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BarkhausenChartSettings::back_clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BarkhausenChartSettings::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BarkhausenChartSettings.data,
    qt_meta_data_BarkhausenChartSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BarkhausenChartSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BarkhausenChartSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BarkhausenChartSettings.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BarkhausenChartSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void BarkhausenChartSettings::back_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

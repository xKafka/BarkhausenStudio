/****************************************************************************
** Meta object code from reading C++ file 'usbtmc_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../barkhausen_studio/kernel/MainWindow/settings_storage/settings/include/usbtmc_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usbtmc_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UsbtmcSettings_t {
    QByteArrayData data[9];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsbtmcSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsbtmcSettings_t qt_meta_stringdata_UsbtmcSettings = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UsbtmcSettings"
QT_MOC_LITERAL(1, 15, 7), // "changed"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "concat"
QT_MOC_LITERAL(4, 31, 5), // "other"
QT_MOC_LITERAL(5, 37, 12), // "brute_change"
QT_MOC_LITERAL(6, 50, 12), // "to_ini_write"
QT_MOC_LITERAL(7, 63, 16), // "std::string_view"
QT_MOC_LITERAL(8, 80, 9) // "file_name"

    },
    "UsbtmcSettings\0changed\0\0concat\0other\0"
    "brute_change\0to_ini_write\0std::string_view\0"
    "file_name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsbtmcSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       6,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 0,    4,
    QMetaType::Void, 0x80000000 | 0,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void UsbtmcSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UsbtmcSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->concat((*reinterpret_cast< const UsbtmcSettings(*)>(_a[1]))); break;
        case 2: _t->brute_change((*reinterpret_cast< const UsbtmcSettings(*)>(_a[1]))); break;
        case 3: _t->to_ini_write((*reinterpret_cast< std::string_view(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UsbtmcSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UsbtmcSettings::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UsbtmcSettings::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_UsbtmcSettings.data,
    qt_meta_data_UsbtmcSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UsbtmcSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsbtmcSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UsbtmcSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int UsbtmcSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UsbtmcSettings::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

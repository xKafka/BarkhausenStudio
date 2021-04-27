/****************************************************************************
** Meta object code from reading C++ file 'acquisition_menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/acquisition_menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acquisition_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AcquisitionMenu_t {
    QByteArrayData data[22];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AcquisitionMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AcquisitionMenu_t qt_meta_stringdata_AcquisitionMenu = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AcquisitionMenu"
QT_MOC_LITERAL(1, 16, 7), // "command"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 20), // "std::vector<uint8_t>"
QT_MOC_LITERAL(4, 46, 9), // "show_prev"
QT_MOC_LITERAL(5, 56, 4), // "show"
QT_MOC_LITERAL(6, 61, 4), // "hide"
QT_MOC_LITERAL(7, 66, 19), // "acquisition_running"
QT_MOC_LITERAL(8, 86, 7), // "running"
QT_MOC_LITERAL(9, 94, 5), // "setup"
QT_MOC_LITERAL(10, 100, 11), // "std::string"
QT_MOC_LITERAL(11, 112, 11), // "parent_name"
QT_MOC_LITERAL(12, 124, 8), // "QWidget*"
QT_MOC_LITERAL(13, 133, 14), // "central_widget"
QT_MOC_LITERAL(14, 148, 22), // "is_single_shot_clicked"
QT_MOC_LITERAL(15, 171, 16), // "is_start_clicked"
QT_MOC_LITERAL(16, 188, 15), // "is_stop_clicked"
QT_MOC_LITERAL(17, 204, 19), // "is_settings_clicked"
QT_MOC_LITERAL(18, 224, 15), // "is_back_clicked"
QT_MOC_LITERAL(19, 240, 8), // "do_magic"
QT_MOC_LITERAL(20, 249, 13), // "ParsedCommand"
QT_MOC_LITERAL(21, 263, 3) // "cmd"

    },
    "AcquisitionMenu\0command\0\0std::vector<uint8_t>\0"
    "show_prev\0show\0hide\0acquisition_running\0"
    "running\0setup\0std::string\0parent_name\0"
    "QWidget*\0central_widget\0is_single_shot_clicked\0"
    "is_start_clicked\0is_stop_clicked\0"
    "is_settings_clicked\0is_back_clicked\0"
    "do_magic\0ParsedCommand\0cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AcquisitionMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       9,    2,   83,    2, 0x0a /* Public */,
      14,    0,   88,    2, 0x0a /* Public */,
      15,    0,   89,    2, 0x0a /* Public */,
      16,    0,   90,    2, 0x0a /* Public */,
      17,    0,   91,    2, 0x0a /* Public */,
      18,    0,   92,    2, 0x0a /* Public */,
      19,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void AcquisitionMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AcquisitionMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->command((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 1: _t->show_prev(); break;
        case 2: _t->show(); break;
        case 3: _t->hide(); break;
        case 4: _t->acquisition_running((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setup((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 6: _t->is_single_shot_clicked(); break;
        case 7: _t->is_start_clicked(); break;
        case 8: _t->is_stop_clicked(); break;
        case 9: _t->is_settings_clicked(); break;
        case 10: _t->is_back_clicked(); break;
        case 11: _t->do_magic((*reinterpret_cast< const ParsedCommand(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AcquisitionMenu::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionMenu::command)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AcquisitionMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionMenu::show_prev)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AcquisitionMenu::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AcquisitionMenu.data,
    qt_meta_data_AcquisitionMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AcquisitionMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AcquisitionMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AcquisitionMenu.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AcquisitionMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AcquisitionMenu::command(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AcquisitionMenu::show_prev()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

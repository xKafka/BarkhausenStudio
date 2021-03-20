/****************************************************************************
** Meta object code from reading C++ file 'acquisition_menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ui/MainWindow/include/acquisition_menu.h"
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
    QByteArrayData data[17];
    char stringdata0[209];
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
QT_MOC_LITERAL(3, 25, 11), // "std::string"
QT_MOC_LITERAL(4, 37, 4), // "show"
QT_MOC_LITERAL(5, 42, 4), // "hide"
QT_MOC_LITERAL(6, 47, 19), // "acquisition_running"
QT_MOC_LITERAL(7, 67, 7), // "running"
QT_MOC_LITERAL(8, 75, 5), // "setup"
QT_MOC_LITERAL(9, 81, 11), // "parent_name"
QT_MOC_LITERAL(10, 93, 8), // "QWidget*"
QT_MOC_LITERAL(11, 102, 14), // "central_widget"
QT_MOC_LITERAL(12, 117, 22), // "is_single_shot_clicked"
QT_MOC_LITERAL(13, 140, 16), // "is_start_clicked"
QT_MOC_LITERAL(14, 157, 15), // "is_stop_clicked"
QT_MOC_LITERAL(15, 173, 19), // "is_settings_clicked"
QT_MOC_LITERAL(16, 193, 15) // "is_back_clicked"

    },
    "AcquisitionMenu\0command\0\0std::string\0"
    "show\0hide\0acquisition_running\0running\0"
    "setup\0parent_name\0QWidget*\0central_widget\0"
    "is_single_shot_clicked\0is_start_clicked\0"
    "is_stop_clicked\0is_settings_clicked\0"
    "is_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AcquisitionMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    1,   69,    2, 0x0a /* Public */,
       8,    2,   72,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    0,   78,    2, 0x0a /* Public */,
      14,    0,   79,    2, 0x0a /* Public */,
      15,    0,   80,    2, 0x0a /* Public */,
      16,    0,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AcquisitionMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AcquisitionMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->command((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 1: _t->show(); break;
        case 2: _t->hide(); break;
        case 3: _t->acquisition_running((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setup((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 5: _t->is_single_shot_clicked(); break;
        case 6: _t->is_start_clicked(); break;
        case 7: _t->is_stop_clicked(); break;
        case 8: _t->is_settings_clicked(); break;
        case 9: _t->is_back_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AcquisitionMenu::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AcquisitionMenu::command)) {
                *result = 0;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AcquisitionMenu::command(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

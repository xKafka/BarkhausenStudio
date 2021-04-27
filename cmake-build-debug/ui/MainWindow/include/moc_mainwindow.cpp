/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ui/MainWindow/include/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 7), // "command"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 20), // "std::vector<uint8_t>"
QT_MOC_LITERAL(4, 41, 8), // "do_magic"
QT_MOC_LITERAL(5, 50, 13), // "ParsedCommand"
QT_MOC_LITERAL(6, 64, 10), // "what_to_do"
QT_MOC_LITERAL(7, 75, 4), // "dump"
QT_MOC_LITERAL(8, 80, 16), // "std::string_view"
QT_MOC_LITERAL(9, 97, 12), // "what_to_show"
QT_MOC_LITERAL(10, 110, 8), // "echo_cmd"
QT_MOC_LITERAL(11, 119, 3), // "cmd"
QT_MOC_LITERAL(12, 123, 22), // "measurement_device_cmd"
QT_MOC_LITERAL(13, 146, 20) // "acquisition_menu_cmd"

    },
    "MainWindow\0command\0\0std::vector<uint8_t>\0"
    "do_magic\0ParsedCommand\0what_to_do\0"
    "dump\0std::string_view\0what_to_show\0"
    "echo_cmd\0cmd\0measurement_device_cmd\0"
    "acquisition_menu_cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,
      12,    1,   56,    2, 0x0a /* Public */,
      13,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 5,   11,
    QMetaType::Void, 0x80000000 | 5,   11,
    QMetaType::Void, 0x80000000 | 5,   11,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->command((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 1: _t->do_magic((*reinterpret_cast< const ParsedCommand(*)>(_a[1]))); break;
        case 2: _t->dump((*reinterpret_cast< std::string_view(*)>(_a[1]))); break;
        case 3: _t->echo_cmd((*reinterpret_cast< const ParsedCommand(*)>(_a[1]))); break;
        case 4: _t->measurement_device_cmd((*reinterpret_cast< const ParsedCommand(*)>(_a[1]))); break;
        case 5: _t->acquisition_menu_cmd((*reinterpret_cast< const ParsedCommand(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::command)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::command(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

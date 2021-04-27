/****************************************************************************
** Meta object code from reading C++ file 'chartsettingsmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../barkhausen_studio/kernel/MainWindow/menu/chart_settings/include/chartsettingsmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartsettingsmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChartSettingsMenu_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChartSettingsMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChartSettingsMenu_t qt_meta_stringdata_ChartSettingsMenu = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ChartSettingsMenu"
QT_MOC_LITERAL(1, 18, 12), // "back_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "command"
QT_MOC_LITERAL(4, 40, 20), // "std::vector<uint8_t>"
QT_MOC_LITERAL(5, 61, 15), // "process_command"
QT_MOC_LITERAL(6, 77, 13), // "ParsedCommand"
QT_MOC_LITERAL(7, 91, 3) // "cmd"

    },
    "ChartSettingsMenu\0back_clicked\0\0command\0"
    "std::vector<uint8_t>\0process_command\0"
    "ParsedCommand\0cmd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChartSettingsMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void ChartSettingsMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChartSettingsMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_clicked(); break;
        case 1: _t->command((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 2: _t->process_command((*reinterpret_cast< const ParsedCommand(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChartSettingsMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartSettingsMenu::back_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChartSettingsMenu::*)(const std::vector<uint8_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChartSettingsMenu::command)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChartSettingsMenu::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ChartSettingsMenu.data,
    qt_meta_data_ChartSettingsMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChartSettingsMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChartSettingsMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChartSettingsMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChartSettingsMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ChartSettingsMenu::back_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChartSettingsMenu::command(const std::vector<uint8_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'Main_window.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../inc/Main_window.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Main_window.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Main_window_t {
    QByteArrayData data[11];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Main_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Main_window_t qt_meta_stringdata_Main_window = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Main_window"
QT_MOC_LITERAL(1, 12, 17), // "silos_data_update"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 21), // "set_all_param_silos_1"
QT_MOC_LITERAL(4, 53, 38), // "set_all_param_silos_1_fullfil..."
QT_MOC_LITERAL(5, 92, 21), // "set_all_param_silos_2"
QT_MOC_LITERAL(6, 114, 38), // "set_all_param_silos_2_fullfil..."
QT_MOC_LITERAL(7, 153, 26), // "show_temp_settings_silos_1"
QT_MOC_LITERAL(8, 180, 23), // "set_alarms_temp_silos_1"
QT_MOC_LITERAL(9, 204, 28), // "set_info_alarms_temp_silos_1"
QT_MOC_LITERAL(10, 233, 16) // "set_temp_silos_1"

    },
    "Main_window\0silos_data_update\0\0"
    "set_all_param_silos_1\0"
    "set_all_param_silos_1_fullfilmnet_text\0"
    "set_all_param_silos_2\0"
    "set_all_param_silos_2_fullfilmnet_text\0"
    "show_temp_settings_silos_1\0"
    "set_alarms_temp_silos_1\0"
    "set_info_alarms_temp_silos_1\0"
    "set_temp_silos_1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Main_window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Main_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Main_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->silos_data_update(); break;
        case 1: _t->set_all_param_silos_1(); break;
        case 2: _t->set_all_param_silos_1_fullfilmnet_text(); break;
        case 3: _t->set_all_param_silos_2(); break;
        case 4: _t->set_all_param_silos_2_fullfilmnet_text(); break;
        case 5: _t->show_temp_settings_silos_1(); break;
        case 6: _t->set_alarms_temp_silos_1(); break;
        case 7: _t->set_info_alarms_temp_silos_1(); break;
        case 8: _t->set_temp_silos_1(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Main_window::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Main_window.data,
    qt_meta_data_Main_window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Main_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Main_window.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::Main_window"))
        return static_cast< Ui::Main_window*>(this);
    return QWidget::qt_metacast(_clname);
}

int Main_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

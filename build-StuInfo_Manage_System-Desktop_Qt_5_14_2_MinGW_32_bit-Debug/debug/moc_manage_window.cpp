/****************************************************************************
** Meta object code from reading C++ file 'manage_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../StuInfo_Manage_System/manage_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manage_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Manage_Window_t {
    QByteArrayData data[13];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Manage_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Manage_Window_t qt_meta_stringdata_Manage_Window = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Manage_Window"
QT_MOC_LITERAL(1, 14, 4), // "init"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 19), // "exit_button_clicked"
QT_MOC_LITERAL(4, 40, 20), // "reset_button_clicked"
QT_MOC_LITERAL(5, 61, 18), // "reload_StudentList"
QT_MOC_LITERAL(6, 80, 11), // "reloadChart"
QT_MOC_LITERAL(7, 92, 7), // "getItem"
QT_MOC_LITERAL(8, 100, 3), // "row"
QT_MOC_LITERAL(9, 104, 6), // "column"
QT_MOC_LITERAL(10, 111, 21), // "delete_button_clicked"
QT_MOC_LITERAL(11, 133, 18), // "add_button_clicked"
QT_MOC_LITERAL(12, 152, 12) // "Select_Judge"

    },
    "Manage_Window\0init\0\0exit_button_clicked\0"
    "reset_button_clicked\0reload_StudentList\0"
    "reloadChart\0getItem\0row\0column\0"
    "delete_button_clicked\0add_button_clicked\0"
    "Select_Judge"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Manage_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    2,   64,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Manage_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Manage_Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->exit_button_clicked(); break;
        case 2: _t->reset_button_clicked(); break;
        case 3: _t->reload_StudentList(); break;
        case 4: _t->reloadChart(); break;
        case 5: _t->getItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->delete_button_clicked(); break;
        case 7: _t->add_button_clicked(); break;
        case 8: _t->Select_Judge(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Manage_Window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manage_Window::init)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Manage_Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Manage_Window.data,
    qt_meta_data_Manage_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Manage_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Manage_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Manage_Window.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Global"))
        return static_cast< Global*>(this);
    return QWidget::qt_metacast(_clname);
}

int Manage_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Manage_Window::init()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'teacher_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../StuInfo_Manage_System/teacher_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacher_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Teacher_Window_t {
    QByteArrayData data[10];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Teacher_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Teacher_Window_t qt_meta_stringdata_Teacher_Window = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Teacher_Window"
QT_MOC_LITERAL(1, 15, 7), // "getItem"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "row"
QT_MOC_LITERAL(4, 28, 6), // "column"
QT_MOC_LITERAL(5, 35, 12), // "Select_Judge"
QT_MOC_LITERAL(6, 48, 21), // "manage_button_clicked"
QT_MOC_LITERAL(7, 70, 21), // "delete_button_clicked"
QT_MOC_LITERAL(8, 92, 18), // "add_button_clicked"
QT_MOC_LITERAL(9, 111, 19) // "exit_button_clicked"

    },
    "Teacher_Window\0getItem\0\0row\0column\0"
    "Select_Judge\0manage_button_clicked\0"
    "delete_button_clicked\0add_button_clicked\0"
    "exit_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Teacher_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Teacher_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Teacher_Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->Select_Judge(); break;
        case 2: _t->manage_button_clicked(); break;
        case 3: _t->delete_button_clicked(); break;
        case 4: _t->add_button_clicked(); break;
        case 5: _t->exit_button_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Teacher_Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Teacher_Window.data,
    qt_meta_data_Teacher_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Teacher_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Teacher_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Teacher_Window.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Global"))
        return static_cast< Global*>(this);
    return QWidget::qt_metacast(_clname);
}

int Teacher_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

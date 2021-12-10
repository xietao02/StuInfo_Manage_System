/****************************************************************************
** Meta object code from reading C++ file 'addstudent_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../StuInfo_Manage_System/addstudent_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addstudent_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddStudent_window_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddStudent_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddStudent_window_t qt_meta_stringdata_AddStudent_window = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AddStudent_window"
QT_MOC_LITERAL(1, 18, 24), // "reloadStudentList_signal"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 18), // "reloadChart_signal"
QT_MOC_LITERAL(4, 63, 11), // "add_student"
QT_MOC_LITERAL(5, 75, 9) // "backTotop"

    },
    "AddStudent_window\0reloadStudentList_signal\0"
    "\0reloadChart_signal\0add_student\0"
    "backTotop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddStudent_window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddStudent_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddStudent_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reloadStudentList_signal(); break;
        case 1: _t->reloadChart_signal(); break;
        case 2: _t->add_student(); break;
        case 3: _t->backTotop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddStudent_window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddStudent_window::reloadStudentList_signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddStudent_window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddStudent_window::reloadChart_signal)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AddStudent_window::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_AddStudent_window.data,
    qt_meta_data_AddStudent_window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddStudent_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddStudent_window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddStudent_window.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Global"))
        return static_cast< Global*>(this);
    return QWidget::qt_metacast(_clname);
}

int AddStudent_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void AddStudent_window::reloadStudentList_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddStudent_window::reloadChart_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

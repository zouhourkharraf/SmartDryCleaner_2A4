/****************************************************************************
** Meta object code from reading C++ file 'interfaceauthentification.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TunisianDryCleaner02/interfaceauthentification.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfaceauthentification.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InterfaceAuthentification_t {
    QByteArrayData data[3];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfaceAuthentification_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfaceAuthentification_t qt_meta_stringdata_InterfaceAuthentification = {
    {
QT_MOC_LITERAL(0, 0, 25), // "InterfaceAuthentification"
QT_MOC_LITERAL(1, 26, 27), // "on_bouton_connexion_clicked"
QT_MOC_LITERAL(2, 54, 0) // ""

    },
    "InterfaceAuthentification\0"
    "on_bouton_connexion_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceAuthentification[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void InterfaceAuthentification::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InterfaceAuthentification *_t = static_cast<InterfaceAuthentification *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bouton_connexion_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject InterfaceAuthentification::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_InterfaceAuthentification.data,
      qt_meta_data_InterfaceAuthentification,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InterfaceAuthentification::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceAuthentification::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceAuthentification.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int InterfaceAuthentification::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

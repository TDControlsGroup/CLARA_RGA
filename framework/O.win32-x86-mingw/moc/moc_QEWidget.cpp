/****************************************************************************
** Meta object code from reading C++ file 'QEWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEWidget/QEWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_signalSlotHandler_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_signalSlotHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_signalSlotHandler_t qt_meta_stringdata_signalSlotHandler = {
    {
QT_MOC_LITERAL(0, 0, 17), // "signalSlotHandler"
QT_MOC_LITERAL(1, 18, 11), // "saveRestore"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 37), // "SaveRestoreSignal::saveRestor..."
QT_MOC_LITERAL(4, 69, 6) // "option"

    },
    "signalSlotHandler\0saveRestore\0\0"
    "SaveRestoreSignal::saveRestoreOptions\0"
    "option"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_signalSlotHandler[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void signalSlotHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        signalSlotHandler *_t = static_cast<signalSlotHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveRestore((*reinterpret_cast< SaveRestoreSignal::saveRestoreOptions(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject signalSlotHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_signalSlotHandler.data,
      qt_meta_data_signalSlotHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *signalSlotHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *signalSlotHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_signalSlotHandler.stringdata0))
        return static_cast<void*>(const_cast< signalSlotHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int signalSlotHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE

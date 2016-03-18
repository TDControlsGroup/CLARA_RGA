/****************************************************************************
** Meta object code from reading C++ file 'arraywriter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../arraywriter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arraywriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_arrayWriter_t {
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_arrayWriter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_arrayWriter_t qt_meta_stringdata_arrayWriter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "arrayWriter"
QT_MOC_LITERAL(1, 12, 17), // "connectionChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(4, 50, 14), // "connectionInfo"
QT_MOC_LITERAL(5, 65, 3), // "log"
QT_MOC_LITERAL(6, 69, 4), // "data"
QT_MOC_LITERAL(7, 74, 3), // "len"
QT_MOC_LITERAL(8, 78, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(9, 92, 12), // "QCaDateTime&"
QT_MOC_LITERAL(10, 105, 9) // "timeStamp"

    },
    "arrayWriter\0connectionChanged\0\0"
    "QCaConnectionInfo&\0connectionInfo\0log\0"
    "data\0len\0QCaAlarmInfo&\0QCaDateTime&\0"
    "timeStamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_arrayWriter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       5,    5,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::ULong, 0x80000000 | 8, 0x80000000 | 9, QMetaType::UInt,    6,    7,    2,   10,    2,

       0        // eod
};

void arrayWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        arrayWriter *_t = static_cast<arrayWriter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 1: _t->log((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[3])),(*reinterpret_cast< QCaDateTime(*)>(_a[4])),(*reinterpret_cast< const uint(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject arrayWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_arrayWriter.data,
      qt_meta_data_arrayWriter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *arrayWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *arrayWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_arrayWriter.stringdata0))
        return static_cast<void*>(const_cast< arrayWriter*>(this));
    return QObject::qt_metacast(_clname);
}

int arrayWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

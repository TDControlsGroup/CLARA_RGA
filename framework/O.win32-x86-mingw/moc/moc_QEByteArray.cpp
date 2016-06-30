/****************************************************************************
** Meta object code from reading C++ file 'QEByteArray.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data/QEByteArray.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEByteArray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEByteArray_t {
    QByteArrayData data[17];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEByteArray_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEByteArray_t qt_meta_stringdata_QEByteArray = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QEByteArray"
QT_MOC_LITERAL(1, 12, 26), // "byteArrayConnectionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(4, 59, 14), // "connectionInfo"
QT_MOC_LITERAL(5, 74, 13), // "variableIndex"
QT_MOC_LITERAL(6, 88, 16), // "byteArrayChanged"
QT_MOC_LITERAL(7, 105, 5), // "value"
QT_MOC_LITERAL(8, 111, 8), // "dataSize"
QT_MOC_LITERAL(9, 120, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(10, 134, 9), // "alarmInfo"
QT_MOC_LITERAL(11, 144, 12), // "QCaDateTime&"
QT_MOC_LITERAL(12, 157, 9), // "timeStamp"
QT_MOC_LITERAL(13, 167, 14), // "writeByteArray"
QT_MOC_LITERAL(14, 182, 4), // "data"
QT_MOC_LITERAL(15, 187, 18), // "forwardDataChanged"
QT_MOC_LITERAL(16, 206, 24) // "forwardConnectionChanged"

    },
    "QEByteArray\0byteArrayConnectionChanged\0"
    "\0QCaConnectionInfo&\0connectionInfo\0"
    "variableIndex\0byteArrayChanged\0value\0"
    "dataSize\0QCaAlarmInfo&\0alarmInfo\0"
    "QCaDateTime&\0timeStamp\0writeByteArray\0"
    "data\0forwardDataChanged\0"
    "forwardConnectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEByteArray[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    5,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   55,    2, 0x0a /* Public */,
      15,    5,   58,    2, 0x08 /* Private */,
      16,    2,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::ULong, 0x80000000 | 9, 0x80000000 | 11, QMetaType::UInt,    7,    8,   10,   12,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::ULong, 0x80000000 | 9, 0x80000000 | 11, QMetaType::UInt,    7,    8,   10,   12,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,

       0        // eod
};

void QEByteArray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEByteArray *_t = static_cast<QEByteArray *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->byteArrayConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 1: _t->byteArrayChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[3])),(*reinterpret_cast< QCaDateTime(*)>(_a[4])),(*reinterpret_cast< const uint(*)>(_a[5]))); break;
        case 2: _t->writeByteArray((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->forwardDataChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[3])),(*reinterpret_cast< QCaDateTime(*)>(_a[4])),(*reinterpret_cast< const uint(*)>(_a[5]))); break;
        case 4: _t->forwardConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEByteArray::*_t)(QCaConnectionInfo & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEByteArray::byteArrayConnectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QEByteArray::*_t)(const QByteArray & , unsigned long , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEByteArray::byteArrayChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QEByteArray::staticMetaObject = {
    { &qcaobject::QCaObject::staticMetaObject, qt_meta_stringdata_QEByteArray.data,
      qt_meta_data_QEByteArray,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEByteArray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEByteArray::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEByteArray.stringdata0))
        return static_cast<void*>(const_cast< QEByteArray*>(this));
    return qcaobject::QCaObject::qt_metacast(_clname);
}

int QEByteArray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qcaobject::QCaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QEByteArray::byteArrayConnectionChanged(QCaConnectionInfo & _t1, const unsigned int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEByteArray::byteArrayChanged(const QByteArray & _t1, unsigned long _t2, QCaAlarmInfo & _t3, QCaDateTime & _t4, const unsigned int & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

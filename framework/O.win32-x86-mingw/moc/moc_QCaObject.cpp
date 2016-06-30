/****************************************************************************
** Meta object code from reading C++ file 'QCaObject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data/QCaObject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCaObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_qcaobject__QCaObject_t {
    QByteArrayData data[16];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qcaobject__QCaObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qcaobject__QCaObject_t qt_meta_stringdata_qcaobject__QCaObject = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qcaobject::QCaObject"
QT_MOC_LITERAL(1, 21, 11), // "dataChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "value"
QT_MOC_LITERAL(4, 40, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(5, 54, 9), // "alarmInfo"
QT_MOC_LITERAL(6, 64, 12), // "QCaDateTime&"
QT_MOC_LITERAL(7, 77, 9), // "timeStamp"
QT_MOC_LITERAL(8, 87, 13), // "variableIndex"
QT_MOC_LITERAL(9, 101, 8), // "dataSize"
QT_MOC_LITERAL(10, 110, 17), // "connectionChanged"
QT_MOC_LITERAL(11, 128, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(12, 147, 14), // "connectionInfo"
QT_MOC_LITERAL(13, 162, 9), // "writeData"
QT_MOC_LITERAL(14, 172, 14), // "resendLastData"
QT_MOC_LITERAL(15, 187, 17) // "setChannelExpired"

    },
    "qcaobject::QCaObject\0dataChanged\0\0"
    "value\0QCaAlarmInfo&\0alarmInfo\0"
    "QCaDateTime&\0timeStamp\0variableIndex\0"
    "dataSize\0connectionChanged\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "writeData\0resendLastData\0setChannelExpired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qcaobject__QCaObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   49,    2, 0x06 /* Public */,
       1,    5,   58,    2, 0x06 /* Public */,
      10,    2,   69,    2, 0x06 /* Public */,
      10,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   77,    2, 0x0a /* Public */,
      14,    0,   80,    2, 0x0a /* Public */,
      15,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 4, 0x80000000 | 6, QMetaType::UInt,    3,    5,    7,    8,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::ULong, 0x80000000 | 4, 0x80000000 | 6, QMetaType::UInt,    3,    9,    5,    7,    8,
    QMetaType::Void, 0x80000000 | 11, QMetaType::UInt,   12,    8,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Bool, QMetaType::QVariant,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void qcaobject::QCaObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCaObject *_t = static_cast<QCaObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 1: _t->dataChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[3])),(*reinterpret_cast< QCaDateTime(*)>(_a[4])),(*reinterpret_cast< const uint(*)>(_a[5]))); break;
        case 2: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 3: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1]))); break;
        case 4: { bool _r = _t->writeData((*reinterpret_cast< const QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->resendLastData(); break;
        case 6: _t->setChannelExpired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCaObject::*_t)(const QVariant & , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCaObject::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCaObject::*_t)(const QByteArray & , unsigned long , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCaObject::dataChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCaObject::*_t)(QCaConnectionInfo & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCaObject::connectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCaObject::*_t)(QCaConnectionInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCaObject::connectionChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject qcaobject::QCaObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qcaobject__QCaObject.data,
      qt_meta_data_qcaobject__QCaObject,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *qcaobject::QCaObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qcaobject::QCaObject::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_qcaobject__QCaObject.stringdata0))
        return static_cast<void*>(const_cast< QCaObject*>(this));
    if (!strcmp(_clname, "caobject::CaObject"))
        return static_cast< caobject::CaObject*>(const_cast< QCaObject*>(this));
    return QObject::qt_metacast(_clname);
}

int qcaobject::QCaObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void qcaobject::QCaObject::dataChanged(const QVariant & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qcaobject::QCaObject::dataChanged(const QByteArray & _t1, unsigned long _t2, QCaAlarmInfo & _t3, QCaDateTime & _t4, const unsigned int & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qcaobject::QCaObject::connectionChanged(QCaConnectionInfo & _t1, const unsigned int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qcaobject::QCaObject::connectionChanged(QCaConnectionInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

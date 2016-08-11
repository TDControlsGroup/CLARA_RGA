/****************************************************************************
** Meta object code from reading C++ file 'QEInteger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/data/QEInteger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEInteger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEInteger_t {
    QByteArrayData data[19];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEInteger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEInteger_t qt_meta_stringdata_QEInteger = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QEInteger"
QT_MOC_LITERAL(1, 10, 24), // "integerConnectionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(4, 55, 14), // "connectionInfo"
QT_MOC_LITERAL(5, 70, 13), // "variableIndex"
QT_MOC_LITERAL(6, 84, 14), // "integerChanged"
QT_MOC_LITERAL(7, 99, 5), // "value"
QT_MOC_LITERAL(8, 105, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(9, 119, 9), // "alarmInfo"
QT_MOC_LITERAL(10, 129, 12), // "QCaDateTime&"
QT_MOC_LITERAL(11, 142, 9), // "timeStamp"
QT_MOC_LITERAL(12, 152, 19), // "integerArrayChanged"
QT_MOC_LITERAL(13, 172, 13), // "QVector<long>"
QT_MOC_LITERAL(14, 186, 6), // "values"
QT_MOC_LITERAL(15, 193, 12), // "writeInteger"
QT_MOC_LITERAL(16, 206, 4), // "data"
QT_MOC_LITERAL(17, 211, 14), // "convertVariant"
QT_MOC_LITERAL(18, 226, 24) // "forwardConnectionChanged"

    },
    "QEInteger\0integerConnectionChanged\0\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "variableIndex\0integerChanged\0value\0"
    "QCaAlarmInfo&\0alarmInfo\0QCaDateTime&\0"
    "timeStamp\0integerArrayChanged\0"
    "QVector<long>\0values\0writeInteger\0"
    "data\0convertVariant\0forwardConnectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEInteger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    4,   49,    2, 0x06 /* Public */,
      12,    4,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   67,    2, 0x0a /* Public */,
      17,    4,   70,    2, 0x08 /* Private */,
      18,    2,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 8, 0x80000000 | 10, QMetaType::UInt,    7,    9,   11,    5,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 8, 0x80000000 | 10, QMetaType::UInt,   14,    9,   11,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Long,   16,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 8, 0x80000000 | 10, QMetaType::UInt,    7,    9,   11,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,

       0        // eod
};

void QEInteger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEInteger *_t = static_cast<QEInteger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->integerConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 1: _t->integerChanged((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 2: _t->integerArrayChanged((*reinterpret_cast< const QVector<long>(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 3: _t->writeInteger((*reinterpret_cast< const long(*)>(_a[1]))); break;
        case 4: _t->convertVariant((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 5: _t->forwardConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<long> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEInteger::*_t)(QCaConnectionInfo & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEInteger::integerConnectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QEInteger::*_t)(const long & , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEInteger::integerChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QEInteger::*_t)(const QVector<long> & , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEInteger::integerArrayChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QEInteger::staticMetaObject = {
    { &qcaobject::QCaObject::staticMetaObject, qt_meta_stringdata_QEInteger.data,
      qt_meta_data_QEInteger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEInteger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEInteger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEInteger.stringdata0))
        return static_cast<void*>(const_cast< QEInteger*>(this));
    return qcaobject::QCaObject::qt_metacast(_clname);
}

int QEInteger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qcaobject::QCaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QEInteger::integerConnectionChanged(QCaConnectionInfo & _t1, const unsigned int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEInteger::integerChanged(const long & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEInteger::integerArrayChanged(const QVector<long> & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

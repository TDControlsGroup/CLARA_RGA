/****************************************************************************
** Meta object code from reading C++ file 'QEString.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data/QEString.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEString.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEString_t {
    QByteArrayData data[20];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEString_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEString_t qt_meta_stringdata_QEString = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QEString"
QT_MOC_LITERAL(1, 9, 23), // "stringConnectionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(4, 53, 14), // "connectionInfo"
QT_MOC_LITERAL(5, 68, 13), // "variableIndex"
QT_MOC_LITERAL(6, 82, 13), // "stringChanged"
QT_MOC_LITERAL(7, 96, 5), // "value"
QT_MOC_LITERAL(8, 102, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(9, 116, 9), // "alarmInfo"
QT_MOC_LITERAL(10, 126, 12), // "QCaDateTime&"
QT_MOC_LITERAL(11, 139, 9), // "timeStamp"
QT_MOC_LITERAL(12, 149, 18), // "stringArrayChanged"
QT_MOC_LITERAL(13, 168, 16), // "QVector<QString>"
QT_MOC_LITERAL(14, 185, 6), // "values"
QT_MOC_LITERAL(15, 192, 11), // "writeString"
QT_MOC_LITERAL(16, 204, 4), // "data"
QT_MOC_LITERAL(17, 209, 18), // "writeStringElement"
QT_MOC_LITERAL(18, 228, 14), // "convertVariant"
QT_MOC_LITERAL(19, 243, 24) // "forwardConnectionChanged"

    },
    "QEString\0stringConnectionChanged\0\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "variableIndex\0stringChanged\0value\0"
    "QCaAlarmInfo&\0alarmInfo\0QCaDateTime&\0"
    "timeStamp\0stringArrayChanged\0"
    "QVector<QString>\0values\0writeString\0"
    "data\0writeStringElement\0convertVariant\0"
    "forwardConnectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEString[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       6,    4,   59,    2, 0x06 /* Public */,
      12,    4,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   77,    2, 0x0a /* Public */,
      17,    1,   80,    2, 0x0a /* Public */,
      15,    1,   83,    2, 0x0a /* Public */,
      18,    4,   86,    2, 0x08 /* Private */,
      19,    2,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 10, QMetaType::UInt,    7,    9,   11,    5,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 8, 0x80000000 | 10, QMetaType::UInt,   14,    9,   11,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 13,   16,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 8, 0x80000000 | 10, QMetaType::UInt,    7,    9,   11,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt,    4,    5,

       0        // eod
};

void QEString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEString *_t = static_cast<QEString *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stringConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 1: _t->stringChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 2: _t->stringArrayChanged((*reinterpret_cast< const QVector<QString>(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 3: _t->writeString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->writeStringElement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->writeString((*reinterpret_cast< const QVector<QString>(*)>(_a[1]))); break;
        case 6: _t->convertVariant((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 7: _t->forwardConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEString::*_t)(QCaConnectionInfo & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEString::stringConnectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QEString::*_t)(const QString & , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEString::stringChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QEString::*_t)(const QVector<QString> & , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEString::stringArrayChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QEString::staticMetaObject = {
    { &qcaobject::QCaObject::staticMetaObject, qt_meta_stringdata_QEString.data,
      qt_meta_data_QEString,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEString::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEString.stringdata0))
        return static_cast<void*>(const_cast< QEString*>(this));
    return qcaobject::QCaObject::qt_metacast(_clname);
}

int QEString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = qcaobject::QCaObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QEString::stringConnectionChanged(QCaConnectionInfo & _t1, const unsigned int & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEString::stringChanged(const QString & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEString::stringArrayChanged(const QVector<QString> & _t1, QCaAlarmInfo & _t2, QCaDateTime & _t3, const unsigned int & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

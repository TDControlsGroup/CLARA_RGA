/****************************************************************************
** Meta object code from reading C++ file 'monitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/monitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_monitor_t {
    QByteArrayData data[13];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_monitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_monitor_t qt_meta_stringdata_monitor = {
    {
QT_MOC_LITERAL(0, 0, 7), // "monitor"
QT_MOC_LITERAL(1, 8, 17), // "connectionChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(4, 46, 3), // "log"
QT_MOC_LITERAL(5, 50, 4), // "data"
QT_MOC_LITERAL(6, 55, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(7, 69, 9), // "alarmInfo"
QT_MOC_LITERAL(8, 79, 12), // "QCaDateTime&"
QT_MOC_LITERAL(9, 92, 9), // "timeStamp"
QT_MOC_LITERAL(10, 102, 5), // "value"
QT_MOC_LITERAL(11, 108, 15), // "QVector<double>"
QT_MOC_LITERAL(12, 124, 6) // "values"

    },
    "monitor\0connectionChanged\0\0"
    "QCaConnectionInfo&\0log\0data\0QCaAlarmInfo&\0"
    "alarmInfo\0QCaDateTime&\0timeStamp\0value\0"
    "QVector<double>\0values"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_monitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    4,   42,    2, 0x08 /* Private */,
       4,    4,   51,    2, 0x08 /* Private */,
       4,    4,   60,    2, 0x08 /* Private */,
       4,    4,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 8, QMetaType::UInt,    5,    7,    9,    2,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 6, 0x80000000 | 8, QMetaType::UInt,    5,    7,    9,    2,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 6, 0x80000000 | 8, QMetaType::UInt,   10,    7,    9,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 6, 0x80000000 | 8, QMetaType::UInt,   12,    7,    9,    2,

       0        // eod
};

void monitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        monitor *_t = static_cast<monitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1]))); break;
        case 1: _t->log((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 2: _t->log((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 3: _t->log((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 4: _t->log((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    }
}

const QMetaObject monitor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_monitor.data,
      qt_meta_data_monitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *monitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *monitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_monitor.stringdata0))
        return static_cast<void*>(const_cast< monitor*>(this));
    if (!strcmp(_clname, "UserMessage"))
        return static_cast< UserMessage*>(const_cast< monitor*>(this));
    return QObject::qt_metacast(_clname);
}

int monitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

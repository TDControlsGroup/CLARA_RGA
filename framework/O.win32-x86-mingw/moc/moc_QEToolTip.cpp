/****************************************************************************
** Meta object code from reading C++ file 'QEToolTip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEWidget/QEToolTip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEToolTip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEToolTipSingleton_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEToolTipSingleton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEToolTipSingleton_t qt_meta_stringdata_QEToolTipSingleton = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEToolTipSingleton"
QT_MOC_LITERAL(1, 19, 17), // "descriptionUpdate"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(5, 58, 9), // "alarmInfo"
QT_MOC_LITERAL(6, 68, 12), // "QCaDateTime&"
QT_MOC_LITERAL(7, 81, 8), // "dateTime"
QT_MOC_LITERAL(8, 90, 13) // "variableIndex"

    },
    "QEToolTipSingleton\0descriptionUpdate\0"
    "\0value\0QCaAlarmInfo&\0alarmInfo\0"
    "QCaDateTime&\0dateTime\0variableIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEToolTipSingleton[] = {

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
       1,    4,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 6, QMetaType::UInt,    3,    5,    7,    8,

       0        // eod
};

void QEToolTipSingleton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEToolTipSingleton *_t = static_cast<QEToolTipSingleton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->descriptionUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject QEToolTipSingleton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEToolTipSingleton.data,
      qt_meta_data_QEToolTipSingleton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEToolTipSingleton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEToolTipSingleton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEToolTipSingleton.stringdata0))
        return static_cast<void*>(const_cast< QEToolTipSingleton*>(this));
    return QObject::qt_metacast(_clname);
}

int QEToolTipSingleton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

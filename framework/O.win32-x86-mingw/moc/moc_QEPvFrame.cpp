/****************************************************************************
** Meta object code from reading C++ file 'QEPvFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEFrame/QEPvFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPvFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPvFrame_t {
    QByteArrayData data[22];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPvFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPvFrame_t qt_meta_stringdata_QEPvFrame = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QEPvFrame"
QT_MOC_LITERAL(1, 10, 14), // "dbValueChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "out"
QT_MOC_LITERAL(4, 30, 19), // "dbConnectionChanged"
QT_MOC_LITERAL(5, 50, 11), // "isConnected"
QT_MOC_LITERAL(6, 62, 26), // "useNewVariableNameProperty"
QT_MOC_LITERAL(7, 89, 12), // "variableName"
QT_MOC_LITERAL(8, 102, 25), // "variableNameSubstitutions"
QT_MOC_LITERAL(9, 128, 13), // "variableIndex"
QT_MOC_LITERAL(10, 142, 17), // "connectionChanged"
QT_MOC_LITERAL(11, 160, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(12, 179, 14), // "connectionInfo"
QT_MOC_LITERAL(13, 194, 13), // "pvValueUpdate"
QT_MOC_LITERAL(14, 208, 5), // "value"
QT_MOC_LITERAL(15, 214, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(16, 228, 9), // "alarmInfo"
QT_MOC_LITERAL(17, 238, 12), // "QCaDateTime&"
QT_MOC_LITERAL(18, 251, 8), // "dateTime"
QT_MOC_LITERAL(19, 260, 8), // "variable"
QT_MOC_LITERAL(20, 269, 21), // "variableSubstitutions"
QT_MOC_LITERAL(21, 291, 10) // "arrayIndex"

    },
    "QEPvFrame\0dbValueChanged\0\0out\0"
    "dbConnectionChanged\0isConnected\0"
    "useNewVariableNameProperty\0variableName\0"
    "variableNameSubstitutions\0variableIndex\0"
    "connectionChanged\0QCaConnectionInfo&\0"
    "connectionInfo\0pvValueUpdate\0value\0"
    "QCaAlarmInfo&\0alarmInfo\0QCaDateTime&\0"
    "dateTime\0variable\0variableSubstitutions\0"
    "arrayIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPvFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       1,    1,   67,    2, 0x06 /* Public */,
       1,    1,   70,    2, 0x06 /* Public */,
       1,    1,   73,    2, 0x06 /* Public */,
       1,    1,   76,    2, 0x06 /* Public */,
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   85,    2, 0x08 /* Private */,
      10,    2,   92,    2, 0x08 /* Private */,
      13,    4,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::UInt,   12,    9,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 15, 0x80000000 | 17, QMetaType::UInt,   14,   16,   18,    9,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00095003,
      20, QMetaType::QString, 0x00095003,
      21, QMetaType::Int, 0x00095103,

       0        // eod
};

void QEPvFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPvFrame *_t = static_cast<QEPvFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dbValueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->dbValueChanged((*reinterpret_cast< const long(*)>(_a[1]))); break;
        case 3: _t->dbValueChanged((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 4: _t->dbValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->dbValueChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->dbConnectionChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->useNewVariableNameProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 8: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 9: _t->pvValueUpdate((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEPvFrame::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvFrame::dbValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QEPvFrame::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvFrame::dbValueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QEPvFrame::*_t)(const long & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvFrame::dbValueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QEPvFrame::*_t)(const qlonglong & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvFrame::dbValueChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QEPvFrame::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvFrame::dbValueChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QEPvFrame::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvFrame::dbValueChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QEPvFrame::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvFrame::dbConnectionChanged)) {
                *result = 6;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEPvFrame *_t = static_cast<QEPvFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVariableNameProperty(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getVariableNameSubstitutionsProperty(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getArrayIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEPvFrame *_t = static_cast<QEPvFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVariableNameProperty(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVariableNameSubstitutionsProperty(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setArrayIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEPvFrame::staticMetaObject = {
    { &QEFrame::staticMetaObject, qt_meta_stringdata_QEPvFrame.data,
      qt_meta_data_QEPvFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPvFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPvFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPvFrame.stringdata0))
        return static_cast<void*>(const_cast< QEPvFrame*>(this));
    if (!strcmp(_clname, "QESingleVariableMethods"))
        return static_cast< QESingleVariableMethods*>(const_cast< QEPvFrame*>(this));
    return QEFrame::qt_metacast(_clname);
}

int QEPvFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QEPvFrame::dbValueChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEPvFrame::dbValueChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEPvFrame::dbValueChanged(const long & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QEPvFrame::dbValueChanged(const qlonglong & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QEPvFrame::dbValueChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QEPvFrame::dbValueChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QEPvFrame::dbConnectionChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

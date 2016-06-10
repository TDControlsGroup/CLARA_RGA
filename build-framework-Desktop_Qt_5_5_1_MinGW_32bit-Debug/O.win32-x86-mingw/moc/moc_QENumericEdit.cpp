/****************************************************************************
** Meta object code from reading C++ file 'QENumericEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QELineEdit/QENumericEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QENumericEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QENumericEdit_t {
    QByteArrayData data[21];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QENumericEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QENumericEdit_t qt_meta_stringdata_QENumericEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QENumericEdit"
QT_MOC_LITERAL(1, 14, 14), // "dbValueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "out"
QT_MOC_LITERAL(4, 34, 19), // "dbConnectionChanged"
QT_MOC_LITERAL(5, 54, 11), // "isConnected"
QT_MOC_LITERAL(6, 66, 14), // "setDoubleValue"
QT_MOC_LITERAL(7, 81, 5), // "value"
QT_MOC_LITERAL(8, 87, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(9, 101, 12), // "QCaDateTime&"
QT_MOC_LITERAL(10, 114, 9), // "autoScale"
QT_MOC_LITERAL(11, 124, 5), // "radix"
QT_MOC_LITERAL(12, 130, 27), // "QEFixedPointRadix::Radicies"
QT_MOC_LITERAL(13, 158, 9), // "separator"
QT_MOC_LITERAL(14, 168, 29), // "QEFixedPointRadix::Separators"
QT_MOC_LITERAL(15, 198, 9), // "precision"
QT_MOC_LITERAL(16, 208, 12), // "leadingZeros"
QT_MOC_LITERAL(17, 221, 7), // "minimum"
QT_MOC_LITERAL(18, 229, 7), // "maximum"
QT_MOC_LITERAL(19, 237, 8), // "addUnits"
QT_MOC_LITERAL(20, 246, 10) // "arrayIndex"

    },
    "QENumericEdit\0dbValueChanged\0\0out\0"
    "dbConnectionChanged\0isConnected\0"
    "setDoubleValue\0value\0QCaAlarmInfo&\0"
    "QCaDateTime&\0autoScale\0radix\0"
    "QEFixedPointRadix::Radicies\0separator\0"
    "QEFixedPointRadix::Separators\0precision\0"
    "leadingZeros\0minimum\0maximum\0addUnits\0"
    "arrayIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QENumericEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       9,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       1,    1,   57,    2, 0x06 /* Public */,
       1,    1,   60,    2, 0x06 /* Public */,
       1,    1,   63,    2, 0x06 /* Public */,
       1,    1,   66,    2, 0x06 /* Public */,
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    4,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, 0x80000000 | 8, 0x80000000 | 9, QMetaType::UInt,    7,    2,    2,    2,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095103,
      11, 0x80000000 | 12, 0x0009510b,
      13, 0x80000000 | 14, 0x0009510b,
      15, QMetaType::Int, 0x00095003,
      16, QMetaType::Int, 0x00095003,
      17, QMetaType::Double, 0x00095003,
      18, QMetaType::Double, 0x00095003,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Int, 0x00095103,

       0        // eod
};

void QENumericEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QENumericEdit *_t = static_cast<QENumericEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dbValueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->dbValueChanged((*reinterpret_cast< const long(*)>(_a[1]))); break;
        case 3: _t->dbValueChanged((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 4: _t->dbValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->dbValueChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->dbConnectionChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->setDoubleValue((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QENumericEdit::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QENumericEdit::dbValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QENumericEdit::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QENumericEdit::dbValueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QENumericEdit::*_t)(const long & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QENumericEdit::dbValueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QENumericEdit::*_t)(const qlonglong & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QENumericEdit::dbValueChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QENumericEdit::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QENumericEdit::dbValueChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QENumericEdit::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QENumericEdit::dbValueChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QENumericEdit::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QENumericEdit::dbConnectionChanged)) {
                *result = 6;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QENumericEdit *_t = static_cast<QENumericEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getAutoScale(); break;
        case 1: *reinterpret_cast< QEFixedPointRadix::Radicies*>(_v) = _t->getRadix(); break;
        case 2: *reinterpret_cast< QEFixedPointRadix::Separators*>(_v) = _t->getSeparator(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getPropertyPrecision(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getPropertyLeadingZeros(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getPropertyMinimum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getPropertyMaximum(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getAddUnits(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getArrayIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QENumericEdit *_t = static_cast<QENumericEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoScale(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setRadix(*reinterpret_cast< QEFixedPointRadix::Radicies*>(_v)); break;
        case 2: _t->setSeparator(*reinterpret_cast< QEFixedPointRadix::Separators*>(_v)); break;
        case 3: _t->setPropertyPrecision(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setPropertyLeadingZeros(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPropertyMinimum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setPropertyMaximum(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setAddUnits(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setArrayIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QENumericEdit[] = {
        &QEFixedPointRadix::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QENumericEdit::staticMetaObject = {
    { &QEGenericEdit::staticMetaObject, qt_meta_stringdata_QENumericEdit.data,
      qt_meta_data_QENumericEdit,  qt_static_metacall, qt_meta_extradata_QENumericEdit, Q_NULLPTR}
};


const QMetaObject *QENumericEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QENumericEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QENumericEdit.stringdata0))
        return static_cast<void*>(const_cast< QENumericEdit*>(this));
    return QEGenericEdit::qt_metacast(_clname);
}

int QENumericEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEGenericEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QENumericEdit::dbValueChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QENumericEdit::dbValueChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QENumericEdit::dbValueChanged(const long & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QENumericEdit::dbValueChanged(const qlonglong & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QENumericEdit::dbValueChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QENumericEdit::dbValueChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QENumericEdit::dbConnectionChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

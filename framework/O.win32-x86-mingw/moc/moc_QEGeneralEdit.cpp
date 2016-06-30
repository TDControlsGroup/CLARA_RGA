/****************************************************************************
** Meta object code from reading C++ file 'QEGeneralEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEGeneralEdit/QEGeneralEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEGeneralEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEGeneralEdit_t {
    QByteArrayData data[17];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEGeneralEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEGeneralEdit_t qt_meta_stringdata_QEGeneralEdit = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QEGeneralEdit"
QT_MOC_LITERAL(1, 14, 26), // "useNewVariableNameProperty"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 14), // "variableNameIn"
QT_MOC_LITERAL(4, 57, 27), // "variableNameSubstitutionsIn"
QT_MOC_LITERAL(5, 85, 13), // "variableIndex"
QT_MOC_LITERAL(6, 99, 17), // "connectionChanged"
QT_MOC_LITERAL(7, 117, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(8, 136, 14), // "connectionInfo"
QT_MOC_LITERAL(9, 151, 11), // "dataChanged"
QT_MOC_LITERAL(10, 163, 5), // "value"
QT_MOC_LITERAL(11, 169, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(12, 183, 9), // "alarmInfo"
QT_MOC_LITERAL(13, 193, 12), // "QCaDateTime&"
QT_MOC_LITERAL(14, 206, 9), // "timeStamp"
QT_MOC_LITERAL(15, 216, 8), // "variable"
QT_MOC_LITERAL(16, 225, 21) // "variableSubstitutions"

    },
    "QEGeneralEdit\0useNewVariableNameProperty\0"
    "\0variableNameIn\0variableNameSubstitutionsIn\0"
    "variableIndex\0connectionChanged\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "dataChanged\0value\0QCaAlarmInfo&\0"
    "alarmInfo\0QCaDateTime&\0timeStamp\0"
    "variable\0variableSubstitutions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEGeneralEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x08 /* Private */,
       6,    2,   36,    2, 0x08 /* Private */,
       9,    4,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::UInt,    8,    5,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 11, 0x80000000 | 13, QMetaType::UInt,   10,   12,   14,    5,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095003,
      16, QMetaType::QString, 0x00095003,

       0        // eod
};

void QEGeneralEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEGeneralEdit *_t = static_cast<QEGeneralEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->useNewVariableNameProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 2: _t->dataChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEGeneralEdit *_t = static_cast<QEGeneralEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVariableNameProperty(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getVariableNameSubstitutionsProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEGeneralEdit *_t = static_cast<QEGeneralEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVariableNameProperty(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVariableNameSubstitutionsProperty(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEGeneralEdit::staticMetaObject = {
    { &QEFrame::staticMetaObject, qt_meta_stringdata_QEGeneralEdit.data,
      qt_meta_data_QEGeneralEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEGeneralEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEGeneralEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEGeneralEdit.stringdata0))
        return static_cast<void*>(const_cast< QEGeneralEdit*>(this));
    return QEFrame::qt_metacast(_clname);
}

int QEGeneralEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

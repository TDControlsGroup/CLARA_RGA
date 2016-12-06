/****************************************************************************
** Meta object code from reading C++ file 'QRadioGroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QERadioGroup/QRadioGroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QRadioGroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QRadioGroup_t {
    QByteArrayData data[20];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRadioGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRadioGroup_t qt_meta_stringdata_QRadioGroup = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QRadioGroup"
QT_MOC_LITERAL(1, 12, 12), // "valueChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "value"
QT_MOC_LITERAL(4, 32, 8), // "setValue"
QT_MOC_LITERAL(5, 41, 13), // "buttonClicked"
QT_MOC_LITERAL(6, 55, 7), // "checked"
QT_MOC_LITERAL(7, 63, 11), // "buttonStyle"
QT_MOC_LITERAL(8, 75, 25), // "QRadioGroup::ButtonStyles"
QT_MOC_LITERAL(9, 101, 11), // "buttonOrder"
QT_MOC_LITERAL(10, 113, 25), // "QRadioGroup::ButtonOrders"
QT_MOC_LITERAL(11, 139, 7), // "columns"
QT_MOC_LITERAL(12, 147, 7), // "spacing"
QT_MOC_LITERAL(13, 155, 7), // "strings"
QT_MOC_LITERAL(14, 163, 12), // "ButtonStyles"
QT_MOC_LITERAL(15, 176, 5), // "Radio"
QT_MOC_LITERAL(16, 182, 4), // "Push"
QT_MOC_LITERAL(17, 187, 12), // "ButtonOrders"
QT_MOC_LITERAL(18, 200, 8), // "rowMajor"
QT_MOC_LITERAL(19, 209, 8) // "colMajor"

    },
    "QRadioGroup\0valueChanged\0\0value\0"
    "setValue\0buttonClicked\0checked\0"
    "buttonStyle\0QRadioGroup::ButtonStyles\0"
    "buttonOrder\0QRadioGroup::ButtonOrders\0"
    "columns\0spacing\0strings\0ButtonStyles\0"
    "Radio\0Push\0ButtonOrders\0rowMajor\0"
    "colMajor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRadioGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       6,   38, // properties
       2,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0009510b,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::QStringList, 0x00095103,
       3, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
      14, 0x0,    2,   64,
      17, 0x0,    2,   68,

 // enum data: key, value
      15, uint(QRadioGroup::Radio),
      16, uint(QRadioGroup::Push),
      18, uint(QRadioGroup::rowMajor),
      19, uint(QRadioGroup::colMajor),

       0        // eod
};

void QRadioGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRadioGroup *_t = static_cast<QRadioGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->buttonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QRadioGroup::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QRadioGroup::valueChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRadioGroup *_t = static_cast<QRadioGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRadioGroup::ButtonStyles*>(_v) = _t->getButtonStyle(); break;
        case 1: *reinterpret_cast< QRadioGroup::ButtonOrders*>(_v) = _t->getButtonOrder(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getColumns(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getSpacing(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->getStrings(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRadioGroup *_t = static_cast<QRadioGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setButtonStyle(*reinterpret_cast< QRadioGroup::ButtonStyles*>(_v)); break;
        case 1: _t->setButtonOrder(*reinterpret_cast< QRadioGroup::ButtonOrders*>(_v)); break;
        case 2: _t->setColumns(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setStrings(*reinterpret_cast< QStringList*>(_v)); break;
        case 5: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QRadioGroup::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QRadioGroup.data,
      qt_meta_data_QRadioGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QRadioGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRadioGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QRadioGroup.stringdata0))
        return static_cast<void*>(const_cast< QRadioGroup*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QRadioGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QRadioGroup::valueChanged(const int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

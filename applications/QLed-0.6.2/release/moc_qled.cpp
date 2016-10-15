/****************************************************************************
** Meta object code from reading C++ file 'qled.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qled.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLed_t {
    QByteArrayData data[24];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLed_t qt_meta_stringdata_QLed = {
    {
QT_MOC_LITERAL(0, 0, 4), // "QLed"
QT_MOC_LITERAL(1, 5, 8), // "setValue"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 10), // "setOnColor"
QT_MOC_LITERAL(4, 26, 8), // "ledColor"
QT_MOC_LITERAL(5, 35, 11), // "setOffColor"
QT_MOC_LITERAL(6, 47, 8), // "setShape"
QT_MOC_LITERAL(7, 56, 8), // "ledShape"
QT_MOC_LITERAL(8, 65, 11), // "toggleValue"
QT_MOC_LITERAL(9, 77, 5), // "value"
QT_MOC_LITERAL(10, 83, 7), // "onColor"
QT_MOC_LITERAL(11, 91, 8), // "offColor"
QT_MOC_LITERAL(12, 100, 5), // "shape"
QT_MOC_LITERAL(13, 106, 3), // "Red"
QT_MOC_LITERAL(14, 110, 5), // "Green"
QT_MOC_LITERAL(15, 116, 6), // "Yellow"
QT_MOC_LITERAL(16, 123, 4), // "Grey"
QT_MOC_LITERAL(17, 128, 6), // "Orange"
QT_MOC_LITERAL(18, 135, 6), // "Purple"
QT_MOC_LITERAL(19, 142, 4), // "Blue"
QT_MOC_LITERAL(20, 147, 6), // "Circle"
QT_MOC_LITERAL(21, 154, 6), // "Square"
QT_MOC_LITERAL(22, 161, 8), // "Triangle"
QT_MOC_LITERAL(23, 170, 7) // "Rounded"

    },
    "QLed\0setValue\0\0setOnColor\0ledColor\0"
    "setOffColor\0setShape\0ledShape\0toggleValue\0"
    "value\0onColor\0offColor\0shape\0Red\0Green\0"
    "Yellow\0Grey\0Orange\0Purple\0Blue\0Circle\0"
    "Square\0Triangle\0Rounded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       3,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, 0x80000000 | 4, 0x0009510b,
      11, 0x80000000 | 4, 0x0009510b,
      12, 0x80000000 | 7, 0x0009510b,

 // enums: name, flags, count, data
       4, 0x0,    7,   72,
       7, 0x0,    4,   86,

 // enum data: key, value
      13, uint(QLed::Red),
      14, uint(QLed::Green),
      15, uint(QLed::Yellow),
      16, uint(QLed::Grey),
      17, uint(QLed::Orange),
      18, uint(QLed::Purple),
      19, uint(QLed::Blue),
      20, uint(QLed::Circle),
      21, uint(QLed::Square),
      22, uint(QLed::Triangle),
      23, uint(QLed::Rounded),

       0        // eod
};

void QLed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLed *_t = static_cast<QLed *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setOnColor((*reinterpret_cast< ledColor(*)>(_a[1]))); break;
        case 2: _t->setOffColor((*reinterpret_cast< ledColor(*)>(_a[1]))); break;
        case 3: _t->setShape((*reinterpret_cast< ledShape(*)>(_a[1]))); break;
        case 4: _t->toggleValue(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QLed *_t = static_cast<QLed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< ledColor*>(_v) = _t->onColor(); break;
        case 2: *reinterpret_cast< ledColor*>(_v) = _t->offColor(); break;
        case 3: *reinterpret_cast< ledShape*>(_v) = _t->shape(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLed *_t = static_cast<QLed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOnColor(*reinterpret_cast< ledColor*>(_v)); break;
        case 2: _t->setOffColor(*reinterpret_cast< ledColor*>(_v)); break;
        case 3: _t->setShape(*reinterpret_cast< ledShape*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QLed::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QLed.data,
      qt_meta_data_QLed,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLed::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLed.stringdata0))
        return static_cast<void*>(const_cast< QLed*>(this));
    return QWidget::qt_metacast(_clname);
}

int QLed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

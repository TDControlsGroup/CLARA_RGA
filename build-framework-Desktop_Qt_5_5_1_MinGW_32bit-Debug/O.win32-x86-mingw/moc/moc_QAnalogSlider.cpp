/****************************************************************************
** Meta object code from reading C++ file 'QAnalogSlider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEAnalogSlider/QAnalogSlider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QAnalogSlider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAnalogSlider_t {
    QByteArrayData data[22];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAnalogSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAnalogSlider_t qt_meta_stringdata_QAnalogSlider = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QAnalogSlider"
QT_MOC_LITERAL(1, 14, 12), // "valueChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "value"
QT_MOC_LITERAL(4, 34, 12), // "appliedValue"
QT_MOC_LITERAL(5, 47, 8), // "setValue"
QT_MOC_LITERAL(6, 56, 18), // "applyButtonClicked"
QT_MOC_LITERAL(7, 75, 21), // "sliderPositionChanged"
QT_MOC_LITERAL(8, 97, 4), // "posn"
QT_MOC_LITERAL(9, 102, 17), // "saveButtonClicked"
QT_MOC_LITERAL(10, 120, 19), // "revertButtonClicked"
QT_MOC_LITERAL(11, 140, 9), // "precision"
QT_MOC_LITERAL(12, 150, 7), // "minimum"
QT_MOC_LITERAL(13, 158, 7), // "maximum"
QT_MOC_LITERAL(14, 166, 13), // "minorInterval"
QT_MOC_LITERAL(15, 180, 13), // "majorInterval"
QT_MOC_LITERAL(16, 194, 8), // "tracking"
QT_MOC_LITERAL(17, 203, 8), // "leftText"
QT_MOC_LITERAL(18, 212, 10), // "centreText"
QT_MOC_LITERAL(19, 223, 9), // "rightText"
QT_MOC_LITERAL(20, 233, 14), // "showSaveRevert"
QT_MOC_LITERAL(21, 248, 9) // "showApply"

    },
    "QAnalogSlider\0valueChanged\0\0value\0"
    "appliedValue\0setValue\0applyButtonClicked\0"
    "sliderPositionChanged\0posn\0saveButtonClicked\0"
    "revertButtonClicked\0precision\0minimum\0"
    "maximum\0minorInterval\0majorInterval\0"
    "tracking\0leftText\0centreText\0rightText\0"
    "showSaveRevert\0showApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAnalogSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      12,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x09 /* Protected */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00095103,
      11, QMetaType::Int, 0x00095003,
      12, QMetaType::Double, 0x00095003,
      13, QMetaType::Double, 0x00095003,
      14, QMetaType::Double, 0x00095103,
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::QString, 0x00095103,
      18, QMetaType::QString, 0x00095103,
      19, QMetaType::QString, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QAnalogSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAnalogSlider *_t = static_cast<QAnalogSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->appliedValue((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->applyButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sliderPositionChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->saveButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->revertButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAnalogSlider::*_t)(const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAnalogSlider::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QAnalogSlider::*_t)(const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAnalogSlider::appliedValue)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAnalogSlider *_t = static_cast<QAnalogSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getDesignPrecision(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getDesignMinimum(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getDesignMaximum(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getMinorInterval(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getMajorInterval(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getLeftText(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getCentreText(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getRightText(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getShowSaveRevert(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getShowApply(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAnalogSlider *_t = static_cast<QAnalogSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setDesignPrecision(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setDesignMinimum(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setDesignMaximum(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setMinorInterval(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMajorInterval(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setLeftText(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setCentreText(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setRightText(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setShowSaveRevert(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setShowApply(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAnalogSlider::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QAnalogSlider.data,
      qt_meta_data_QAnalogSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAnalogSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAnalogSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAnalogSlider.stringdata0))
        return static_cast<void*>(const_cast< QAnalogSlider*>(this));
    return QFrame::qt_metacast(_clname);
}

int QAnalogSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAnalogSlider::valueChanged(const double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAnalogSlider::appliedValue(const double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

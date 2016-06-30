/****************************************************************************
** Meta object code from reading C++ file 'QEHistogram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEHistogram/QEHistogram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEHistogram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEHistogram_t {
    QByteArrayData data[26];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEHistogram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEHistogram_t qt_meta_stringdata_QEHistogram = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QEHistogram"
QT_MOC_LITERAL(1, 12, 9), // "setColour"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "index"
QT_MOC_LITERAL(4, 29, 5), // "value"
QT_MOC_LITERAL(5, 35, 8), // "setValue"
QT_MOC_LITERAL(6, 44, 9), // "setValues"
QT_MOC_LITERAL(7, 54, 9), // "DataArray"
QT_MOC_LITERAL(8, 64, 6), // "values"
QT_MOC_LITERAL(9, 71, 21), // "scrollBarValueChanged"
QT_MOC_LITERAL(10, 93, 16), // "autoBarGapWidths"
QT_MOC_LITERAL(11, 110, 8), // "barWidth"
QT_MOC_LITERAL(12, 119, 3), // "gap"
QT_MOC_LITERAL(13, 123, 9), // "autoScale"
QT_MOC_LITERAL(14, 133, 7), // "minimum"
QT_MOC_LITERAL(15, 141, 7), // "maximum"
QT_MOC_LITERAL(16, 149, 8), // "baseLine"
QT_MOC_LITERAL(17, 158, 9), // "showScale"
QT_MOC_LITERAL(18, 168, 8), // "showGrid"
QT_MOC_LITERAL(19, 177, 8), // "logScale"
QT_MOC_LITERAL(20, 186, 16), // "backgroundColour"
QT_MOC_LITERAL(21, 203, 9), // "barColour"
QT_MOC_LITERAL(22, 213, 10), // "drawBorder"
QT_MOC_LITERAL(23, 224, 11), // "orientation"
QT_MOC_LITERAL(24, 236, 15), // "Qt::Orientation"
QT_MOC_LITERAL(25, 252, 8) // "testSize"

    },
    "QEHistogram\0setColour\0\0index\0value\0"
    "setValue\0setValues\0DataArray\0values\0"
    "scrollBarValueChanged\0autoBarGapWidths\0"
    "barWidth\0gap\0autoScale\0minimum\0maximum\0"
    "baseLine\0showScale\0showGrid\0logScale\0"
    "backgroundColour\0barColour\0drawBorder\0"
    "orientation\0Qt::Orientation\0testSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEHistogram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      15,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x0a /* Public */,
       5,    2,   39,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       9,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::Double, 0x00095103,
      15, QMetaType::Double, 0x00095103,
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::QColor, 0x00095103,
      21, QMetaType::QColor, 0x00095103,
      22, QMetaType::Bool, 0x00095103,
      23, 0x80000000 | 24, 0x0009510b,
      25, QMetaType::Int, 0x00095103,

       0        // eod
};

void QEHistogram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEHistogram *_t = static_cast<QEHistogram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setColour((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 1: _t->setValue((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 2: _t->setValues((*reinterpret_cast< const DataArray(*)>(_a[1]))); break;
        case 3: _t->scrollBarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEHistogram *_t = static_cast<QEHistogram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getAutoBarGapWidths(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getBarWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getGap(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getAutoScale(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->getMinimum(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->getMaximum(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getBaseLine(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getShowScale(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getShowGrid(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getLogScale(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->getBackgroundColour(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->getBarColour(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getDrawBorder(); break;
        case 13: *reinterpret_cast< Qt::Orientation*>(_v) = _t->getOrientation(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->getTestSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEHistogram *_t = static_cast<QEHistogram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoBarGapWidths(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setBarWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setGap(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAutoScale(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setBaseLine(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setShowScale(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setShowGrid(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setLogScale(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setBackgroundColour(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setBarColour(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->setDrawBorder(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 14: _t->setTestSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEHistogram::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QEHistogram.data,
      qt_meta_data_QEHistogram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEHistogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEHistogram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEHistogram.stringdata0))
        return static_cast<void*>(const_cast< QEHistogram*>(this));
    return QFrame::qt_metacast(_clname);
}

int QEHistogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'QBitStatus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEBitStatus/QBitStatus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QBitStatus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBitStatus_t {
    QByteArrayData data[28];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBitStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBitStatus_t qt_meta_stringdata_QBitStatus = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QBitStatus"
QT_MOC_LITERAL(1, 11, 8), // "setValue"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "value"
QT_MOC_LITERAL(4, 27, 12), // "numberOfBits"
QT_MOC_LITERAL(5, 40, 5), // "shift"
QT_MOC_LITERAL(6, 46, 11), // "Orientation"
QT_MOC_LITERAL(7, 58, 12), // "Orientations"
QT_MOC_LITERAL(8, 71, 5), // "shape"
QT_MOC_LITERAL(9, 77, 6), // "Shapes"
QT_MOC_LITERAL(10, 84, 3), // "gap"
QT_MOC_LITERAL(11, 88, 19), // "reversePolarityMask"
QT_MOC_LITERAL(12, 108, 11), // "onClearMask"
QT_MOC_LITERAL(13, 120, 12), // "offClearMask"
QT_MOC_LITERAL(14, 133, 13), // "boarderColour"
QT_MOC_LITERAL(15, 147, 13), // "invalidColour"
QT_MOC_LITERAL(16, 161, 8), // "onColour"
QT_MOC_LITERAL(17, 170, 9), // "offColour"
QT_MOC_LITERAL(18, 180, 11), // "clearColour"
QT_MOC_LITERAL(19, 192, 10), // "drawBorder"
QT_MOC_LITERAL(20, 203, 7), // "isValid"
QT_MOC_LITERAL(21, 211, 8), // "isActive"
QT_MOC_LITERAL(22, 220, 12), // "LSB_On_Right"
QT_MOC_LITERAL(23, 233, 13), // "LSB_On_Bottom"
QT_MOC_LITERAL(24, 247, 11), // "LSB_On_Left"
QT_MOC_LITERAL(25, 259, 10), // "LSB_On_Top"
QT_MOC_LITERAL(26, 270, 9), // "Rectangle"
QT_MOC_LITERAL(27, 280, 6) // "Circle"

    },
    "QBitStatus\0setValue\0\0value\0numberOfBits\0"
    "shift\0Orientation\0Orientations\0shape\0"
    "Shapes\0gap\0reversePolarityMask\0"
    "onClearMask\0offClearMask\0boarderColour\0"
    "invalidColour\0onColour\0offColour\0"
    "clearColour\0drawBorder\0isValid\0isActive\0"
    "LSB_On_Right\0LSB_On_Bottom\0LSB_On_Left\0"
    "LSB_On_Top\0Rectangle\0Circle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBitStatus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      17,   22, // properties
       2,   73, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, 0x80000000 | 7, 0x0009510b,
       8, 0x80000000 | 9, 0x0009510b,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::QColor, 0x00095003,
      15, QMetaType::QColor, 0x00095103,
      16, QMetaType::QColor, 0x00095103,
      17, QMetaType::QColor, 0x00095103,
      18, QMetaType::QColor, 0x00095103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
       7, 0x0,    4,   81,
       9, 0x0,    2,   89,

 // enum data: key, value
      22, uint(QBitStatus::LSB_On_Right),
      23, uint(QBitStatus::LSB_On_Bottom),
      24, uint(QBitStatus::LSB_On_Left),
      25, uint(QBitStatus::LSB_On_Top),
      26, uint(QBitStatus::Rectangle),
      27, uint(QBitStatus::Circle),

       0        // eod
};

void QBitStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBitStatus *_t = static_cast<QBitStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QBitStatus *_t = static_cast<QBitStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getNumberOfBits(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getShift(); break;
        case 3: *reinterpret_cast< Orientations*>(_v) = _t->getOrientation(); break;
        case 4: *reinterpret_cast< Shapes*>(_v) = _t->getShape(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getGap(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getReversePolarityMask(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getOnClearMask(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getOffClearMask(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->getBorderColour(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->getInvalidColour(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->getOnColour(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = _t->getOffColour(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = _t->getClearColour(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getDrawBorder(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getIsValid(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getIsActive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QBitStatus *_t = static_cast<QBitStatus *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setNumberOfBits(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setShift(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setOrientation(*reinterpret_cast< Orientations*>(_v)); break;
        case 4: _t->setShape(*reinterpret_cast< Shapes*>(_v)); break;
        case 5: _t->setGap(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setReversePolarityMask(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setOnClearMask(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setOffClearMask(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setBorderColour(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setInvalidColour(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setOnColour(*reinterpret_cast< QColor*>(_v)); break;
        case 12: _t->setOffColour(*reinterpret_cast< QColor*>(_v)); break;
        case 13: _t->setClearColour(*reinterpret_cast< QColor*>(_v)); break;
        case 14: _t->setDrawBorder(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setIsValid(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setIsActive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QBitStatus::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QBitStatus.data,
      qt_meta_data_QBitStatus,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBitStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBitStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBitStatus.stringdata0))
        return static_cast<void*>(const_cast< QBitStatus*>(this));
    return QWidget::qt_metacast(_clname);
}

int QBitStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

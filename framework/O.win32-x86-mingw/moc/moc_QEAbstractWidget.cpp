/****************************************************************************
** Meta object code from reading C++ file 'QEAbstractWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEAbstractWidget/QEAbstractWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEAbstractWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEAbstractWidget_t {
    QByteArrayData data[25];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEAbstractWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEAbstractWidget_t qt_meta_stringdata_QEAbstractWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QEAbstractWidget"
QT_MOC_LITERAL(1, 17, 17), // "setManagedVisible"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 1), // "v"
QT_MOC_LITERAL(4, 38, 17), // "variableAsToolTip"
QT_MOC_LITERAL(5, 56, 9), // "allowDrop"
QT_MOC_LITERAL(6, 66, 7), // "visible"
QT_MOC_LITERAL(7, 74, 15), // "messageSourceId"
QT_MOC_LITERAL(8, 90, 10), // "styleSheet"
QT_MOC_LITERAL(9, 101, 12), // "defaultStyle"
QT_MOC_LITERAL(10, 114, 18), // "userLevelUserStyle"
QT_MOC_LITERAL(11, 133, 23), // "userLevelScientistStyle"
QT_MOC_LITERAL(12, 157, 22), // "userLevelEngineerStyle"
QT_MOC_LITERAL(13, 180, 19), // "userLevelVisibility"
QT_MOC_LITERAL(14, 200, 10), // "UserLevels"
QT_MOC_LITERAL(15, 211, 16), // "userLevelEnabled"
QT_MOC_LITERAL(16, 228, 17), // "displayAlarmState"
QT_MOC_LITERAL(17, 246, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(18, 270, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(19, 295, 4), // "User"
QT_MOC_LITERAL(20, 300, 9), // "Scientist"
QT_MOC_LITERAL(21, 310, 8), // "Engineer"
QT_MOC_LITERAL(22, 319, 5), // "Never"
QT_MOC_LITERAL(23, 325, 6), // "Always"
QT_MOC_LITERAL(24, 332, 11) // "WhenInAlarm"

    },
    "QEAbstractWidget\0setManagedVisible\0\0"
    "v\0variableAsToolTip\0allowDrop\0visible\0"
    "messageSourceId\0styleSheet\0defaultStyle\0"
    "userLevelUserStyle\0userLevelScientistStyle\0"
    "userLevelEngineerStyle\0userLevelVisibility\0"
    "UserLevels\0userLevelEnabled\0"
    "displayAlarmState\0displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0User\0Scientist\0"
    "Engineer\0Never\0Always\0WhenInAlarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEAbstractWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      13,   22, // properties
       2,   61, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095003,
       7, QMetaType::UInt, 0x00095103,
       8, QMetaType::QString, 0x00094103,
       9, QMetaType::QString, 0x00095003,
      10, QMetaType::QString, 0x00095003,
      11, QMetaType::QString, 0x00095003,
      12, QMetaType::QString, 0x00095003,
      13, 0x80000000 | 14, 0x0009500b,
      15, 0x80000000 | 14, 0x0009500b,
      16, QMetaType::Bool, 0x00094103,
      17, 0x80000000 | 18, 0x0009500b,

 // enums: name, flags, count, data
      14, 0x0,    3,   69,
      18, 0x0,    3,   75,

 // enum data: key, value
      19, uint(QEAbstractWidget::User),
      20, uint(QEAbstractWidget::Scientist),
      21, uint(QEAbstractWidget::Engineer),
      22, uint(QEAbstractWidget::Never),
      23, uint(QEAbstractWidget::Always),
      24, uint(QEAbstractWidget::WhenInAlarm),

       0        // eod
};

void QEAbstractWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEAbstractWidget *_t = static_cast<QEAbstractWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setManagedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEAbstractWidget *_t = static_cast<QEAbstractWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getVariableAsToolTip(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getAllowDrop(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getRunVisible(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->getMessageSourceId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->styleSheet(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getStyleDefault(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getStyleUser(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getStyleScientist(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getStyleEngineer(); break;
        case 9: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelVisibilityProperty(); break;
        case 10: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelEnabledProperty(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getDisplayAlarmState(); break;
        case 12: *reinterpret_cast< DisplayAlarmStateOptions*>(_v) = _t->getDisplayAlarmStateOptionProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEAbstractWidget *_t = static_cast<QEAbstractWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVariableAsToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAllowDrop(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setRunVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMessageSourceId(*reinterpret_cast< uint*>(_v)); break;
        case 4: _t->setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setStyleDefault(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setStyleUser(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setStyleScientist(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setStyleEngineer(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setUserLevelVisibilityProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 10: _t->setUserLevelEnabledProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 11: _t->setDisplayAlarmState(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setDisplayAlarmStateOptionProperty(*reinterpret_cast< DisplayAlarmStateOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEAbstractWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEAbstractWidget.data,
      qt_meta_data_QEAbstractWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEAbstractWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEAbstractWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEAbstractWidget.stringdata0))
        return static_cast<void*>(const_cast< QEAbstractWidget*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QEAbstractWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEAbstractWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

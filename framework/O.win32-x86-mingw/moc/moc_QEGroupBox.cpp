/****************************************************************************
** Meta object code from reading C++ file 'QEGroupBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEGroupBox/QEGroupBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEGroupBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEGroupBox_t {
    QByteArrayData data[27];
    char stringdata0[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEGroupBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEGroupBox_t qt_meta_stringdata_QEGroupBox = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QEGroupBox"
QT_MOC_LITERAL(1, 11, 17), // "setManagedVisible"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 1), // "v"
QT_MOC_LITERAL(4, 32, 17), // "variableAsToolTip"
QT_MOC_LITERAL(5, 50, 9), // "allowDrop"
QT_MOC_LITERAL(6, 60, 7), // "visible"
QT_MOC_LITERAL(7, 68, 15), // "messageSourceId"
QT_MOC_LITERAL(8, 84, 10), // "styleSheet"
QT_MOC_LITERAL(9, 95, 12), // "defaultStyle"
QT_MOC_LITERAL(10, 108, 18), // "userLevelUserStyle"
QT_MOC_LITERAL(11, 127, 23), // "userLevelScientistStyle"
QT_MOC_LITERAL(12, 151, 22), // "userLevelEngineerStyle"
QT_MOC_LITERAL(13, 174, 19), // "userLevelVisibility"
QT_MOC_LITERAL(14, 194, 10), // "UserLevels"
QT_MOC_LITERAL(15, 205, 16), // "userLevelEnabled"
QT_MOC_LITERAL(16, 222, 17), // "displayAlarmState"
QT_MOC_LITERAL(17, 240, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(18, 264, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(19, 289, 16), // "substitutedTitle"
QT_MOC_LITERAL(20, 306, 17), // "textSubstitutions"
QT_MOC_LITERAL(21, 324, 4), // "User"
QT_MOC_LITERAL(22, 329, 9), // "Scientist"
QT_MOC_LITERAL(23, 339, 8), // "Engineer"
QT_MOC_LITERAL(24, 348, 5), // "Never"
QT_MOC_LITERAL(25, 354, 6), // "Always"
QT_MOC_LITERAL(26, 361, 11) // "WhenInAlarm"

    },
    "QEGroupBox\0setManagedVisible\0\0v\0"
    "variableAsToolTip\0allowDrop\0visible\0"
    "messageSourceId\0styleSheet\0defaultStyle\0"
    "userLevelUserStyle\0userLevelScientistStyle\0"
    "userLevelEngineerStyle\0userLevelVisibility\0"
    "UserLevels\0userLevelEnabled\0"
    "displayAlarmState\0displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0substitutedTitle\0"
    "textSubstitutions\0User\0Scientist\0"
    "Engineer\0Never\0Always\0WhenInAlarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEGroupBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      15,   22, // properties
       2,   67, // enums/sets
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
      19, QMetaType::QString, 0x00095003,
      20, QMetaType::QString, 0x00095003,

 // enums: name, flags, count, data
      14, 0x0,    3,   75,
      18, 0x0,    3,   81,

 // enum data: key, value
      21, uint(QEGroupBox::User),
      22, uint(QEGroupBox::Scientist),
      23, uint(QEGroupBox::Engineer),
      24, uint(QEGroupBox::Never),
      25, uint(QEGroupBox::Always),
      26, uint(QEGroupBox::WhenInAlarm),

       0        // eod
};

void QEGroupBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEGroupBox *_t = static_cast<QEGroupBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setManagedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEGroupBox *_t = static_cast<QEGroupBox *>(_o);
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
        case 13: *reinterpret_cast< QString*>(_v) = _t->getSubstitutedTitleProperty(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getSubstitutionsProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEGroupBox *_t = static_cast<QEGroupBox *>(_o);
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
        case 13: _t->setSubstitutedTitleProperty(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setSubstitutionsProperty(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEGroupBox::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QEGroupBox.data,
      qt_meta_data_QEGroupBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEGroupBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEGroupBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEGroupBox.stringdata0))
        return static_cast<void*>(const_cast< QEGroupBox*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QEGroupBox*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QEGroupBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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

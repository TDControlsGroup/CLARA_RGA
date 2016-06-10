/****************************************************************************
** Meta object code from reading C++ file 'QEConfiguredLayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEConfiguredLayout/QEConfiguredLayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEConfiguredLayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata__QPushButtonGroup_t {
    QByteArrayData data[3];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__QPushButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__QPushButtonGroup_t qt_meta_stringdata__QPushButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 17), // "_QPushButtonGroup"
QT_MOC_LITERAL(1, 18, 18), // "buttonGroupClicked"
QT_MOC_LITERAL(2, 37, 0) // ""

    },
    "_QPushButtonGroup\0buttonGroupClicked\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__QPushButtonGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void _QPushButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        _QPushButtonGroup *_t = static_cast<_QPushButtonGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonGroupClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject _QPushButtonGroup::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata__QPushButtonGroup.data,
      qt_meta_data__QPushButtonGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *_QPushButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_QPushButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata__QPushButtonGroup.stringdata0))
        return static_cast<void*>(const_cast< _QPushButtonGroup*>(this));
    return QPushButton::qt_metacast(_clname);
}

int _QPushButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata__QDialogItem_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__QDialogItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__QDialogItem_t qt_meta_stringdata__QDialogItem = {
    {
QT_MOC_LITERAL(0, 0, 12), // "_QDialogItem"
QT_MOC_LITERAL(1, 13, 18), // "buttonCloseClicked"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "_QDialogItem\0buttonCloseClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__QDialogItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void _QDialogItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        _QDialogItem *_t = static_cast<_QDialogItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonCloseClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject _QDialogItem::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata__QDialogItem.data,
      qt_meta_data__QDialogItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *_QDialogItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_QDialogItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata__QDialogItem.stringdata0))
        return static_cast<void*>(const_cast< _QDialogItem*>(this));
    return QDialog::qt_metacast(_clname);
}

int _QDialogItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_QEConfiguredLayout_t {
    QByteArrayData data[43];
    char stringdata0[578];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEConfiguredLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEConfiguredLayout_t qt_meta_stringdata_QEConfiguredLayout = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEConfiguredLayout"
QT_MOC_LITERAL(1, 19, 17), // "setManagedVisible"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 1), // "v"
QT_MOC_LITERAL(4, 40, 20), // "comboBoxItemSelected"
QT_MOC_LITERAL(5, 61, 12), // "valueWritten"
QT_MOC_LITERAL(6, 74, 9), // "pNewValue"
QT_MOC_LITERAL(7, 84, 9), // "pOldValue"
QT_MOC_LITERAL(8, 94, 15), // "itemDescription"
QT_MOC_LITERAL(9, 110, 12), // "showItemList"
QT_MOC_LITERAL(10, 123, 17), // "configurationType"
QT_MOC_LITERAL(11, 141, 26), // "configurationTypesProperty"
QT_MOC_LITERAL(12, 168, 17), // "configurationFile"
QT_MOC_LITERAL(13, 186, 17), // "configurationText"
QT_MOC_LITERAL(14, 204, 13), // "optionsLayout"
QT_MOC_LITERAL(15, 218, 21), // "optionsLayoutProperty"
QT_MOC_LITERAL(16, 240, 17), // "variableAsToolTip"
QT_MOC_LITERAL(17, 258, 9), // "allowDrop"
QT_MOC_LITERAL(18, 268, 7), // "visible"
QT_MOC_LITERAL(19, 276, 15), // "messageSourceId"
QT_MOC_LITERAL(20, 292, 10), // "styleSheet"
QT_MOC_LITERAL(21, 303, 12), // "defaultStyle"
QT_MOC_LITERAL(22, 316, 18), // "userLevelUserStyle"
QT_MOC_LITERAL(23, 335, 23), // "userLevelScientistStyle"
QT_MOC_LITERAL(24, 359, 22), // "userLevelEngineerStyle"
QT_MOC_LITERAL(25, 382, 19), // "userLevelVisibility"
QT_MOC_LITERAL(26, 402, 10), // "UserLevels"
QT_MOC_LITERAL(27, 413, 16), // "userLevelEnabled"
QT_MOC_LITERAL(28, 430, 17), // "displayAlarmState"
QT_MOC_LITERAL(29, 448, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(30, 472, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(31, 497, 4), // "File"
QT_MOC_LITERAL(32, 502, 4), // "Text"
QT_MOC_LITERAL(33, 507, 3), // "Top"
QT_MOC_LITERAL(34, 511, 6), // "Bottom"
QT_MOC_LITERAL(35, 518, 4), // "Left"
QT_MOC_LITERAL(36, 523, 5), // "Right"
QT_MOC_LITERAL(37, 529, 4), // "User"
QT_MOC_LITERAL(38, 534, 9), // "Scientist"
QT_MOC_LITERAL(39, 544, 8), // "Engineer"
QT_MOC_LITERAL(40, 553, 5), // "Never"
QT_MOC_LITERAL(41, 559, 6), // "Always"
QT_MOC_LITERAL(42, 566, 11) // "WhenInAlarm"

    },
    "QEConfiguredLayout\0setManagedVisible\0"
    "\0v\0comboBoxItemSelected\0valueWritten\0"
    "pNewValue\0pOldValue\0itemDescription\0"
    "showItemList\0configurationType\0"
    "configurationTypesProperty\0configurationFile\0"
    "configurationText\0optionsLayout\0"
    "optionsLayoutProperty\0variableAsToolTip\0"
    "allowDrop\0visible\0messageSourceId\0"
    "styleSheet\0defaultStyle\0userLevelUserStyle\0"
    "userLevelScientistStyle\0userLevelEngineerStyle\0"
    "userLevelVisibility\0UserLevels\0"
    "userLevelEnabled\0displayAlarmState\0"
    "displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0File\0Text\0"
    "Top\0Bottom\0Left\0Right\0User\0Scientist\0"
    "Engineer\0Never\0Always\0WhenInAlarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEConfiguredLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      19,   42, // properties
       4,   99, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    3,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    2,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, 0x80000000 | 11, 0x0009500b,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,
      14, 0x80000000 | 15, 0x0009500b,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Bool, 0x00095003,
      19, QMetaType::UInt, 0x00095103,
      20, QMetaType::QString, 0x00094103,
      21, QMetaType::QString, 0x00095003,
      22, QMetaType::QString, 0x00095003,
      23, QMetaType::QString, 0x00095003,
      24, QMetaType::QString, 0x00095003,
      25, 0x80000000 | 26, 0x0009500b,
      27, 0x80000000 | 26, 0x0009500b,
      28, QMetaType::Bool, 0x00094103,
      29, 0x80000000 | 30, 0x0009500b,

 // enums: name, flags, count, data
      11, 0x0,    2,  115,
      15, 0x0,    4,  119,
      26, 0x0,    3,  127,
      30, 0x0,    3,  133,

 // enum data: key, value
      31, uint(QEConfiguredLayout::File),
      32, uint(QEConfiguredLayout::Text),
      33, uint(QEConfiguredLayout::Top),
      34, uint(QEConfiguredLayout::Bottom),
      35, uint(QEConfiguredLayout::Left),
      36, uint(QEConfiguredLayout::Right),
      37, uint(QEConfiguredLayout::User),
      38, uint(QEConfiguredLayout::Scientist),
      39, uint(QEConfiguredLayout::Engineer),
      40, uint(QEConfiguredLayout::Never),
      41, uint(QEConfiguredLayout::Always),
      42, uint(QEConfiguredLayout::WhenInAlarm),

       0        // eod
};

void QEConfiguredLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEConfiguredLayout *_t = static_cast<QEConfiguredLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setManagedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->comboBoxItemSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->valueWritten((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEConfiguredLayout *_t = static_cast<QEConfiguredLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getItemDescription(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getShowItemList(); break;
        case 2: *reinterpret_cast< configurationTypesProperty*>(_v) = _t->getConfigurationTypeProperty(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getConfigurationFile(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getConfigurationText(); break;
        case 5: *reinterpret_cast< optionsLayoutProperty*>(_v) = _t->getOptionsLayoutProperty(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getVariableAsToolTip(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getAllowDrop(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getRunVisible(); break;
        case 9: *reinterpret_cast< uint*>(_v) = _t->getMessageSourceId(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->styleSheet(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->getStyleDefault(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getStyleUser(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->getStyleScientist(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getStyleEngineer(); break;
        case 15: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelVisibilityProperty(); break;
        case 16: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelEnabledProperty(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->getDisplayAlarmState(); break;
        case 18: *reinterpret_cast< DisplayAlarmStateOptions*>(_v) = _t->getDisplayAlarmStateOptionProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEConfiguredLayout *_t = static_cast<QEConfiguredLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setItemDescription(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setShowItemList(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setConfigurationTypeProperty(*reinterpret_cast< configurationTypesProperty*>(_v)); break;
        case 3: _t->setConfigurationFile(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setConfigurationText(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setOptionsLayoutProperty(*reinterpret_cast< optionsLayoutProperty*>(_v)); break;
        case 6: _t->setVariableAsToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setAllowDrop(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setRunVisible(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setMessageSourceId(*reinterpret_cast< uint*>(_v)); break;
        case 10: _t->setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setStyleDefault(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setStyleUser(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setStyleScientist(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setStyleEngineer(*reinterpret_cast< QString*>(_v)); break;
        case 15: _t->setUserLevelVisibilityProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 16: _t->setUserLevelEnabledProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 17: _t->setDisplayAlarmState(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setDisplayAlarmStateOptionProperty(*reinterpret_cast< DisplayAlarmStateOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEConfiguredLayout::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEConfiguredLayout.data,
      qt_meta_data_QEConfiguredLayout,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEConfiguredLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEConfiguredLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEConfiguredLayout.stringdata0))
        return static_cast<void*>(const_cast< QEConfiguredLayout*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QEConfiguredLayout*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEConfiguredLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 19;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 19;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

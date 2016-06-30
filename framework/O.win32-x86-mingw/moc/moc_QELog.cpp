/****************************************************************************
** Meta object code from reading C++ file 'QELog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QELog/QELog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QELog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata__QTableWidgetLog_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__QTableWidgetLog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__QTableWidgetLog_t qt_meta_stringdata__QTableWidgetLog = {
    {
QT_MOC_LITERAL(0, 0, 16) // "_QTableWidgetLog"

    },
    "_QTableWidgetLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__QTableWidgetLog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void _QTableWidgetLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject _QTableWidgetLog::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata__QTableWidgetLog.data,
      qt_meta_data__QTableWidgetLog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *_QTableWidgetLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_QTableWidgetLog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata__QTableWidgetLog.stringdata0))
        return static_cast<void*>(const_cast< _QTableWidgetLog*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int _QTableWidgetLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QELog_t {
    QByteArrayData data[52];
    char stringdata0[700];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QELog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QELog_t qt_meta_stringdata_QELog = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QELog"
QT_MOC_LITERAL(1, 6, 17), // "setManagedVisible"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "v"
QT_MOC_LITERAL(4, 27, 19), // "checkBoxInfoToggled"
QT_MOC_LITERAL(5, 47, 22), // "checkBoxWarningToggled"
QT_MOC_LITERAL(6, 70, 20), // "checkBoxErrorToggled"
QT_MOC_LITERAL(7, 91, 18), // "buttonClearClicked"
QT_MOC_LITERAL(8, 110, 17), // "buttonSaveClicked"
QT_MOC_LITERAL(9, 128, 14), // "showColumnTime"
QT_MOC_LITERAL(10, 143, 14), // "showColumnType"
QT_MOC_LITERAL(11, 158, 17), // "showColumnMessage"
QT_MOC_LITERAL(12, 176, 17), // "showMessageFilter"
QT_MOC_LITERAL(13, 194, 9), // "showClear"
QT_MOC_LITERAL(14, 204, 8), // "showSave"
QT_MOC_LITERAL(15, 213, 14), // "scrollToBottom"
QT_MOC_LITERAL(16, 228, 13), // "optionsLayout"
QT_MOC_LITERAL(17, 242, 21), // "optionsLayoutProperty"
QT_MOC_LITERAL(18, 264, 9), // "infoColor"
QT_MOC_LITERAL(19, 274, 12), // "warningColor"
QT_MOC_LITERAL(20, 287, 10), // "errorColor"
QT_MOC_LITERAL(21, 298, 17), // "messageFormFilter"
QT_MOC_LITERAL(22, 316, 20), // "MessageFilterOptions"
QT_MOC_LITERAL(23, 337, 19), // "messageSourceFilter"
QT_MOC_LITERAL(24, 357, 15), // "messageSourceId"
QT_MOC_LITERAL(25, 373, 17), // "variableAsToolTip"
QT_MOC_LITERAL(26, 391, 9), // "allowDrop"
QT_MOC_LITERAL(27, 401, 7), // "visible"
QT_MOC_LITERAL(28, 409, 10), // "styleSheet"
QT_MOC_LITERAL(29, 420, 12), // "defaultStyle"
QT_MOC_LITERAL(30, 433, 18), // "userLevelUserStyle"
QT_MOC_LITERAL(31, 452, 23), // "userLevelScientistStyle"
QT_MOC_LITERAL(32, 476, 22), // "userLevelEngineerStyle"
QT_MOC_LITERAL(33, 499, 19), // "userLevelVisibility"
QT_MOC_LITERAL(34, 519, 10), // "UserLevels"
QT_MOC_LITERAL(35, 530, 16), // "userLevelEnabled"
QT_MOC_LITERAL(36, 547, 17), // "displayAlarmState"
QT_MOC_LITERAL(37, 565, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(38, 589, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(39, 614, 3), // "Top"
QT_MOC_LITERAL(40, 618, 6), // "Bottom"
QT_MOC_LITERAL(41, 625, 4), // "Left"
QT_MOC_LITERAL(42, 630, 5), // "Right"
QT_MOC_LITERAL(43, 636, 3), // "Any"
QT_MOC_LITERAL(44, 640, 5), // "Match"
QT_MOC_LITERAL(45, 646, 4), // "None"
QT_MOC_LITERAL(46, 651, 4), // "User"
QT_MOC_LITERAL(47, 656, 9), // "Scientist"
QT_MOC_LITERAL(48, 666, 8), // "Engineer"
QT_MOC_LITERAL(49, 675, 5), // "Never"
QT_MOC_LITERAL(50, 681, 6), // "Always"
QT_MOC_LITERAL(51, 688, 11) // "WhenInAlarm"

    },
    "QELog\0setManagedVisible\0\0v\0"
    "checkBoxInfoToggled\0checkBoxWarningToggled\0"
    "checkBoxErrorToggled\0buttonClearClicked\0"
    "buttonSaveClicked\0showColumnTime\0"
    "showColumnType\0showColumnMessage\0"
    "showMessageFilter\0showClear\0showSave\0"
    "scrollToBottom\0optionsLayout\0"
    "optionsLayoutProperty\0infoColor\0"
    "warningColor\0errorColor\0messageFormFilter\0"
    "MessageFilterOptions\0messageSourceFilter\0"
    "messageSourceId\0variableAsToolTip\0"
    "allowDrop\0visible\0styleSheet\0defaultStyle\0"
    "userLevelUserStyle\0userLevelScientistStyle\0"
    "userLevelEngineerStyle\0userLevelVisibility\0"
    "UserLevels\0userLevelEnabled\0"
    "displayAlarmState\0displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0Top\0Bottom\0"
    "Left\0Right\0Any\0Match\0None\0User\0Scientist\0"
    "Engineer\0Never\0Always\0WhenInAlarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QELog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      27,   58, // properties
       4,  139, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, 0x80000000 | 17, 0x0009500b,
      18, QMetaType::QColor, 0x00095103,
      19, QMetaType::QColor, 0x00095103,
      20, QMetaType::QColor, 0x00095103,
      21, 0x80000000 | 22, 0x0009510b,
      23, 0x80000000 | 22, 0x0009510b,
      24, QMetaType::UInt, 0x00095103,
      25, QMetaType::Bool, 0x00095103,
      26, QMetaType::Bool, 0x00095103,
      27, QMetaType::Bool, 0x00095003,
      24, QMetaType::UInt, 0x00095103,
      28, QMetaType::QString, 0x00094103,
      29, QMetaType::QString, 0x00095003,
      30, QMetaType::QString, 0x00095003,
      31, QMetaType::QString, 0x00095003,
      32, QMetaType::QString, 0x00095003,
      33, 0x80000000 | 34, 0x0009500b,
      35, 0x80000000 | 34, 0x0009500b,
      36, QMetaType::Bool, 0x00094103,
      37, 0x80000000 | 38, 0x0009500b,

 // enums: name, flags, count, data
      17, 0x0,    4,  155,
      22, 0x0,    3,  163,
      34, 0x0,    3,  169,
      38, 0x0,    3,  175,

 // enum data: key, value
      39, uint(QELog::Top),
      40, uint(QELog::Bottom),
      41, uint(QELog::Left),
      42, uint(QELog::Right),
      43, uint(QELog::Any),
      44, uint(QELog::Match),
      45, uint(QELog::None),
      46, uint(QELog::User),
      47, uint(QELog::Scientist),
      48, uint(QELog::Engineer),
      49, uint(QELog::Never),
      50, uint(QELog::Always),
      51, uint(QELog::WhenInAlarm),

       0        // eod
};

void QELog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QELog *_t = static_cast<QELog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setManagedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->checkBoxInfoToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->checkBoxWarningToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->checkBoxErrorToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->buttonClearClicked(); break;
        case 5: _t->buttonSaveClicked(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QELog *_t = static_cast<QELog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getShowColumnTime(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getShowColumnType(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getShowColumnMessage(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getShowMessageFilter(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getShowClear(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getShowSave(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getScrollToBottom(); break;
        case 7: *reinterpret_cast< optionsLayoutProperty*>(_v) = _t->getOptionsLayoutProperty(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->getInfoColor(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->getWarningColor(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->getErrorColor(); break;
        case 11: *reinterpret_cast< MessageFilterOptions*>(_v) = _t->getMessageFormFilter(); break;
        case 12: *reinterpret_cast< MessageFilterOptions*>(_v) = _t->getMessageSourceFilter(); break;
        case 13: *reinterpret_cast< uint*>(_v) = _t->getMessageSourceId(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getVariableAsToolTip(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getAllowDrop(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getRunVisible(); break;
        case 17: *reinterpret_cast< uint*>(_v) = _t->getMessageSourceId(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->styleSheet(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getStyleDefault(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getStyleUser(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->getStyleScientist(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->getStyleEngineer(); break;
        case 23: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelVisibilityProperty(); break;
        case 24: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelEnabledProperty(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->getDisplayAlarmState(); break;
        case 26: *reinterpret_cast< DisplayAlarmStateOptions*>(_v) = _t->getDisplayAlarmStateOptionProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QELog *_t = static_cast<QELog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowColumnTime(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowColumnType(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowColumnMessage(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setShowMessageFilter(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowClear(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowSave(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setScrollToBottom(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setOptionsLayoutProperty(*reinterpret_cast< optionsLayoutProperty*>(_v)); break;
        case 8: _t->setInfoColor(*reinterpret_cast< QColor*>(_v)); break;
        case 9: _t->setWarningColor(*reinterpret_cast< QColor*>(_v)); break;
        case 10: _t->setErrorColor(*reinterpret_cast< QColor*>(_v)); break;
        case 11: _t->setMessageFormFilter(*reinterpret_cast< MessageFilterOptions*>(_v)); break;
        case 12: _t->setMessageSourceFilter(*reinterpret_cast< MessageFilterOptions*>(_v)); break;
        case 13: _t->setMessageSourceId(*reinterpret_cast< uint*>(_v)); break;
        case 14: _t->setVariableAsToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setAllowDrop(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setRunVisible(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setMessageSourceId(*reinterpret_cast< uint*>(_v)); break;
        case 18: _t->setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setStyleDefault(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setStyleUser(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setStyleScientist(*reinterpret_cast< QString*>(_v)); break;
        case 22: _t->setStyleEngineer(*reinterpret_cast< QString*>(_v)); break;
        case 23: _t->setUserLevelVisibilityProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 24: _t->setUserLevelEnabledProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 25: _t->setDisplayAlarmState(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setDisplayAlarmStateOptionProperty(*reinterpret_cast< DisplayAlarmStateOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QELog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QELog.data,
      qt_meta_data_QELog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QELog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QELog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QELog.stringdata0))
        return static_cast<void*>(const_cast< QELog*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QELog*>(this));
    return QWidget::qt_metacast(_clname);
}

int QELog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 27;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

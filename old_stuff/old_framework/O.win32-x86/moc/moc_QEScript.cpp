/****************************************************************************
** Meta object code from reading C++ file 'QEScript.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEScript/QEScript.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEScript.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata__QTableWidgetScript_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__QTableWidgetScript_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__QTableWidgetScript_t qt_meta_stringdata__QTableWidgetScript = {
    {
QT_MOC_LITERAL(0, 0, 19) // "_QTableWidgetScript"

    },
    "_QTableWidgetScript"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__QTableWidgetScript[] = {

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

void _QTableWidgetScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject _QTableWidgetScript::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata__QTableWidgetScript.data,
      qt_meta_data__QTableWidgetScript,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *_QTableWidgetScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_QTableWidgetScript::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata__QTableWidgetScript.stringdata0))
        return static_cast<void*>(const_cast< _QTableWidgetScript*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int _QTableWidgetScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QEScript_t {
    QByteArrayData data[72];
    char stringdata0[1013];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEScript_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEScript_t qt_meta_stringdata_QEScript = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QEScript"
QT_MOC_LITERAL(1, 9, 8), // "selected"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "pFilename"
QT_MOC_LITERAL(4, 29, 17), // "setManagedVisible"
QT_MOC_LITERAL(5, 47, 1), // "v"
QT_MOC_LITERAL(6, 49, 22), // "comboBoxScriptSelected"
QT_MOC_LITERAL(7, 72, 16), // "buttonNewClicked"
QT_MOC_LITERAL(8, 89, 17), // "buttonSaveClicked"
QT_MOC_LITERAL(9, 107, 19), // "buttonDeleteClicked"
QT_MOC_LITERAL(10, 127, 20), // "buttonExecuteClicked"
QT_MOC_LITERAL(11, 148, 18), // "buttonAbortClicked"
QT_MOC_LITERAL(12, 167, 16), // "buttonAddClicked"
QT_MOC_LITERAL(13, 184, 19), // "buttonRemoveClicked"
QT_MOC_LITERAL(14, 204, 15), // "buttonUpClicked"
QT_MOC_LITERAL(15, 220, 17), // "buttonDownClicked"
QT_MOC_LITERAL(16, 238, 17), // "buttonCopyClicked"
QT_MOC_LITERAL(17, 256, 18), // "buttonPasteClicked"
QT_MOC_LITERAL(18, 275, 16), // "selectionChanged"
QT_MOC_LITERAL(19, 292, 14), // "QItemSelection"
QT_MOC_LITERAL(20, 307, 14), // "showScriptList"
QT_MOC_LITERAL(21, 322, 7), // "showNew"
QT_MOC_LITERAL(22, 330, 8), // "showSave"
QT_MOC_LITERAL(23, 339, 10), // "showDelete"
QT_MOC_LITERAL(24, 350, 11), // "showExecute"
QT_MOC_LITERAL(25, 362, 9), // "showAbort"
QT_MOC_LITERAL(26, 372, 9), // "showTable"
QT_MOC_LITERAL(27, 382, 13), // "editableTable"
QT_MOC_LITERAL(28, 396, 16), // "showTableControl"
QT_MOC_LITERAL(29, 413, 16), // "showColumnNumber"
QT_MOC_LITERAL(30, 430, 16), // "showColumnEnable"
QT_MOC_LITERAL(31, 447, 17), // "showColumnProgram"
QT_MOC_LITERAL(32, 465, 20), // "showColumnParameters"
QT_MOC_LITERAL(33, 486, 26), // "showColumnWorkingDirectory"
QT_MOC_LITERAL(34, 513, 17), // "showColumnTimeout"
QT_MOC_LITERAL(35, 531, 14), // "showColumnStop"
QT_MOC_LITERAL(36, 546, 13), // "showColumnLog"
QT_MOC_LITERAL(37, 560, 10), // "scriptType"
QT_MOC_LITERAL(38, 571, 19), // "scriptTypesProperty"
QT_MOC_LITERAL(39, 591, 10), // "scriptFile"
QT_MOC_LITERAL(40, 602, 10), // "scriptText"
QT_MOC_LITERAL(41, 613, 13), // "scriptDefault"
QT_MOC_LITERAL(42, 627, 11), // "executeText"
QT_MOC_LITERAL(43, 639, 13), // "optionsLayout"
QT_MOC_LITERAL(44, 653, 21), // "optionsLayoutProperty"
QT_MOC_LITERAL(45, 675, 17), // "variableAsToolTip"
QT_MOC_LITERAL(46, 693, 9), // "allowDrop"
QT_MOC_LITERAL(47, 703, 7), // "visible"
QT_MOC_LITERAL(48, 711, 15), // "messageSourceId"
QT_MOC_LITERAL(49, 727, 10), // "styleSheet"
QT_MOC_LITERAL(50, 738, 12), // "defaultStyle"
QT_MOC_LITERAL(51, 751, 18), // "userLevelUserStyle"
QT_MOC_LITERAL(52, 770, 23), // "userLevelScientistStyle"
QT_MOC_LITERAL(53, 794, 22), // "userLevelEngineerStyle"
QT_MOC_LITERAL(54, 817, 19), // "userLevelVisibility"
QT_MOC_LITERAL(55, 837, 10), // "UserLevels"
QT_MOC_LITERAL(56, 848, 16), // "userLevelEnabled"
QT_MOC_LITERAL(57, 865, 17), // "displayAlarmState"
QT_MOC_LITERAL(58, 883, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(59, 907, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(60, 932, 4), // "File"
QT_MOC_LITERAL(61, 937, 4), // "Text"
QT_MOC_LITERAL(62, 942, 3), // "Top"
QT_MOC_LITERAL(63, 946, 6), // "Bottom"
QT_MOC_LITERAL(64, 953, 4), // "Left"
QT_MOC_LITERAL(65, 958, 5), // "Right"
QT_MOC_LITERAL(66, 964, 4), // "User"
QT_MOC_LITERAL(67, 969, 9), // "Scientist"
QT_MOC_LITERAL(68, 979, 8), // "Engineer"
QT_MOC_LITERAL(69, 988, 5), // "Never"
QT_MOC_LITERAL(70, 994, 6), // "Always"
QT_MOC_LITERAL(71, 1001, 11) // "WhenInAlarm"

    },
    "QEScript\0selected\0\0pFilename\0"
    "setManagedVisible\0v\0comboBoxScriptSelected\0"
    "buttonNewClicked\0buttonSaveClicked\0"
    "buttonDeleteClicked\0buttonExecuteClicked\0"
    "buttonAbortClicked\0buttonAddClicked\0"
    "buttonRemoveClicked\0buttonUpClicked\0"
    "buttonDownClicked\0buttonCopyClicked\0"
    "buttonPasteClicked\0selectionChanged\0"
    "QItemSelection\0showScriptList\0showNew\0"
    "showSave\0showDelete\0showExecute\0"
    "showAbort\0showTable\0editableTable\0"
    "showTableControl\0showColumnNumber\0"
    "showColumnEnable\0showColumnProgram\0"
    "showColumnParameters\0showColumnWorkingDirectory\0"
    "showColumnTimeout\0showColumnStop\0"
    "showColumnLog\0scriptType\0scriptTypesProperty\0"
    "scriptFile\0scriptText\0scriptDefault\0"
    "executeText\0optionsLayout\0"
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

static const uint qt_meta_data_QEScript[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
      36,  114, // properties
       4,  222, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   92,    2, 0x0a /* Public */,
       6,    1,   95,    2, 0x08 /* Private */,
       7,    0,   98,    2, 0x08 /* Private */,
       8,    0,   99,    2, 0x08 /* Private */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    2,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,    2,    2,

 // properties: name, type, flags
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,
      23, QMetaType::Bool, 0x00095103,
      24, QMetaType::Bool, 0x00095103,
      25, QMetaType::Bool, 0x00095103,
      26, QMetaType::Bool, 0x00095103,
      27, QMetaType::Bool, 0x00095103,
      28, QMetaType::Bool, 0x00095103,
      29, QMetaType::Bool, 0x00095103,
      30, QMetaType::Bool, 0x00095103,
      31, QMetaType::Bool, 0x00095103,
      32, QMetaType::Bool, 0x00095103,
      33, QMetaType::Bool, 0x00095103,
      34, QMetaType::Bool, 0x00095103,
      35, QMetaType::Bool, 0x00095103,
      36, QMetaType::Bool, 0x00095103,
      37, 0x80000000 | 38, 0x0009500b,
      39, QMetaType::QString, 0x00095103,
      40, QMetaType::QString, 0x00095103,
      41, QMetaType::QString, 0x00095103,
      42, QMetaType::QString, 0x00095103,
      43, 0x80000000 | 44, 0x0009500b,
      45, QMetaType::Bool, 0x00095103,
      46, QMetaType::Bool, 0x00095103,
      47, QMetaType::Bool, 0x00095003,
      48, QMetaType::UInt, 0x00095103,
      49, QMetaType::QString, 0x00094103,
      50, QMetaType::QString, 0x00095003,
      51, QMetaType::QString, 0x00095003,
      52, QMetaType::QString, 0x00095003,
      53, QMetaType::QString, 0x00095003,
      54, 0x80000000 | 55, 0x0009500b,
      56, 0x80000000 | 55, 0x0009500b,
      57, QMetaType::Bool, 0x00094103,
      58, 0x80000000 | 59, 0x0009500b,

 // enums: name, flags, count, data
      38, 0x0,    2,  238,
      44, 0x0,    4,  242,
      55, 0x0,    3,  250,
      59, 0x0,    3,  256,

 // enum data: key, value
      60, uint(QEScript::File),
      61, uint(QEScript::Text),
      62, uint(QEScript::Top),
      63, uint(QEScript::Bottom),
      64, uint(QEScript::Left),
      65, uint(QEScript::Right),
      66, uint(QEScript::User),
      67, uint(QEScript::Scientist),
      68, uint(QEScript::Engineer),
      69, uint(QEScript::Never),
      70, uint(QEScript::Always),
      71, uint(QEScript::WhenInAlarm),

       0        // eod
};

void QEScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEScript *_t = static_cast<QEScript *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setManagedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->comboBoxScriptSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->buttonNewClicked(); break;
        case 4: _t->buttonSaveClicked(); break;
        case 5: _t->buttonDeleteClicked(); break;
        case 6: _t->buttonExecuteClicked(); break;
        case 7: _t->buttonAbortClicked(); break;
        case 8: _t->buttonAddClicked(); break;
        case 9: _t->buttonRemoveClicked(); break;
        case 10: _t->buttonUpClicked(); break;
        case 11: _t->buttonDownClicked(); break;
        case 12: _t->buttonCopyClicked(); break;
        case 13: _t->buttonPasteClicked(); break;
        case 14: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEScript::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScript::selected)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEScript *_t = static_cast<QEScript *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getShowScriptList(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getShowNew(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getShowSave(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getShowDelete(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getShowExecute(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getShowAbort(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getShowTable(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getEditableTable(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getShowTableControl(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getShowColumnNumber(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getShowColumnEnable(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getShowColumnProgram(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->getShowColumnParameters(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getShowColumnWorkingDirectory(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getShowColumnTimeout(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getShowColumnStop(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getShowColumnLog(); break;
        case 17: *reinterpret_cast< scriptTypesProperty*>(_v) = _t->getScriptTypeProperty(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getScriptFile(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getScriptText(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getScriptDefault(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->getExecuteText(); break;
        case 22: *reinterpret_cast< optionsLayoutProperty*>(_v) = _t->getOptionsLayoutProperty(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->getVariableAsToolTip(); break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->getAllowDrop(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->getRunVisible(); break;
        case 26: *reinterpret_cast< uint*>(_v) = _t->getMessageSourceId(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->styleSheet(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->getStyleDefault(); break;
        case 29: *reinterpret_cast< QString*>(_v) = _t->getStyleUser(); break;
        case 30: *reinterpret_cast< QString*>(_v) = _t->getStyleScientist(); break;
        case 31: *reinterpret_cast< QString*>(_v) = _t->getStyleEngineer(); break;
        case 32: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelVisibilityProperty(); break;
        case 33: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelEnabledProperty(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->getDisplayAlarmState(); break;
        case 35: *reinterpret_cast< DisplayAlarmStateOptions*>(_v) = _t->getDisplayAlarmStateOptionProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEScript *_t = static_cast<QEScript *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShowScriptList(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowNew(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setShowSave(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setShowDelete(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowExecute(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowAbort(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setShowTable(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setEditableTable(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setShowTableControl(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setShowColumnNumber(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setShowColumnEnable(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setShowColumnProgram(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setShowColumnParameters(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setShowColumnWorkingDirectory(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setShowColumnTimeout(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setShowColumnStop(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setShowColumnLog(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setScriptTypeProperty(*reinterpret_cast< scriptTypesProperty*>(_v)); break;
        case 18: _t->setScriptFile(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setScriptText(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setScriptDefault(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setExecuteText(*reinterpret_cast< QString*>(_v)); break;
        case 22: _t->setOptionsLayoutProperty(*reinterpret_cast< optionsLayoutProperty*>(_v)); break;
        case 23: _t->setVariableAsToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 24: _t->setAllowDrop(*reinterpret_cast< bool*>(_v)); break;
        case 25: _t->setRunVisible(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setMessageSourceId(*reinterpret_cast< uint*>(_v)); break;
        case 27: _t->setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 28: _t->setStyleDefault(*reinterpret_cast< QString*>(_v)); break;
        case 29: _t->setStyleUser(*reinterpret_cast< QString*>(_v)); break;
        case 30: _t->setStyleScientist(*reinterpret_cast< QString*>(_v)); break;
        case 31: _t->setStyleEngineer(*reinterpret_cast< QString*>(_v)); break;
        case 32: _t->setUserLevelVisibilityProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 33: _t->setUserLevelEnabledProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 34: _t->setDisplayAlarmState(*reinterpret_cast< bool*>(_v)); break;
        case 35: _t->setDisplayAlarmStateOptionProperty(*reinterpret_cast< DisplayAlarmStateOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEScript::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEScript.data,
      qt_meta_data_QEScript,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEScript::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEScript.stringdata0))
        return static_cast<void*>(const_cast< QEScript*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QEScript*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 36;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 36;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QEScript::selected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'QEFileBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEFileBrowser/QEFileBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEFileBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata__QTableWidgetFileBrowser_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__QTableWidgetFileBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__QTableWidgetFileBrowser_t qt_meta_stringdata__QTableWidgetFileBrowser = {
    {
QT_MOC_LITERAL(0, 0, 24) // "_QTableWidgetFileBrowser"

    },
    "_QTableWidgetFileBrowser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__QTableWidgetFileBrowser[] = {

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

void _QTableWidgetFileBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject _QTableWidgetFileBrowser::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata__QTableWidgetFileBrowser.data,
      qt_meta_data__QTableWidgetFileBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *_QTableWidgetFileBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_QTableWidgetFileBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata__QTableWidgetFileBrowser.stringdata0))
        return static_cast<void*>(const_cast< _QTableWidgetFileBrowser*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int _QTableWidgetFileBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QEFileBrowser_t {
    QByteArrayData data[51];
    char stringdata0[740];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEFileBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEFileBrowser_t qt_meta_stringdata_QEFileBrowser = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QEFileBrowser"
QT_MOC_LITERAL(1, 14, 8), // "selected"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "pFilename"
QT_MOC_LITERAL(4, 34, 17), // "setManagedVisible"
QT_MOC_LITERAL(5, 52, 1), // "v"
QT_MOC_LITERAL(6, 54, 28), // "lineEditDirectoryPathChanged"
QT_MOC_LITERAL(7, 83, 29), // "buttonDirectoryBrowserClicked"
QT_MOC_LITERAL(8, 113, 20), // "buttonRefreshClicked"
QT_MOC_LITERAL(9, 134, 13), // "itemActivated"
QT_MOC_LITERAL(10, 148, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(11, 166, 8), // "variable"
QT_MOC_LITERAL(12, 175, 21), // "variableSubstitutions"
QT_MOC_LITERAL(13, 197, 13), // "directoryPath"
QT_MOC_LITERAL(14, 211, 17), // "showDirectoryPath"
QT_MOC_LITERAL(15, 229, 20), // "showDirectoryBrowser"
QT_MOC_LITERAL(16, 250, 11), // "showRefresh"
QT_MOC_LITERAL(17, 262, 9), // "showTable"
QT_MOC_LITERAL(18, 272, 14), // "showColumnTime"
QT_MOC_LITERAL(19, 287, 14), // "showColumnSize"
QT_MOC_LITERAL(20, 302, 18), // "showColumnFilename"
QT_MOC_LITERAL(21, 321, 17), // "showFileExtension"
QT_MOC_LITERAL(22, 339, 25), // "fileDialogDirectoriesOnly"
QT_MOC_LITERAL(23, 365, 10), // "fileFilter"
QT_MOC_LITERAL(24, 376, 13), // "optionsLayout"
QT_MOC_LITERAL(25, 390, 21), // "optionsLayoutProperty"
QT_MOC_LITERAL(26, 412, 17), // "variableAsToolTip"
QT_MOC_LITERAL(27, 430, 9), // "allowDrop"
QT_MOC_LITERAL(28, 440, 7), // "visible"
QT_MOC_LITERAL(29, 448, 15), // "messageSourceId"
QT_MOC_LITERAL(30, 464, 10), // "styleSheet"
QT_MOC_LITERAL(31, 475, 12), // "defaultStyle"
QT_MOC_LITERAL(32, 488, 18), // "userLevelUserStyle"
QT_MOC_LITERAL(33, 507, 23), // "userLevelScientistStyle"
QT_MOC_LITERAL(34, 531, 22), // "userLevelEngineerStyle"
QT_MOC_LITERAL(35, 554, 19), // "userLevelVisibility"
QT_MOC_LITERAL(36, 574, 10), // "UserLevels"
QT_MOC_LITERAL(37, 585, 16), // "userLevelEnabled"
QT_MOC_LITERAL(38, 602, 17), // "displayAlarmState"
QT_MOC_LITERAL(39, 620, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(40, 644, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(41, 669, 3), // "Top"
QT_MOC_LITERAL(42, 673, 6), // "Bottom"
QT_MOC_LITERAL(43, 680, 4), // "Left"
QT_MOC_LITERAL(44, 685, 5), // "Right"
QT_MOC_LITERAL(45, 691, 4), // "User"
QT_MOC_LITERAL(46, 696, 9), // "Scientist"
QT_MOC_LITERAL(47, 706, 8), // "Engineer"
QT_MOC_LITERAL(48, 715, 5), // "Never"
QT_MOC_LITERAL(49, 721, 6), // "Always"
QT_MOC_LITERAL(50, 728, 11) // "WhenInAlarm"

    },
    "QEFileBrowser\0selected\0\0pFilename\0"
    "setManagedVisible\0v\0lineEditDirectoryPathChanged\0"
    "buttonDirectoryBrowserClicked\0"
    "buttonRefreshClicked\0itemActivated\0"
    "QTableWidgetItem*\0variable\0"
    "variableSubstitutions\0directoryPath\0"
    "showDirectoryPath\0showDirectoryBrowser\0"
    "showRefresh\0showTable\0showColumnTime\0"
    "showColumnSize\0showColumnFilename\0"
    "showFileExtension\0fileDialogDirectoriesOnly\0"
    "fileFilter\0optionsLayout\0optionsLayoutProperty\0"
    "variableAsToolTip\0allowDrop\0visible\0"
    "messageSourceId\0styleSheet\0defaultStyle\0"
    "userLevelUserStyle\0userLevelScientistStyle\0"
    "userLevelEngineerStyle\0userLevelVisibility\0"
    "UserLevels\0userLevelEnabled\0"
    "displayAlarmState\0displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0Top\0Bottom\0"
    "Left\0Right\0User\0Scientist\0Engineer\0"
    "Never\0Always\0WhenInAlarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEFileBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      27,   58, // properties
       3,  139, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00095003,
      12, QMetaType::QString, 0x00095003,
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,
      23, QMetaType::QString, 0x00095103,
      24, 0x80000000 | 25, 0x0009500b,
      26, QMetaType::Bool, 0x00095103,
      27, QMetaType::Bool, 0x00095103,
      28, QMetaType::Bool, 0x00095003,
      29, QMetaType::UInt, 0x00095103,
      30, QMetaType::QString, 0x00094103,
      31, QMetaType::QString, 0x00095003,
      32, QMetaType::QString, 0x00095003,
      33, QMetaType::QString, 0x00095003,
      34, QMetaType::QString, 0x00095003,
      35, 0x80000000 | 36, 0x0009500b,
      37, 0x80000000 | 36, 0x0009500b,
      38, QMetaType::Bool, 0x00094103,
      39, 0x80000000 | 40, 0x0009500b,

 // enums: name, flags, count, data
      25, 0x0,    4,  151,
      36, 0x0,    3,  159,
      40, 0x0,    3,  165,

 // enum data: key, value
      41, uint(QEFileBrowser::Top),
      42, uint(QEFileBrowser::Bottom),
      43, uint(QEFileBrowser::Left),
      44, uint(QEFileBrowser::Right),
      45, uint(QEFileBrowser::User),
      46, uint(QEFileBrowser::Scientist),
      47, uint(QEFileBrowser::Engineer),
      48, uint(QEFileBrowser::Never),
      49, uint(QEFileBrowser::Always),
      50, uint(QEFileBrowser::WhenInAlarm),

       0        // eod
};

void QEFileBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEFileBrowser *_t = static_cast<QEFileBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setManagedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->lineEditDirectoryPathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->buttonDirectoryBrowserClicked(); break;
        case 4: _t->buttonRefreshClicked(); break;
        case 5: _t->itemActivated((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEFileBrowser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEFileBrowser::selected)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEFileBrowser *_t = static_cast<QEFileBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVariableName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getVariableNameSubstitutions(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getDirectoryPath(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getShowDirectoryPath(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getShowDirectoryBrowser(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getShowRefresh(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getShowTable(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getShowColumnTime(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getShowColumnSize(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->getShowColumnFilename(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getShowFileExtension(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->getFileDialogDirectoriesOnly(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getFileFilter(); break;
        case 13: *reinterpret_cast< optionsLayoutProperty*>(_v) = _t->getOptionsLayoutProperty(); break;
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
        QEFileBrowser *_t = static_cast<QEFileBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVariableName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVariableNameSubstitutions(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDirectoryPath(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setShowDirectoryPath(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setShowDirectoryBrowser(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setShowRefresh(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setShowTable(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setShowColumnTime(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setShowColumnSize(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setShowColumnFilename(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setShowFileExtension(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setFileDialogDirectoriesOnly(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setFileFilter(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setOptionsLayoutProperty(*reinterpret_cast< optionsLayoutProperty*>(_v)); break;
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

const QMetaObject QEFileBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEFileBrowser.data,
      qt_meta_data_QEFileBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEFileBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEFileBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEFileBrowser.stringdata0))
        return static_cast<void*>(const_cast< QEFileBrowser*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QEFileBrowser*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEFileBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QEFileBrowser::selected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

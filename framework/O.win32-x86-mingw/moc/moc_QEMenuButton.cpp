/****************************************************************************
** Meta object code from reading C++ file 'QEMenuButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEMenuButton/QEMenuButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEMenuButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEMenuButton_t {
    QByteArrayData data[20];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEMenuButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEMenuButton_t qt_meta_stringdata_QEMenuButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QEMenuButton"
QT_MOC_LITERAL(1, 13, 6), // "newGui"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 16), // "QEActionRequests"
QT_MOC_LITERAL(4, 38, 7), // "request"
QT_MOC_LITERAL(5, 46, 13), // "menuTriggered"
QT_MOC_LITERAL(6, 60, 8), // "QAction*"
QT_MOC_LITERAL(7, 69, 6), // "action"
QT_MOC_LITERAL(8, 76, 20), // "programCompletedSlot"
QT_MOC_LITERAL(9, 97, 17), // "connectionChanged"
QT_MOC_LITERAL(10, 115, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(11, 134, 14), // "connectionInfo"
QT_MOC_LITERAL(12, 149, 13), // "variableIndex"
QT_MOC_LITERAL(13, 163, 13), // "requestAction"
QT_MOC_LITERAL(14, 177, 9), // "allowDrop"
QT_MOC_LITERAL(15, 187, 17), // "variableAsToolTip"
QT_MOC_LITERAL(16, 205, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(17, 229, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(18, 254, 20), // "defaultSubstitutions"
QT_MOC_LITERAL(19, 275, 11) // "menuEntries"

    },
    "QEMenuButton\0newGui\0\0QEActionRequests\0"
    "request\0menuTriggered\0QAction*\0action\0"
    "programCompletedSlot\0connectionChanged\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "variableIndex\0requestAction\0allowDrop\0"
    "variableAsToolTip\0displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0defaultSubstitutions\0"
    "menuEntries"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEMenuButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,
       9,    2,   46,    2, 0x08 /* Private */,
      13,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::UInt,   11,   12,
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00094103,
      15, QMetaType::Bool, 0x00094103,
      16, 0x80000000 | 17, 0x0009400b,
      18, QMetaType::QString, 0x00095003,
      19, QMetaType::QString, 0x00095003,

       0        // eod
};

void QEMenuButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEMenuButton *_t = static_cast<QEMenuButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newGui((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 1: _t->menuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->programCompletedSlot(); break;
        case 3: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 4: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEMenuButton::*_t)(const QEActionRequests & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEMenuButton::newGui)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEMenuButton *_t = static_cast<QEMenuButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getAllowDrop(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getVariableAsToolTip(); break;
        case 2: *reinterpret_cast< DisplayAlarmStateOptions*>(_v) = _t->getDisplayAlarmStateOptionProperty(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getSubstitutionsProperty(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getMenuString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEMenuButton *_t = static_cast<QEMenuButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAllowDrop(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setVariableAsToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDisplayAlarmStateOptionProperty(*reinterpret_cast< DisplayAlarmStateOptions*>(_v)); break;
        case 3: _t->setSubstitutionsProperty(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setMenuString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEMenuButton::staticMetaObject = {
    { &QEAbstractWidget::staticMetaObject, qt_meta_stringdata_QEMenuButton.data,
      qt_meta_data_QEMenuButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEMenuButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEMenuButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEMenuButton.stringdata0))
        return static_cast<void*>(const_cast< QEMenuButton*>(this));
    return QEAbstractWidget::qt_metacast(_clname);
}

int QEMenuButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEAbstractWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QEMenuButton::newGui(const QEActionRequests & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

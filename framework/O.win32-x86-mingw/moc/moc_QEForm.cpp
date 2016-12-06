/****************************************************************************
** Meta object code from reading C++ file 'QEForm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEForm/QEForm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEForm_t {
    QByteArrayData data[29];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEForm_t qt_meta_stringdata_QEForm = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QEForm"
QT_MOC_LITERAL(1, 7, 10), // "formLoaded"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "fileLoaded"
QT_MOC_LITERAL(4, 30, 10), // "readUiFile"
QT_MOC_LITERAL(5, 41, 13), // "requestAction"
QT_MOC_LITERAL(6, 55, 16), // "QEActionRequests"
QT_MOC_LITERAL(7, 72, 7), // "request"
QT_MOC_LITERAL(8, 80, 11), // "fileChanged"
QT_MOC_LITERAL(9, 92, 4), // "path"
QT_MOC_LITERAL(10, 97, 26), // "useNewVariableNameProperty"
QT_MOC_LITERAL(11, 124, 14), // "variableNameIn"
QT_MOC_LITERAL(12, 139, 27), // "variableNameSubstitutionsIn"
QT_MOC_LITERAL(13, 167, 13), // "variableIndex"
QT_MOC_LITERAL(14, 181, 11), // "reloadLater"
QT_MOC_LITERAL(15, 193, 6), // "uiFile"
QT_MOC_LITERAL(16, 200, 21), // "variableSubstitutions"
QT_MOC_LITERAL(17, 222, 23), // "handleGuiLaunchRequests"
QT_MOC_LITERAL(18, 246, 14), // "resizeContents"
QT_MOC_LITERAL(19, 261, 15), // "messageSourceId"
QT_MOC_LITERAL(20, 277, 17), // "messageFormFilter"
QT_MOC_LITERAL(21, 295, 20), // "MessageFilterOptions"
QT_MOC_LITERAL(22, 316, 19), // "messageSourceFilter"
QT_MOC_LITERAL(23, 336, 17), // "variableAsToolTip"
QT_MOC_LITERAL(24, 354, 9), // "allowDrop"
QT_MOC_LITERAL(25, 364, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(26, 388, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(27, 413, 5), // "Match"
QT_MOC_LITERAL(28, 419, 4) // "None"

    },
    "QEForm\0formLoaded\0\0fileLoaded\0readUiFile\0"
    "requestAction\0QEActionRequests\0request\0"
    "fileChanged\0path\0useNewVariableNameProperty\0"
    "variableNameIn\0variableNameSubstitutionsIn\0"
    "variableIndex\0reloadLater\0uiFile\0"
    "variableSubstitutions\0handleGuiLaunchRequests\0"
    "resizeContents\0messageSourceId\0"
    "messageFormFilter\0MessageFilterOptions\0"
    "messageSourceFilter\0variableAsToolTip\0"
    "allowDrop\0displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0Match\0None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      10,   62, // properties
       1,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x08 /* Private */,
      10,    3,   54,    2, 0x08 /* Private */,
      14,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   11,   12,   13,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00095003,
      16, QMetaType::QString, 0x00095003,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::UInt, 0x00095103,
      20, 0x80000000 | 21, 0x0009510b,
      22, 0x80000000 | 21, 0x0009510b,
      23, QMetaType::Bool, 0x00094103,
      24, QMetaType::Bool, 0x00094103,
      25, 0x80000000 | 26, 0x0009400b,

 // enums: name, flags, count, data
      21, 0x0,    2,   96,

 // enum data: key, value
      27, uint(QEForm::Match),
      28, uint(QEForm::None),

       0        // eod
};

void QEForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEForm *_t = static_cast<QEForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->formLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->readUiFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 3: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->useNewVariableNameProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 5: _t->reloadLater(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
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
            typedef void (QEForm::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEForm::formLoaded)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEForm *_t = static_cast<QEForm *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getUiFileNameProperty(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getVariableNameSubstitutionsProperty(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getHandleGuiLaunchRequests(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getResizeContents(); break;
        case 4: *reinterpret_cast< uint*>(_v) = _t->getMessageSourceId(); break;
        case 5: *reinterpret_cast< MessageFilterOptions*>(_v) = _t->getMessageFormFilter(); break;
        case 6: *reinterpret_cast< MessageFilterOptions*>(_v) = _t->getMessageSourceFilter(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getVariableAsToolTip(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getAllowDrop(); break;
        case 9: *reinterpret_cast< DisplayAlarmStateOptions*>(_v) = _t->getDisplayAlarmStateOptionProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEForm *_t = static_cast<QEForm *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUiFileNameProperty(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVariableNameSubstitutionsProperty(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setHandleGuiLaunchRequests(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setResizeContents(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setMessageSourceId(*reinterpret_cast< uint*>(_v)); break;
        case 5: _t->setMessageFormFilter(*reinterpret_cast< MessageFilterOptions*>(_v)); break;
        case 6: _t->setMessageSourceFilter(*reinterpret_cast< MessageFilterOptions*>(_v)); break;
        case 7: _t->setVariableAsToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setAllowDrop(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setDisplayAlarmStateOptionProperty(*reinterpret_cast< DisplayAlarmStateOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEForm::staticMetaObject = {
    { &QEAbstractWidget::staticMetaObject, qt_meta_stringdata_QEForm.data,
      qt_meta_data_QEForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEForm.stringdata0))
        return static_cast<void*>(const_cast< QEForm*>(this));
    if (!strcmp(_clname, "QEMapable"))
        return static_cast< QEMapable*>(const_cast< QEForm*>(this));
    return QEAbstractWidget::qt_metacast(_clname);
}

int QEForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEAbstractWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QEForm::formLoaded(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

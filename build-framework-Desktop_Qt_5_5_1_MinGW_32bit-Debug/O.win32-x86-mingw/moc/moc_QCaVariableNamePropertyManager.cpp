/****************************************************************************
** Meta object code from reading C++ file 'QCaVariableNamePropertyManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/data/QCaVariableNamePropertyManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QCaVariableNamePropertyManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCaVariableNamePropertyManager_t {
    QByteArrayData data[7];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCaVariableNamePropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCaVariableNamePropertyManager_t qt_meta_stringdata_QCaVariableNamePropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QCaVariableNamePropertyManager"
QT_MOC_LITERAL(1, 31, 23), // "newVariableNameProperty"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 8), // "variable"
QT_MOC_LITERAL(4, 65, 13), // "Substitutions"
QT_MOC_LITERAL(5, 79, 13), // "variableIndex"
QT_MOC_LITERAL(6, 93, 21) // "subscribeDelayExpired"

    },
    "QCaVariableNamePropertyManager\0"
    "newVariableNameProperty\0\0variable\0"
    "Substitutions\0variableIndex\0"
    "subscribeDelayExpired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCaVariableNamePropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QCaVariableNamePropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCaVariableNamePropertyManager *_t = static_cast<QCaVariableNamePropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newVariableNameProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->subscribeDelayExpired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCaVariableNamePropertyManager::*_t)(QString , QString , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCaVariableNamePropertyManager::newVariableNameProperty)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QCaVariableNamePropertyManager::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_QCaVariableNamePropertyManager.data,
      qt_meta_data_QCaVariableNamePropertyManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCaVariableNamePropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCaVariableNamePropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCaVariableNamePropertyManager.stringdata0))
        return static_cast<void*>(const_cast< QCaVariableNamePropertyManager*>(this));
    return QTimer::qt_metacast(_clname);
}

int QCaVariableNamePropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QCaVariableNamePropertyManager::newVariableNameProperty(QString _t1, QString _t2, unsigned int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

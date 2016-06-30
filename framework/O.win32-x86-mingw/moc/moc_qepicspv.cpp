/****************************************************************************
** Meta object code from reading C++ file 'qepicspv.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../data/qepicspv.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qepicspv.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEpicsPV_t {
    QByteArrayData data[16];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEpicsPV_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEpicsPV_t qt_meta_stringdata_QEpicsPV = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QEpicsPV"
QT_MOC_LITERAL(1, 9, 17), // "connectionChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "connected"
QT_MOC_LITERAL(4, 38, 12), // "disconnected"
QT_MOC_LITERAL(5, 51, 12), // "valueChanged"
QT_MOC_LITERAL(6, 64, 5), // "value"
QT_MOC_LITERAL(7, 70, 12), // "valueUpdated"
QT_MOC_LITERAL(8, 83, 11), // "valueInited"
QT_MOC_LITERAL(9, 95, 3), // "set"
QT_MOC_LITERAL(10, 99, 5), // "delay"
QT_MOC_LITERAL(11, 105, 5), // "setPV"
QT_MOC_LITERAL(12, 111, 7), // "_pvName"
QT_MOC_LITERAL(13, 119, 11), // "updateValue"
QT_MOC_LITERAL(14, 131, 4), // "data"
QT_MOC_LITERAL(15, 136, 16) // "updateConnection"

    },
    "QEpicsPV\0connectionChanged\0\0connected\0"
    "disconnected\0valueChanged\0value\0"
    "valueUpdated\0valueInited\0set\0delay\0"
    "setPV\0_pvName\0updateValue\0data\0"
    "updateConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEpicsPV[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    0,   77,    2, 0x06 /* Public */,
       4,    0,   78,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       7,    1,   82,    2, 0x06 /* Public */,
       8,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   88,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x2a /* Public | MethodCloned */,
      11,    1,   96,    2, 0x0a /* Public */,
      11,    0,   99,    2, 0x2a /* Public | MethodCloned */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QVariant,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::Int,    6,   10,
    QMetaType::Void, QMetaType::QVariant,    6,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   14,
    QMetaType::Void,

       0        // eod
};

void QEpicsPV::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEpicsPV *_t = static_cast<QEpicsPV *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 4: _t->valueUpdated((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 5: _t->valueInited((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 6: _t->set((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->set((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 8: _t->setPV((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setPV(); break;
        case 10: _t->updateValue((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 11: _t->updateConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEpicsPV::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEpicsPV::connectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QEpicsPV::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEpicsPV::connected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QEpicsPV::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEpicsPV::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QEpicsPV::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEpicsPV::valueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QEpicsPV::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEpicsPV::valueUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QEpicsPV::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEpicsPV::valueInited)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QEpicsPV::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEpicsPV.data,
      qt_meta_data_QEpicsPV,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEpicsPV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEpicsPV::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEpicsPV.stringdata0))
        return static_cast<void*>(const_cast< QEpicsPV*>(this));
    return QObject::qt_metacast(_clname);
}

int QEpicsPV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QEpicsPV::connectionChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEpicsPV::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QEpicsPV::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QEpicsPV::valueChanged(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QEpicsPV::valueUpdated(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QEpicsPV::valueInited(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

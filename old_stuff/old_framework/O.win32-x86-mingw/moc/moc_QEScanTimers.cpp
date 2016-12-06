/****************************************************************************
** Meta object code from reading C++ file 'QEScanTimers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../common/QEScanTimers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEScanTimers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEScanTimers_t {
    QByteArrayData data[14];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEScanTimers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEScanTimers_t qt_meta_stringdata_QEScanTimers = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QEScanTimers"
QT_MOC_LITERAL(1, 13, 16), // "flipFlopVerySlow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "flipFlopSlow"
QT_MOC_LITERAL(4, 44, 14), // "flipFlopMedium"
QT_MOC_LITERAL(5, 59, 12), // "flipFlopFast"
QT_MOC_LITERAL(6, 72, 16), // "flipFlopVeryFast"
QT_MOC_LITERAL(7, 89, 7), // "timeout"
QT_MOC_LITERAL(8, 97, 9), // "ScanRates"
QT_MOC_LITERAL(9, 107, 8), // "VerySlow"
QT_MOC_LITERAL(10, 116, 4), // "Slow"
QT_MOC_LITERAL(11, 121, 6), // "Medium"
QT_MOC_LITERAL(12, 128, 4), // "Fast"
QT_MOC_LITERAL(13, 133, 8) // "VeryFast"

    },
    "QEScanTimers\0flipFlopVerySlow\0\0"
    "flipFlopSlow\0flipFlopMedium\0flipFlopFast\0"
    "flipFlopVeryFast\0timeout\0ScanRates\0"
    "VerySlow\0Slow\0Medium\0Fast\0VeryFast"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEScanTimers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,

 // enums: name, flags, count, data
       8, 0x0,    5,   64,

 // enum data: key, value
       9, uint(QEScanTimers::VerySlow),
      10, uint(QEScanTimers::Slow),
      11, uint(QEScanTimers::Medium),
      12, uint(QEScanTimers::Fast),
      13, uint(QEScanTimers::VeryFast),

       0        // eod
};

void QEScanTimers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEScanTimers *_t = static_cast<QEScanTimers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flipFlopVerySlow((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->flipFlopSlow((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->flipFlopMedium((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: _t->flipFlopFast((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 4: _t->flipFlopVeryFast((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEScanTimers::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScanTimers::flipFlopVerySlow)) {
                *result = 0;
            }
        }
        {
            typedef void (QEScanTimers::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScanTimers::flipFlopSlow)) {
                *result = 1;
            }
        }
        {
            typedef void (QEScanTimers::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScanTimers::flipFlopMedium)) {
                *result = 2;
            }
        }
        {
            typedef void (QEScanTimers::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScanTimers::flipFlopFast)) {
                *result = 3;
            }
        }
        {
            typedef void (QEScanTimers::*_t)(const bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScanTimers::flipFlopVeryFast)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QEScanTimers::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEScanTimers.data,
      qt_meta_data_QEScanTimers,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEScanTimers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEScanTimers::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEScanTimers.stringdata0))
        return static_cast<void*>(const_cast< QEScanTimers*>(this));
    return QObject::qt_metacast(_clname);
}

int QEScanTimers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QEScanTimers::flipFlopVerySlow(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEScanTimers::flipFlopSlow(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEScanTimers::flipFlopMedium(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QEScanTimers::flipFlopFast(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QEScanTimers::flipFlopVeryFast(const bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE

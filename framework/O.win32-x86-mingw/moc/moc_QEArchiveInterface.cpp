/****************************************************************************
** Meta object code from reading C++ file 'QEArchiveInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../archive/QEArchiveInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEArchiveInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEArchiveInterface_t {
    QByteArrayData data[16];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEArchiveInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEArchiveInterface_t qt_meta_stringdata_QEArchiveInterface = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEArchiveInterface"
QT_MOC_LITERAL(1, 19, 12), // "infoResponse"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "const QObject*"
QT_MOC_LITERAL(4, 48, 16), // "archivesResponse"
QT_MOC_LITERAL(5, 65, 31), // "QEArchiveInterface::ArchiveList"
QT_MOC_LITERAL(6, 97, 15), // "pvNamesResponse"
QT_MOC_LITERAL(7, 113, 30), // "QEArchiveInterface::PVNameList"
QT_MOC_LITERAL(8, 144, 14), // "valuesResponse"
QT_MOC_LITERAL(9, 159, 37), // "QEArchiveInterface::ResponseV..."
QT_MOC_LITERAL(10, 197, 14), // "xmlRpcResponse"
QT_MOC_LITERAL(11, 212, 27), // "QEArchiveInterface::Context"
QT_MOC_LITERAL(12, 240, 7), // "context"
QT_MOC_LITERAL(13, 248, 8), // "response"
QT_MOC_LITERAL(14, 257, 11), // "xmlRpcFault"
QT_MOC_LITERAL(15, 269, 5) // "error"

    },
    "QEArchiveInterface\0infoResponse\0\0"
    "const QObject*\0archivesResponse\0"
    "QEArchiveInterface::ArchiveList\0"
    "pvNamesResponse\0QEArchiveInterface::PVNameList\0"
    "valuesResponse\0QEArchiveInterface::ResponseValueList\0"
    "xmlRpcResponse\0QEArchiveInterface::Context\0"
    "context\0response\0xmlRpcFault\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEArchiveInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,
       4,    3,   53,    2, 0x06 /* Public */,
       6,    3,   60,    2, 0x06 /* Public */,
       8,    3,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    2,   74,    2, 0x08 /* Private */,
      14,    3,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Int, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 7,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 9,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11, QMetaType::QVariant,   12,   13,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int, QMetaType::QString,   12,   15,   13,

       0        // eod
};

void QEArchiveInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEArchiveInterface *_t = static_cast<QEArchiveInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoResponse((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->archivesResponse((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QEArchiveInterface::ArchiveList(*)>(_a[3]))); break;
        case 2: _t->pvNamesResponse((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QEArchiveInterface::PVNameList(*)>(_a[3]))); break;
        case 3: _t->valuesResponse((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QEArchiveInterface::ResponseValueList(*)>(_a[3]))); break;
        case 4: _t->xmlRpcResponse((*reinterpret_cast< const QEArchiveInterface::Context(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->xmlRpcFault((*reinterpret_cast< const QEArchiveInterface::Context(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::ArchiveList >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::PVNameList >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::ResponseValueList >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::Context >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::Context >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEArchiveInterface::*_t)(const QObject * , const bool , const int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveInterface::infoResponse)) {
                *result = 0;
            }
        }
        {
            typedef void (QEArchiveInterface::*_t)(const QObject * , const bool , const QEArchiveInterface::ArchiveList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveInterface::archivesResponse)) {
                *result = 1;
            }
        }
        {
            typedef void (QEArchiveInterface::*_t)(const QObject * , const bool , const QEArchiveInterface::PVNameList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveInterface::pvNamesResponse)) {
                *result = 2;
            }
        }
        {
            typedef void (QEArchiveInterface::*_t)(const QObject * , const bool , const QEArchiveInterface::ResponseValueList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveInterface::valuesResponse)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QEArchiveInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEArchiveInterface.data,
      qt_meta_data_QEArchiveInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEArchiveInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEArchiveInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEArchiveInterface.stringdata0))
        return static_cast<void*>(const_cast< QEArchiveInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int QEArchiveInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QEArchiveInterface::infoResponse(const QObject * _t1, const bool _t2, const int _t3, const QString & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEArchiveInterface::archivesResponse(const QObject * _t1, const bool _t2, const QEArchiveInterface::ArchiveList & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEArchiveInterface::pvNamesResponse(const QObject * _t1, const bool _t2, const QEArchiveInterface::PVNameList & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QEArchiveInterface::valuesResponse(const QObject * _t1, const bool _t2, const QEArchiveInterface::ResponseValueList & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QEArchiveInterfaceAgent_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEArchiveInterfaceAgent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEArchiveInterfaceAgent_t qt_meta_stringdata_QEArchiveInterfaceAgent = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QEArchiveInterfaceAgent"
QT_MOC_LITERAL(1, 24, 14), // "xmlRpcResponse"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 27), // "QEArchiveInterface::Context"
QT_MOC_LITERAL(4, 68, 11), // "xmlRpcFault"
QT_MOC_LITERAL(5, 80, 9), // "QVariant&"
QT_MOC_LITERAL(6, 90, 8), // "response"
QT_MOC_LITERAL(7, 99, 5) // "error"

    },
    "QEArchiveInterfaceAgent\0xmlRpcResponse\0"
    "\0QEArchiveInterface::Context\0xmlRpcFault\0"
    "QVariant&\0response\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEArchiveInterfaceAgent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       4,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    1,   46,    2, 0x08 /* Private */,
       4,    2,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    6,

       0        // eod
};

void QEArchiveInterfaceAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEArchiveInterfaceAgent *_t = static_cast<QEArchiveInterfaceAgent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xmlRpcResponse((*reinterpret_cast< const QEArchiveInterface::Context(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 1: _t->xmlRpcFault((*reinterpret_cast< const QEArchiveInterface::Context(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->xmlRpcResponse((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->xmlRpcFault((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::Context >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::Context >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEArchiveInterfaceAgent::*_t)(const QEArchiveInterface::Context & , const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveInterfaceAgent::xmlRpcResponse)) {
                *result = 0;
            }
        }
        {
            typedef void (QEArchiveInterfaceAgent::*_t)(const QEArchiveInterface::Context & , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveInterfaceAgent::xmlRpcFault)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QEArchiveInterfaceAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEArchiveInterfaceAgent.data,
      qt_meta_data_QEArchiveInterfaceAgent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEArchiveInterfaceAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEArchiveInterfaceAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEArchiveInterfaceAgent.stringdata0))
        return static_cast<void*>(const_cast< QEArchiveInterfaceAgent*>(this));
    return QObject::qt_metacast(_clname);
}

int QEArchiveInterfaceAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QEArchiveInterfaceAgent::xmlRpcResponse(const QEArchiveInterface::Context & _t1, const QVariant & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEArchiveInterfaceAgent::xmlRpcFault(const QEArchiveInterface::Context & _t1, int _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

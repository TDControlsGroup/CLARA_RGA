/****************************************************************************
** Meta object code from reading C++ file 'UserMessage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEWidget/UserMessage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserMessage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserMessageSignal_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserMessageSignal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserMessageSignal_t qt_meta_stringdata_UserMessageSignal = {
    {
QT_MOC_LITERAL(0, 0, 17), // "UserMessageSignal"
QT_MOC_LITERAL(1, 18, 7), // "message"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "msg"
QT_MOC_LITERAL(4, 31, 13), // "message_types"
QT_MOC_LITERAL(5, 45, 4), // "type"
QT_MOC_LITERAL(6, 50, 6), // "formId"
QT_MOC_LITERAL(7, 57, 8), // "sourceId"
QT_MOC_LITERAL(8, 66, 12), // "UserMessage*"
QT_MOC_LITERAL(9, 79, 10) // "originator"

    },
    "UserMessageSignal\0message\0\0msg\0"
    "message_types\0type\0formId\0sourceId\0"
    "UserMessage*\0originator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserMessageSignal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 8,    3,    5,    6,    7,    9,

       0        // eod
};

void UserMessageSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserMessageSignal *_t = static_cast<UserMessageSignal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< message_types(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< UserMessage*(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< message_types >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UserMessageSignal::*_t)(QString , message_types , unsigned int , unsigned int , UserMessage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UserMessageSignal::message)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UserMessageSignal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserMessageSignal.data,
      qt_meta_data_UserMessageSignal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserMessageSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserMessageSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserMessageSignal.stringdata0))
        return static_cast<void*>(const_cast< UserMessageSignal*>(this));
    return QObject::qt_metacast(_clname);
}

int UserMessageSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void UserMessageSignal::message(QString _t1, message_types _t2, unsigned int _t3, unsigned int _t4, UserMessage * _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_UserMessageSlot_t {
    QByteArrayData data[10];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserMessageSlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserMessageSlot_t qt_meta_stringdata_UserMessageSlot = {
    {
QT_MOC_LITERAL(0, 0, 15), // "UserMessageSlot"
QT_MOC_LITERAL(1, 16, 7), // "message"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "msg"
QT_MOC_LITERAL(4, 29, 13), // "message_types"
QT_MOC_LITERAL(5, 43, 4), // "type"
QT_MOC_LITERAL(6, 48, 6), // "formId"
QT_MOC_LITERAL(7, 55, 8), // "sourceId"
QT_MOC_LITERAL(8, 64, 12), // "UserMessage*"
QT_MOC_LITERAL(9, 77, 10) // "originator"

    },
    "UserMessageSlot\0message\0\0msg\0message_types\0"
    "type\0formId\0sourceId\0UserMessage*\0"
    "originator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserMessageSlot[] = {

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
       1,    5,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 8,    3,    5,    6,    7,    9,

       0        // eod
};

void UserMessageSlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserMessageSlot *_t = static_cast<UserMessageSlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< message_types(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< UserMessage*(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< message_types >(); break;
            }
            break;
        }
    }
}

const QMetaObject UserMessageSlot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UserMessageSlot.data,
      qt_meta_data_UserMessageSlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserMessageSlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserMessageSlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserMessageSlot.stringdata0))
        return static_cast<void*>(const_cast< UserMessageSlot*>(this));
    return QObject::qt_metacast(_clname);
}

int UserMessageSlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

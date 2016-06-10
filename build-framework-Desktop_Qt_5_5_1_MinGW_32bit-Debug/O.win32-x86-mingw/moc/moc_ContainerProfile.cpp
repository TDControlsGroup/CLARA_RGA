/****************************************************************************
** Meta object code from reading C++ file 'ContainerProfile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEWidget/ContainerProfile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContainerProfile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_userLevelTypes_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_userLevelTypes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_userLevelTypes_t qt_meta_stringdata_userLevelTypes = {
    {
QT_MOC_LITERAL(0, 0, 14), // "userLevelTypes"
QT_MOC_LITERAL(1, 15, 10), // "userLevels"
QT_MOC_LITERAL(2, 26, 14), // "USERLEVEL_USER"
QT_MOC_LITERAL(3, 41, 19), // "USERLEVEL_SCIENTIST"
QT_MOC_LITERAL(4, 61, 18) // "USERLEVEL_ENGINEER"

    },
    "userLevelTypes\0userLevels\0USERLEVEL_USER\0"
    "USERLEVEL_SCIENTIST\0USERLEVEL_ENGINEER"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userLevelTypes[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    3,   18,

 // enum data: key, value
       2, uint(userLevelTypes::USERLEVEL_USER),
       3, uint(userLevelTypes::USERLEVEL_SCIENTIST),
       4, uint(userLevelTypes::USERLEVEL_ENGINEER),

       0        // eod
};

void userLevelTypes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject userLevelTypes::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_userLevelTypes.data,
      qt_meta_data_userLevelTypes,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *userLevelTypes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userLevelTypes::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_userLevelTypes.stringdata0))
        return static_cast<void*>(const_cast< userLevelTypes*>(this));
    return QObject::qt_metacast(_clname);
}

int userLevelTypes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_userLevelSignal_t {
    QByteArrayData data[5];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_userLevelSignal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_userLevelSignal_t qt_meta_stringdata_userLevelSignal = {
    {
QT_MOC_LITERAL(0, 0, 15), // "userLevelSignal"
QT_MOC_LITERAL(1, 16, 11), // "userChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 26), // "userLevelTypes::userLevels"
QT_MOC_LITERAL(4, 56, 5) // "level"

    },
    "userLevelSignal\0userChanged\0\0"
    "userLevelTypes::userLevels\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userLevelSignal[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void userLevelSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        userLevelSignal *_t = static_cast<userLevelSignal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userChanged((*reinterpret_cast< userLevelTypes::userLevels(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (userLevelSignal::*_t)(userLevelTypes::userLevels );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&userLevelSignal::userChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject userLevelSignal::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_userLevelSignal.data,
      qt_meta_data_userLevelSignal,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *userLevelSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userLevelSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_userLevelSignal.stringdata0))
        return static_cast<void*>(const_cast< userLevelSignal*>(this));
    return QObject::qt_metacast(_clname);
}

int userLevelSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void userLevelSignal::userChanged(userLevelTypes::userLevels _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_userLevelSlot_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_userLevelSlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_userLevelSlot_t qt_meta_stringdata_userLevelSlot = {
    {
QT_MOC_LITERAL(0, 0, 13), // "userLevelSlot"
QT_MOC_LITERAL(1, 14, 11), // "userChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 26), // "userLevelTypes::userLevels"
QT_MOC_LITERAL(4, 54, 5) // "level"

    },
    "userLevelSlot\0userChanged\0\0"
    "userLevelTypes::userLevels\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userLevelSlot[] = {

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
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void userLevelSlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        userLevelSlot *_t = static_cast<userLevelSlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userChanged((*reinterpret_cast< userLevelTypes::userLevels(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject userLevelSlot::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_userLevelSlot.data,
      qt_meta_data_userLevelSlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *userLevelSlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userLevelSlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_userLevelSlot.stringdata0))
        return static_cast<void*>(const_cast< userLevelSlot*>(this));
    return QObject::qt_metacast(_clname);
}

int userLevelSlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

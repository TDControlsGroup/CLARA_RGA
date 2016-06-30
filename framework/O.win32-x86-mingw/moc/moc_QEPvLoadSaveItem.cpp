/****************************************************************************
** Meta object code from reading C++ file 'QEPvLoadSaveItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEPvLoadSave/QEPvLoadSaveItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPvLoadSaveItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPvLoadSaveItem_t {
    QByteArrayData data[24];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPvLoadSaveItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPvLoadSaveItem_t qt_meta_stringdata_QEPvLoadSaveItem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QEPvLoadSaveItem"
QT_MOC_LITERAL(1, 17, 20), // "reportActionComplete"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "const QEPvLoadSaveItem*"
QT_MOC_LITERAL(4, 63, 4), // "item"
QT_MOC_LITERAL(5, 68, 31), // "QEPvLoadSaveCommon::ActionKinds"
QT_MOC_LITERAL(6, 100, 6), // "action"
QT_MOC_LITERAL(7, 107, 16), // "actionSuccessful"
QT_MOC_LITERAL(8, 124, 17), // "connectionChanged"
QT_MOC_LITERAL(9, 142, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(10, 161, 14), // "connectionInfo"
QT_MOC_LITERAL(11, 176, 13), // "variableIndex"
QT_MOC_LITERAL(12, 190, 11), // "dataChanged"
QT_MOC_LITERAL(13, 202, 5), // "value"
QT_MOC_LITERAL(14, 208, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(15, 222, 9), // "alarmInfo"
QT_MOC_LITERAL(16, 232, 12), // "QCaDateTime&"
QT_MOC_LITERAL(17, 245, 9), // "timeStamp"
QT_MOC_LITERAL(18, 255, 14), // "setArchiveData"
QT_MOC_LITERAL(19, 270, 14), // "const QObject*"
QT_MOC_LITERAL(20, 285, 8), // "userData"
QT_MOC_LITERAL(21, 294, 4), // "okay"
QT_MOC_LITERAL(22, 299, 16), // "QCaDataPointList"
QT_MOC_LITERAL(23, 316, 11) // "archiveData"

    },
    "QEPvLoadSaveItem\0reportActionComplete\0"
    "\0const QEPvLoadSaveItem*\0item\0"
    "QEPvLoadSaveCommon::ActionKinds\0action\0"
    "actionSuccessful\0connectionChanged\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "variableIndex\0dataChanged\0value\0"
    "QCaAlarmInfo&\0alarmInfo\0QCaDateTime&\0"
    "timeStamp\0setArchiveData\0const QObject*\0"
    "userData\0okay\0QCaDataPointList\0"
    "archiveData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPvLoadSaveItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   41,    2, 0x08 /* Private */,
      12,    4,   46,    2, 0x08 /* Private */,
      18,    3,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, QMetaType::UInt,   10,   11,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 14, 0x80000000 | 16, QMetaType::UInt,   13,   15,   17,   11,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Bool, 0x80000000 | 22,   20,   21,   23,

       0        // eod
};

void QEPvLoadSaveItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPvLoadSaveItem *_t = static_cast<QEPvLoadSaveItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reportActionComplete((*reinterpret_cast< const QEPvLoadSaveItem*(*)>(_a[1])),(*reinterpret_cast< QEPvLoadSaveCommon::ActionKinds(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 2: _t->dataChanged((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 3: _t->setArchiveData((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QCaDataPointList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCaDataPointList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEPvLoadSaveItem::*_t)(const QEPvLoadSaveItem * , QEPvLoadSaveCommon::ActionKinds , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvLoadSaveItem::reportActionComplete)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QEPvLoadSaveItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEPvLoadSaveItem.data,
      qt_meta_data_QEPvLoadSaveItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPvLoadSaveItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPvLoadSaveItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPvLoadSaveItem.stringdata0))
        return static_cast<void*>(const_cast< QEPvLoadSaveItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QEPvLoadSaveItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QEPvLoadSaveItem::reportActionComplete(const QEPvLoadSaveItem * _t1, QEPvLoadSaveCommon::ActionKinds _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QEPvLoadSaveGroup_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPvLoadSaveGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPvLoadSaveGroup_t qt_meta_stringdata_QEPvLoadSaveGroup = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QEPvLoadSaveGroup"

    },
    "QEPvLoadSaveGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPvLoadSaveGroup[] = {

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

void QEPvLoadSaveGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEPvLoadSaveGroup::staticMetaObject = {
    { &QEPvLoadSaveItem::staticMetaObject, qt_meta_stringdata_QEPvLoadSaveGroup.data,
      qt_meta_data_QEPvLoadSaveGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPvLoadSaveGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPvLoadSaveGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPvLoadSaveGroup.stringdata0))
        return static_cast<void*>(const_cast< QEPvLoadSaveGroup*>(this));
    return QEPvLoadSaveItem::qt_metacast(_clname);
}

int QEPvLoadSaveGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEPvLoadSaveItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QEPvLoadSaveLeaf_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPvLoadSaveLeaf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPvLoadSaveLeaf_t qt_meta_stringdata_QEPvLoadSaveLeaf = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QEPvLoadSaveLeaf"

    },
    "QEPvLoadSaveLeaf"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPvLoadSaveLeaf[] = {

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

void QEPvLoadSaveLeaf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEPvLoadSaveLeaf::staticMetaObject = {
    { &QEPvLoadSaveItem::staticMetaObject, qt_meta_stringdata_QEPvLoadSaveLeaf.data,
      qt_meta_data_QEPvLoadSaveLeaf,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPvLoadSaveLeaf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPvLoadSaveLeaf::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPvLoadSaveLeaf.stringdata0))
        return static_cast<void*>(const_cast< QEPvLoadSaveLeaf*>(this));
    return QEPvLoadSaveItem::qt_metacast(_clname);
}

int QEPvLoadSaveLeaf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEPvLoadSaveItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

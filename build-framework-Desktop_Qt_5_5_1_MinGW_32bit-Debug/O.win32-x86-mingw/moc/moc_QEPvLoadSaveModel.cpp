/****************************************************************************
** Meta object code from reading C++ file 'QEPvLoadSaveModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEPvLoadSave/QEPvLoadSaveModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPvLoadSaveModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPvLoadSaveModel_t {
    QByteArrayData data[10];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPvLoadSaveModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPvLoadSaveModel_t qt_meta_stringdata_QEPvLoadSaveModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QEPvLoadSaveModel"
QT_MOC_LITERAL(1, 18, 20), // "reportActionComplete"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 31), // "QEPvLoadSaveCommon::ActionKinds"
QT_MOC_LITERAL(4, 72, 20), // "acceptActionComplete"
QT_MOC_LITERAL(5, 93, 23), // "const QEPvLoadSaveItem*"
QT_MOC_LITERAL(6, 117, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 134, 14), // "QItemSelection"
QT_MOC_LITERAL(8, 149, 8), // "selected"
QT_MOC_LITERAL(9, 158, 10) // "deselected"

    },
    "QEPvLoadSaveModel\0reportActionComplete\0"
    "\0QEPvLoadSaveCommon::ActionKinds\0"
    "acceptActionComplete\0const QEPvLoadSaveItem*\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPvLoadSaveModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   34,    2, 0x08 /* Private */,
       6,    2,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 3, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,

       0        // eod
};

void QEPvLoadSaveModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPvLoadSaveModel *_t = static_cast<QEPvLoadSaveModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reportActionComplete((*reinterpret_cast< QEPvLoadSaveCommon::ActionKinds(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->acceptActionComplete((*reinterpret_cast< const QEPvLoadSaveItem*(*)>(_a[1])),(*reinterpret_cast< QEPvLoadSaveCommon::ActionKinds(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEPvLoadSaveModel::*_t)(QEPvLoadSaveCommon::ActionKinds , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPvLoadSaveModel::reportActionComplete)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QEPvLoadSaveModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QEPvLoadSaveModel.data,
      qt_meta_data_QEPvLoadSaveModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPvLoadSaveModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPvLoadSaveModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPvLoadSaveModel.stringdata0))
        return static_cast<void*>(const_cast< QEPvLoadSaveModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QEPvLoadSaveModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QEPvLoadSaveModel::reportActionComplete(QEPvLoadSaveCommon::ActionKinds _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

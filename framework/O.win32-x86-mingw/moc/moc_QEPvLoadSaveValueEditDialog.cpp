/****************************************************************************
** Meta object code from reading C++ file 'QEPvLoadSaveValueEditDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEPvLoadSave/QEPvLoadSaveValueEditDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPvLoadSaveValueEditDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPvLoadSaveValueEditDialog_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPvLoadSaveValueEditDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPvLoadSaveValueEditDialog_t qt_meta_stringdata_QEPvLoadSaveValueEditDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QEPvLoadSaveValueEditDialog"
QT_MOC_LITERAL(1, 28, 19), // "elementIndexChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "newIndex"
QT_MOC_LITERAL(4, 58, 21), // "numberElementsChanged"
QT_MOC_LITERAL(5, 80, 16), // "numberOfElements"
QT_MOC_LITERAL(6, 97, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(7, 119, 21) // "on_buttonBox_accepted"

    },
    "QEPvLoadSaveValueEditDialog\0"
    "elementIndexChanged\0\0newIndex\0"
    "numberElementsChanged\0numberOfElements\0"
    "on_buttonBox_rejected\0on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPvLoadSaveValueEditDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QEPvLoadSaveValueEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPvLoadSaveValueEditDialog *_t = static_cast<QEPvLoadSaveValueEditDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elementIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->numberElementsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject QEPvLoadSaveValueEditDialog::staticMetaObject = {
    { &QEDialog::staticMetaObject, qt_meta_stringdata_QEPvLoadSaveValueEditDialog.data,
      qt_meta_data_QEPvLoadSaveValueEditDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPvLoadSaveValueEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPvLoadSaveValueEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPvLoadSaveValueEditDialog.stringdata0))
        return static_cast<void*>(const_cast< QEPvLoadSaveValueEditDialog*>(this));
    return QEDialog::qt_metacast(_clname);
}

int QEPvLoadSaveValueEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

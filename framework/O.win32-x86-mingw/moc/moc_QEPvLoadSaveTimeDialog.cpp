/****************************************************************************
** Meta object code from reading C++ file 'QEPvLoadSaveTimeDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEPvLoadSave/QEPvLoadSaveTimeDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPvLoadSaveTimeDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPvLoadSaveTimeDialog_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPvLoadSaveTimeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPvLoadSaveTimeDialog_t qt_meta_stringdata_QEPvLoadSaveTimeDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QEPvLoadSaveTimeDialog"
QT_MOC_LITERAL(1, 23, 11), // "dateClicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "date"
QT_MOC_LITERAL(4, 41, 11), // "timeChanged"
QT_MOC_LITERAL(5, 53, 4), // "time"
QT_MOC_LITERAL(6, 58, 18), // "sliderValueChanged"
QT_MOC_LITERAL(7, 77, 5), // "value"
QT_MOC_LITERAL(8, 83, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(9, 105, 21) // "on_buttonBox_accepted"

    },
    "QEPvLoadSaveTimeDialog\0dateClicked\0\0"
    "date\0timeChanged\0time\0sliderValueChanged\0"
    "value\0on_buttonBox_rejected\0"
    "on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPvLoadSaveTimeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QTime,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QEPvLoadSaveTimeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPvLoadSaveTimeDialog *_t = static_cast<QEPvLoadSaveTimeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dateClicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->timeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 2: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_buttonBox_rejected(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject QEPvLoadSaveTimeDialog::staticMetaObject = {
    { &QEDialog::staticMetaObject, qt_meta_stringdata_QEPvLoadSaveTimeDialog.data,
      qt_meta_data_QEPvLoadSaveTimeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPvLoadSaveTimeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPvLoadSaveTimeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPvLoadSaveTimeDialog.stringdata0))
        return static_cast<void*>(const_cast< QEPvLoadSaveTimeDialog*>(this));
    return QEDialog::qt_metacast(_clname);
}

int QEPvLoadSaveTimeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

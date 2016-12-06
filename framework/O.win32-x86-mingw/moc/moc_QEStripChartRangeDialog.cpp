/****************************************************************************
** Meta object code from reading C++ file 'QEStripChartRangeDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgetsCLARA/QEStripChart/QEStripChartRangeDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEStripChartRangeDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEStripChartRangeDialog_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEStripChartRangeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEStripChartRangeDialog_t qt_meta_stringdata_QEStripChartRangeDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QEStripChartRangeDialog"
QT_MOC_LITERAL(1, 24, 16), // "minReturnPressed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "maxReturnPressed"
QT_MOC_LITERAL(4, 59, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(5, 81, 21) // "on_buttonBox_accepted"

    },
    "QEStripChartRangeDialog\0minReturnPressed\0"
    "\0maxReturnPressed\0on_buttonBox_rejected\0"
    "on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEStripChartRangeDialog[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QEStripChartRangeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEStripChartRangeDialog *_t = static_cast<QEStripChartRangeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minReturnPressed(); break;
        case 1: _t->maxReturnPressed(); break;
        case 2: _t->on_buttonBox_rejected(); break;
        case 3: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QEStripChartRangeDialog::staticMetaObject = {
    { &QEDialog::staticMetaObject, qt_meta_stringdata_QEStripChartRangeDialog.data,
      qt_meta_data_QEStripChartRangeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEStripChartRangeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEStripChartRangeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEStripChartRangeDialog.stringdata0))
        return static_cast<void*>(const_cast< QEStripChartRangeDialog*>(this));
    return QEDialog::qt_metacast(_clname);
}

int QEStripChartRangeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

/****************************************************************************
** Meta object code from reading C++ file 'QEStripChartTimeDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEStripChart/QEStripChartTimeDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEStripChartTimeDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEStripChartTimeDialog_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEStripChartTimeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEStripChartTimeDialog_t qt_meta_stringdata_QEStripChartTimeDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QEStripChartTimeDialog"
QT_MOC_LITERAL(1, 23, 16), // "startDateClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "date"
QT_MOC_LITERAL(4, 46, 14), // "endDateClicked"
QT_MOC_LITERAL(5, 61, 16), // "startTimeChanged"
QT_MOC_LITERAL(6, 78, 4), // "time"
QT_MOC_LITERAL(7, 83, 14), // "endTimeChanged"
QT_MOC_LITERAL(8, 98, 23), // "startSliderValueChanged"
QT_MOC_LITERAL(9, 122, 5), // "value"
QT_MOC_LITERAL(10, 128, 21), // "endSliderValueChanged"
QT_MOC_LITERAL(11, 150, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(12, 172, 21) // "on_buttonBox_accepted"

    },
    "QEStripChartTimeDialog\0startDateClicked\0"
    "\0date\0endDateClicked\0startTimeChanged\0"
    "time\0endTimeChanged\0startSliderValueChanged\0"
    "value\0endSliderValueChanged\0"
    "on_buttonBox_rejected\0on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEStripChartTimeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       5,    1,   60,    2, 0x08 /* Private */,
       7,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
      10,    1,   69,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QTime,    6,
    QMetaType::Void, QMetaType::QTime,    6,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QEStripChartTimeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEStripChartTimeDialog *_t = static_cast<QEStripChartTimeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startDateClicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->endDateClicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->startTimeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 3: _t->endTimeChanged((*reinterpret_cast< const QTime(*)>(_a[1]))); break;
        case 4: _t->startSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->endSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_buttonBox_rejected(); break;
        case 7: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject QEStripChartTimeDialog::staticMetaObject = {
    { &QEDialog::staticMetaObject, qt_meta_stringdata_QEStripChartTimeDialog.data,
      qt_meta_data_QEStripChartTimeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEStripChartTimeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEStripChartTimeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEStripChartTimeDialog.stringdata0))
        return static_cast<void*>(const_cast< QEStripChartTimeDialog*>(this));
    return QEDialog::qt_metacast(_clname);
}

int QEStripChartTimeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'QEStripChartAdjustPVDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgetsCLARA/QEStripChart/QEStripChartAdjustPVDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEStripChartAdjustPVDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEStripChartAdjustPVDialog_t {
    QByteArrayData data[12];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEStripChartAdjustPVDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEStripChartAdjustPVDialog_t qt_meta_stringdata_QEStripChartAdjustPVDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QEStripChartAdjustPVDialog"
QT_MOC_LITERAL(1, 27, 19), // "originReturnPressed"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 18), // "slopeReturnPressed"
QT_MOC_LITERAL(4, 67, 19), // "offsetReturnPressed"
QT_MOC_LITERAL(5, 87, 18), // "resetButtonClicked"
QT_MOC_LITERAL(6, 106, 7), // "checked"
QT_MOC_LITERAL(7, 114, 21), // "loprHoprButtonClicked"
QT_MOC_LITERAL(8, 136, 20), // "plottedButtonClicked"
QT_MOC_LITERAL(9, 157, 21), // "bufferedButtonClicked"
QT_MOC_LITERAL(10, 179, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(11, 201, 21) // "on_buttonBox_accepted"

    },
    "QEStripChartAdjustPVDialog\0"
    "originReturnPressed\0\0slopeReturnPressed\0"
    "offsetReturnPressed\0resetButtonClicked\0"
    "checked\0loprHoprButtonClicked\0"
    "plottedButtonClicked\0bufferedButtonClicked\0"
    "on_buttonBox_rejected\0on_buttonBox_accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEStripChartAdjustPVDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       5,    0,   85,    2, 0x28 /* Private | MethodCloned */,
       7,    1,   86,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x28 /* Private | MethodCloned */,
       8,    1,   90,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x28 /* Private | MethodCloned */,
       9,    1,   94,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x28 /* Private | MethodCloned */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QEStripChartAdjustPVDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEStripChartAdjustPVDialog *_t = static_cast<QEStripChartAdjustPVDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->originReturnPressed(); break;
        case 1: _t->slopeReturnPressed(); break;
        case 2: _t->offsetReturnPressed(); break;
        case 3: _t->resetButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->resetButtonClicked(); break;
        case 5: _t->loprHoprButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->loprHoprButtonClicked(); break;
        case 7: _t->plottedButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->plottedButtonClicked(); break;
        case 9: _t->bufferedButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->bufferedButtonClicked(); break;
        case 11: _t->on_buttonBox_rejected(); break;
        case 12: _t->on_buttonBox_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject QEStripChartAdjustPVDialog::staticMetaObject = {
    { &QEDialog::staticMetaObject, qt_meta_stringdata_QEStripChartAdjustPVDialog.data,
      qt_meta_data_QEStripChartAdjustPVDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEStripChartAdjustPVDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEStripChartAdjustPVDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEStripChartAdjustPVDialog.stringdata0))
        return static_cast<void*>(const_cast< QEStripChartAdjustPVDialog*>(this));
    return QEDialog::qt_metacast(_clname);
}

int QEStripChartAdjustPVDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

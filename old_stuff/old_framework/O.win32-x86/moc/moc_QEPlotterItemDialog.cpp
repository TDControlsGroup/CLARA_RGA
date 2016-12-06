/****************************************************************************
** Meta object code from reading C++ file 'QEPlotterItemDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgetsCLARA/QEPlotterCLARA/QEPlotterItemDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPlotterItemDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPlotterItemDialog_t {
    QByteArrayData data[10];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPlotterItemDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPlotterItemDialog_t qt_meta_stringdata_QEPlotterItemDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QEPlotterItemDialog"
QT_MOC_LITERAL(1, 20, 21), // "dataEditReturnPressed"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 22), // "aliasEditReturnPressed"
QT_MOC_LITERAL(4, 66, 21), // "sizeEditReturnPressed"
QT_MOC_LITERAL(5, 88, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(6, 110, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(7, 132, 18), // "clearButtonClicked"
QT_MOC_LITERAL(8, 151, 7), // "checked"
QT_MOC_LITERAL(9, 159, 19) // "colourButtonClicked"

    },
    "QEPlotterItemDialog\0dataEditReturnPressed\0"
    "\0aliasEditReturnPressed\0sizeEditReturnPressed\0"
    "on_buttonBox_rejected\0on_buttonBox_accepted\0"
    "clearButtonClicked\0checked\0"
    "colourButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPlotterItemDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x28 /* Private | MethodCloned */,
       9,    1,   68,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void QEPlotterItemDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPlotterItemDialog *_t = static_cast<QEPlotterItemDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataEditReturnPressed(); break;
        case 1: _t->aliasEditReturnPressed(); break;
        case 2: _t->sizeEditReturnPressed(); break;
        case 3: _t->on_buttonBox_rejected(); break;
        case 4: _t->on_buttonBox_accepted(); break;
        case 5: _t->clearButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->clearButtonClicked(); break;
        case 7: _t->colourButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->colourButtonClicked(); break;
        default: ;
        }
    }
}

const QMetaObject QEPlotterItemDialog::staticMetaObject = {
    { &QEDialog::staticMetaObject, qt_meta_stringdata_QEPlotterItemDialog.data,
      qt_meta_data_QEPlotterItemDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPlotterItemDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPlotterItemDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPlotterItemDialog.stringdata0))
        return static_cast<void*>(const_cast< QEPlotterItemDialog*>(this));
    return QEDialog::qt_metacast(_clname);
}

int QEPlotterItemDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

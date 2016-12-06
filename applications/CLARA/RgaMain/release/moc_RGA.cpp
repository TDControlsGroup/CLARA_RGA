/****************************************************************************
** Meta object code from reading C++ file 'RGA.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RGA.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RGA.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RGA_t {
    QByteArrayData data[14];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RGA_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RGA_t qt_meta_stringdata_RGA = {
    {
QT_MOC_LITERAL(0, 0, 3), // "RGA"
QT_MOC_LITERAL(1, 4, 18), // "RGAFormShowAnaPlot"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 18), // "RGAFormShowBarPlot"
QT_MOC_LITERAL(4, 43, 20), // "RGAFormShowStripPlot"
QT_MOC_LITERAL(5, 64, 21), // "RGAFormShowBarSummary"
QT_MOC_LITERAL(6, 86, 17), // "connectionChanged"
QT_MOC_LITERAL(7, 104, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(8, 123, 11), // "updateTitle"
QT_MOC_LITERAL(9, 135, 4), // "data"
QT_MOC_LITERAL(10, 140, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(11, 154, 9), // "alarmInfo"
QT_MOC_LITERAL(12, 164, 12), // "QCaDateTime&"
QT_MOC_LITERAL(13, 177, 9) // "timeStamp"

    },
    "RGA\0RGAFormShowAnaPlot\0\0RGAFormShowBarPlot\0"
    "RGAFormShowStripPlot\0RGAFormShowBarSummary\0"
    "connectionChanged\0QCaConnectionInfo&\0"
    "updateTitle\0data\0QCaAlarmInfo&\0alarmInfo\0"
    "QCaDateTime&\0timeStamp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RGA[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    1,   46,    2, 0x0a /* Public */,
       5,    1,   49,    2, 0x0a /* Public */,
       6,    1,   52,    2, 0x08 /* Private */,
       8,    4,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 12, QMetaType::UInt,    9,   11,   13,    2,

       0        // eod
};

void RGA::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RGA *_t = static_cast<RGA *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RGAFormShowAnaPlot(); break;
        case 1: _t->RGAFormShowBarPlot(); break;
        case 2: _t->RGAFormShowStripPlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->RGAFormShowBarSummary((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1]))); break;
        case 5: _t->updateTitle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject RGA::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RGA.data,
      qt_meta_data_RGA,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RGA::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RGA::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RGA.stringdata0))
        return static_cast<void*>(const_cast< RGA*>(this));
    return QObject::qt_metacast(_clname);
}

int RGA::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

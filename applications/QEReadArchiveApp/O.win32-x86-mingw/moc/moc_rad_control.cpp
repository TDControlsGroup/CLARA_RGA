/****************************************************************************
** Meta object code from reading C++ file 'rad_control.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rad_control.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rad_control.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Rad_Control_t {
    QByteArrayData data[13];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Rad_Control_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Rad_Control_t qt_meta_stringdata_Rad_Control = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Rad_Control"
QT_MOC_LITERAL(1, 12, 9), // "printFile"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "filename"
QT_MOC_LITERAL(4, 32, 13), // "std::ostream&"
QT_MOC_LITERAL(5, 46, 6), // "stream"
QT_MOC_LITERAL(6, 53, 11), // "tickTimeout"
QT_MOC_LITERAL(7, 65, 14), // "setArchiveData"
QT_MOC_LITERAL(8, 80, 14), // "const QObject*"
QT_MOC_LITERAL(9, 95, 8), // "userData"
QT_MOC_LITERAL(10, 104, 4), // "okay"
QT_MOC_LITERAL(11, 109, 16), // "QCaDataPointList"
QT_MOC_LITERAL(12, 126, 11) // "archiveData"

    },
    "Rad_Control\0printFile\0\0filename\0"
    "std::ostream&\0stream\0tickTimeout\0"
    "setArchiveData\0const QObject*\0userData\0"
    "okay\0QCaDataPointList\0archiveData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rad_Control[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    0,   34,    2, 0x08 /* Private */,
       7,    3,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool, 0x80000000 | 11,    9,   10,   12,

       0        // eod
};

void Rad_Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Rad_Control *_t = static_cast<Rad_Control *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->printFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< std::ostream(*)>(_a[2]))); break;
        case 1: _t->tickTimeout(); break;
        case 2: _t->setArchiveData((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QCaDataPointList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCaDataPointList >(); break;
            }
            break;
        }
    }
}

const QMetaObject Rad_Control::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Rad_Control.data,
      qt_meta_data_Rad_Control,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Rad_Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rad_Control::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Rad_Control.stringdata0))
        return static_cast<void*>(const_cast< Rad_Control*>(this));
    return QObject::qt_metacast(_clname);
}

int Rad_Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE

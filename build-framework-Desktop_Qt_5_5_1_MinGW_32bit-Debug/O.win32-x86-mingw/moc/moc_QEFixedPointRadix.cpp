/****************************************************************************
** Meta object code from reading C++ file 'QEFixedPointRadix.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/common/QEFixedPointRadix.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEFixedPointRadix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEFixedPointRadix_t {
    QByteArrayData data[11];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEFixedPointRadix_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEFixedPointRadix_t qt_meta_stringdata_QEFixedPointRadix = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QEFixedPointRadix"
QT_MOC_LITERAL(1, 18, 8), // "Radicies"
QT_MOC_LITERAL(2, 27, 7), // "Decimal"
QT_MOC_LITERAL(3, 35, 11), // "Hexadecimal"
QT_MOC_LITERAL(4, 47, 5), // "Octal"
QT_MOC_LITERAL(5, 53, 6), // "Binary"
QT_MOC_LITERAL(6, 60, 10), // "Separators"
QT_MOC_LITERAL(7, 71, 4), // "None"
QT_MOC_LITERAL(8, 76, 5), // "Comma"
QT_MOC_LITERAL(9, 82, 10), // "Underscore"
QT_MOC_LITERAL(10, 93, 5) // "Space"

    },
    "QEFixedPointRadix\0Radicies\0Decimal\0"
    "Hexadecimal\0Octal\0Binary\0Separators\0"
    "None\0Comma\0Underscore\0Space"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEFixedPointRadix[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   22,
       6, 0x0,    4,   30,

 // enum data: key, value
       2, uint(QEFixedPointRadix::Decimal),
       3, uint(QEFixedPointRadix::Hexadecimal),
       4, uint(QEFixedPointRadix::Octal),
       5, uint(QEFixedPointRadix::Binary),
       7, uint(QEFixedPointRadix::None),
       8, uint(QEFixedPointRadix::Comma),
       9, uint(QEFixedPointRadix::Underscore),
      10, uint(QEFixedPointRadix::Space),

       0        // eod
};

void QEFixedPointRadix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEFixedPointRadix::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEFixedPointRadix.data,
      qt_meta_data_QEFixedPointRadix,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEFixedPointRadix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEFixedPointRadix::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEFixedPointRadix.stringdata0))
        return static_cast<void*>(const_cast< QEFixedPointRadix*>(this));
    return QObject::qt_metacast(_clname);
}

int QEFixedPointRadix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'QEAxisPainter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/common/QEAxisPainter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEAxisPainter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEAxisPainter_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEAxisPainter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEAxisPainter_t qt_meta_stringdata_QEAxisPainter = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QEAxisPainter"
QT_MOC_LITERAL(1, 14, 12), // "Orientations"
QT_MOC_LITERAL(2, 27, 13), // "Left_To_Right"
QT_MOC_LITERAL(3, 41, 13), // "Top_To_Bottom"
QT_MOC_LITERAL(4, 55, 13), // "Right_To_Left"
QT_MOC_LITERAL(5, 69, 13), // "Bottom_To_Top"
QT_MOC_LITERAL(6, 83, 13), // "TextPositions"
QT_MOC_LITERAL(7, 97, 9), // "BelowLeft"
QT_MOC_LITERAL(8, 107, 10) // "AboveRight"

    },
    "QEAxisPainter\0Orientations\0Left_To_Right\0"
    "Top_To_Bottom\0Right_To_Left\0Bottom_To_Top\0"
    "TextPositions\0BelowLeft\0AboveRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEAxisPainter[] = {

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
       6, 0x0,    2,   30,

 // enum data: key, value
       2, uint(QEAxisPainter::Left_To_Right),
       3, uint(QEAxisPainter::Top_To_Bottom),
       4, uint(QEAxisPainter::Right_To_Left),
       5, uint(QEAxisPainter::Bottom_To_Top),
       7, uint(QEAxisPainter::BelowLeft),
       8, uint(QEAxisPainter::AboveRight),

       0        // eod
};

void QEAxisPainter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEAxisPainter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEAxisPainter.data,
      qt_meta_data_QEAxisPainter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEAxisPainter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEAxisPainter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEAxisPainter.stringdata0))
        return static_cast<void*>(const_cast< QEAxisPainter*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEAxisPainter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

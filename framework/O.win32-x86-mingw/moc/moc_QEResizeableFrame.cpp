/****************************************************************************
** Meta object code from reading C++ file 'QEResizeableFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEResizeableFrame/QEResizeableFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEResizeableFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEResizeableFrame_t {
    QByteArrayData data[9];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEResizeableFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEResizeableFrame_t qt_meta_stringdata_QEResizeableFrame = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QEResizeableFrame"
QT_MOC_LITERAL(1, 18, 12), // "grabbingEdge"
QT_MOC_LITERAL(2, 31, 13), // "GrabbingEdges"
QT_MOC_LITERAL(3, 45, 14), // "allowedMinimum"
QT_MOC_LITERAL(4, 60, 14), // "allowedMaximum"
QT_MOC_LITERAL(5, 75, 7), // "TopEdge"
QT_MOC_LITERAL(6, 83, 8), // "LeftEdge"
QT_MOC_LITERAL(7, 92, 10), // "BottomEdge"
QT_MOC_LITERAL(8, 103, 9) // "RightEdge"

    },
    "QEResizeableFrame\0grabbingEdge\0"
    "GrabbingEdges\0allowedMinimum\0"
    "allowedMaximum\0TopEdge\0LeftEdge\0"
    "BottomEdge\0RightEdge"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEResizeableFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
       2, 0x0,    4,   27,

 // enum data: key, value
       5, uint(QEResizeableFrame::TopEdge),
       6, uint(QEResizeableFrame::LeftEdge),
       7, uint(QEResizeableFrame::BottomEdge),
       8, uint(QEResizeableFrame::RightEdge),

       0        // eod
};

void QEResizeableFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QEResizeableFrame *_t = static_cast<QEResizeableFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< GrabbingEdges*>(_v) = _t->getGrabbingEdge(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getAllowedMinimum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getAllowedMaximum(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEResizeableFrame *_t = static_cast<QEResizeableFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGrabbingEdge(*reinterpret_cast< GrabbingEdges*>(_v)); break;
        case 1: _t->setAllowedMinimum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setAllowedMaximum(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEResizeableFrame::staticMetaObject = {
    { &QEFrame::staticMetaObject, qt_meta_stringdata_QEResizeableFrame.data,
      qt_meta_data_QEResizeableFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEResizeableFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEResizeableFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEResizeableFrame.stringdata0))
        return static_cast<void*>(const_cast< QEResizeableFrame*>(this));
    return QEFrame::qt_metacast(_clname);
}

int QEResizeableFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

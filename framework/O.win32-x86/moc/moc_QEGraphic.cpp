/****************************************************************************
** Meta object code from reading C++ file 'QEGraphic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../common/QEGraphic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEGraphic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEGraphic_t {
    QByteArrayData data[16];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEGraphic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEGraphic_t qt_meta_stringdata_QEGraphic = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QEGraphic"
QT_MOC_LITERAL(1, 10, 9), // "mouseMove"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "posn"
QT_MOC_LITERAL(4, 26, 11), // "wheelRotate"
QT_MOC_LITERAL(5, 38, 5), // "delta"
QT_MOC_LITERAL(6, 44, 14), // "areaDefinition"
QT_MOC_LITERAL(7, 59, 4), // "from"
QT_MOC_LITERAL(8, 64, 2), // "to"
QT_MOC_LITERAL(9, 67, 14), // "lineDefinition"
QT_MOC_LITERAL(10, 82, 14), // "crosshairsMove"
QT_MOC_LITERAL(11, 97, 10), // "markupMove"
QT_MOC_LITERAL(12, 108, 23), // "QEGraphicNames::Markups"
QT_MOC_LITERAL(13, 132, 6), // "markup"
QT_MOC_LITERAL(14, 139, 8), // "position"
QT_MOC_LITERAL(15, 148, 11) // "tickTimeout"

    },
    "QEGraphic\0mouseMove\0\0posn\0wheelRotate\0"
    "delta\0areaDefinition\0from\0to\0"
    "lineDefinition\0crosshairsMove\0markupMove\0"
    "QEGraphicNames::Markups\0markup\0position\0"
    "tickTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEGraphic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    2,   52,    2, 0x06 /* Public */,
       6,    2,   57,    2, 0x06 /* Public */,
       9,    2,   62,    2, 0x06 /* Public */,
      10,    1,   67,    2, 0x06 /* Public */,
      11,    2,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,    3,    5,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    7,    8,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    7,    8,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QPointF,   13,   14,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QEGraphic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEGraphic *_t = static_cast<QEGraphic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mouseMove((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->wheelRotate((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->areaDefinition((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 3: _t->lineDefinition((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 4: _t->crosshairsMove((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 5: _t->markupMove((*reinterpret_cast< const QEGraphicNames::Markups(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 6: _t->tickTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEGraphic::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEGraphic::mouseMove)) {
                *result = 0;
            }
        }
        {
            typedef void (QEGraphic::*_t)(const QPointF & , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEGraphic::wheelRotate)) {
                *result = 1;
            }
        }
        {
            typedef void (QEGraphic::*_t)(const QPointF & , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEGraphic::areaDefinition)) {
                *result = 2;
            }
        }
        {
            typedef void (QEGraphic::*_t)(const QPointF & , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEGraphic::lineDefinition)) {
                *result = 3;
            }
        }
        {
            typedef void (QEGraphic::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEGraphic::crosshairsMove)) {
                *result = 4;
            }
        }
        {
            typedef void (QEGraphic::*_t)(const QEGraphicNames::Markups , const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEGraphic::markupMove)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QEGraphic::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEGraphic.data,
      qt_meta_data_QEGraphic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEGraphic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEGraphic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEGraphic.stringdata0))
        return static_cast<void*>(const_cast< QEGraphic*>(this));
    if (!strcmp(_clname, "QEGraphicNames"))
        return static_cast< QEGraphicNames*>(const_cast< QEGraphic*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEGraphic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QEGraphic::mouseMove(const QPointF & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEGraphic::wheelRotate(const QPointF & _t1, const int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEGraphic::areaDefinition(const QPointF & _t1, const QPointF & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QEGraphic::lineDefinition(const QPointF & _t1, const QPointF & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QEGraphic::crosshairsMove(const QPointF & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QEGraphic::markupMove(const QEGraphicNames::Markups _t1, const QPointF & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'QEScratchPad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEScratchPad/QEScratchPad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEScratchPad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEScratchPad_t {
    QByteArrayData data[16];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEScratchPad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEScratchPad_t qt_meta_stringdata_QEScratchPad = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QEScratchPad"
QT_MOC_LITERAL(1, 13, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "value"
QT_MOC_LITERAL(4, 37, 16), // "pvNameSetChanged"
QT_MOC_LITERAL(5, 54, 7), // "nameSet"
QT_MOC_LITERAL(6, 62, 12), // "setSelection"
QT_MOC_LITERAL(7, 75, 12), // "setPvNameSet"
QT_MOC_LITERAL(8, 88, 9), // "pvNameSet"
QT_MOC_LITERAL(9, 98, 12), // "intialResize"
QT_MOC_LITERAL(10, 111, 20), // "contextMenuRequested"
QT_MOC_LITERAL(11, 132, 3), // "pos"
QT_MOC_LITERAL(12, 136, 19), // "contextMenuSelected"
QT_MOC_LITERAL(13, 156, 4), // "slot"
QT_MOC_LITERAL(14, 161, 36), // "QEScratchPadMenu::ContextMenu..."
QT_MOC_LITERAL(15, 198, 6) // "option"

    },
    "QEScratchPad\0selectionChanged\0\0value\0"
    "pvNameSetChanged\0nameSet\0setSelection\0"
    "setPvNameSet\0pvNameSet\0intialResize\0"
    "contextMenuRequested\0pos\0contextMenuSelected\0"
    "slot\0QEScratchPadMenu::ContextMenuOptions\0"
    "option"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEScratchPad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    1,   62,    2, 0x08 /* Private */,
      12,    2,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QStringList,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,

       0        // eod
};

void QEScratchPad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEScratchPad *_t = static_cast<QEScratchPad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pvNameSetChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->setSelection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setPvNameSet((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->intialResize(); break;
        case 5: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->contextMenuSelected((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QEScratchPadMenu::ContextMenuOptions(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEScratchPad::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScratchPad::selectionChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QEScratchPad::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEScratchPad::pvNameSetChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QEScratchPad::staticMetaObject = {
    { &QEAbstractDynamicWidget::staticMetaObject, qt_meta_stringdata_QEScratchPad.data,
      qt_meta_data_QEScratchPad,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEScratchPad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEScratchPad::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEScratchPad.stringdata0))
        return static_cast<void*>(const_cast< QEScratchPad*>(this));
    if (!strcmp(_clname, "QEQuickSort"))
        return static_cast< QEQuickSort*>(const_cast< QEScratchPad*>(this));
    return QEAbstractDynamicWidget::qt_metacast(_clname);
}

int QEScratchPad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEAbstractDynamicWidget::qt_metacall(_c, _id, _a);
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
void QEScratchPad::selectionChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEScratchPad::pvNameSetChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

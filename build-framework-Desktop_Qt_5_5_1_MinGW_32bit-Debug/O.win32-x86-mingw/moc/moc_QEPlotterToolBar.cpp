/****************************************************************************
** Meta object code from reading C++ file 'QEPlotterToolBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgetsCLARA/QEPlotterCLARA/QEPlotterToolBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPlotterToolBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPlotterToolBar_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPlotterToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPlotterToolBar_t qt_meta_stringdata_QEPlotterToolBar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QEPlotterToolBar"
QT_MOC_LITERAL(1, 17, 8), // "selected"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 27), // "QEPlotterNames::MenuActions"
QT_MOC_LITERAL(4, 55, 6), // "action"
QT_MOC_LITERAL(5, 62, 4), // "slot"
QT_MOC_LITERAL(6, 67, 13), // "buttonClicked"
QT_MOC_LITERAL(7, 81, 7) // "checked"

    },
    "QEPlotterToolBar\0selected\0\0"
    "QEPlotterNames::MenuActions\0action\0"
    "slot\0buttonClicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPlotterToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   34,    2, 0x08 /* Private */,
       6,    0,   37,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void QEPlotterToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPlotterToolBar *_t = static_cast<QEPlotterToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< const QEPlotterNames::MenuActions(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->buttonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->buttonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEPlotterToolBar::*_t)(const QEPlotterNames::MenuActions , const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotterToolBar::selected)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QEPlotterToolBar::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QEPlotterToolBar.data,
      qt_meta_data_QEPlotterToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPlotterToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPlotterToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPlotterToolBar.stringdata0))
        return static_cast<void*>(const_cast< QEPlotterToolBar*>(this));
    return QFrame::qt_metacast(_clname);
}

int QEPlotterToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QEPlotterToolBar::selected(const QEPlotterNames::MenuActions _t1, const int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

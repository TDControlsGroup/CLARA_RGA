/****************************************************************************
** Meta object code from reading C++ file 'windowCustomisation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../common/windowCustomisation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowCustomisation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_windowCustomisationItem_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_windowCustomisationItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_windowCustomisationItem_t qt_meta_stringdata_windowCustomisationItem = {
    {
QT_MOC_LITERAL(0, 0, 23), // "windowCustomisationItem"
QT_MOC_LITERAL(1, 24, 6), // "newGui"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QEActionRequests"
QT_MOC_LITERAL(4, 49, 7), // "request"
QT_MOC_LITERAL(5, 57, 10) // "itemAction"

    },
    "windowCustomisationItem\0newGui\0\0"
    "QEActionRequests\0request\0itemAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_windowCustomisationItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void windowCustomisationItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        windowCustomisationItem *_t = static_cast<windowCustomisationItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newGui((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 1: _t->itemAction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (windowCustomisationItem::*_t)(const QEActionRequests & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&windowCustomisationItem::newGui)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject windowCustomisationItem::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_windowCustomisationItem.data,
      qt_meta_data_windowCustomisationItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *windowCustomisationItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windowCustomisationItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_windowCustomisationItem.stringdata0))
        return static_cast<void*>(const_cast< windowCustomisationItem*>(this));
    return QAction::qt_metacast(_clname);
}

int windowCustomisationItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void windowCustomisationItem::newGui(const QEActionRequests & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_windowCustomisationList_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_windowCustomisationList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_windowCustomisationList_t qt_meta_stringdata_windowCustomisationList = {
    {
QT_MOC_LITERAL(0, 0, 23), // "windowCustomisationList"
QT_MOC_LITERAL(1, 24, 13), // "activateDocks"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "useDock"
QT_MOC_LITERAL(4, 47, 12), // "QDockWidget*"
QT_MOC_LITERAL(5, 60, 4) // "dock"

    },
    "windowCustomisationList\0activateDocks\0"
    "\0useDock\0QDockWidget*\0dock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_windowCustomisationList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void windowCustomisationList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        windowCustomisationList *_t = static_cast<windowCustomisationList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateDocks(); break;
        case 1: _t->useDock((*reinterpret_cast< QDockWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject windowCustomisationList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_windowCustomisationList.data,
      qt_meta_data_windowCustomisationList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *windowCustomisationList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windowCustomisationList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_windowCustomisationList.stringdata0))
        return static_cast<void*>(const_cast< windowCustomisationList*>(this));
    if (!strcmp(_clname, "ContainerProfile"))
        return static_cast< ContainerProfile*>(const_cast< windowCustomisationList*>(this));
    return QObject::qt_metacast(_clname);
}

int windowCustomisationList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

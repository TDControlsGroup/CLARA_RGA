/****************************************************************************
** Meta object code from reading C++ file 'QEPeriodicTaskMenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEPeriodic/QEPeriodicTaskMenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPeriodicTaskMenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPeriodicTaskMenu_t {
    QByteArrayData data[3];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPeriodicTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPeriodicTaskMenu_t qt_meta_stringdata_QEPeriodicTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QEPeriodicTaskMenu"
QT_MOC_LITERAL(1, 19, 12), // "editUserInfo"
QT_MOC_LITERAL(2, 32, 0) // ""

    },
    "QEPeriodicTaskMenu\0editUserInfo\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPeriodicTaskMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QEPeriodicTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPeriodicTaskMenu *_t = static_cast<QEPeriodicTaskMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editUserInfo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QEPeriodicTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEPeriodicTaskMenu.data,
      qt_meta_data_QEPeriodicTaskMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPeriodicTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPeriodicTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPeriodicTaskMenu.stringdata0))
        return static_cast<void*>(const_cast< QEPeriodicTaskMenu*>(this));
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< QEPeriodicTaskMenu*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< QEPeriodicTaskMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int QEPeriodicTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QEPeriodicTaskMenuFactory_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPeriodicTaskMenuFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPeriodicTaskMenuFactory_t qt_meta_stringdata_QEPeriodicTaskMenuFactory = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QEPeriodicTaskMenuFactory"

    },
    "QEPeriodicTaskMenuFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPeriodicTaskMenuFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QEPeriodicTaskMenuFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEPeriodicTaskMenuFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_QEPeriodicTaskMenuFactory.data,
      qt_meta_data_QEPeriodicTaskMenuFactory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPeriodicTaskMenuFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPeriodicTaskMenuFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPeriodicTaskMenuFactory.stringdata0))
        return static_cast<void*>(const_cast< QEPeriodicTaskMenuFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int QEPeriodicTaskMenuFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

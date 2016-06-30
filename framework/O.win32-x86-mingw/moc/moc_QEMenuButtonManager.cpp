/****************************************************************************
** Meta object code from reading C++ file 'QEMenuButtonManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEMenuButton/QEMenuButtonManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEMenuButtonManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEMenuButtonManager_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEMenuButtonManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEMenuButtonManager_t qt_meta_stringdata_QEMenuButtonManager = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QEMenuButtonManager"

    },
    "QEMenuButtonManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEMenuButtonManager[] = {

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

void QEMenuButtonManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEMenuButtonManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEMenuButtonManager.data,
      qt_meta_data_QEMenuButtonManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEMenuButtonManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEMenuButtonManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEMenuButtonManager.stringdata0))
        return static_cast<void*>(const_cast< QEMenuButtonManager*>(this));
    if (!strcmp(_clname, "QDesignerCustomWidgetInterface"))
        return static_cast< QDesignerCustomWidgetInterface*>(const_cast< QEMenuButtonManager*>(this));
    if (!strcmp(_clname, "org.qt-project.QDesignerCustomWidgetInterface"))
        return static_cast< QDesignerCustomWidgetInterface*>(const_cast< QEMenuButtonManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QEMenuButtonManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QEMenuButtonTaskMenu_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEMenuButtonTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEMenuButtonTaskMenu_t qt_meta_stringdata_QEMenuButtonTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QEMenuButtonTaskMenu"
QT_MOC_LITERAL(1, 21, 12), // "editUserInfo"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "QEMenuButtonTaskMenu\0editUserInfo\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEMenuButtonTaskMenu[] = {

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

void QEMenuButtonTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEMenuButtonTaskMenu *_t = static_cast<QEMenuButtonTaskMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editUserInfo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QEMenuButtonTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEMenuButtonTaskMenu.data,
      qt_meta_data_QEMenuButtonTaskMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEMenuButtonTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEMenuButtonTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEMenuButtonTaskMenu.stringdata0))
        return static_cast<void*>(const_cast< QEMenuButtonTaskMenu*>(this));
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< QEMenuButtonTaskMenu*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< QEMenuButtonTaskMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int QEMenuButtonTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QEMenuButtonTaskMenuFactory_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEMenuButtonTaskMenuFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEMenuButtonTaskMenuFactory_t qt_meta_stringdata_QEMenuButtonTaskMenuFactory = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QEMenuButtonTaskMenuFactory"

    },
    "QEMenuButtonTaskMenuFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEMenuButtonTaskMenuFactory[] = {

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

void QEMenuButtonTaskMenuFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QEMenuButtonTaskMenuFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_QEMenuButtonTaskMenuFactory.data,
      qt_meta_data_QEMenuButtonTaskMenuFactory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEMenuButtonTaskMenuFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEMenuButtonTaskMenuFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEMenuButtonTaskMenuFactory.stringdata0))
        return static_cast<void*>(const_cast< QEMenuButtonTaskMenuFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int QEMenuButtonTaskMenuFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

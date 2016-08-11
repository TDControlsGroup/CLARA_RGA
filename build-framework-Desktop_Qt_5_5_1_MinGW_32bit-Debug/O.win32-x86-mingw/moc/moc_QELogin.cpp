/****************************************************************************
** Meta object code from reading C++ file 'QELogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QELogin/QELogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QELogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_loginWidget_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loginWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loginWidget_t qt_meta_stringdata_loginWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "loginWidget"
QT_MOC_LITERAL(1, 12, 18), // "radioButtonClicked"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "loginWidget\0radioButtonClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginWidget[] = {

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

void loginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        loginWidget *_t = static_cast<loginWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->radioButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject loginWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_loginWidget.data,
      qt_meta_data_loginWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *loginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_loginWidget.stringdata0))
        return static_cast<void*>(const_cast< loginWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int loginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QELoginDialog_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QELoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QELoginDialog_t qt_meta_stringdata_QELoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QELoginDialog"
QT_MOC_LITERAL(1, 14, 15), // "buttonOkClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19) // "buttonCancelClicked"

    },
    "QELoginDialog\0buttonOkClicked\0\0"
    "buttonCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QELoginDialog[] = {

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
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QELoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QELoginDialog *_t = static_cast<QELoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonOkClicked(); break;
        case 1: _t->buttonCancelClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QELoginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QELoginDialog.data,
      qt_meta_data_QELoginDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QELoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QELoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QELoginDialog.stringdata0))
        return static_cast<void*>(const_cast< QELoginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QELoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QELogin_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QELogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QELogin_t qt_meta_stringdata_QELogin = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QELogin"
QT_MOC_LITERAL(1, 8, 5), // "login"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 18), // "buttonLoginClicked"
QT_MOC_LITERAL(4, 34, 10), // "statusOnly"
QT_MOC_LITERAL(5, 45, 12), // "compactStyle"
QT_MOC_LITERAL(6, 58, 12), // "userPassword"
QT_MOC_LITERAL(7, 71, 17), // "scientistPassword"
QT_MOC_LITERAL(8, 89, 16) // "engineerPassword"

    },
    "QELogin\0login\0\0buttonLoginClicked\0"
    "statusOnly\0compactStyle\0userPassword\0"
    "scientistPassword\0engineerPassword"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QELogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,

       0        // eod
};

void QELogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QELogin *_t = static_cast<QELogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->buttonLoginClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QELogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QELogin::login)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QELogin *_t = static_cast<QELogin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getStatusOnly(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getCompactStyle(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getUserPassword(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getScientistPassword(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getEngineerPassword(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QELogin *_t = static_cast<QELogin *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStatusOnly(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCompactStyle(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setUserPassword(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setScientistPassword(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setEngineerPassword(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QELogin::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QELogin.data,
      qt_meta_data_QELogin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QELogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QELogin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QELogin.stringdata0))
        return static_cast<void*>(const_cast< QELogin*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QELogin*>(this));
    return QFrame::qt_metacast(_clname);
}

int QELogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QELogin::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

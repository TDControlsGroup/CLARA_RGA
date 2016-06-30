/****************************************************************************
** Meta object code from reading C++ file 'saveDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/saveDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'saveDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_saveDialog_t {
    QByteArrayData data[9];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_saveDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_saveDialog_t qt_meta_stringdata_saveDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "saveDialog"
QT_MOC_LITERAL(1, 11, 27), // "on_nameLineEdit_textChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 32), // "on_namesListWidget_doubleClicked"
QT_MOC_LITERAL(4, 73, 5), // "index"
QT_MOC_LITERAL(5, 79, 26), // "on_namesListWidget_clicked"
QT_MOC_LITERAL(6, 106, 29), // "on_defaultRadioButton_clicked"
QT_MOC_LITERAL(7, 136, 7), // "checked"
QT_MOC_LITERAL(8, 144, 27) // "on_namedRadioButton_clicked"

    },
    "saveDialog\0on_nameLineEdit_textChanged\0"
    "\0on_namesListWidget_doubleClicked\0"
    "index\0on_namesListWidget_clicked\0"
    "on_defaultRadioButton_clicked\0checked\0"
    "on_namedRadioButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_saveDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       3,    1,   42,    2, 0x08 /* Private */,
       5,    1,   45,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void saveDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        saveDialog *_t = static_cast<saveDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_nameLineEdit_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_namesListWidget_doubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_namesListWidget_clicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_defaultRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_namedRadioButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject saveDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_saveDialog.data,
      qt_meta_data_saveDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *saveDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *saveDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_saveDialog.stringdata0))
        return static_cast<void*>(const_cast< saveDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int saveDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

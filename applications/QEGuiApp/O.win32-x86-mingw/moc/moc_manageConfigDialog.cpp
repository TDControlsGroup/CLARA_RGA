/****************************************************************************
** Meta object code from reading C++ file 'manageConfigDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/manageConfigDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manageConfigDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_manageConfigDialog_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageConfigDialog_t qt_meta_stringdata_manageConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "manageConfigDialog"
QT_MOC_LITERAL(1, 19, 13), // "deleteConfigs"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "manageConfigDialog*"
QT_MOC_LITERAL(4, 54, 3), // "mcd"
QT_MOC_LITERAL(5, 58, 5), // "names"
QT_MOC_LITERAL(6, 64, 34), // "on_deleteDefaultPushButton_cl..."
QT_MOC_LITERAL(7, 99, 27), // "on_deletePushButton_clicked"
QT_MOC_LITERAL(8, 127, 39) // "on_namesListWidget_itemSelect..."

    },
    "manageConfigDialog\0deleteConfigs\0\0"
    "manageConfigDialog*\0mcd\0names\0"
    "on_deleteDefaultPushButton_clicked\0"
    "on_deletePushButton_clicked\0"
    "on_namesListWidget_itemSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void manageConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manageConfigDialog *_t = static_cast<manageConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteConfigs((*reinterpret_cast< manageConfigDialog*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->on_deleteDefaultPushButton_clicked(); break;
        case 2: _t->on_deletePushButton_clicked(); break;
        case 3: _t->on_namesListWidget_itemSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< manageConfigDialog* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (manageConfigDialog::*_t)(manageConfigDialog * , const QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&manageConfigDialog::deleteConfigs)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject manageConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_manageConfigDialog.data,
      qt_meta_data_manageConfigDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *manageConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_manageConfigDialog.stringdata0))
        return static_cast<void*>(const_cast< manageConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int manageConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void manageConfigDialog::deleteConfigs(manageConfigDialog * _t1, const QStringList _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

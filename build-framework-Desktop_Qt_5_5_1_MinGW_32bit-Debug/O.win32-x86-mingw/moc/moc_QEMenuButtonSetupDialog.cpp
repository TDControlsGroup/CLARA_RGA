/****************************************************************************
** Meta object code from reading C++ file 'QEMenuButtonSetupDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEMenuButton/QEMenuButtonSetupDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEMenuButtonSetupDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEMenuButtonSetupDialog_t {
    QByteArrayData data[21];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEMenuButtonSetupDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEMenuButtonSetupDialog_t qt_meta_stringdata_QEMenuButtonSetupDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QEMenuButtonSetupDialog"
QT_MOC_LITERAL(1, 24, 17), // "treeMenuRequested"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 3), // "pos"
QT_MOC_LITERAL(4, 47, 16), // "treeMenuSelected"
QT_MOC_LITERAL(5, 64, 8), // "QAction*"
QT_MOC_LITERAL(6, 73, 6), // "action"
QT_MOC_LITERAL(7, 80, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 97, 14), // "QItemSelection"
QT_MOC_LITERAL(9, 112, 8), // "selected"
QT_MOC_LITERAL(10, 121, 10), // "deselected"
QT_MOC_LITERAL(11, 132, 12), // "stateChanged"
QT_MOC_LITERAL(12, 145, 5), // "state"
QT_MOC_LITERAL(13, 151, 10), // "textEdited"
QT_MOC_LITERAL(14, 162, 7), // "newText"
QT_MOC_LITERAL(15, 170, 17), // "comboBoxActivated"
QT_MOC_LITERAL(16, 188, 5), // "index"
QT_MOC_LITERAL(17, 194, 18), // "resetButtonClicked"
QT_MOC_LITERAL(18, 213, 17), // "editReturnPressed"
QT_MOC_LITERAL(19, 231, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(20, 253, 21) // "on_buttonBox_rejected"

    },
    "QEMenuButtonSetupDialog\0treeMenuRequested\0"
    "\0pos\0treeMenuSelected\0QAction*\0action\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected\0stateChanged\0state\0"
    "textEdited\0newText\0comboBoxActivated\0"
    "index\0resetButtonClicked\0editReturnPressed\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEMenuButtonSetupDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       7,    2,   70,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
      13,    1,   78,    2, 0x08 /* Private */,
      15,    1,   81,    2, 0x08 /* Private */,
      17,    1,   84,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,
      19,    0,   88,    2, 0x08 /* Private */,
      20,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QEMenuButtonSetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEMenuButtonSetupDialog *_t = static_cast<QEMenuButtonSetupDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->treeMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->treeMenuSelected((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->comboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resetButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->editReturnPressed(); break;
        case 8: _t->on_buttonBox_accepted(); break;
        case 9: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject QEMenuButtonSetupDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QEMenuButtonSetupDialog.data,
      qt_meta_data_QEMenuButtonSetupDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEMenuButtonSetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEMenuButtonSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEMenuButtonSetupDialog.stringdata0))
        return static_cast<void*>(const_cast< QEMenuButtonSetupDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QEMenuButtonSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

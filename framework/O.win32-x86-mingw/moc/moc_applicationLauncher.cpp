/****************************************************************************
** Meta object code from reading C++ file 'applicationLauncher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEWidget/applicationLauncher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'applicationLauncher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_processManager_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_processManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_processManager_t qt_meta_stringdata_processManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "processManager"
QT_MOC_LITERAL(1, 15, 16), // "processCompleted"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "doRead"
QT_MOC_LITERAL(4, 40, 22), // "doReadToStandardOutput"
QT_MOC_LITERAL(5, 63, 21), // "doReadToStandardError"
QT_MOC_LITERAL(6, 85, 10), // "doFinished"
QT_MOC_LITERAL(7, 96, 20) // "QProcess::ExitStatus"

    },
    "processManager\0processCompleted\0\0"
    "doRead\0doReadToStandardOutput\0"
    "doReadToStandardError\0doFinished\0"
    "QProcess::ExitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_processManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    2,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    2,    2,

       0        // eod
};

void processManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        processManager *_t = static_cast<processManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processCompleted(); break;
        case 1: _t->doRead(); break;
        case 2: _t->doReadToStandardOutput(); break;
        case 3: _t->doReadToStandardError(); break;
        case 4: _t->doFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (processManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&processManager::processCompleted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject processManager::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_processManager.data,
      qt_meta_data_processManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *processManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *processManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_processManager.stringdata0))
        return static_cast<void*>(const_cast< processManager*>(this));
    return QProcess::qt_metacast(_clname);
}

int processManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void processManager::processCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'imageProcessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEImage/imageProcessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageProcessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_imageProcessor_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageProcessor_t qt_meta_stringdata_imageProcessor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "imageProcessor"
QT_MOC_LITERAL(1, 15, 10), // "imageBuilt"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "imageData"
QT_MOC_LITERAL(4, 37, 5) // "error"

    },
    "imageProcessor\0imageBuilt\0\0imageData\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageProcessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::QString,    3,    4,

       0        // eod
};

void imageProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        imageProcessor *_t = static_cast<imageProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageBuilt((*reinterpret_cast< QImage(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (imageProcessor::*_t)(QImage , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&imageProcessor::imageBuilt)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject imageProcessor::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_imageProcessor.data,
      qt_meta_data_imageProcessor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageProcessor.stringdata0))
        return static_cast<void*>(const_cast< imageProcessor*>(this));
    if (!strcmp(_clname, "imageProperties"))
        return static_cast< imageProperties*>(const_cast< imageProcessor*>(this));
    return QThread::qt_metacast(_clname);
}

int imageProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void imageProcessor::imageBuilt(QImage _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

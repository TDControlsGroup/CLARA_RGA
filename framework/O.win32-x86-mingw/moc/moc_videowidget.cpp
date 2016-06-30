/****************************************************************************
** Meta object code from reading C++ file 'videowidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEImage/videowidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videowidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoWidget_t {
    QByteArrayData data[16];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoWidget_t qt_meta_stringdata_VideoWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "VideoWidget"
QT_MOC_LITERAL(1, 12, 13), // "userSelection"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 22), // "imageMarkup::markupIds"
QT_MOC_LITERAL(4, 50, 4), // "mode"
QT_MOC_LITERAL(5, 55, 8), // "complete"
QT_MOC_LITERAL(6, 64, 8), // "clearing"
QT_MOC_LITERAL(7, 73, 6), // "point1"
QT_MOC_LITERAL(8, 80, 6), // "point2"
QT_MOC_LITERAL(9, 87, 9), // "thickness"
QT_MOC_LITERAL(10, 97, 9), // "zoomInOut"
QT_MOC_LITERAL(11, 107, 10), // "zoomAmount"
QT_MOC_LITERAL(12, 118, 16), // "currentPixelInfo"
QT_MOC_LITERAL(13, 135, 3), // "pos"
QT_MOC_LITERAL(14, 139, 3), // "pan"
QT_MOC_LITERAL(15, 143, 6) // "redraw"

    },
    "VideoWidget\0userSelection\0\0"
    "imageMarkup::markupIds\0mode\0complete\0"
    "clearing\0point1\0point2\0thickness\0"
    "zoomInOut\0zoomAmount\0currentPixelInfo\0"
    "pos\0pan\0redraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   39,    2, 0x06 /* Public */,
      10,    1,   52,    2, 0x06 /* Public */,
      12,    1,   55,    2, 0x06 /* Public */,
      14,    1,   58,    2, 0x06 /* Public */,
      15,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool, QMetaType::QPoint, QMetaType::QPoint, QMetaType::UInt,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void,

       0        // eod
};

void VideoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoWidget *_t = static_cast<VideoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userSelection((*reinterpret_cast< imageMarkup::markupIds(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QPoint(*)>(_a[4])),(*reinterpret_cast< QPoint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6]))); break;
        case 1: _t->zoomInOut((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentPixelInfo((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 3: _t->pan((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 4: _t->redraw(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoWidget::*_t)(imageMarkup::markupIds , bool , bool , QPoint , QPoint , unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::userSelection)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::zoomInOut)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::currentPixelInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)(QPoint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::pan)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (VideoWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoWidget::redraw)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject VideoWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoWidget.data,
      qt_meta_data_VideoWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoWidget.stringdata0))
        return static_cast<void*>(const_cast< VideoWidget*>(this));
    if (!strcmp(_clname, "imageMarkup"))
        return static_cast< imageMarkup*>(const_cast< VideoWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void VideoWidget::userSelection(imageMarkup::markupIds _t1, bool _t2, bool _t3, QPoint _t4, QPoint _t5, unsigned int _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VideoWidget::zoomInOut(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoWidget::currentPixelInfo(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoWidget::pan(QPoint _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VideoWidget::redraw()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

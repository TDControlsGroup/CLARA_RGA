/****************************************************************************
** Meta object code from reading C++ file 'brightnessContrast.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEImage/brightnessContrast.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'brightnessContrast.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_histogramScroll_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_histogramScroll_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_histogramScroll_t qt_meta_stringdata_histogramScroll = {
    {
QT_MOC_LITERAL(0, 0, 15) // "histogramScroll"

    },
    "histogramScroll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_histogramScroll[] = {

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

void histogramScroll::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject histogramScroll::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_histogramScroll.data,
      qt_meta_data_histogramScroll,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *histogramScroll::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *histogramScroll::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_histogramScroll.stringdata0))
        return static_cast<void*>(const_cast< histogramScroll*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int histogramScroll::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_histogram_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_histogram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_histogram_t qt_meta_stringdata_histogram = {
    {
QT_MOC_LITERAL(0, 0, 9) // "histogram"

    },
    "histogram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_histogram[] = {

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

void histogram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject histogram::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_histogram.data,
      qt_meta_data_histogram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *histogram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *histogram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_histogram.stringdata0))
        return static_cast<void*>(const_cast< histogram*>(this));
    return QFrame::qt_metacast(_clname);
}

int histogram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_imageDisplayProperties_t {
    QByteArrayData data[21];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_imageDisplayProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_imageDisplayProperties_t qt_meta_stringdata_imageDisplayProperties = {
    {
QT_MOC_LITERAL(0, 0, 22), // "imageDisplayProperties"
QT_MOC_LITERAL(1, 23, 27), // "brightnessContrastAutoImage"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 28), // "imageDisplayPropertiesChange"
QT_MOC_LITERAL(4, 81, 28), // "brightnessSliderValueChanged"
QT_MOC_LITERAL(5, 110, 5), // "value"
QT_MOC_LITERAL(6, 116, 21), // "minSliderValueChanged"
QT_MOC_LITERAL(7, 138, 21), // "maxSliderValueChanged"
QT_MOC_LITERAL(8, 160, 26), // "gradientSliderValueChanged"
QT_MOC_LITERAL(9, 187, 26), // "histZoomSliderValueChanged"
QT_MOC_LITERAL(10, 214, 24), // "brightnessSpinBoxChanged"
QT_MOC_LITERAL(11, 239, 22), // "gradientSpinBoxChanged"
QT_MOC_LITERAL(12, 262, 17), // "minSpinBoxChanged"
QT_MOC_LITERAL(13, 280, 17), // "maxSpinBoxChanged"
QT_MOC_LITERAL(14, 298, 30), // "brightnessContrastResetClicked"
QT_MOC_LITERAL(15, 329, 5), // "state"
QT_MOC_LITERAL(16, 335, 34), // "brightnessContrastAutoImageCl..."
QT_MOC_LITERAL(17, 370, 23), // "contrastReversalToggled"
QT_MOC_LITERAL(18, 394, 10), // "logToggled"
QT_MOC_LITERAL(19, 405, 18), // "falseColourToggled"
QT_MOC_LITERAL(20, 424, 15) // "advancedToggled"

    },
    "imageDisplayProperties\0"
    "brightnessContrastAutoImage\0\0"
    "imageDisplayPropertiesChange\0"
    "brightnessSliderValueChanged\0value\0"
    "minSliderValueChanged\0maxSliderValueChanged\0"
    "gradientSliderValueChanged\0"
    "histZoomSliderValueChanged\0"
    "brightnessSpinBoxChanged\0"
    "gradientSpinBoxChanged\0minSpinBoxChanged\0"
    "maxSpinBoxChanged\0brightnessContrastResetClicked\0"
    "state\0brightnessContrastAutoImageClicked\0"
    "contrastReversalToggled\0logToggled\0"
    "falseColourToggled\0advancedToggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_imageDisplayProperties[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,
       3,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  101,    2, 0x08 /* Private */,
       6,    1,  104,    2, 0x08 /* Private */,
       7,    1,  107,    2, 0x08 /* Private */,
       8,    1,  110,    2, 0x08 /* Private */,
       9,    1,  113,    2, 0x08 /* Private */,
      10,    1,  116,    2, 0x08 /* Private */,
      11,    1,  119,    2, 0x08 /* Private */,
      12,    1,  122,    2, 0x08 /* Private */,
      13,    1,  125,    2, 0x08 /* Private */,
      14,    1,  128,    2, 0x08 /* Private */,
      16,    0,  131,    2, 0x08 /* Private */,
      17,    1,  132,    2, 0x08 /* Private */,
      18,    1,  135,    2, 0x08 /* Private */,
      19,    1,  138,    2, 0x08 /* Private */,
      20,    1,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void imageDisplayProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        imageDisplayProperties *_t = static_cast<imageDisplayProperties *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->brightnessContrastAutoImage(); break;
        case 1: _t->imageDisplayPropertiesChange(); break;
        case 2: _t->brightnessSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->minSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->maxSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->gradientSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->histZoomSliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->brightnessSpinBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->gradientSpinBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->minSpinBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->maxSpinBoxChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->brightnessContrastResetClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->brightnessContrastAutoImageClicked(); break;
        case 13: _t->contrastReversalToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->logToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->falseColourToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->advancedToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (imageDisplayProperties::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&imageDisplayProperties::brightnessContrastAutoImage)) {
                *result = 0;
            }
        }
        {
            typedef void (imageDisplayProperties::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&imageDisplayProperties::imageDisplayPropertiesChange)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject imageDisplayProperties::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_imageDisplayProperties.data,
      qt_meta_data_imageDisplayProperties,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *imageDisplayProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *imageDisplayProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_imageDisplayProperties.stringdata0))
        return static_cast<void*>(const_cast< imageDisplayProperties*>(this));
    return QFrame::qt_metacast(_clname);
}

int imageDisplayProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void imageDisplayProperties::brightnessContrastAutoImage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void imageDisplayProperties::imageDisplayPropertiesChange()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

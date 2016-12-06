/****************************************************************************
** Meta object code from reading C++ file 'recording.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEImage/recording.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recording.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_playbackTimer_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_playbackTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_playbackTimer_t qt_meta_stringdata_playbackTimer = {
    {
QT_MOC_LITERAL(0, 0, 13) // "playbackTimer"

    },
    "playbackTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_playbackTimer[] = {

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

void playbackTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject playbackTimer::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_playbackTimer.data,
      qt_meta_data_playbackTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *playbackTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *playbackTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_playbackTimer.stringdata0))
        return static_cast<void*>(const_cast< playbackTimer*>(this));
    return QTimer::qt_metacast(_clname);
}

int playbackTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_recording_t {
    QByteArrayData data[22];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_recording_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_recording_t qt_meta_stringdata_recording = {
    {
QT_MOC_LITERAL(0, 0, 9), // "recording"
QT_MOC_LITERAL(1, 10, 16), // "byteArrayChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "value"
QT_MOC_LITERAL(4, 34, 8), // "dataSize"
QT_MOC_LITERAL(5, 43, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(6, 57, 9), // "alarmInfo"
QT_MOC_LITERAL(7, 67, 12), // "QCaDateTime&"
QT_MOC_LITERAL(8, 80, 9), // "timeStamp"
QT_MOC_LITERAL(9, 90, 13), // "variableIndex"
QT_MOC_LITERAL(10, 104, 11), // "playingBack"
QT_MOC_LITERAL(11, 116, 7), // "playing"
QT_MOC_LITERAL(12, 124, 25), // "on_pushButtonPlay_toggled"
QT_MOC_LITERAL(13, 150, 7), // "checked"
QT_MOC_LITERAL(14, 158, 27), // "on_pushButtonRecord_toggled"
QT_MOC_LITERAL(15, 186, 26), // "on_pushButtonClear_clicked"
QT_MOC_LITERAL(16, 213, 30), // "on_pushButtonLastImage_clicked"
QT_MOC_LITERAL(17, 244, 30), // "on_pushButtonNextImage_clicked"
QT_MOC_LITERAL(18, 275, 31), // "on_pushButtonFirstImage_clicked"
QT_MOC_LITERAL(19, 307, 34), // "on_pushButtonPreviousImage_cl..."
QT_MOC_LITERAL(20, 342, 40), // "on_horizontalSliderPosition_v..."
QT_MOC_LITERAL(21, 383, 26) // "on_radioButtonLive_toggled"

    },
    "recording\0byteArrayChanged\0\0value\0"
    "dataSize\0QCaAlarmInfo&\0alarmInfo\0"
    "QCaDateTime&\0timeStamp\0variableIndex\0"
    "playingBack\0playing\0on_pushButtonPlay_toggled\0"
    "checked\0on_pushButtonRecord_toggled\0"
    "on_pushButtonClear_clicked\0"
    "on_pushButtonLastImage_clicked\0"
    "on_pushButtonNextImage_clicked\0"
    "on_pushButtonFirstImage_clicked\0"
    "on_pushButtonPreviousImage_clicked\0"
    "on_horizontalSliderPosition_valueChanged\0"
    "on_radioButtonLive_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_recording[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   69,    2, 0x06 /* Public */,
      10,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   83,    2, 0x08 /* Private */,
      14,    1,   86,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,
      16,    0,   90,    2, 0x08 /* Private */,
      17,    0,   91,    2, 0x08 /* Private */,
      18,    0,   92,    2, 0x08 /* Private */,
      19,    0,   93,    2, 0x08 /* Private */,
      20,    1,   94,    2, 0x08 /* Private */,
      21,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::ULong, 0x80000000 | 5, 0x80000000 | 7, QMetaType::UInt,    3,    4,    6,    8,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void recording::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        recording *_t = static_cast<recording *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->byteArrayChanged((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< ulong(*)>(_a[2])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[3])),(*reinterpret_cast< QCaDateTime(*)>(_a[4])),(*reinterpret_cast< const uint(*)>(_a[5]))); break;
        case 1: _t->playingBack((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonPlay_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_pushButtonRecord_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_pushButtonClear_clicked(); break;
        case 5: _t->on_pushButtonLastImage_clicked(); break;
        case 6: _t->on_pushButtonNextImage_clicked(); break;
        case 7: _t->on_pushButtonFirstImage_clicked(); break;
        case 8: _t->on_pushButtonPreviousImage_clicked(); break;
        case 9: _t->on_horizontalSliderPosition_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_radioButtonLive_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (recording::*_t)(const QByteArray & , unsigned long , QCaAlarmInfo & , QCaDateTime & , const unsigned int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&recording::byteArrayChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (recording::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&recording::playingBack)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject recording::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_recording.data,
      qt_meta_data_recording,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *recording::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *recording::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_recording.stringdata0))
        return static_cast<void*>(const_cast< recording*>(this));
    return QWidget::qt_metacast(_clname);
}

int recording::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void recording::byteArrayChanged(const QByteArray & _t1, unsigned long _t2, QCaAlarmInfo & _t3, QCaDateTime & _t4, const unsigned int & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void recording::playingBack(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

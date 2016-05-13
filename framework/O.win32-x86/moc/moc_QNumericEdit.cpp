/****************************************************************************
** Meta object code from reading C++ file 'QNumericEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QENumericEdit/QNumericEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QNumericEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNumericEdit_t {
    QByteArrayData data[21];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNumericEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNumericEdit_t qt_meta_stringdata_QNumericEdit = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QNumericEdit"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 13), // "returnPressed"
QT_MOC_LITERAL(5, 47, 15), // "editingFinished"
QT_MOC_LITERAL(6, 63, 8), // "setValue"
QT_MOC_LITERAL(7, 72, 5), // "frame"
QT_MOC_LITERAL(8, 78, 6), // "suffix"
QT_MOC_LITERAL(9, 85, 6), // "prefix"
QT_MOC_LITERAL(10, 92, 9), // "alignment"
QT_MOC_LITERAL(11, 102, 13), // "Qt::Alignment"
QT_MOC_LITERAL(12, 116, 9), // "cleanText"
QT_MOC_LITERAL(13, 126, 5), // "radix"
QT_MOC_LITERAL(14, 132, 27), // "QEFixedPointRadix::Radicies"
QT_MOC_LITERAL(15, 160, 9), // "separator"
QT_MOC_LITERAL(16, 170, 29), // "QEFixedPointRadix::Separators"
QT_MOC_LITERAL(17, 200, 12), // "leadingZeros"
QT_MOC_LITERAL(18, 213, 9), // "precision"
QT_MOC_LITERAL(19, 223, 7), // "minimum"
QT_MOC_LITERAL(20, 231, 7) // "maximum"

    },
    "QNumericEdit\0valueChanged\0\0value\0"
    "returnPressed\0editingFinished\0setValue\0"
    "frame\0suffix\0prefix\0alignment\0"
    "Qt::Alignment\0cleanText\0radix\0"
    "QEFixedPointRadix::Radicies\0separator\0"
    "QEFixedPointRadix::Separators\0"
    "leadingZeros\0precision\0minimum\0maximum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNumericEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      12,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       1,    1,   47,    2, 0x06 /* Public */,
       4,    0,   50,    2, 0x06 /* Public */,
       5,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::QString, 0x00095001,
      13, 0x80000000 | 14, 0x0009510b,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Double, 0x00095103,
      20, QMetaType::Double, 0x00095103,
       3, QMetaType::Double, 0x00095103,

       0        // eod
};

void QNumericEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNumericEdit *_t = static_cast<QNumericEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->returnPressed(); break;
        case 3: _t->editingFinished(); break;
        case 4: _t->setValue((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNumericEdit::*_t)(const double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNumericEdit::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QNumericEdit::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNumericEdit::valueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QNumericEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNumericEdit::returnPressed)) {
                *result = 2;
            }
        }
        {
            typedef void (QNumericEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNumericEdit::editingFinished)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QNumericEdit *_t = static_cast<QNumericEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasFrame(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSuffix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getPrefix(); break;
        case 3: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getCleanText(); break;
        case 5: *reinterpret_cast< QEFixedPointRadix::Radicies*>(_v) = _t->getRadix(); break;
        case 6: *reinterpret_cast< QEFixedPointRadix::Separators*>(_v) = _t->getSeparator(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getLeadingZeros(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getMinimum(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getMaximum(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->getValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QNumericEdit *_t = static_cast<QNumericEdit *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 5: _t->setRadix(*reinterpret_cast< QEFixedPointRadix::Radicies*>(_v)); break;
        case 6: _t->setSeparator(*reinterpret_cast< QEFixedPointRadix::Separators*>(_v)); break;
        case 7: _t->setLeadingZeros(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QNumericEdit[] = {
        &QEFixedPointRadix::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QNumericEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QNumericEdit.data,
      qt_meta_data_QNumericEdit,  qt_static_metacall, qt_meta_extradata_QNumericEdit, Q_NULLPTR}
};


const QMetaObject *QNumericEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNumericEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNumericEdit.stringdata0))
        return static_cast<void*>(const_cast< QNumericEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int QNumericEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QNumericEdit::valueChanged(const double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNumericEdit::valueChanged(const int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNumericEdit::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QNumericEdit::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

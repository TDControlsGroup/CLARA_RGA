/****************************************************************************
** Meta object code from reading C++ file 'QESubstitutedLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QESubstitutedLabel/QESubstitutedLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QESubstitutedLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QESubstitutedLabel_t {
    QByteArrayData data[3];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QESubstitutedLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QESubstitutedLabel_t qt_meta_stringdata_QESubstitutedLabel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QESubstitutedLabel"
QT_MOC_LITERAL(1, 19, 9), // "labelText"
QT_MOC_LITERAL(2, 29, 17) // "textSubstitutions"

    },
    "QESubstitutedLabel\0labelText\0"
    "textSubstitutions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QESubstitutedLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,

       0        // eod
};

void QESubstitutedLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QESubstitutedLabel *_t = static_cast<QESubstitutedLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLabelTextPropertyFormat(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSubstitutionsProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QESubstitutedLabel *_t = static_cast<QESubstitutedLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabelTextPropertyFormat(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setSubstitutionsProperty(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QESubstitutedLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_QESubstitutedLabel.data,
      qt_meta_data_QESubstitutedLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QESubstitutedLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QESubstitutedLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QESubstitutedLabel.stringdata0))
        return static_cast<void*>(const_cast< QESubstitutedLabel*>(this));
    if (!strcmp(_clname, "QEWidget"))
        return static_cast< QEWidget*>(const_cast< QESubstitutedLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int QESubstitutedLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'QEAbstractDynamicWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEAbstractWidget/QEAbstractDynamicWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEAbstractDynamicWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEAbstractDynamicWidget_t {
    QByteArrayData data[8];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEAbstractDynamicWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEAbstractDynamicWidget_t qt_meta_stringdata_QEAbstractDynamicWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QEAbstractDynamicWidget"
QT_MOC_LITERAL(1, 24, 27), // "loadNamedWidetConfiguration"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 8), // "filename"
QT_MOC_LITERAL(4, 62, 27), // "saveNamedWidetConfiguration"
QT_MOC_LITERAL(5, 90, 23), // "loadWidgetConfiguration"
QT_MOC_LITERAL(6, 114, 23), // "saveWidgetConfiguration"
QT_MOC_LITERAL(7, 138, 10) // "defaultDir"

    },
    "QEAbstractDynamicWidget\0"
    "loadNamedWidetConfiguration\0\0filename\0"
    "saveNamedWidetConfiguration\0"
    "loadWidgetConfiguration\0saveWidgetConfiguration\0"
    "defaultDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEAbstractDynamicWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       4,    1,   37,    2, 0x09 /* Protected */,
       5,    0,   40,    2, 0x09 /* Protected */,
       6,    0,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095103,

       0        // eod
};

void QEAbstractDynamicWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEAbstractDynamicWidget *_t = static_cast<QEAbstractDynamicWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadNamedWidetConfiguration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->saveNamedWidetConfiguration((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->loadWidgetConfiguration(); break;
        case 3: _t->saveWidgetConfiguration(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEAbstractDynamicWidget *_t = static_cast<QEAbstractDynamicWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getDefaultDir(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEAbstractDynamicWidget *_t = static_cast<QEAbstractDynamicWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultDir(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEAbstractDynamicWidget::staticMetaObject = {
    { &QEFrame::staticMetaObject, qt_meta_stringdata_QEAbstractDynamicWidget.data,
      qt_meta_data_QEAbstractDynamicWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEAbstractDynamicWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEAbstractDynamicWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEAbstractDynamicWidget.stringdata0))
        return static_cast<void*>(const_cast< QEAbstractDynamicWidget*>(this));
    return QEFrame::qt_metacast(_clname);
}

int QEAbstractDynamicWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

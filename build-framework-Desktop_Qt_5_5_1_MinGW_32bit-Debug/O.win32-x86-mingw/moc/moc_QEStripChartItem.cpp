/****************************************************************************
** Meta object code from reading C++ file 'QEStripChartItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../framework/widgets/QEStripChart/QEStripChartItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEStripChartItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEStripChartItem_t {
    QByteArrayData data[34];
    char stringdata0[459];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEStripChartItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEStripChartItem_t qt_meta_stringdata_QEStripChartItem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QEStripChartItem"
QT_MOC_LITERAL(1, 17, 24), // "itemContextMenuRequested"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "requestAction"
QT_MOC_LITERAL(4, 57, 16), // "QEActionRequests"
QT_MOC_LITERAL(5, 74, 9), // "setColour"
QT_MOC_LITERAL(6, 84, 6), // "colour"
QT_MOC_LITERAL(7, 91, 23), // "newVariableNameProperty"
QT_MOC_LITERAL(8, 115, 6), // "pvName"
QT_MOC_LITERAL(9, 122, 13), // "substitutions"
QT_MOC_LITERAL(10, 136, 4), // "slot"
QT_MOC_LITERAL(11, 141, 17), // "setDataConnection"
QT_MOC_LITERAL(12, 159, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(13, 178, 14), // "connectionInfo"
QT_MOC_LITERAL(14, 193, 13), // "variableIndex"
QT_MOC_LITERAL(15, 207, 12), // "setDataValue"
QT_MOC_LITERAL(16, 220, 5), // "value"
QT_MOC_LITERAL(17, 226, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(18, 240, 5), // "alarm"
QT_MOC_LITERAL(19, 246, 12), // "QCaDateTime&"
QT_MOC_LITERAL(20, 259, 8), // "datetime"
QT_MOC_LITERAL(21, 268, 14), // "setArchiveData"
QT_MOC_LITERAL(22, 283, 14), // "const QObject*"
QT_MOC_LITERAL(23, 298, 8), // "userData"
QT_MOC_LITERAL(24, 307, 4), // "okay"
QT_MOC_LITERAL(25, 312, 16), // "QCaDataPointList"
QT_MOC_LITERAL(26, 329, 11), // "archiveData"
QT_MOC_LITERAL(27, 341, 19), // "letterButtonClicked"
QT_MOC_LITERAL(28, 361, 7), // "checked"
QT_MOC_LITERAL(29, 369, 20), // "contextMenuRequested"
QT_MOC_LITERAL(30, 390, 3), // "pos"
QT_MOC_LITERAL(31, 394, 19), // "contextMenuSelected"
QT_MOC_LITERAL(32, 414, 37), // "QEStripChartNames::ContextMen..."
QT_MOC_LITERAL(33, 452, 6) // "option"

    },
    "QEStripChartItem\0itemContextMenuRequested\0"
    "\0requestAction\0QEActionRequests\0"
    "setColour\0colour\0newVariableNameProperty\0"
    "pvName\0substitutions\0slot\0setDataConnection\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "variableIndex\0setDataValue\0value\0"
    "QCaAlarmInfo&\0alarm\0QCaDateTime&\0"
    "datetime\0setArchiveData\0const QObject*\0"
    "userData\0okay\0QCaDataPointList\0"
    "archiveData\0letterButtonClicked\0checked\0"
    "contextMenuRequested\0pos\0contextMenuSelected\0"
    "QEStripChartNames::ContextMenuOptions\0"
    "option"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEStripChartItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       3,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   72,    2, 0x0a /* Public */,
       7,    3,   75,    2, 0x08 /* Private */,
      11,    2,   82,    2, 0x08 /* Private */,
      15,    4,   87,    2, 0x08 /* Private */,
      21,    3,   96,    2, 0x08 /* Private */,
      27,    1,  103,    2, 0x08 /* Private */,
      29,    1,  106,    2, 0x08 /* Private */,
      31,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QPoint,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::UInt,   13,   14,
    QMetaType::Void, QMetaType::QVariant, 0x80000000 | 17, 0x80000000 | 19, QMetaType::UInt,   16,   18,   20,   14,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Bool, 0x80000000 | 25,   23,   24,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::QPoint,   30,
    QMetaType::Void, 0x80000000 | 32,   33,

       0        // eod
};

void QEStripChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEStripChartItem *_t = static_cast<QEStripChartItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemContextMenuRequested((*reinterpret_cast< const uint(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 1: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 2: _t->setColour((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->newVariableNameProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->setDataConnection((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 5: _t->setDataValue((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 6: _t->setArchiveData((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QCaDataPointList(*)>(_a[3]))); break;
        case 7: _t->letterButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->contextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->contextMenuSelected((*reinterpret_cast< const QEStripChartNames::ContextMenuOptions(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCaDataPointList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEStripChartItem::*_t)(const unsigned int , const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEStripChartItem::itemContextMenuRequested)) {
                *result = 0;
            }
        }
        {
            typedef void (QEStripChartItem::*_t)(const QEActionRequests & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEStripChartItem::requestAction)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QEStripChartItem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QEStripChartItem.data,
      qt_meta_data_QEStripChartItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEStripChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEStripChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEStripChartItem.stringdata0))
        return static_cast<void*>(const_cast< QEStripChartItem*>(this));
    return QWidget::qt_metacast(_clname);
}

int QEStripChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QEStripChartItem::itemContextMenuRequested(const unsigned int _t1, const QPoint & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEStripChartItem::requestAction(const QEActionRequests & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

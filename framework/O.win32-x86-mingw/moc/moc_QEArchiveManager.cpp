/****************************************************************************
** Meta object code from reading C++ file 'QEArchiveManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../archive/QEArchiveManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEArchiveManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEArchiveAccess_t {
    QByteArrayData data[30];
    char stringdata0[441];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEArchiveAccess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEArchiveAccess_t qt_meta_stringdata_QEArchiveAccess = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QEArchiveAccess"
QT_MOC_LITERAL(1, 16, 13), // "archiveStatus"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 27), // "QEArchiveAccess::StatusList"
QT_MOC_LITERAL(4, 59, 10), // "statusList"
QT_MOC_LITERAL(5, 70, 14), // "setArchiveData"
QT_MOC_LITERAL(6, 85, 14), // "const QObject*"
QT_MOC_LITERAL(7, 100, 8), // "userData"
QT_MOC_LITERAL(8, 109, 6), // "isOkay"
QT_MOC_LITERAL(9, 116, 16), // "QCaDataPointList"
QT_MOC_LITERAL(10, 133, 10), // "pointsList"
QT_MOC_LITERAL(11, 144, 6), // "pvName"
QT_MOC_LITERAL(12, 151, 13), // "supplementary"
QT_MOC_LITERAL(13, 165, 20), // "reInterogateArchives"
QT_MOC_LITERAL(14, 186, 20), // "archiveStatusRequest"
QT_MOC_LITERAL(15, 207, 18), // "readArchiveRequest"
QT_MOC_LITERAL(16, 226, 22), // "const QEArchiveAccess*"
QT_MOC_LITERAL(17, 249, 31), // "QEArchiveAccess::PVDataRequests"
QT_MOC_LITERAL(18, 281, 21), // "archiveStatusResponse"
QT_MOC_LITERAL(19, 303, 19), // "readArchiveResponse"
QT_MOC_LITERAL(20, 323, 13), // "archiveAccess"
QT_MOC_LITERAL(21, 337, 32), // "QEArchiveAccess::PVDataResponses"
QT_MOC_LITERAL(22, 370, 8), // "response"
QT_MOC_LITERAL(23, 379, 6), // "States"
QT_MOC_LITERAL(24, 386, 7), // "Unknown"
QT_MOC_LITERAL(25, 394, 8), // "Updating"
QT_MOC_LITERAL(26, 403, 8), // "Complete"
QT_MOC_LITERAL(27, 412, 10), // "InComplete"
QT_MOC_LITERAL(28, 423, 11), // "No_Response"
QT_MOC_LITERAL(29, 435, 5) // "Error"

    },
    "QEArchiveAccess\0archiveStatus\0\0"
    "QEArchiveAccess::StatusList\0statusList\0"
    "setArchiveData\0const QObject*\0userData\0"
    "isOkay\0QCaDataPointList\0pointsList\0"
    "pvName\0supplementary\0reInterogateArchives\0"
    "archiveStatusRequest\0readArchiveRequest\0"
    "const QEArchiveAccess*\0"
    "QEArchiveAccess::PVDataRequests\0"
    "archiveStatusResponse\0readArchiveResponse\0"
    "archiveAccess\0QEArchiveAccess::PVDataResponses\0"
    "response\0States\0Unknown\0Updating\0"
    "Complete\0InComplete\0No_Response\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEArchiveAccess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   90, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    5,   57,    2, 0x06 /* Public */,
       5,    3,   68,    2, 0x06 /* Public */,
      13,    0,   75,    2, 0x06 /* Public */,
      14,    0,   76,    2, 0x06 /* Public */,
      15,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   82,    2, 0x08 /* Private */,
      19,    2,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool, 0x80000000 | 9, QMetaType::QString, QMetaType::QString,    7,    8,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool, 0x80000000 | 9,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 17,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 21,   20,   22,

 // enums: name, flags, count, data
      23, 0x0,    6,   94,

 // enum data: key, value
      24, uint(QEArchiveAccess::Unknown),
      25, uint(QEArchiveAccess::Updating),
      26, uint(QEArchiveAccess::Complete),
      27, uint(QEArchiveAccess::InComplete),
      28, uint(QEArchiveAccess::No_Response),
      29, uint(QEArchiveAccess::Error),

       0        // eod
};

void QEArchiveAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEArchiveAccess *_t = static_cast<QEArchiveAccess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->archiveStatus((*reinterpret_cast< const QEArchiveAccess::StatusList(*)>(_a[1]))); break;
        case 1: _t->setArchiveData((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QCaDataPointList(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 2: _t->setArchiveData((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QCaDataPointList(*)>(_a[3]))); break;
        case 3: _t->reInterogateArchives(); break;
        case 4: _t->archiveStatusRequest(); break;
        case 5: _t->readArchiveRequest((*reinterpret_cast< const QEArchiveAccess*(*)>(_a[1])),(*reinterpret_cast< const QEArchiveAccess::PVDataRequests(*)>(_a[2]))); break;
        case 6: _t->archiveStatusResponse((*reinterpret_cast< const QEArchiveAccess::StatusList(*)>(_a[1]))); break;
        case 7: _t->readArchiveResponse((*reinterpret_cast< const QEArchiveAccess*(*)>(_a[1])),(*reinterpret_cast< const QEArchiveAccess::PVDataResponses(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveAccess::StatusList >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCaDataPointList >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCaDataPointList >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveAccess::PVDataRequests >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveAccess::StatusList >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveAccess::PVDataResponses >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEArchiveAccess::*_t)(const QEArchiveAccess::StatusList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveAccess::archiveStatus)) {
                *result = 0;
            }
        }
        {
            typedef void (QEArchiveAccess::*_t)(const QObject * , const bool , const QCaDataPointList & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveAccess::setArchiveData)) {
                *result = 1;
            }
        }
        {
            typedef void (QEArchiveAccess::*_t)(const QObject * , const bool , const QCaDataPointList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveAccess::setArchiveData)) {
                *result = 2;
            }
        }
        {
            typedef void (QEArchiveAccess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveAccess::reInterogateArchives)) {
                *result = 3;
            }
        }
        {
            typedef void (QEArchiveAccess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveAccess::archiveStatusRequest)) {
                *result = 4;
            }
        }
        {
            typedef void (QEArchiveAccess::*_t)(const QEArchiveAccess * , const QEArchiveAccess::PVDataRequests & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveAccess::readArchiveRequest)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QEArchiveAccess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEArchiveAccess.data,
      qt_meta_data_QEArchiveAccess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEArchiveAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEArchiveAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEArchiveAccess.stringdata0))
        return static_cast<void*>(const_cast< QEArchiveAccess*>(this));
    if (!strcmp(_clname, "UserMessage"))
        return static_cast< UserMessage*>(const_cast< QEArchiveAccess*>(this));
    return QObject::qt_metacast(_clname);
}

int QEArchiveAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QEArchiveAccess::archiveStatus(const QEArchiveAccess::StatusList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEArchiveAccess::setArchiveData(const QObject * _t1, const bool _t2, const QCaDataPointList & _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEArchiveAccess::setArchiveData(const QObject * _t1, const bool _t2, const QCaDataPointList & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QEArchiveAccess::reInterogateArchives()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QEArchiveAccess::archiveStatusRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QEArchiveAccess::readArchiveRequest(const QEArchiveAccess * _t1, const QEArchiveAccess::PVDataRequests & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QEArchiveManager_t {
    QByteArrayData data[29];
    char stringdata0[517];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEArchiveManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEArchiveManager_t qt_meta_stringdata_QEArchiveManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QEArchiveManager"
QT_MOC_LITERAL(1, 17, 21), // "archiveStatusResponse"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 27), // "QEArchiveAccess::StatusList"
QT_MOC_LITERAL(4, 68, 19), // "readArchiveResponse"
QT_MOC_LITERAL(5, 88, 22), // "const QEArchiveAccess*"
QT_MOC_LITERAL(6, 111, 32), // "QEArchiveAccess::PVDataResponses"
QT_MOC_LITERAL(7, 144, 20), // "archiveStatusRequest"
QT_MOC_LITERAL(8, 165, 7), // "timeout"
QT_MOC_LITERAL(9, 173, 20), // "reInterogateArchives"
QT_MOC_LITERAL(10, 194, 18), // "readArchiveRequest"
QT_MOC_LITERAL(11, 213, 13), // "archiveAccess"
QT_MOC_LITERAL(12, 227, 31), // "QEArchiveAccess::PVDataRequests"
QT_MOC_LITERAL(13, 259, 7), // "request"
QT_MOC_LITERAL(14, 267, 7), // "started"
QT_MOC_LITERAL(15, 275, 16), // "archivesResponse"
QT_MOC_LITERAL(16, 292, 14), // "const QObject*"
QT_MOC_LITERAL(17, 307, 8), // "userData"
QT_MOC_LITERAL(18, 316, 9), // "isSuccess"
QT_MOC_LITERAL(19, 326, 31), // "QEArchiveInterface::ArchiveList"
QT_MOC_LITERAL(20, 358, 11), // "archiveList"
QT_MOC_LITERAL(21, 370, 15), // "pvNamesResponse"
QT_MOC_LITERAL(22, 386, 30), // "QEArchiveInterface::PVNameList"
QT_MOC_LITERAL(23, 417, 10), // "pvNameList"
QT_MOC_LITERAL(24, 428, 14), // "valuesResponse"
QT_MOC_LITERAL(25, 443, 37), // "QEArchiveInterface::ResponseV..."
QT_MOC_LITERAL(26, 481, 10), // "valuesList"
QT_MOC_LITERAL(27, 492, 11), // "nextRequest"
QT_MOC_LITERAL(28, 504, 12) // "requestIndex"

    },
    "QEArchiveManager\0archiveStatusResponse\0"
    "\0QEArchiveAccess::StatusList\0"
    "readArchiveResponse\0const QEArchiveAccess*\0"
    "QEArchiveAccess::PVDataResponses\0"
    "archiveStatusRequest\0timeout\0"
    "reInterogateArchives\0readArchiveRequest\0"
    "archiveAccess\0QEArchiveAccess::PVDataRequests\0"
    "request\0started\0archivesResponse\0"
    "const QObject*\0userData\0isSuccess\0"
    "QEArchiveInterface::ArchiveList\0"
    "archiveList\0pvNamesResponse\0"
    "QEArchiveInterface::PVNameList\0"
    "pvNameList\0valuesResponse\0"
    "QEArchiveInterface::ResponseValueList\0"
    "valuesList\0nextRequest\0requestIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEArchiveManager[] = {

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
       1,    1,   69,    2, 0x06 /* Public */,
       4,    2,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   77,    2, 0x08 /* Private */,
       8,    0,   78,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    2,   80,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    3,   86,    2, 0x08 /* Private */,
      21,    3,   93,    2, 0x08 /* Private */,
      24,    3,  100,    2, 0x08 /* Private */,
      27,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 6,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 12,   11,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Bool, 0x80000000 | 19,   17,   18,   20,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Bool, 0x80000000 | 22,   17,   18,   23,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Bool, 0x80000000 | 25,   17,   18,   26,
    QMetaType::Void, QMetaType::Int,   28,

       0        // eod
};

void QEArchiveManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEArchiveManager *_t = static_cast<QEArchiveManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->archiveStatusResponse((*reinterpret_cast< const QEArchiveAccess::StatusList(*)>(_a[1]))); break;
        case 1: _t->readArchiveResponse((*reinterpret_cast< const QEArchiveAccess*(*)>(_a[1])),(*reinterpret_cast< const QEArchiveAccess::PVDataResponses(*)>(_a[2]))); break;
        case 2: _t->archiveStatusRequest(); break;
        case 3: _t->timeout(); break;
        case 4: _t->reInterogateArchives(); break;
        case 5: _t->readArchiveRequest((*reinterpret_cast< const QEArchiveAccess*(*)>(_a[1])),(*reinterpret_cast< const QEArchiveAccess::PVDataRequests(*)>(_a[2]))); break;
        case 6: _t->started(); break;
        case 7: _t->archivesResponse((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QEArchiveInterface::ArchiveList(*)>(_a[3]))); break;
        case 8: _t->pvNamesResponse((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QEArchiveInterface::PVNameList(*)>(_a[3]))); break;
        case 9: _t->valuesResponse((*reinterpret_cast< const QObject*(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const QEArchiveInterface::ResponseValueList(*)>(_a[3]))); break;
        case 10: _t->nextRequest((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveAccess::StatusList >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveAccess::PVDataResponses >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveAccess::PVDataRequests >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::ArchiveList >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::PVNameList >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEArchiveInterface::ResponseValueList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEArchiveManager::*_t)(const QEArchiveAccess::StatusList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveManager::archiveStatusResponse)) {
                *result = 0;
            }
        }
        {
            typedef void (QEArchiveManager::*_t)(const QEArchiveAccess * , const QEArchiveAccess::PVDataResponses & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEArchiveManager::readArchiveResponse)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QEArchiveManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QEArchiveManager.data,
      qt_meta_data_QEArchiveManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEArchiveManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEArchiveManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEArchiveManager.stringdata0))
        return static_cast<void*>(const_cast< QEArchiveManager*>(this));
    if (!strcmp(_clname, "UserMessage"))
        return static_cast< UserMessage*>(const_cast< QEArchiveManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QEArchiveManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QEArchiveManager::archiveStatusResponse(const QEArchiveAccess::StatusList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEArchiveManager::readArchiveResponse(const QEArchiveAccess * _t1, const QEArchiveAccess::PVDataResponses & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ArchiveInterfacePlus_t {
    QByteArrayData data[5];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArchiveInterfacePlus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArchiveInterfacePlus_t qt_meta_stringdata_ArchiveInterfacePlus = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ArchiveInterfacePlus"
QT_MOC_LITERAL(1, 21, 11), // "nextRequest"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "requestIndex"
QT_MOC_LITERAL(4, 47, 7) // "timeout"

    },
    "ArchiveInterfacePlus\0nextRequest\0\0"
    "requestIndex\0timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArchiveInterfacePlus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ArchiveInterfacePlus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArchiveInterfacePlus *_t = static_cast<ArchiveInterfacePlus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nextRequest((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ArchiveInterfacePlus::*_t)(const int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArchiveInterfacePlus::nextRequest)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject ArchiveInterfacePlus::staticMetaObject = {
    { &QEArchiveInterface::staticMetaObject, qt_meta_stringdata_ArchiveInterfacePlus.data,
      qt_meta_data_ArchiveInterfacePlus,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArchiveInterfacePlus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArchiveInterfacePlus::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArchiveInterfacePlus.stringdata0))
        return static_cast<void*>(const_cast< ArchiveInterfacePlus*>(this));
    return QEArchiveInterface::qt_metacast(_clname);
}

int ArchiveInterfacePlus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEArchiveInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ArchiveInterfacePlus::nextRequest(const int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

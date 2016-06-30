/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dockRef_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dockRef_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dockRef_t qt_meta_stringdata_dockRef = {
    {
QT_MOC_LITERAL(0, 0, 7), // "dockRef"
QT_MOC_LITERAL(1, 8, 14), // "setRequiredVis"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "dockRefDestroyed"
QT_MOC_LITERAL(4, 41, 3) // "obj"

    },
    "dockRef\0setRequiredVis\0\0dockRefDestroyed\0"
    "obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dockRef[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    4,

       0        // eod
};

void dockRef::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dockRef *_t = static_cast<dockRef *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRequiredVis(); break;
        case 1: _t->dockRefDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject dockRef::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dockRef.data,
      qt_meta_data_dockRef,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dockRef::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dockRef::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dockRef.stringdata0))
        return static_cast<void*>(const_cast< dockRef*>(this));
    return QObject::qt_metacast(_clname);
}

int dockRef::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[48];
    char stringdata0[930];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "dockCreated"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "QDockWidget*"
QT_MOC_LITERAL(4, 37, 40), // "on_actionManage_Configuration..."
QT_MOC_LITERAL(5, 78, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(6, 102, 29), // "on_actionUser_Level_triggered"
QT_MOC_LITERAL(7, 132, 39), // "on_actionRefresh_Current_Form..."
QT_MOC_LITERAL(8, 172, 48), // "on_actionOpen_Current_Form_In..."
QT_MOC_LITERAL(9, 221, 27), // "on_actionDesigner_triggered"
QT_MOC_LITERAL(10, 249, 29), // "on_actionNew_Window_triggered"
QT_MOC_LITERAL(11, 279, 26), // "on_actionNew_Tab_triggered"
QT_MOC_LITERAL(12, 306, 27), // "on_actionNew_Dock_triggered"
QT_MOC_LITERAL(13, 334, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(14, 358, 24), // "on_actionClose_triggered"
QT_MOC_LITERAL(15, 383, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(16, 408, 21), // "onWindowMenuSelection"
QT_MOC_LITERAL(17, 430, 8), // "QAction*"
QT_MOC_LITERAL(18, 439, 6), // "action"
QT_MOC_LITERAL(19, 446, 13), // "requestAction"
QT_MOC_LITERAL(20, 460, 16), // "QEActionRequests"
QT_MOC_LITERAL(21, 477, 7), // "request"
QT_MOC_LITERAL(22, 485, 17), // "tabCurrentChanged"
QT_MOC_LITERAL(23, 503, 5), // "index"
QT_MOC_LITERAL(24, 509, 15), // "tabCloseRequest"
QT_MOC_LITERAL(25, 525, 21), // "tabContextMenuRequest"
QT_MOC_LITERAL(26, 547, 3), // "pos"
QT_MOC_LITERAL(27, 551, 21), // "tabContextMenuTrigger"
QT_MOC_LITERAL(28, 573, 12), // "processError"
QT_MOC_LITERAL(29, 586, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(30, 609, 5), // "error"
QT_MOC_LITERAL(31, 615, 22), // "startDesignerAlternate"
QT_MOC_LITERAL(32, 638, 37), // "on_actionSave_Configuration_t..."
QT_MOC_LITERAL(33, 676, 40), // "on_actionRestore_Configuratio..."
QT_MOC_LITERAL(34, 717, 11), // "saveRestore"
QT_MOC_LITERAL(35, 729, 37), // "SaveRestoreSignal::saveRestor..."
QT_MOC_LITERAL(36, 767, 6), // "option"
QT_MOC_LITERAL(37, 774, 7), // "setGeom"
QT_MOC_LITERAL(38, 782, 8), // "scrollTo"
QT_MOC_LITERAL(39, 791, 32), // "on_actionSet_Passwords_triggered"
QT_MOC_LITERAL(40, 824, 13), // "deleteConfigs"
QT_MOC_LITERAL(41, 838, 19), // "manageConfigDialog*"
QT_MOC_LITERAL(42, 858, 3), // "mcd"
QT_MOC_LITERAL(43, 862, 5), // "names"
QT_MOC_LITERAL(44, 868, 22), // "dockComponentDestroyed"
QT_MOC_LITERAL(45, 891, 9), // "component"
QT_MOC_LITERAL(46, 901, 15), // "delayedRaiseGui"
QT_MOC_LITERAL(47, 917, 12) // "guiDestroyed"

    },
    "MainWindow\0dockCreated\0\0QDockWidget*\0"
    "on_actionManage_Configurations_triggered\0"
    "on_actionExit_triggered\0"
    "on_actionUser_Level_triggered\0"
    "on_actionRefresh_Current_Form_triggered\0"
    "on_actionOpen_Current_Form_In_Designer_triggered\0"
    "on_actionDesigner_triggered\0"
    "on_actionNew_Window_triggered\0"
    "on_actionNew_Tab_triggered\0"
    "on_actionNew_Dock_triggered\0"
    "on_actionOpen_triggered\0"
    "on_actionClose_triggered\0"
    "on_actionAbout_triggered\0onWindowMenuSelection\0"
    "QAction*\0action\0requestAction\0"
    "QEActionRequests\0request\0tabCurrentChanged\0"
    "index\0tabCloseRequest\0tabContextMenuRequest\0"
    "pos\0tabContextMenuTrigger\0processError\0"
    "QProcess::ProcessError\0error\0"
    "startDesignerAlternate\0"
    "on_actionSave_Configuration_triggered\0"
    "on_actionRestore_Configuration_triggered\0"
    "saveRestore\0SaveRestoreSignal::saveRestoreOptions\0"
    "option\0setGeom\0scrollTo\0"
    "on_actionSet_Passwords_triggered\0"
    "deleteConfigs\0manageConfigDialog*\0mcd\0"
    "names\0dockComponentDestroyed\0component\0"
    "delayedRaiseGui\0guiDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  169,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  172,    2, 0x08 /* Private */,
       5,    0,  173,    2, 0x08 /* Private */,
       6,    0,  174,    2, 0x08 /* Private */,
       7,    0,  175,    2, 0x08 /* Private */,
       8,    0,  176,    2, 0x08 /* Private */,
       9,    0,  177,    2, 0x08 /* Private */,
      10,    0,  178,    2, 0x08 /* Private */,
      11,    0,  179,    2, 0x08 /* Private */,
      12,    0,  180,    2, 0x08 /* Private */,
      13,    0,  181,    2, 0x08 /* Private */,
      14,    0,  182,    2, 0x08 /* Private */,
      15,    0,  183,    2, 0x08 /* Private */,
      16,    1,  184,    2, 0x08 /* Private */,
      19,    1,  187,    2, 0x08 /* Private */,
      22,    1,  190,    2, 0x08 /* Private */,
      24,    1,  193,    2, 0x08 /* Private */,
      25,    1,  196,    2, 0x08 /* Private */,
      27,    1,  199,    2, 0x08 /* Private */,
      28,    1,  202,    2, 0x08 /* Private */,
      31,    0,  205,    2, 0x08 /* Private */,
      32,    0,  206,    2, 0x08 /* Private */,
      33,    0,  207,    2, 0x08 /* Private */,
      34,    1,  208,    2, 0x08 /* Private */,
      37,    0,  211,    2, 0x08 /* Private */,
      38,    0,  212,    2, 0x08 /* Private */,
      39,    0,  213,    2, 0x08 /* Private */,
      40,    2,  214,    2, 0x08 /* Private */,
      44,    1,  219,    2, 0x08 /* Private */,
      46,    0,  222,    2, 0x08 /* Private */,
      47,    1,  223,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::QPoint,   26,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41, QMetaType::QStringList,   42,   43,
    QMetaType::Void, QMetaType::QObjectStar,   45,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dockCreated((*reinterpret_cast< QDockWidget*(*)>(_a[1]))); break;
        case 1: _t->on_actionManage_Configurations_triggered(); break;
        case 2: _t->on_actionExit_triggered(); break;
        case 3: _t->on_actionUser_Level_triggered(); break;
        case 4: _t->on_actionRefresh_Current_Form_triggered(); break;
        case 5: _t->on_actionOpen_Current_Form_In_Designer_triggered(); break;
        case 6: _t->on_actionDesigner_triggered(); break;
        case 7: _t->on_actionNew_Window_triggered(); break;
        case 8: _t->on_actionNew_Tab_triggered(); break;
        case 9: _t->on_actionNew_Dock_triggered(); break;
        case 10: _t->on_actionOpen_triggered(); break;
        case 11: _t->on_actionClose_triggered(); break;
        case 12: _t->on_actionAbout_triggered(); break;
        case 13: _t->onWindowMenuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 14: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 15: _t->tabCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->tabCloseRequest((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->tabContextMenuRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 18: _t->tabContextMenuTrigger((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 19: _t->processError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 20: _t->startDesignerAlternate(); break;
        case 21: _t->on_actionSave_Configuration_triggered(); break;
        case 22: _t->on_actionRestore_Configuration_triggered(); break;
        case 23: _t->saveRestore((*reinterpret_cast< SaveRestoreSignal::saveRestoreOptions(*)>(_a[1]))); break;
        case 24: _t->setGeom(); break;
        case 25: _t->scrollTo(); break;
        case 26: _t->on_actionSet_Passwords_triggered(); break;
        case 27: _t->deleteConfigs((*reinterpret_cast< manageConfigDialog*(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 28: _t->dockComponentDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 29: _t->delayedRaiseGui(); break;
        case 30: _t->guiDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDockWidget* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< manageConfigDialog* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QDockWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::dockCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "UserMessage"))
        return static_cast< UserMessage*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::dockCreated(QDockWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

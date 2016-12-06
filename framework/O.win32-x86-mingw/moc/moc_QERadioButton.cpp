/****************************************************************************
** Meta object code from reading C++ file 'QERadioButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/QEButton/QERadioButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QERadioButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QERadioButton_t {
    QByteArrayData data[150];
    char stringdata0[1832];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QERadioButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QERadioButton_t qt_meta_stringdata_QERadioButton = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QERadioButton"
QT_MOC_LITERAL(1, 14, 14), // "dbValueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "out"
QT_MOC_LITERAL(4, 34, 19), // "dbConnectionChanged"
QT_MOC_LITERAL(5, 54, 11), // "isConnected"
QT_MOC_LITERAL(6, 66, 13), // "requestResend"
QT_MOC_LITERAL(7, 80, 6), // "newGui"
QT_MOC_LITERAL(8, 87, 16), // "QEActionRequests"
QT_MOC_LITERAL(9, 104, 7), // "request"
QT_MOC_LITERAL(10, 112, 7), // "pressed"
QT_MOC_LITERAL(11, 120, 5), // "value"
QT_MOC_LITERAL(12, 126, 8), // "released"
QT_MOC_LITERAL(13, 135, 7), // "clicked"
QT_MOC_LITERAL(14, 143, 16), // "programCompleted"
QT_MOC_LITERAL(15, 160, 17), // "connectionChanged"
QT_MOC_LITERAL(16, 178, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(17, 197, 14), // "connectionInfo"
QT_MOC_LITERAL(18, 212, 13), // "variableIndex"
QT_MOC_LITERAL(19, 226, 13), // "setButtonText"
QT_MOC_LITERAL(20, 240, 4), // "text"
QT_MOC_LITERAL(21, 245, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(22, 259, 9), // "alarmInfo"
QT_MOC_LITERAL(23, 269, 12), // "QCaDateTime&"
QT_MOC_LITERAL(24, 282, 9), // "timestamp"
QT_MOC_LITERAL(25, 292, 11), // "userPressed"
QT_MOC_LITERAL(26, 304, 12), // "userReleased"
QT_MOC_LITERAL(27, 317, 11), // "userClicked"
QT_MOC_LITERAL(28, 329, 7), // "checked"
QT_MOC_LITERAL(29, 337, 12), // "setDISAvalue"
QT_MOC_LITERAL(30, 350, 12), // "setDISVvalue"
QT_MOC_LITERAL(31, 363, 26), // "useNewVariableNameProperty"
QT_MOC_LITERAL(32, 390, 14), // "variableNameIn"
QT_MOC_LITERAL(33, 405, 27), // "variableNameSubstitutionsIn"
QT_MOC_LITERAL(34, 433, 13), // "requestAction"
QT_MOC_LITERAL(35, 447, 15), // "setDefaultStyle"
QT_MOC_LITERAL(36, 463, 5), // "style"
QT_MOC_LITERAL(37, 469, 20), // "programCompletedSlot"
QT_MOC_LITERAL(38, 490, 17), // "setManagedVisible"
QT_MOC_LITERAL(39, 508, 1), // "v"
QT_MOC_LITERAL(40, 510, 8), // "variable"
QT_MOC_LITERAL(41, 519, 21), // "variableSubstitutions"
QT_MOC_LITERAL(42, 541, 10), // "arrayIndex"
QT_MOC_LITERAL(43, 552, 9), // "subscribe"
QT_MOC_LITERAL(44, 562, 17), // "variableAsToolTip"
QT_MOC_LITERAL(45, 580, 9), // "allowDrop"
QT_MOC_LITERAL(46, 590, 7), // "visible"
QT_MOC_LITERAL(47, 598, 15), // "messageSourceId"
QT_MOC_LITERAL(48, 614, 10), // "styleSheet"
QT_MOC_LITERAL(49, 625, 12), // "defaultStyle"
QT_MOC_LITERAL(50, 638, 18), // "userLevelUserStyle"
QT_MOC_LITERAL(51, 657, 23), // "userLevelScientistStyle"
QT_MOC_LITERAL(52, 681, 22), // "userLevelEngineerStyle"
QT_MOC_LITERAL(53, 704, 19), // "userLevelVisibility"
QT_MOC_LITERAL(54, 724, 10), // "UserLevels"
QT_MOC_LITERAL(55, 735, 16), // "userLevelEnabled"
QT_MOC_LITERAL(56, 752, 17), // "displayAlarmState"
QT_MOC_LITERAL(57, 770, 23), // "displayAlarmStateOption"
QT_MOC_LITERAL(58, 794, 24), // "DisplayAlarmStateOptions"
QT_MOC_LITERAL(59, 819, 9), // "precision"
QT_MOC_LITERAL(60, 829, 14), // "useDbPrecision"
QT_MOC_LITERAL(61, 844, 11), // "leadingZero"
QT_MOC_LITERAL(62, 856, 13), // "trailingZeros"
QT_MOC_LITERAL(63, 870, 8), // "addUnits"
QT_MOC_LITERAL(64, 879, 16), // "localEnumeration"
QT_MOC_LITERAL(65, 896, 6), // "format"
QT_MOC_LITERAL(66, 903, 7), // "Formats"
QT_MOC_LITERAL(67, 911, 5), // "radix"
QT_MOC_LITERAL(68, 917, 9), // "separator"
QT_MOC_LITERAL(69, 927, 10), // "Separators"
QT_MOC_LITERAL(70, 938, 8), // "notation"
QT_MOC_LITERAL(71, 947, 9), // "Notations"
QT_MOC_LITERAL(72, 957, 11), // "arrayAction"
QT_MOC_LITERAL(73, 969, 12), // "ArrayActions"
QT_MOC_LITERAL(74, 982, 20), // "disabledRecordPolicy"
QT_MOC_LITERAL(75, 1003, 40), // "QEWidgetProperties::DisabledR..."
QT_MOC_LITERAL(76, 1044, 9), // "alignment"
QT_MOC_LITERAL(77, 1054, 13), // "Qt::Alignment"
QT_MOC_LITERAL(78, 1068, 12), // "updateOption"
QT_MOC_LITERAL(79, 1081, 13), // "UpdateOptions"
QT_MOC_LITERAL(80, 1095, 7), // "pixmap0"
QT_MOC_LITERAL(81, 1103, 7), // "pixmap1"
QT_MOC_LITERAL(82, 1111, 7), // "pixmap2"
QT_MOC_LITERAL(83, 1119, 7), // "pixmap3"
QT_MOC_LITERAL(84, 1127, 7), // "pixmap4"
QT_MOC_LITERAL(85, 1135, 7), // "pixmap5"
QT_MOC_LITERAL(86, 1143, 7), // "pixmap6"
QT_MOC_LITERAL(87, 1151, 7), // "pixmap7"
QT_MOC_LITERAL(88, 1159, 8), // "password"
QT_MOC_LITERAL(89, 1168, 13), // "confirmAction"
QT_MOC_LITERAL(90, 1182, 11), // "confirmText"
QT_MOC_LITERAL(91, 1194, 12), // "writeOnPress"
QT_MOC_LITERAL(92, 1207, 14), // "writeOnRelease"
QT_MOC_LITERAL(93, 1222, 12), // "writeOnClick"
QT_MOC_LITERAL(94, 1235, 9), // "pressText"
QT_MOC_LITERAL(95, 1245, 11), // "releaseText"
QT_MOC_LITERAL(96, 1257, 9), // "clickText"
QT_MOC_LITERAL(97, 1267, 16), // "clickCheckedText"
QT_MOC_LITERAL(98, 1284, 9), // "labelText"
QT_MOC_LITERAL(99, 1294, 7), // "program"
QT_MOC_LITERAL(100, 1302, 9), // "arguments"
QT_MOC_LITERAL(101, 1312, 20), // "programStartupOption"
QT_MOC_LITERAL(102, 1333, 25), // "ProgramStartupOptionNames"
QT_MOC_LITERAL(103, 1359, 7), // "guiFile"
QT_MOC_LITERAL(104, 1367, 14), // "creationOption"
QT_MOC_LITERAL(105, 1382, 19), // "CreationOptionNames"
QT_MOC_LITERAL(106, 1402, 21), // "prioritySubstitutions"
QT_MOC_LITERAL(107, 1424, 17), // "customisationName"
QT_MOC_LITERAL(108, 1442, 4), // "User"
QT_MOC_LITERAL(109, 1447, 9), // "Scientist"
QT_MOC_LITERAL(110, 1457, 8), // "Engineer"
QT_MOC_LITERAL(111, 1466, 5), // "Never"
QT_MOC_LITERAL(112, 1472, 6), // "Always"
QT_MOC_LITERAL(113, 1479, 11), // "WhenInAlarm"
QT_MOC_LITERAL(114, 1491, 7), // "Default"
QT_MOC_LITERAL(115, 1499, 8), // "Floating"
QT_MOC_LITERAL(116, 1508, 7), // "Integer"
QT_MOC_LITERAL(117, 1516, 15), // "UnsignedInteger"
QT_MOC_LITERAL(118, 1532, 4), // "Time"
QT_MOC_LITERAL(119, 1537, 16), // "LocalEnumeration"
QT_MOC_LITERAL(120, 1554, 11), // "NoSeparator"
QT_MOC_LITERAL(121, 1566, 5), // "Comma"
QT_MOC_LITERAL(122, 1572, 10), // "Underscore"
QT_MOC_LITERAL(123, 1583, 5), // "Space"
QT_MOC_LITERAL(124, 1589, 5), // "Fixed"
QT_MOC_LITERAL(125, 1595, 10), // "Scientific"
QT_MOC_LITERAL(126, 1606, 9), // "Automatic"
QT_MOC_LITERAL(127, 1616, 6), // "Append"
QT_MOC_LITERAL(128, 1623, 5), // "Ascii"
QT_MOC_LITERAL(129, 1629, 5), // "Index"
QT_MOC_LITERAL(130, 1635, 4), // "Text"
QT_MOC_LITERAL(131, 1640, 4), // "Icon"
QT_MOC_LITERAL(132, 1645, 11), // "TextAndIcon"
QT_MOC_LITERAL(133, 1657, 5), // "State"
QT_MOC_LITERAL(134, 1663, 4), // "None"
QT_MOC_LITERAL(135, 1668, 8), // "Terminal"
QT_MOC_LITERAL(136, 1677, 9), // "LogOutput"
QT_MOC_LITERAL(137, 1687, 9), // "StdOutput"
QT_MOC_LITERAL(138, 1697, 4), // "Open"
QT_MOC_LITERAL(139, 1702, 6), // "NewTab"
QT_MOC_LITERAL(140, 1709, 9), // "NewWindow"
QT_MOC_LITERAL(141, 1719, 7), // "DockTop"
QT_MOC_LITERAL(142, 1727, 10), // "DockBottom"
QT_MOC_LITERAL(143, 1738, 8), // "DockLeft"
QT_MOC_LITERAL(144, 1747, 9), // "DockRight"
QT_MOC_LITERAL(145, 1757, 13), // "DockTopTabbed"
QT_MOC_LITERAL(146, 1771, 16), // "DockBottomTabbed"
QT_MOC_LITERAL(147, 1788, 14), // "DockLeftTabbed"
QT_MOC_LITERAL(148, 1803, 15), // "DockRightTabbed"
QT_MOC_LITERAL(149, 1819, 12) // "DockFloating"

    },
    "QERadioButton\0dbValueChanged\0\0out\0"
    "dbConnectionChanged\0isConnected\0"
    "requestResend\0newGui\0QEActionRequests\0"
    "request\0pressed\0value\0released\0clicked\0"
    "programCompleted\0connectionChanged\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "variableIndex\0setButtonText\0text\0"
    "QCaAlarmInfo&\0alarmInfo\0QCaDateTime&\0"
    "timestamp\0userPressed\0userReleased\0"
    "userClicked\0checked\0setDISAvalue\0"
    "setDISVvalue\0useNewVariableNameProperty\0"
    "variableNameIn\0variableNameSubstitutionsIn\0"
    "requestAction\0setDefaultStyle\0style\0"
    "programCompletedSlot\0setManagedVisible\0"
    "v\0variable\0variableSubstitutions\0"
    "arrayIndex\0subscribe\0variableAsToolTip\0"
    "allowDrop\0visible\0messageSourceId\0"
    "styleSheet\0defaultStyle\0userLevelUserStyle\0"
    "userLevelScientistStyle\0userLevelEngineerStyle\0"
    "userLevelVisibility\0UserLevels\0"
    "userLevelEnabled\0displayAlarmState\0"
    "displayAlarmStateOption\0"
    "DisplayAlarmStateOptions\0precision\0"
    "useDbPrecision\0leadingZero\0trailingZeros\0"
    "addUnits\0localEnumeration\0format\0"
    "Formats\0radix\0separator\0Separators\0"
    "notation\0Notations\0arrayAction\0"
    "ArrayActions\0disabledRecordPolicy\0"
    "QEWidgetProperties::DisabledRecordPolicy\0"
    "alignment\0Qt::Alignment\0updateOption\0"
    "UpdateOptions\0pixmap0\0pixmap1\0pixmap2\0"
    "pixmap3\0pixmap4\0pixmap5\0pixmap6\0pixmap7\0"
    "password\0confirmAction\0confirmText\0"
    "writeOnPress\0writeOnRelease\0writeOnClick\0"
    "pressText\0releaseText\0clickText\0"
    "clickCheckedText\0labelText\0program\0"
    "arguments\0programStartupOption\0"
    "ProgramStartupOptionNames\0guiFile\0"
    "creationOption\0CreationOptionNames\0"
    "prioritySubstitutions\0customisationName\0"
    "User\0Scientist\0Engineer\0Never\0Always\0"
    "WhenInAlarm\0Default\0Floating\0Integer\0"
    "UnsignedInteger\0Time\0LocalEnumeration\0"
    "NoSeparator\0Comma\0Underscore\0Space\0"
    "Fixed\0Scientific\0Automatic\0Append\0"
    "Ascii\0Index\0Text\0Icon\0TextAndIcon\0"
    "State\0None\0Terminal\0LogOutput\0StdOutput\0"
    "Open\0NewTab\0NewWindow\0DockTop\0DockBottom\0"
    "DockLeft\0DockRight\0DockTopTabbed\0"
    "DockBottomTabbed\0DockLeftTabbed\0"
    "DockRightTabbed\0DockFloating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QERadioButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      57,  228, // properties
       9,  399, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       1,    1,  142,    2, 0x06 /* Public */,
       1,    1,  145,    2, 0x06 /* Public */,
       1,    1,  148,    2, 0x06 /* Public */,
       1,    1,  151,    2, 0x06 /* Public */,
       1,    1,  154,    2, 0x06 /* Public */,
       4,    1,  157,    2, 0x06 /* Public */,
       6,    0,  160,    2, 0x06 /* Public */,
       7,    1,  161,    2, 0x06 /* Public */,
      10,    1,  164,    2, 0x06 /* Public */,
      12,    1,  167,    2, 0x06 /* Public */,
      13,    1,  170,    2, 0x06 /* Public */,
      14,    0,  173,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,  174,    2, 0x08 /* Private */,
      19,    4,  179,    2, 0x08 /* Private */,
      25,    0,  188,    2, 0x08 /* Private */,
      26,    0,  189,    2, 0x08 /* Private */,
      27,    1,  190,    2, 0x08 /* Private */,
      29,    4,  193,    2, 0x08 /* Private */,
      30,    4,  202,    2, 0x08 /* Private */,
      31,    3,  211,    2, 0x08 /* Private */,
      34,    1,  218,    2, 0x0a /* Public */,
      35,    1,  221,    2, 0x0a /* Public */,
      37,    0,  224,    2, 0x08 /* Private */,
      38,    1,  225,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Long,    3,
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16, QMetaType::UInt,   17,   18,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 21, 0x80000000 | 23, QMetaType::UInt,   20,   22,   24,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 21, 0x80000000 | 23, QMetaType::UInt,   11,   22,   24,   18,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 21, 0x80000000 | 23, QMetaType::UInt,   11,   22,   24,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   32,   33,   18,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   39,

 // properties: name, type, flags
      40, QMetaType::QString, 0x00095003,
      41, QMetaType::QString, 0x00095003,
      42, QMetaType::Int, 0x00095103,
      43, QMetaType::Bool, 0x00095103,
      44, QMetaType::Bool, 0x00095103,
      45, QMetaType::Bool, 0x00095103,
      46, QMetaType::Bool, 0x00095003,
      47, QMetaType::UInt, 0x00095103,
      48, QMetaType::QString, 0x00094103,
      49, QMetaType::QString, 0x00095003,
      50, QMetaType::QString, 0x00095003,
      51, QMetaType::QString, 0x00095003,
      52, QMetaType::QString, 0x00095003,
      53, 0x80000000 | 54, 0x0009500b,
      55, 0x80000000 | 54, 0x0009500b,
      56, QMetaType::Bool, 0x00094103,
      57, 0x80000000 | 58, 0x0009500b,
      59, QMetaType::Int, 0x00095103,
      60, QMetaType::Bool, 0x00095103,
      61, QMetaType::Bool, 0x00095103,
      62, QMetaType::Bool, 0x00095103,
      63, QMetaType::Bool, 0x00095103,
      64, QMetaType::QString, 0x00095103,
      65, 0x80000000 | 66, 0x0009500b,
      67, QMetaType::Int, 0x00095103,
      68, 0x80000000 | 69, 0x0009500b,
      70, 0x80000000 | 71, 0x0009500b,
      72, 0x80000000 | 73, 0x0009500b,
      74, 0x80000000 | 75, 0x0009510b,
      76, 0x80000000 | 77, 0x0009500b,
      78, 0x80000000 | 79, 0x0009500b,
      80, QMetaType::QPixmap, 0x00095003,
      81, QMetaType::QPixmap, 0x00095003,
      82, QMetaType::QPixmap, 0x00095003,
      83, QMetaType::QPixmap, 0x00095003,
      84, QMetaType::QPixmap, 0x00095003,
      85, QMetaType::QPixmap, 0x00095003,
      86, QMetaType::QPixmap, 0x00095003,
      87, QMetaType::QPixmap, 0x00095003,
      88, QMetaType::QString, 0x00095103,
      89, QMetaType::Bool, 0x00095103,
      90, QMetaType::QString, 0x00095103,
      91, QMetaType::Bool, 0x00095103,
      92, QMetaType::Bool, 0x00095103,
      93, QMetaType::Bool, 0x00095103,
      94, QMetaType::QString, 0x00095103,
      95, QMetaType::QString, 0x00095103,
      96, QMetaType::QString, 0x00095103,
      97, QMetaType::QString, 0x00095103,
      98, QMetaType::QString, 0x00095003,
      99, QMetaType::QString, 0x00095103,
     100, QMetaType::QStringList, 0x00095103,
     101, 0x80000000 | 102, 0x0009500b,
     103, QMetaType::QString, 0x00095003,
     104, 0x80000000 | 105, 0x0009500b,
     106, QMetaType::QString, 0x00095103,
     107, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
      54, 0x0,    3,  435,
      58, 0x0,    3,  441,
      66, 0x0,    6,  447,
      69, 0x0,    4,  459,
      71, 0x0,    3,  467,
      73, 0x0,    3,  473,
      79, 0x0,    4,  479,
     102, 0x0,    4,  487,
     105, 0x0,   12,  495,

 // enum data: key, value
     108, uint(QERadioButton::User),
     109, uint(QERadioButton::Scientist),
     110, uint(QERadioButton::Engineer),
     111, uint(QERadioButton::Never),
     112, uint(QERadioButton::Always),
     113, uint(QERadioButton::WhenInAlarm),
     114, uint(QERadioButton::Default),
     115, uint(QERadioButton::Floating),
     116, uint(QERadioButton::Integer),
     117, uint(QERadioButton::UnsignedInteger),
     118, uint(QERadioButton::Time),
     119, uint(QERadioButton::LocalEnumeration),
     120, uint(QERadioButton::NoSeparator),
     121, uint(QERadioButton::Comma),
     122, uint(QERadioButton::Underscore),
     123, uint(QERadioButton::Space),
     124, uint(QERadioButton::Fixed),
     125, uint(QERadioButton::Scientific),
     126, uint(QERadioButton::Automatic),
     127, uint(QERadioButton::Append),
     128, uint(QERadioButton::Ascii),
     129, uint(QERadioButton::Index),
     130, uint(QERadioButton::Text),
     131, uint(QERadioButton::Icon),
     132, uint(QERadioButton::TextAndIcon),
     133, uint(QERadioButton::State),
     134, uint(QERadioButton::None),
     135, uint(QERadioButton::Terminal),
     136, uint(QERadioButton::LogOutput),
     137, uint(QERadioButton::StdOutput),
     138, uint(QERadioButton::Open),
     139, uint(QERadioButton::NewTab),
     140, uint(QERadioButton::NewWindow),
     141, uint(QERadioButton::DockTop),
     142, uint(QERadioButton::DockBottom),
     143, uint(QERadioButton::DockLeft),
     144, uint(QERadioButton::DockRight),
     145, uint(QERadioButton::DockTopTabbed),
     146, uint(QERadioButton::DockBottomTabbed),
     147, uint(QERadioButton::DockLeftTabbed),
     148, uint(QERadioButton::DockRightTabbed),
     149, uint(QERadioButton::DockFloating),

       0        // eod
};

void QERadioButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QERadioButton *_t = static_cast<QERadioButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->dbValueChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->dbValueChanged((*reinterpret_cast< const long(*)>(_a[1]))); break;
        case 3: _t->dbValueChanged((*reinterpret_cast< const qlonglong(*)>(_a[1]))); break;
        case 4: _t->dbValueChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->dbValueChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 6: _t->dbConnectionChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 7: _t->requestResend(); break;
        case 8: _t->newGui((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 9: _t->pressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->released((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->programCompleted(); break;
        case 13: _t->connectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 14: _t->setButtonText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 15: _t->userPressed(); break;
        case 16: _t->userReleased(); break;
        case 17: _t->userClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->setDISAvalue((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 19: _t->setDISVvalue((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 20: _t->useNewVariableNameProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 21: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 22: _t->setDefaultStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->programCompletedSlot(); break;
        case 24: _t->setManagedVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QERadioButton::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::dbValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QERadioButton::*_t)(const int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::dbValueChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QERadioButton::*_t)(const long & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::dbValueChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QERadioButton::*_t)(const qlonglong & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::dbValueChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QERadioButton::*_t)(const double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::dbValueChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QERadioButton::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::dbValueChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QERadioButton::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::dbConnectionChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QERadioButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::requestResend)) {
                *result = 7;
            }
        }
        {
            typedef void (QERadioButton::*_t)(const QEActionRequests & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::newGui)) {
                *result = 8;
            }
        }
        {
            typedef void (QERadioButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::pressed)) {
                *result = 9;
            }
        }
        {
            typedef void (QERadioButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::released)) {
                *result = 10;
            }
        }
        {
            typedef void (QERadioButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::clicked)) {
                *result = 11;
            }
        }
        {
            typedef void (QERadioButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QERadioButton::programCompleted)) {
                *result = 12;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QERadioButton *_t = static_cast<QERadioButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVariableNameProperty(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getVariableNameSubstitutionsProperty(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getArrayIndex(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getSubscribe(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getVariableAsToolTip(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getAllowDrop(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getRunVisible(); break;
        case 7: *reinterpret_cast< uint*>(_v) = _t->getMessageSourceId(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->styleSheet(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getStyleDefault(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getStyleUser(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->getStyleScientist(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getStyleEngineer(); break;
        case 13: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelVisibilityProperty(); break;
        case 14: *reinterpret_cast< UserLevels*>(_v) = _t->getUserLevelEnabledProperty(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getDisplayAlarmState(); break;
        case 16: *reinterpret_cast< DisplayAlarmStateOptions*>(_v) = _t->getDisplayAlarmStateOptionProperty(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->getUseDbPrecision(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->getLeadingZero(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getTrailingZeros(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getAddUnits(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->getLocalEnumeration(); break;
        case 23: *reinterpret_cast< Formats*>(_v) = _t->getFormatProperty(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->getRadix(); break;
        case 25: *reinterpret_cast< Separators*>(_v) = _t->getSeparatorProperty(); break;
        case 26: *reinterpret_cast< Notations*>(_v) = _t->getNotationProperty(); break;
        case 27: *reinterpret_cast< ArrayActions*>(_v) = _t->getArrayActionProperty(); break;
        case 28: *reinterpret_cast< QEWidgetProperties::DisabledRecordPolicy*>(_v) = _t->getDisabledRecordPolicy(); break;
        case 29: *reinterpret_cast< Qt::Alignment*>(_v) = _t->getTextAlignment(); break;
        case 30: *reinterpret_cast< UpdateOptions*>(_v) = _t->getUpdateOptionProperty(); break;
        case 31: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap0Property(); break;
        case 32: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap1Property(); break;
        case 33: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap2Property(); break;
        case 34: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap3Property(); break;
        case 35: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap4Property(); break;
        case 36: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap5Property(); break;
        case 37: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap6Property(); break;
        case 38: *reinterpret_cast< QPixmap*>(_v) = _t->getPixmap7Property(); break;
        case 39: *reinterpret_cast< QString*>(_v) = _t->getPassword(); break;
        case 40: *reinterpret_cast< bool*>(_v) = _t->getConfirmAction(); break;
        case 41: *reinterpret_cast< QString*>(_v) = _t->getConfirmText(); break;
        case 42: *reinterpret_cast< bool*>(_v) = _t->getWriteOnPress(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->getWriteOnRelease(); break;
        case 44: *reinterpret_cast< bool*>(_v) = _t->getWriteOnClick(); break;
        case 45: *reinterpret_cast< QString*>(_v) = _t->getPressText(); break;
        case 46: *reinterpret_cast< QString*>(_v) = _t->getReleaseText(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->getClickText(); break;
        case 48: *reinterpret_cast< QString*>(_v) = _t->getClickCheckedText(); break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->getLabelTextProperty(); break;
        case 50: *reinterpret_cast< QString*>(_v) = _t->getProgram(); break;
        case 51: *reinterpret_cast< QStringList*>(_v) = _t->getArguments(); break;
        case 52: *reinterpret_cast< ProgramStartupOptionNames*>(_v) = _t->getProgramStartupOptionProperty(); break;
        case 53: *reinterpret_cast< QString*>(_v) = _t->getGuiName(); break;
        case 54: *reinterpret_cast< CreationOptionNames*>(_v) = _t->getCreationOptionProperty(); break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->getPrioritySubstitutions(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->getCustomisationName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QERadioButton *_t = static_cast<QERadioButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVariableNameProperty(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setVariableNameSubstitutionsProperty(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setArrayIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSubscribe(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setVariableAsToolTip(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAllowDrop(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setRunVisible(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setMessageSourceId(*reinterpret_cast< uint*>(_v)); break;
        case 8: _t->setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setStyleDefault(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setStyleUser(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setStyleScientist(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setStyleEngineer(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setUserLevelVisibilityProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 14: _t->setUserLevelEnabledProperty(*reinterpret_cast< UserLevels*>(_v)); break;
        case 15: _t->setDisplayAlarmState(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setDisplayAlarmStateOptionProperty(*reinterpret_cast< DisplayAlarmStateOptions*>(_v)); break;
        case 17: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 18: _t->setUseDbPrecision(*reinterpret_cast< bool*>(_v)); break;
        case 19: _t->setLeadingZero(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setTrailingZeros(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setAddUnits(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setLocalEnumeration(*reinterpret_cast< QString*>(_v)); break;
        case 23: _t->setFormatProperty(*reinterpret_cast< Formats*>(_v)); break;
        case 24: _t->setRadix(*reinterpret_cast< int*>(_v)); break;
        case 25: _t->setSeparatorProperty(*reinterpret_cast< Separators*>(_v)); break;
        case 26: _t->setNotationProperty(*reinterpret_cast< Notations*>(_v)); break;
        case 27: _t->setArrayActionProperty(*reinterpret_cast< ArrayActions*>(_v)); break;
        case 28: _t->setDisabledRecordPolicy(*reinterpret_cast< QEWidgetProperties::DisabledRecordPolicy*>(_v)); break;
        case 29: _t->setTextAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 30: _t->setUpdateOptionProperty(*reinterpret_cast< UpdateOptions*>(_v)); break;
        case 31: _t->setPixmap0Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 32: _t->setPixmap1Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 33: _t->setPixmap2Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 34: _t->setPixmap3Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 35: _t->setPixmap4Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 36: _t->setPixmap5Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 37: _t->setPixmap6Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 38: _t->setPixmap7Property(*reinterpret_cast< QPixmap*>(_v)); break;
        case 39: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        case 40: _t->setConfirmAction(*reinterpret_cast< bool*>(_v)); break;
        case 41: _t->setConfirmText(*reinterpret_cast< QString*>(_v)); break;
        case 42: _t->setWriteOnPress(*reinterpret_cast< bool*>(_v)); break;
        case 43: _t->setWriteOnRelease(*reinterpret_cast< bool*>(_v)); break;
        case 44: _t->setWriteOnClick(*reinterpret_cast< bool*>(_v)); break;
        case 45: _t->setPressText(*reinterpret_cast< QString*>(_v)); break;
        case 46: _t->setReleaseText(*reinterpret_cast< QString*>(_v)); break;
        case 47: _t->setClickText(*reinterpret_cast< QString*>(_v)); break;
        case 48: _t->setClickCheckedText(*reinterpret_cast< QString*>(_v)); break;
        case 49: _t->setLabelTextProperty(*reinterpret_cast< QString*>(_v)); break;
        case 50: _t->setProgram(*reinterpret_cast< QString*>(_v)); break;
        case 51: _t->setArguments(*reinterpret_cast< QStringList*>(_v)); break;
        case 52: _t->setProgramStartupOptionProperty(*reinterpret_cast< ProgramStartupOptionNames*>(_v)); break;
        case 53: _t->setGuiName(*reinterpret_cast< QString*>(_v)); break;
        case 54: _t->setCreationOptionProperty(*reinterpret_cast< CreationOptionNames*>(_v)); break;
        case 55: _t->setPrioritySubstitutions(*reinterpret_cast< QString*>(_v)); break;
        case 56: _t->setCustomisationName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QERadioButton[] = {
        &QEWidgetProperties::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QERadioButton::staticMetaObject = {
    { &QRadioButton::staticMetaObject, qt_meta_stringdata_QERadioButton.data,
      qt_meta_data_QERadioButton,  qt_static_metacall, qt_meta_extradata_QERadioButton, Q_NULLPTR}
};


const QMetaObject *QERadioButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QERadioButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QERadioButton.stringdata0))
        return static_cast<void*>(const_cast< QERadioButton*>(this));
    if (!strcmp(_clname, "QEGenericButton"))
        return static_cast< QEGenericButton*>(const_cast< QERadioButton*>(this));
    return QRadioButton::qt_metacast(_clname);
}

int QERadioButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRadioButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 57;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 57;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QERadioButton::dbValueChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QERadioButton::dbValueChanged(const int & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QERadioButton::dbValueChanged(const long & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QERadioButton::dbValueChanged(const qlonglong & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QERadioButton::dbValueChanged(const double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QERadioButton::dbValueChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QERadioButton::dbConnectionChanged(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QERadioButton::requestResend()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QERadioButton::newGui(const QEActionRequests & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QERadioButton::pressed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QERadioButton::released(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QERadioButton::clicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QERadioButton::programCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

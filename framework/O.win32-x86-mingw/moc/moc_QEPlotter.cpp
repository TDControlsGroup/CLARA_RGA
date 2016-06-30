/****************************************************************************
** Meta object code from reading C++ file 'QEPlotter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgetsCLARA/QEPlotterCLARA/QEPlotter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QEPlotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEPlotter_t {
    QByteArrayData data[146];
    char stringdata0[1855];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEPlotter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEPlotter_t qt_meta_stringdata_QEPlotter = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QEPlotter"
QT_MOC_LITERAL(1, 10, 21), // "crosshairIndexChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 18), // "coordinateSelected"
QT_MOC_LITERAL(5, 58, 7), // "xyvalue"
QT_MOC_LITERAL(6, 66, 19), // "xCoordinateSelected"
QT_MOC_LITERAL(7, 86, 6), // "xvalue"
QT_MOC_LITERAL(8, 93, 19), // "yCoordinateSelected"
QT_MOC_LITERAL(9, 113, 6), // "yvalue"
QT_MOC_LITERAL(10, 120, 20), // "pvDataNameSetChanged"
QT_MOC_LITERAL(11, 141, 7), // "nameSet"
QT_MOC_LITERAL(12, 149, 19), // "alaisNameSetChanged"
QT_MOC_LITERAL(13, 169, 13), // "requestAction"
QT_MOC_LITERAL(14, 183, 16), // "QEActionRequests"
QT_MOC_LITERAL(15, 200, 11), // "setXYDataPV"
QT_MOC_LITERAL(16, 212, 4), // "slot"
QT_MOC_LITERAL(17, 217, 6), // "pvName"
QT_MOC_LITERAL(18, 224, 10), // "setXYAlias"
QT_MOC_LITERAL(19, 235, 5), // "alias"
QT_MOC_LITERAL(20, 241, 9), // "setXRange"
QT_MOC_LITERAL(21, 251, 8), // "xMinimum"
QT_MOC_LITERAL(22, 260, 8), // "xMaximum"
QT_MOC_LITERAL(23, 269, 9), // "setYRange"
QT_MOC_LITERAL(24, 279, 8), // "yMinimum"
QT_MOC_LITERAL(25, 288, 8), // "yMaximum"
QT_MOC_LITERAL(26, 297, 16), // "setDataPvNameSet"
QT_MOC_LITERAL(27, 314, 9), // "pvNameSet"
QT_MOC_LITERAL(28, 324, 15), // "setAliasNameSet"
QT_MOC_LITERAL(29, 340, 12), // "aliasNameSet"
QT_MOC_LITERAL(30, 353, 15), // "setPlotterEntry"
QT_MOC_LITERAL(31, 369, 18), // "setNewVariableName"
QT_MOC_LITERAL(32, 388, 12), // "variableName"
QT_MOC_LITERAL(33, 401, 25), // "variableNameSubstitutions"
QT_MOC_LITERAL(34, 427, 13), // "variableIndex"
QT_MOC_LITERAL(35, 441, 21), // "dataConnectionChanged"
QT_MOC_LITERAL(36, 463, 18), // "QCaConnectionInfo&"
QT_MOC_LITERAL(37, 482, 14), // "connectionInfo"
QT_MOC_LITERAL(38, 497, 16), // "dataArrayChanged"
QT_MOC_LITERAL(39, 514, 15), // "QVector<double>"
QT_MOC_LITERAL(40, 530, 6), // "values"
QT_MOC_LITERAL(41, 537, 13), // "QCaAlarmInfo&"
QT_MOC_LITERAL(42, 551, 9), // "alarmInfo"
QT_MOC_LITERAL(43, 561, 12), // "QCaDateTime&"
QT_MOC_LITERAL(44, 574, 9), // "timeStamp"
QT_MOC_LITERAL(45, 584, 21), // "sizeConnectionChanged"
QT_MOC_LITERAL(46, 606, 16), // "sizeValueChanged"
QT_MOC_LITERAL(47, 623, 19), // "letterButtonClicked"
QT_MOC_LITERAL(48, 643, 7), // "checked"
QT_MOC_LITERAL(49, 651, 20), // "checkBoxStateChanged"
QT_MOC_LITERAL(50, 672, 5), // "state"
QT_MOC_LITERAL(51, 678, 11), // "tickTimeout"
QT_MOC_LITERAL(52, 690, 27), // "generalContextMenuRequested"
QT_MOC_LITERAL(53, 718, 3), // "pos"
QT_MOC_LITERAL(54, 722, 24), // "itemContextMenuRequested"
QT_MOC_LITERAL(55, 747, 12), // "menuSelected"
QT_MOC_LITERAL(56, 760, 27), // "QEPlotterNames::MenuActions"
QT_MOC_LITERAL(57, 788, 6), // "action"
QT_MOC_LITERAL(58, 795, 13), // "plotMouseMove"
QT_MOC_LITERAL(59, 809, 4), // "posn"
QT_MOC_LITERAL(60, 814, 9), // "zoomInOut"
QT_MOC_LITERAL(61, 824, 5), // "about"
QT_MOC_LITERAL(62, 830, 10), // "zoomAmount"
QT_MOC_LITERAL(63, 841, 11), // "scaleSelect"
QT_MOC_LITERAL(64, 853, 6), // "origin"
QT_MOC_LITERAL(65, 860, 6), // "offset"
QT_MOC_LITERAL(66, 867, 12), // "lineSelected"
QT_MOC_LITERAL(67, 880, 10), // "markupMove"
QT_MOC_LITERAL(68, 891, 23), // "QEGraphicNames::Markups"
QT_MOC_LITERAL(69, 915, 6), // "markup"
QT_MOC_LITERAL(70, 922, 8), // "position"
QT_MOC_LITERAL(71, 931, 21), // "variableSubstitutions"
QT_MOC_LITERAL(72, 953, 17), // "enableContextMenu"
QT_MOC_LITERAL(73, 971, 14), // "toolBarVisible"
QT_MOC_LITERAL(74, 986, 14), // "pvItemsVisible"
QT_MOC_LITERAL(75, 1001, 13), // "statusVisible"
QT_MOC_LITERAL(76, 1015, 12), // "xLogarithmic"
QT_MOC_LITERAL(77, 1028, 12), // "yLogarithmic"
QT_MOC_LITERAL(78, 1041, 19), // "contextMenuEmitText"
QT_MOC_LITERAL(79, 1061, 13), // "DataVariableX"
QT_MOC_LITERAL(80, 1075, 13), // "DataVariableA"
QT_MOC_LITERAL(81, 1089, 13), // "DataVariableB"
QT_MOC_LITERAL(82, 1103, 13), // "DataVariableC"
QT_MOC_LITERAL(83, 1117, 13), // "DataVariableD"
QT_MOC_LITERAL(84, 1131, 13), // "DataVariableE"
QT_MOC_LITERAL(85, 1145, 13), // "DataVariableF"
QT_MOC_LITERAL(86, 1159, 13), // "DataVariableG"
QT_MOC_LITERAL(87, 1173, 13), // "DataVariableH"
QT_MOC_LITERAL(88, 1187, 13), // "DataVariableI"
QT_MOC_LITERAL(89, 1201, 13), // "DataVariableJ"
QT_MOC_LITERAL(90, 1215, 13), // "DataVariableK"
QT_MOC_LITERAL(91, 1229, 13), // "DataVariableL"
QT_MOC_LITERAL(92, 1243, 13), // "DataVariableM"
QT_MOC_LITERAL(93, 1257, 13), // "DataVariableN"
QT_MOC_LITERAL(94, 1271, 13), // "DataVariableO"
QT_MOC_LITERAL(95, 1285, 13), // "DataVariableP"
QT_MOC_LITERAL(96, 1299, 13), // "SizeVariableX"
QT_MOC_LITERAL(97, 1313, 13), // "SizeVariableA"
QT_MOC_LITERAL(98, 1327, 13), // "SizeVariableB"
QT_MOC_LITERAL(99, 1341, 13), // "SizeVariableC"
QT_MOC_LITERAL(100, 1355, 13), // "SizeVariableD"
QT_MOC_LITERAL(101, 1369, 13), // "SizeVariableE"
QT_MOC_LITERAL(102, 1383, 13), // "SizeVariableF"
QT_MOC_LITERAL(103, 1397, 13), // "SizeVariableG"
QT_MOC_LITERAL(104, 1411, 13), // "SizeVariableH"
QT_MOC_LITERAL(105, 1425, 13), // "SizeVariableI"
QT_MOC_LITERAL(106, 1439, 13), // "SizeVariableJ"
QT_MOC_LITERAL(107, 1453, 13), // "SizeVariableK"
QT_MOC_LITERAL(108, 1467, 13), // "SizeVariableL"
QT_MOC_LITERAL(109, 1481, 13), // "SizeVariableM"
QT_MOC_LITERAL(110, 1495, 13), // "SizeVariableN"
QT_MOC_LITERAL(111, 1509, 13), // "SizeVariableO"
QT_MOC_LITERAL(112, 1523, 13), // "SizeVariableP"
QT_MOC_LITERAL(113, 1537, 10), // "AliasNameX"
QT_MOC_LITERAL(114, 1548, 10), // "AliasNameA"
QT_MOC_LITERAL(115, 1559, 10), // "AliasNameB"
QT_MOC_LITERAL(116, 1570, 10), // "AliasNameC"
QT_MOC_LITERAL(117, 1581, 10), // "AliasNameD"
QT_MOC_LITERAL(118, 1592, 10), // "AliasNameE"
QT_MOC_LITERAL(119, 1603, 10), // "AliasNameF"
QT_MOC_LITERAL(120, 1614, 10), // "AliasNameG"
QT_MOC_LITERAL(121, 1625, 10), // "AliasNameH"
QT_MOC_LITERAL(122, 1636, 10), // "AliasNameI"
QT_MOC_LITERAL(123, 1647, 10), // "AliasNameJ"
QT_MOC_LITERAL(124, 1658, 10), // "AliasNameK"
QT_MOC_LITERAL(125, 1669, 10), // "AliasNameL"
QT_MOC_LITERAL(126, 1680, 10), // "AliasNameM"
QT_MOC_LITERAL(127, 1691, 10), // "AliasNameN"
QT_MOC_LITERAL(128, 1702, 10), // "AliasNameO"
QT_MOC_LITERAL(129, 1713, 10), // "AliasNameP"
QT_MOC_LITERAL(130, 1724, 7), // "ColourA"
QT_MOC_LITERAL(131, 1732, 7), // "ColourB"
QT_MOC_LITERAL(132, 1740, 7), // "ColourC"
QT_MOC_LITERAL(133, 1748, 7), // "ColourD"
QT_MOC_LITERAL(134, 1756, 7), // "ColourE"
QT_MOC_LITERAL(135, 1764, 7), // "ColourF"
QT_MOC_LITERAL(136, 1772, 7), // "ColourG"
QT_MOC_LITERAL(137, 1780, 7), // "ColourH"
QT_MOC_LITERAL(138, 1788, 7), // "ColourI"
QT_MOC_LITERAL(139, 1796, 7), // "ColourJ"
QT_MOC_LITERAL(140, 1804, 7), // "ColourK"
QT_MOC_LITERAL(141, 1812, 7), // "ColourL"
QT_MOC_LITERAL(142, 1820, 7), // "ColourM"
QT_MOC_LITERAL(143, 1828, 7), // "ColourN"
QT_MOC_LITERAL(144, 1836, 7), // "ColourO"
QT_MOC_LITERAL(145, 1844, 10) // "aliasNames"

    },
    "QEPlotter\0crosshairIndexChanged\0\0value\0"
    "coordinateSelected\0xyvalue\0"
    "xCoordinateSelected\0xvalue\0"
    "yCoordinateSelected\0yvalue\0"
    "pvDataNameSetChanged\0nameSet\0"
    "alaisNameSetChanged\0requestAction\0"
    "QEActionRequests\0setXYDataPV\0slot\0"
    "pvName\0setXYAlias\0alias\0setXRange\0"
    "xMinimum\0xMaximum\0setYRange\0yMinimum\0"
    "yMaximum\0setDataPvNameSet\0pvNameSet\0"
    "setAliasNameSet\0aliasNameSet\0"
    "setPlotterEntry\0setNewVariableName\0"
    "variableName\0variableNameSubstitutions\0"
    "variableIndex\0dataConnectionChanged\0"
    "QCaConnectionInfo&\0connectionInfo\0"
    "dataArrayChanged\0QVector<double>\0"
    "values\0QCaAlarmInfo&\0alarmInfo\0"
    "QCaDateTime&\0timeStamp\0sizeConnectionChanged\0"
    "sizeValueChanged\0letterButtonClicked\0"
    "checked\0checkBoxStateChanged\0state\0"
    "tickTimeout\0generalContextMenuRequested\0"
    "pos\0itemContextMenuRequested\0menuSelected\0"
    "QEPlotterNames::MenuActions\0action\0"
    "plotMouseMove\0posn\0zoomInOut\0about\0"
    "zoomAmount\0scaleSelect\0origin\0offset\0"
    "lineSelected\0markupMove\0QEGraphicNames::Markups\0"
    "markup\0position\0variableSubstitutions\0"
    "enableContextMenu\0toolBarVisible\0"
    "pvItemsVisible\0statusVisible\0xLogarithmic\0"
    "yLogarithmic\0contextMenuEmitText\0"
    "DataVariableX\0DataVariableA\0DataVariableB\0"
    "DataVariableC\0DataVariableD\0DataVariableE\0"
    "DataVariableF\0DataVariableG\0DataVariableH\0"
    "DataVariableI\0DataVariableJ\0DataVariableK\0"
    "DataVariableL\0DataVariableM\0DataVariableN\0"
    "DataVariableO\0DataVariableP\0SizeVariableX\0"
    "SizeVariableA\0SizeVariableB\0SizeVariableC\0"
    "SizeVariableD\0SizeVariableE\0SizeVariableF\0"
    "SizeVariableG\0SizeVariableH\0SizeVariableI\0"
    "SizeVariableJ\0SizeVariableK\0SizeVariableL\0"
    "SizeVariableM\0SizeVariableN\0SizeVariableO\0"
    "SizeVariableP\0AliasNameX\0AliasNameA\0"
    "AliasNameB\0AliasNameC\0AliasNameD\0"
    "AliasNameE\0AliasNameF\0AliasNameG\0"
    "AliasNameH\0AliasNameI\0AliasNameJ\0"
    "AliasNameK\0AliasNameL\0AliasNameM\0"
    "AliasNameN\0AliasNameO\0AliasNameP\0"
    "ColourA\0ColourB\0ColourC\0ColourD\0ColourE\0"
    "ColourF\0ColourG\0ColourH\0ColourI\0ColourJ\0"
    "ColourK\0ColourL\0ColourM\0ColourN\0ColourO\0"
    "aliasNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEPlotter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
      75,  294, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  164,    2, 0x06 /* Public */,
       4,    1,  167,    2, 0x06 /* Public */,
       6,    1,  170,    2, 0x06 /* Public */,
       8,    1,  173,    2, 0x06 /* Public */,
      10,    1,  176,    2, 0x06 /* Public */,
      12,    1,  179,    2, 0x06 /* Public */,
      13,    1,  182,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,  185,    2, 0x0a /* Public */,
      18,    2,  190,    2, 0x0a /* Public */,
      20,    2,  195,    2, 0x0a /* Public */,
      23,    2,  200,    2, 0x0a /* Public */,
      26,    1,  205,    2, 0x0a /* Public */,
      28,    1,  208,    2, 0x0a /* Public */,
      30,    3,  211,    2, 0x0a /* Public */,
      31,    3,  218,    2, 0x08 /* Private */,
      35,    2,  225,    2, 0x08 /* Private */,
      38,    4,  230,    2, 0x08 /* Private */,
      45,    2,  239,    2, 0x08 /* Private */,
      46,    4,  244,    2, 0x08 /* Private */,
      47,    1,  253,    2, 0x08 /* Private */,
      49,    1,  256,    2, 0x08 /* Private */,
      51,    0,  259,    2, 0x08 /* Private */,
      52,    1,  260,    2, 0x08 /* Private */,
      54,    1,  263,    2, 0x08 /* Private */,
      55,    2,  266,    2, 0x08 /* Private */,
      58,    1,  271,    2, 0x08 /* Private */,
      60,    2,  274,    2, 0x08 /* Private */,
      63,    2,  279,    2, 0x08 /* Private */,
      66,    2,  284,    2, 0x08 /* Private */,
      67,    2,  289,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QPointF,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, 0x80000000 | 14,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   19,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   21,   22,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   24,   25,
    QMetaType::Void, QMetaType::QStringList,   27,
    QMetaType::Void, QMetaType::QStringList,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,   16,   17,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   32,   33,   34,
    QMetaType::Void, 0x80000000 | 36, QMetaType::UInt,   37,   34,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 41, 0x80000000 | 43, QMetaType::UInt,   40,   42,   44,   34,
    QMetaType::Void, 0x80000000 | 36, QMetaType::UInt,   37,   34,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 41, 0x80000000 | 43, QMetaType::UInt,    3,   42,   44,   34,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   53,
    QMetaType::Void, QMetaType::QPoint,   53,
    QMetaType::Void, 0x80000000 | 56, QMetaType::Int,   57,   16,
    QMetaType::Void, QMetaType::QPointF,   59,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,   61,   62,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,   64,   65,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,   64,   65,
    QMetaType::Void, 0x80000000 | 68, QMetaType::QPointF,   69,   70,

 // properties: name, type, flags
      71, QMetaType::QString, 0x00095103,
      72, QMetaType::Bool, 0x00095003,
      73, QMetaType::Bool, 0x00095103,
      74, QMetaType::Bool, 0x00095103,
      75, QMetaType::Bool, 0x00095103,
      76, QMetaType::Bool, 0x00095103,
      77, QMetaType::Bool, 0x00095103,
      78, QMetaType::QString, 0x00095003,
      79, QMetaType::QString, 0x00095003,
      80, QMetaType::QString, 0x00095003,
      81, QMetaType::QString, 0x00095003,
      82, QMetaType::QString, 0x00095003,
      83, QMetaType::QString, 0x00095003,
      84, QMetaType::QString, 0x00095003,
      85, QMetaType::QString, 0x00095003,
      86, QMetaType::QString, 0x00095003,
      87, QMetaType::QString, 0x00095003,
      88, QMetaType::QString, 0x00095003,
      89, QMetaType::QString, 0x00095003,
      90, QMetaType::QString, 0x00095003,
      91, QMetaType::QString, 0x00095003,
      92, QMetaType::QString, 0x00095003,
      93, QMetaType::QString, 0x00095003,
      94, QMetaType::QString, 0x00095003,
      95, QMetaType::QString, 0x00095003,
      96, QMetaType::QString, 0x00095003,
      97, QMetaType::QString, 0x00095003,
      98, QMetaType::QString, 0x00095003,
      99, QMetaType::QString, 0x00095003,
     100, QMetaType::QString, 0x00095003,
     101, QMetaType::QString, 0x00095003,
     102, QMetaType::QString, 0x00095003,
     103, QMetaType::QString, 0x00095003,
     104, QMetaType::QString, 0x00095003,
     105, QMetaType::QString, 0x00095003,
     106, QMetaType::QString, 0x00095003,
     107, QMetaType::QString, 0x00095003,
     108, QMetaType::QString, 0x00095003,
     109, QMetaType::QString, 0x00095003,
     110, QMetaType::QString, 0x00095003,
     111, QMetaType::QString, 0x00095003,
     112, QMetaType::QString, 0x00095003,
     113, QMetaType::QString, 0x00095003,
     114, QMetaType::QString, 0x00095003,
     115, QMetaType::QString, 0x00095003,
     116, QMetaType::QString, 0x00095003,
     117, QMetaType::QString, 0x00095003,
     118, QMetaType::QString, 0x00095003,
     119, QMetaType::QString, 0x00095003,
     120, QMetaType::QString, 0x00095003,
     121, QMetaType::QString, 0x00095003,
     122, QMetaType::QString, 0x00095003,
     123, QMetaType::QString, 0x00095003,
     124, QMetaType::QString, 0x00095003,
     125, QMetaType::QString, 0x00095003,
     126, QMetaType::QString, 0x00095003,
     127, QMetaType::QString, 0x00095003,
     128, QMetaType::QString, 0x00095003,
     129, QMetaType::QString, 0x00095003,
     130, QMetaType::QColor, 0x00095103,
     131, QMetaType::QColor, 0x00095103,
     132, QMetaType::QColor, 0x00095103,
     133, QMetaType::QColor, 0x00095103,
     134, QMetaType::QColor, 0x00095103,
     135, QMetaType::QColor, 0x00095103,
     136, QMetaType::QColor, 0x00095103,
     137, QMetaType::QColor, 0x00095103,
     138, QMetaType::QColor, 0x00095103,
     139, QMetaType::QColor, 0x00095103,
     140, QMetaType::QColor, 0x00095103,
     141, QMetaType::QColor, 0x00095103,
     142, QMetaType::QColor, 0x00095103,
     143, QMetaType::QColor, 0x00095103,
     144, QMetaType::QColor, 0x00095103,
     145, QMetaType::QStringList, 0x00095003,

       0        // eod
};

void QEPlotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QEPlotter *_t = static_cast<QEPlotter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->crosshairIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->coordinateSelected((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 2: _t->xCoordinateSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->yCoordinateSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->pvDataNameSetChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->alaisNameSetChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->requestAction((*reinterpret_cast< const QEActionRequests(*)>(_a[1]))); break;
        case 7: _t->setXYDataPV((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->setXYAlias((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->setXRange((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 10: _t->setYRange((*reinterpret_cast< const double(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 11: _t->setDataPvNameSet((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 12: _t->setAliasNameSet((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 13: _t->setPlotterEntry((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->setNewVariableName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 15: _t->dataConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 16: _t->dataArrayChanged((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 17: _t->sizeConnectionChanged((*reinterpret_cast< QCaConnectionInfo(*)>(_a[1])),(*reinterpret_cast< const uint(*)>(_a[2]))); break;
        case 18: _t->sizeValueChanged((*reinterpret_cast< const long(*)>(_a[1])),(*reinterpret_cast< QCaAlarmInfo(*)>(_a[2])),(*reinterpret_cast< QCaDateTime(*)>(_a[3])),(*reinterpret_cast< const uint(*)>(_a[4]))); break;
        case 19: _t->letterButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->checkBoxStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->tickTimeout(); break;
        case 22: _t->generalContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 23: _t->itemContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 24: _t->menuSelected((*reinterpret_cast< const QEPlotterNames::MenuActions(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 25: _t->plotMouseMove((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 26: _t->zoomInOut((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 27: _t->scaleSelect((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 28: _t->lineSelected((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 29: _t->markupMove((*reinterpret_cast< const QEGraphicNames::Markups(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QEActionRequests >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QEPlotter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotter::crosshairIndexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QEPlotter::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotter::coordinateSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QEPlotter::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotter::xCoordinateSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QEPlotter::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotter::yCoordinateSelected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QEPlotter::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotter::pvDataNameSetChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QEPlotter::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotter::alaisNameSetChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QEPlotter::*_t)(const QEActionRequests & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QEPlotter::requestAction)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QEPlotter *_t = static_cast<QEPlotter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVariableSubstitutions(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getEnableConextMenu(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getToolBarVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getPvItemsVisible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getStatusVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getXLogarithmic(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getYLogarithmic(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getMenuEmitText(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getDataPVX(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getDataPVA(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getDataPVB(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->getDataPVC(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getDataPVD(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->getDataPVE(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getDataPVF(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->getDataPVG(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->getDataPVH(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getDataPVI(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getDataPVJ(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getDataPVK(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->getDataPVL(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->getDataPVM(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->getDataPVN(); break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->getDataPVO(); break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->getDataPVP(); break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->getSizePVX(); break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->getSizePVA(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->getSizePVB(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->getSizePVC(); break;
        case 29: *reinterpret_cast< QString*>(_v) = _t->getSizePVD(); break;
        case 30: *reinterpret_cast< QString*>(_v) = _t->getSizePVE(); break;
        case 31: *reinterpret_cast< QString*>(_v) = _t->getSizePVF(); break;
        case 32: *reinterpret_cast< QString*>(_v) = _t->getSizePVG(); break;
        case 33: *reinterpret_cast< QString*>(_v) = _t->getSizePVH(); break;
        case 34: *reinterpret_cast< QString*>(_v) = _t->getSizePVI(); break;
        case 35: *reinterpret_cast< QString*>(_v) = _t->getSizePVJ(); break;
        case 36: *reinterpret_cast< QString*>(_v) = _t->getSizePVK(); break;
        case 37: *reinterpret_cast< QString*>(_v) = _t->getSizePVL(); break;
        case 38: *reinterpret_cast< QString*>(_v) = _t->getSizePVM(); break;
        case 39: *reinterpret_cast< QString*>(_v) = _t->getSizePVN(); break;
        case 40: *reinterpret_cast< QString*>(_v) = _t->getSizePVO(); break;
        case 41: *reinterpret_cast< QString*>(_v) = _t->getSizePVP(); break;
        case 42: *reinterpret_cast< QString*>(_v) = _t->getAliasX(); break;
        case 43: *reinterpret_cast< QString*>(_v) = _t->getAliasA(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->getAliasB(); break;
        case 45: *reinterpret_cast< QString*>(_v) = _t->getAliasC(); break;
        case 46: *reinterpret_cast< QString*>(_v) = _t->getAliasD(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->getAliasE(); break;
        case 48: *reinterpret_cast< QString*>(_v) = _t->getAliasF(); break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->getAliasG(); break;
        case 50: *reinterpret_cast< QString*>(_v) = _t->getAliasH(); break;
        case 51: *reinterpret_cast< QString*>(_v) = _t->getAliasI(); break;
        case 52: *reinterpret_cast< QString*>(_v) = _t->getAliasJ(); break;
        case 53: *reinterpret_cast< QString*>(_v) = _t->getAliasK(); break;
        case 54: *reinterpret_cast< QString*>(_v) = _t->getAliasL(); break;
        case 55: *reinterpret_cast< QString*>(_v) = _t->getAliasM(); break;
        case 56: *reinterpret_cast< QString*>(_v) = _t->getAliasN(); break;
        case 57: *reinterpret_cast< QString*>(_v) = _t->getAliasO(); break;
        case 58: *reinterpret_cast< QString*>(_v) = _t->getAliasP(); break;
        case 59: *reinterpret_cast< QColor*>(_v) = _t->getColourA(); break;
        case 60: *reinterpret_cast< QColor*>(_v) = _t->getColourB(); break;
        case 61: *reinterpret_cast< QColor*>(_v) = _t->getColourC(); break;
        case 62: *reinterpret_cast< QColor*>(_v) = _t->getColourD(); break;
        case 63: *reinterpret_cast< QColor*>(_v) = _t->getColourE(); break;
        case 64: *reinterpret_cast< QColor*>(_v) = _t->getColourF(); break;
        case 65: *reinterpret_cast< QColor*>(_v) = _t->getColourG(); break;
        case 66: *reinterpret_cast< QColor*>(_v) = _t->getColourH(); break;
        case 67: *reinterpret_cast< QColor*>(_v) = _t->getColourI(); break;
        case 68: *reinterpret_cast< QColor*>(_v) = _t->getColourJ(); break;
        case 69: *reinterpret_cast< QColor*>(_v) = _t->getColourK(); break;
        case 70: *reinterpret_cast< QColor*>(_v) = _t->getColourL(); break;
        case 71: *reinterpret_cast< QColor*>(_v) = _t->getColourM(); break;
        case 72: *reinterpret_cast< QColor*>(_v) = _t->getColourN(); break;
        case 73: *reinterpret_cast< QColor*>(_v) = _t->getColourO(); break;
        case 74: *reinterpret_cast< QStringList*>(_v) = _t->getAliasNameSet(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QEPlotter *_t = static_cast<QEPlotter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVariableSubstitutions(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setEnableConextMenu(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setToolBarVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPvItemsVisible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setStatusVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setXLogarithmic(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setYLogarithmic(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setMenuEmitText(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setDataPVX(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setDataPVA(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setDataPVB(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setDataPVC(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setDataPVD(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setDataPVE(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setDataPVF(*reinterpret_cast< QString*>(_v)); break;
        case 15: _t->setDataPVG(*reinterpret_cast< QString*>(_v)); break;
        case 16: _t->setDataPVH(*reinterpret_cast< QString*>(_v)); break;
        case 17: _t->setDataPVI(*reinterpret_cast< QString*>(_v)); break;
        case 18: _t->setDataPVJ(*reinterpret_cast< QString*>(_v)); break;
        case 19: _t->setDataPVK(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setDataPVL(*reinterpret_cast< QString*>(_v)); break;
        case 21: _t->setDataPVM(*reinterpret_cast< QString*>(_v)); break;
        case 22: _t->setDataPVN(*reinterpret_cast< QString*>(_v)); break;
        case 23: _t->setDataPVO(*reinterpret_cast< QString*>(_v)); break;
        case 24: _t->setDataPVP(*reinterpret_cast< QString*>(_v)); break;
        case 25: _t->setSizePVX(*reinterpret_cast< QString*>(_v)); break;
        case 26: _t->setSizePVA(*reinterpret_cast< QString*>(_v)); break;
        case 27: _t->setSizePVB(*reinterpret_cast< QString*>(_v)); break;
        case 28: _t->setSizePVC(*reinterpret_cast< QString*>(_v)); break;
        case 29: _t->setSizePVD(*reinterpret_cast< QString*>(_v)); break;
        case 30: _t->setSizePVE(*reinterpret_cast< QString*>(_v)); break;
        case 31: _t->setSizePVF(*reinterpret_cast< QString*>(_v)); break;
        case 32: _t->setSizePVG(*reinterpret_cast< QString*>(_v)); break;
        case 33: _t->setSizePVH(*reinterpret_cast< QString*>(_v)); break;
        case 34: _t->setSizePVI(*reinterpret_cast< QString*>(_v)); break;
        case 35: _t->setSizePVJ(*reinterpret_cast< QString*>(_v)); break;
        case 36: _t->setSizePVK(*reinterpret_cast< QString*>(_v)); break;
        case 37: _t->setSizePVL(*reinterpret_cast< QString*>(_v)); break;
        case 38: _t->setSizePVM(*reinterpret_cast< QString*>(_v)); break;
        case 39: _t->setSizePVN(*reinterpret_cast< QString*>(_v)); break;
        case 40: _t->setSizePVO(*reinterpret_cast< QString*>(_v)); break;
        case 41: _t->setSizePVP(*reinterpret_cast< QString*>(_v)); break;
        case 42: _t->setAliasX(*reinterpret_cast< QString*>(_v)); break;
        case 43: _t->setAliasA(*reinterpret_cast< QString*>(_v)); break;
        case 44: _t->setAliasB(*reinterpret_cast< QString*>(_v)); break;
        case 45: _t->setAliasC(*reinterpret_cast< QString*>(_v)); break;
        case 46: _t->setAliasD(*reinterpret_cast< QString*>(_v)); break;
        case 47: _t->setAliasE(*reinterpret_cast< QString*>(_v)); break;
        case 48: _t->setAliasF(*reinterpret_cast< QString*>(_v)); break;
        case 49: _t->setAliasG(*reinterpret_cast< QString*>(_v)); break;
        case 50: _t->setAliasH(*reinterpret_cast< QString*>(_v)); break;
        case 51: _t->setAliasI(*reinterpret_cast< QString*>(_v)); break;
        case 52: _t->setAliasJ(*reinterpret_cast< QString*>(_v)); break;
        case 53: _t->setAliasK(*reinterpret_cast< QString*>(_v)); break;
        case 54: _t->setAliasL(*reinterpret_cast< QString*>(_v)); break;
        case 55: _t->setAliasM(*reinterpret_cast< QString*>(_v)); break;
        case 56: _t->setAliasN(*reinterpret_cast< QString*>(_v)); break;
        case 57: _t->setAliasO(*reinterpret_cast< QString*>(_v)); break;
        case 58: _t->setAliasP(*reinterpret_cast< QString*>(_v)); break;
        case 59: _t->setColourA(*reinterpret_cast< QColor*>(_v)); break;
        case 60: _t->setColourB(*reinterpret_cast< QColor*>(_v)); break;
        case 61: _t->setColourC(*reinterpret_cast< QColor*>(_v)); break;
        case 62: _t->setColourD(*reinterpret_cast< QColor*>(_v)); break;
        case 63: _t->setColourE(*reinterpret_cast< QColor*>(_v)); break;
        case 64: _t->setColourF(*reinterpret_cast< QColor*>(_v)); break;
        case 65: _t->setColourG(*reinterpret_cast< QColor*>(_v)); break;
        case 66: _t->setColourH(*reinterpret_cast< QColor*>(_v)); break;
        case 67: _t->setColourI(*reinterpret_cast< QColor*>(_v)); break;
        case 68: _t->setColourJ(*reinterpret_cast< QColor*>(_v)); break;
        case 69: _t->setColourK(*reinterpret_cast< QColor*>(_v)); break;
        case 70: _t->setColourL(*reinterpret_cast< QColor*>(_v)); break;
        case 71: _t->setColourM(*reinterpret_cast< QColor*>(_v)); break;
        case 72: _t->setColourN(*reinterpret_cast< QColor*>(_v)); break;
        case 73: _t->setColourO(*reinterpret_cast< QColor*>(_v)); break;
        case 74: _t->setAliasNameSet(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QEPlotter::staticMetaObject = {
    { &QEFrame::staticMetaObject, qt_meta_stringdata_QEPlotter.data,
      qt_meta_data_QEPlotter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QEPlotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QEPlotter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QEPlotter.stringdata0))
        return static_cast<void*>(const_cast< QEPlotter*>(this));
    return QEFrame::qt_metacast(_clname);
}

int QEPlotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QEFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 75;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 75;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 75;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 75;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 75;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QEPlotter::crosshairIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QEPlotter::coordinateSelected(QPointF _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QEPlotter::xCoordinateSelected(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QEPlotter::yCoordinateSelected(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QEPlotter::pvDataNameSetChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QEPlotter::alaisNameSetChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QEPlotter::requestAction(const QEActionRequests & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

/*  QEArchiverInterfaceJSON.h
 *
 *  This file is part of the EPICS QT Framework, initially developed at the
 *  Australian Synchrotron.
 *
 *  The EPICS QT Framework is free software: you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  The EPICS QT Framework is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with the EPICS QT Framework.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Copyright (c) 2012, 2013 Australian Synchrotron
 *
 *  Author:
 *    Andrew Starritt
 *  Contact details:
 *    andrew.starritt@synchrotron.org.au
 *  Modified for JSON for CLARA by RFC
 *
 */

#ifndef QARCHIVE_INTERFACE_H
#define QARCHIVE_INTERFACE_H

#include <QObject>
#include <QString>
#include <QDateTime>
#include <QVector>
#include <QList>
#include <QStringList>
#include <QUrl>

#include <QCaDataPoint.h>
#include <QCaDateTime.h>
#include <QCaAlarmInfo.h>

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QWebSettings>
#include <QVariant>
#include <QJsonValue>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>
#include <QJsonArray>



/*
 *  This class provides a thin wrapper around the QJson class specifically
 *  for handling the EPICS Archiver tool procedure calls.
 */
class QEArchiveInterfaceJSON : public QObject {
   Q_OBJECT

public:
   // Extends the EPICS alarm severity with archive specials
   //
   enum archiveAlarmSeverity {
       // From Epics base alarm.h
       archSevNone       = 0,
       archSevMinor      = 1,
       archSevMajor      = 2,
       archSevInvalid    = 3,
       // From RawValue.h (arch-2.9.2)
       archSevEstRepeat  = 0x0f80,
       archSevDisconnect = 0x0f40,
       archSevStopped    = 0x0f20,    // aka Archive_Off
       archSevRepeat     = 0x0f10,
       archSevDisabled   = 0x0f08
   };

   static QString alarmSeverityName (enum archiveAlarmSeverity severity);

   enum How {
      Raw = 0,
      SpreadSheet,
      Averaged,
      PlotBinning,
      Linear
   };

   // Available archives for given host/port/end_point - key is most important.
   //
   struct Archive {
      int key;
      QString name;
      QString path;
   };

   // Available PV names (matching regular expression pattern) for
   // a given archive together with firts/last available times.
   //
   struct PVName {
      QString pvName;
      QCaDateTime startTime;
      QCaDateTime endTime;
   };

   // Returned values for a single channel.
   //
   struct ResponseValues {
      // meta data
      QString pvName;
      double displayLow;
      double displayHigh;
      int precision;
      QString units;
      unsigned int elementCount;  // number of elements per the channel value.
      // plus actual data
      QCaDataPointList dataPoints;
   };

   // Essentially private - needs to be public for meta data type declaration.
   //
   enum Methods {
      Information,
      Archives,
      Names,
      Values
   };

   struct Context {
      QEArchiveInterfaceJSON::Methods method;
      QObject *userData;
      unsigned int requested_element;
   };

   typedef QList <QEArchiveInterfaceJSON::Archive> ArchiveList;
   typedef QList<QEArchiveInterfaceJSON::PVName> PVNameList;
   typedef QList<QEArchiveInterfaceJSON::ResponseValues> ResponseValueList;


   //---------------------------------------------------------------------------
   //
   explicit QEArchiveInterfaceJSON (QUrl url, QObject* parent = 0);
   virtual ~QEArchiveInterfaceJSON ();

   void setUrl (QUrl url);
   QUrl getUrl ();

   // Returns string image of the url
   //
   QString getName ();

   // Each of the xxxxRequest functions result in a xxxxResponse signal
   // being emitted. In each case the given userData is not used by the
   // QEArchiveInterface class per se other it is returned in the signal
   // to provide the caller with signal context.
   //
   void infoRequest (QObject* userData);

   void archivesRequest (QObject* userData);

   void namesRequest (QObject* userData, const int key, QString pattern = ".*");

   /* The requested_element parameter specfies the (waveform) array element required.
    * This parameter applies to all the PVs requested. If different array elements
    * are needed for different PVs the separate calls to valuesRequest are required.
    * Note: element numbers start from 0. The default default value of 0 is suitable
    * for scalar PVs.
    */
   void valuesRequest (QObject* userData,
                       const int key,
                       const QCaDateTime startTime,
                       const QCaDateTime endTime,
                       const int count, 
                       const How how,
                       const QStringList pvNames,
                       const unsigned int requested_element = 0);

   // House keeping.
   //
   static void registerMetaTypes ();

signals:
   // The QObject* (1st) parameter is the userData supplied to the corresponding
   // xxxRequest functions.
   //
   // The boolean (2nd) parameter is a wasSuccessfull parameter, i.e. when true
   // this indicates a successfull response, and when false indicates a fault
   // condition. For the later case, the actual value parameters are undefined.
   //
   void infoResponse     (const QObject*, const bool, const int, const QString&);
   void archivesResponse (const QObject*, const bool, const QEArchiveInterfaceJSON::ArchiveList&);
   void pvNamesResponse  (const QObject*, const bool, const QEArchiveInterfaceJSON::PVNameList&);
   void valuesResponse   (const QObject*, const bool, const QEArchiveInterfaceJSON::ResponseValueList&);

private:


   typedef QMap<QString, QVariant> StringToVariantMaps;

   enum MetaType {
      mtEnumeration = 0,
      mtNumeric = 1
   };

   enum DataType {
      dtString = 0,
      dtEnumeration = 1,
      dtInteger = 2,
      dtDouble = 3
   };

   QUrl mUrl;


   static QCaDateTime convertArchiveToEpics (const int seconds, const int nanoSecs);
   static void convertEpicsToArchive (const QCaDateTime& datetime, int& seconds, int& nanoSecs);

   void processInfo     (const QObject* userData, const QVariant& response);
   void processArchives (const QObject* userData, const QVariant& response);
   void processPvNames  (const QObject* userData, const QVariant& response);
   void processValues   (const QObject* userData, const QVariant& response, const unsigned int requested_element);

   void processOnePoint (const DataType dtype,
                         const StringToVariantMaps& value,
                         const unsigned int requested_element,
                         QCaDataPoint & datum);

   void processOnePV (const StringToVariantMaps& map,
                      const unsigned int requested_element,
                      struct ResponseValues& item);


Q_DECLARE_METATYPE (QEArchiveInterfaceJSON::ArchiveList)
Q_DECLARE_METATYPE (QEArchiveInterfaceJSON::PVNameList)
Q_DECLARE_METATYPE (QEArchiveInterfaceJSON::ResponseValueList)
Q_DECLARE_METATYPE (QEArchiveInterfaceJSON::Context)


#endif // QARCHIVE_INTERFACE_H

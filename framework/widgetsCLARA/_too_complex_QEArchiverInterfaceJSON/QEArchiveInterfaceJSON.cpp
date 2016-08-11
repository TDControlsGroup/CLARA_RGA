/*  QArchiveInterface.cpp
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
 *  Copyright (c) 2012 Australian Synchrotron
 *
 *  Author:
 *    Andrew Starritt
 *  Contact details:
 *    andrew.starritt@synchrotron.org.au
 */

#include <QDebug>
#include <QtCore>

#include <QVariantList>

#include <alarm.h>

#include "QEArchiveInterfaceJSON.h"

#define DEBUG qDebug () << "QEArchiveInterfaceJSON:" << __FUNCTION__  << ":" << __LINE__


//------------------------------------------------------------------------------
//
QEArchiveInterfaceJSON::QEArchiveInterfaceJSON (QUrl url, QObject *parent) : QObject (parent)
{
   QSslConfiguration config;

   this->registerMetaTypes ();

   // the maia client does not have a getUrl function - we need to cache value.
   this->mUrl = url;

}

//------------------------------------------------------------------------------
//
QEArchiveInterfaceJSON::~QEArchiveInterfaceJSON ()
{
   // this->client owned by this so should be automatically deleted.
}

//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::registerMetaTypes ()
{
   qRegisterMetaType<QEArchiveInterfaceJSON::ArchiveList> ("QEArchiveInterfaceJSON::ArchiveList");
   qRegisterMetaType<QEArchiveInterfaceJSON::PVNameList> ("QEArchiveInterfaceJSON::PVNameList");
   qRegisterMetaType<QEArchiveInterfaceJSON::ResponseValueList> ("QEArchiveInterfaceJSON::ResponseValueList");
   qRegisterMetaType<QEArchiveInterfaceJSON::Context> ("QEArchiveInterfaceJSON::Context");
}


//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::setUrl (QUrl url)
{
   this->mUrl = url;

}

//------------------------------------------------------------------------------
//
QUrl QEArchiveInterfaceJSON::getUrl ()
{
   return this->mUrl;
}

//------------------------------------------------------------------------------
//
QString QEArchiveInterfaceJSON::getName ()
{
   return this->getUrl ().toString ();
}

//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::infoRequest (QObject *userData)
{

}


//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::archivesRequest (QObject *userData)
{
   QEArchiveInterfaceJSONAgent *agent;
   Context context;
   QVariantList args;

   // Set up context
   //
   context.method = Archives;
   context.userData = userData;
   context.requested_element = 0;

   agent = new QEArchiveInterfaceJSONAgent (this->client, this);

   // no arguments per se.
   //
   agent->call (context, "archiver.archives", args);
}


//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::namesRequest (QObject *userData, const int key, QString pattern)
{
   QEArchiveInterfaceJSONAgent *agent;
   Context context;
   QVariantList args;

   // Set up context
   //
   context.method = Names;
   context.userData = userData;
   context.requested_element = 0;

   agent = new QEArchiveInterfaceJSONAgent (this->client, this);

   // setup arguments
   //
   args.append (QVariant (key));
   args.append (QVariant (pattern));

   agent->call (context, "archiver.names", args);
}

//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::valuesRequest (QObject *userData,
                                         const int key,
                                         const QCaDateTime startTime,
                                         const QCaDateTime endTime,
                                         const int count,
                                         const How how,
                                         const QStringList pvNames,
                                         const unsigned int requested_element)
{
   QEArchiveInterfaceJSONAgent *agent;
   Context context;
   QVariantList args;
   QVariantList list;
   int j;
   int seconds;
   int nanoSecs;

   // Set up context
   //
   context.method = Values;
   context.userData = userData;
   context.requested_element = requested_element;

   agent = new QEArchiveInterfaceJSONAgent (this->client, this);

   args.append (QVariant (key));

   // Convert list of QStrings to a list of QVariants that hold QString values.
   //
   for (j = 0; j < pvNames.count (); j++) {
      list.append (pvNames.value (j));
   }
   args.append (QVariant (list));

   this->convertEpicsToArchive (startTime, seconds, nanoSecs);
   args.append (QVariant (seconds));
   args.append (QVariant (nanoSecs));

   this->convertEpicsToArchive (endTime, seconds, nanoSecs);
   args.append (QVariant (seconds));
   args.append (QVariant (nanoSecs));

   args.append (QVariant (count));
   args.append (QVariant ((int) how));

   agent->call (context, "archiver.values", args);
}

//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::processInfo (const QObject *userData, const QVariant & response)
{
   StringToVariantMaps map;
   QString description;
   int version;
   bool okay;

   if (response.type () != QVariant::Map) {
      DEBUG << "response not a map";
      return;
   }

   map = response.toMap ();

   description = map ["desc"].toString ();
   version = map ["ver"].toInt (&okay);

   if (okay == false) {
      DEBUG << "version not an integer";
      return;
   }

   qDebug () << "\n version" << version << "\n descrption" << description << "\n";

   emit this->infoResponse (userData, true, version, description);
}

//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::processArchives (const QObject *userData, const QVariant & response)
{
   ArchiveList PvArchives;
   QVariantList list;
   QVariant element;
   StringToVariantMaps map;
   int j;
   bool okay;
   struct Archive item;

   if (response.type () != QVariant::List) {
      DEBUG << "response not a list";
      return;
   }

   list = response.toList ();
   for (j = 0; j < list.count (); j++) {
      element = list.value (j);
      if (element.type () == QVariant::Map) {
         map = element.toMap ();

         item.key  = map ["key"].toInt (&okay);
         item.name = map ["name"].toString ();
         item.path = map ["path"].toString ();
         PvArchives.append (item);

      } else {
         DEBUG << "element [" << j << "] is not a map";
      }
   }

   emit this->archivesResponse (userData, true, PvArchives);
}


//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::processPvNames  (const QObject *userData, const QVariant & response)
{
   PVNameList PvNames;
   QVariantList list;
   QVariant element;
   StringToVariantMaps map;
   int j;
   bool okay;
   int seconds;
   int nanoSecs;
   QDateTime time;
   struct PVName item;

   if (response.type () != QVariant::List) {
      DEBUG << "response not a list";
      return;
   }

   list = response.toList ();
   for (j = 0; j < list.count (); j++) {
      element = list.value (j);
      if (element.type () == QVariant::Map) {
         map = element.toMap ();

         item.pvName = map ["name"].toString ();

         seconds = map ["start_sec"].toInt (&okay);
         nanoSecs = map ["start_nano"].toInt (&okay);
         item.startTime = this->convertArchiveToEpics (seconds, nanoSecs);

         seconds = map ["end_sec"].toInt (&okay);
         nanoSecs = map ["end_nano"].toInt (&okay);
         item.endTime = this->convertArchiveToEpics (seconds, nanoSecs);

//       qDebug () << j << item.pvName  << item.startTime.text() << item.endTime.text();
         PvNames.append (item);

      } else {
         DEBUG << "element [" << j << "] is not a map";
      }
   }

   emit this->pvNamesResponse (userData, true, PvNames);
}


//------------------------------------------------------------------------------
//
void  QEArchiveInterfaceJSON::processOnePoint (const DataType dtype,
                                           const StringToVariantMaps& value,
                                           const unsigned int requested_element,
                                           QCaDataPoint & datum)
{
   bool okay;
   int seconds;
   int nanoSecs;
   unsigned short status;
   unsigned short severity;
   QVariantList array_list;
   unsigned int n;

   seconds = value ["secs"].toInt (&okay);
   nanoSecs = value ["nano"].toInt (&okay);
   datum.datetime = this->convertArchiveToEpics (seconds, nanoSecs);

   status = value ["stat"].toInt (&okay);
   severity = value ["sevr"].toInt (&okay);
   datum.alarm = QCaAlarmInfo (status, severity);

   array_list = value ["value"].toList ();
   n = array_list.count ();

   if (requested_element < n) {

      QVariant array_item = array_list.value(requested_element);

      switch (dtype) {
      case dtEnumeration:
      case dtInteger:
         datum.value = array_item.toInt (&okay);
         break;

      case dtDouble:
         datum.value = array_item.toDouble (&okay);
         break;

      case dtString:
      default:
         datum.value = 0.0;
         break;
      }
   } else {
      // Set points as invalid.
      //
      datum.alarm = QCaAlarmInfo (epicsAlarmSoft, epicsSevInvalid);
   }
}


//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::processOnePV (const StringToVariantMaps& map,
                                       const unsigned int requested_element,
                                       struct ResponseValues& item)
{

  StringToVariantMaps meta;
   bool okay;
   enum MetaType mtype;
   enum DataType dtype;
   QVariantList values_list;
   int count;
   int v;

   item.pvName = map ["name"].toString ();

   meta = map ["meta"].toMap ();
   mtype = (enum MetaType)  meta ["type"].toInt (&okay);

   // The meta data values available depends of the type.
   //
   switch (mtype) {
   case mtEnumeration:
      item.displayLow  = 0.0;
      item.displayHigh = meta ["states"].toList ().count () - 1;
      item.precision   = 0;
      item.units       = "";
   break;

   case mtNumeric:
      item.displayLow  = meta ["disp_low"].toDouble (&okay);
      item.displayHigh = meta ["disp_high"].toDouble (&okay);
      item.precision   = meta ["prec"].toInt (&okay);
      item.units       = meta ["units"].toString ();
      break;

   default:
      item.displayLow  = 0.0;
      item.displayHigh = 1.0;
      item.precision   = 0;
      item.units       = "";
      break;
   }

   item.elementCount =  map ["count"].toInt (&okay);
   dtype = (enum DataType) map ["type"].toInt (&okay);
   values_list = map ["values"].toList ();

   count = values_list.count ();
   for (v = 0; v < count; v++) {
      // No checking here - just go for it.
      //
      StringToVariantMaps value = values_list.value (v).toMap ();
      QCaDataPoint datum;

      this->processOnePoint (dtype, value, requested_element, datum);
      item.dataPoints.append (datum);
      // qDebug () << v << datum.value;
   }
}


//------------------------------------------------------------------------------
//
void QEArchiveInterfaceJSON::processValues (const QObject* userData,
                                        const QVariant& response,
                                        const unsigned int requested_element)
{
   ResponseValueList PvValues;
   QVariantList list;
   QVariant element;
   int j;

   if (response.type () != QVariant::List) {
      DEBUG << "response not a list";
      return;
   }

   list = response.toList ();
   for (j = 0; j < list.count (); j++) {
      element = list.value (j);
      if (element.type () == QVariant::Map) {

         StringToVariantMaps map = element.toMap ();
         struct ResponseValues item;

         this->processOnePV (map, requested_element, item);

         PvValues.append (item);

      } else {
         DEBUG << "element [" << j << "] is not a map";
      }
   }

   emit this->valuesResponse (userData, true, PvValues);
}


//------------------------------------------------------------------------------
//
QString QEArchiveInterfaceJSON::alarmSeverityName (enum archiveAlarmSeverity severity)
{
   QString result;

   switch (severity) {
   case archSevNone:
   case archSevMinor:
   case archSevMajor:
   case archSevInvalid:
      // use standard epics severity string
      result = QString (epicsAlarmSeverityStrings [severity]);
      break;

   case archSevEstRepeat:
      result.append ("Est_Repeat");
      break;

   case archSevDisconnect:
      result.append ("Disconnect");
      break;

   case archSevStopped:
      result.append ("Stopped");
      break;

   case archSevRepeat:
      result.append ("Repeat");
      break;

   case archSevDisabled:
      result.append ("Disabled");
      break;

   default:
      result.sprintf ("Archive Invalid Sevrity (%d)", (int) severity);
      break;
   }
   return result;
}

//------------------------------------------------------------------------------
// Similar to EPICS times - Archive times are specified as a number of seconds
// and nano seconds from an Epoch data time (1/1/1970). This happens to be the
// epoch used by Qt but we don't make use of that assumption.
//
static const QDateTime archiveEpoch (QDate (1970, 1, 1), QTime (0, 0, 0, 0), Qt::UTC);
static const QDateTime epicsEpoch   (QDate (1990, 1, 1), QTime (0, 0, 0, 0), Qt::UTC);

// Static count of the number of seconds between the archiver and epics epochs.
//
static unsigned long e2aOffset = archiveEpoch.secsTo (epicsEpoch);


//------------------------------------------------------------------------------
//
QCaDateTime QEArchiveInterfaceJSON::convertArchiveToEpics (const int seconds, const int nanoSecs)
{
   const unsigned long epicsSeconds = (unsigned long) seconds - e2aOffset;
   const unsigned long epicsNanoSec = (unsigned long) nanoSecs;

   return QCaDateTime (epicsSeconds, epicsNanoSec);
}

//------------------------------------------------------------------------------
//
void  QEArchiveInterfaceJSON::convertEpicsToArchive (const QCaDateTime& datetime, int& seconds, int& nanoSecs)
{
   const unsigned long epicsSeconds = datetime.getSeconds ();
   const unsigned long epicsNanoSec = datetime.getNanoSeconds ();

   seconds = (int) (epicsSeconds + e2aOffset);
   nanoSecs = (int) (epicsNanoSec);
}

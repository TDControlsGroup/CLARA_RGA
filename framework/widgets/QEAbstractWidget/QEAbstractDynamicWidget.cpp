/*  QEAbstractComplexWidget.cpp
 *
 *  This file is part of the EPICS QT Framework, initially developed at the Australian Synchrotron.
 *
 *  The EPICS QT Framework is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
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
 *  Copyright (c) 2016 Australian Synchrotron
 *
 *  Author:
 *    Andrew Starritt
 *  Contact details:
 *    andrew.starritt@synchrotron.org.au
 */

#include <QDebug>
#include <QFileDialog>
#include <QECommon.h>
#include <persistanceManager.h>

#include "QEAbstractDynamicWidget.h"

#define DEBUG qDebug() << "QEAbstractComplexWidget" << __LINE__ << __FUNCTION__ << "  "


//------------------------------------------------------------------------------
//
QEAbstractDynamicWidget::QEAbstractDynamicWidget (QWidget* parent) :
   ParentWidgetClass (parent)
{
   // Set super class properties.
   //
   this->setFrameShape (QFrame::NoFrame);
   this->setFrameShadow (QFrame::Plain);

   this->defaultDir = "";
   this->useOwnPersistantName = false;
}

//------------------------------------------------------------------------------
//
QEAbstractDynamicWidget::~QEAbstractDynamicWidget ()
{
   // place holder
}

//------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::setDefaultDir (const QString& defaultDirIn)
{
   this->defaultDir = defaultDirIn;
}

//------------------------------------------------------------------------------
//
QString QEAbstractDynamicWidget::getDefaultDir () const
{
   return this->defaultDir;
}

//------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::addPvNameList (const QStringList& pvNameList)
{
   for (int j = 0; j < pvNameList.count (); j++) {
      this->addPvName (pvNameList.value (j));
   }
}

//------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::addPvNameSet (const QString& pvNameSet)
{
   QStringList pvNameList;

   // Split input string using white space as delimiter.
   //
   pvNameList = pvNameSet.split (QRegExp ("\\s+"), QString::SkipEmptyParts);
   this->addPvNameList (pvNameList);
}

//------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::paste (QVariant s)
{
   QStringList pvNameList;

   // s.toSring is a bit limiting when s is a StringList or a List of String, so
   // use common variantToStringList function which handles tese options.
   //
   pvNameList = QEUtilities::variantToStringList (s);
   this->addPvNameList (pvNameList);

   this->setFocus ();
}

//------------------------------------------------------------------------------
//
QMenu* QEAbstractDynamicWidget::buildContextMenu ()
{
   QMenu* menu = ParentWidgetClass::buildContextMenu ();
   QAction* action;

   menu->addSeparator ();

   action = new QAction ("Load Configuration", menu);
   action->setCheckable (false);
   action->setData (ADWCM_LOAD_WIDGET_CONFIG);
   menu->addAction (action);

   action = new QAction ("Save Configuration", menu);
   action->setCheckable (false);
   action->setData (ADWCM_SAVE_WIDGET_CONFIG);
   menu->addAction (action);

   return menu;
}

//------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::contextMenuTriggered (int selectedItemNum)
{
   switch (selectedItemNum) {

      case ADWCM_LOAD_WIDGET_CONFIG:
         this->loadWidgetConfiguration ();
         break;

      case ADWCM_SAVE_WIDGET_CONFIG:
         this->saveWidgetConfiguration ();
         break;

      default:
         // Call parent class function.
         //
         ParentWidgetClass::contextMenuTriggered (selectedItemNum);
         break;
   }
}

//------------------------------------------------------------------------------
//
QString QEAbstractDynamicWidget::getPersistantRootName () const
{
   const QString className = this->metaObject()->className ();
   return QString ("%1Config").arg (className);
}

//------------------------------------------------------------------------------
//
QString QEAbstractDynamicWidget::getPersistantName () const
{
   const QString className = this->metaObject()->className ();

   QString result;

   if (this->useOwnPersistantName) {
      // We are saving/restoring just this component/widget. Use a fixed name.
      //
      result = QString ("%1_Widget").arg (className);
   } else {
      // Use an application generated window name.
      //
      result = this->persistantName (className);
   }

   return result;
}

//---------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::loadNamedWidetConfiguration (const QString& filename)
{
   PersistanceManager* pm = this->getPersistanceManager ();
   if (pm && !filename.isEmpty()) {        // sanity check
      this->useOwnPersistantName = true;   // indicate that we need specific persistance name
      pm->restoreWidget (this, filename, this->getPersistantRootName (), "Default");
      this->useOwnPersistantName = false;  // revert to default behaviour
   }
}

//---------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::saveNamedWidetConfiguration (const QString& filename)
{
   PersistanceManager* pm = this->getPersistanceManager ();
   if (pm && !filename.isEmpty()) {        // sanity check
      this->useOwnPersistantName = true;   // indicate that we need specific persistance name
      pm->saveWidget (this, filename, this->getPersistantRootName (), "Default");
      this->useOwnPersistantName = false;  // revert to default behaviour
   }
}

//---------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::loadWidgetConfiguration ()
{
   QString filename = QFileDialog::getOpenFileName
         (this,"Select configuration input file", this->getDefaultDir (),
          "Config Files(*.xml);;All files (*)");

   // Idf user clicks on Cancel, an empty file name is returned.
   // This is handled by the loadNamedWidetConfiguration function.
   //
   this->loadNamedWidetConfiguration (filename);
}

//---------------------------------------------------------------------------------
//
void QEAbstractDynamicWidget::saveWidgetConfiguration ()
{
   // Note: saveWidget itself asks for a confirmation, so we don't ask for
   // overwrite confirmation here.
   //
   QString filename = QFileDialog::getSaveFileName
         (this, "Select configuration output file", this->getDefaultDir (),
          "Config Files(*.xml)", 0, QFileDialog::DontConfirmOverwrite);

   // Idf user clicks on Cancel, an empty file name is returned.
   // This is handled by the saveNamedWidetConfiguration function.
   //
   this->saveNamedWidetConfiguration (filename);
}

// end

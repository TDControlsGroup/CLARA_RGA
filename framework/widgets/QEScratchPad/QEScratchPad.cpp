/*  QEScratchPad.cpp
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
 *  Copyright (c) 2013,2016 Australian Synchrotron
 *
 *  Author:
 *    Andrew Starritt
 *  Contact details:
 *    andrew.starritt@synchrotron.org.au
 */

#include <QDebug>
#include <QFileDialog>
#include <QColor>
#include <QApplication>
#include <QClipboard>
#include <QMimeData>

#include <QECommon.h>
#include <QERecordFieldName.h>

#include "QEScratchPad.h"

#define DEBUG qDebug() << "QEScratchPad::" << __LINE__ << __FUNCTION__ << "  "

static const QColor clHighLight (0xFFFFFF);
static const QColor clInUse     (0xE8E8E8);
static const QColor clNotInUse  (0xC8C8C8);
static const QColor clSelected  (0x7090FF);

static const int NULL_SELECTION = -1;
static const int margin = 2;
static const int spacing = 2;


//=================================================================================
// QEScratchPad
//=================================================================================
//
void QEScratchPad::createInternalWidgets ()
{
   static const int titleFrameHeight = 28;
   static const int itemFrameHeight = 19;
   static const int horMargin = 2;    // 19 - 2 - 2 => widget height is 15
   static const int horSpacing = 12;
   static const int indent = 6;

   // Main layout.
   //
   this->vLayout = new QVBoxLayout (this);
   this->vLayout->setMargin (2);
   this->vLayout->setSpacing (1);

   this->titleFrame = new QFrame (this);
   this->titleFrame->setFixedHeight (titleFrameHeight);

   this->titlePvName = new QLabel ("PV Name", this->titleFrame);
   this->titlePvName->setIndent (indent);

   this->titleDescription = new QLabel ("Description", this->titleFrame);
   this->titleDescription->setIndent (indent);

   this->titleValue = new QLabel ("Value", this->titleFrame);
   this->titleValue->setIndent (indent);

   this->loadButton = new QPushButton (this->titleFrame);
   this->loadButton->setIcon (QIcon (":/qe/stripchart/open_file.png"));
   this->loadButton->setFocusPolicy (Qt::NoFocus);
   this->loadButton->setToolTip (" Load scratch pad configuration ");
   this->loadButton->setFixedSize (26, 26);
   // We discard the signal bool parameter
   QObject::connect (this->loadButton, SIGNAL (clicked ()),
                     this, SLOT (loadWidgetConfiguration ()));

   this->saveButton = new QPushButton (this->titleFrame);
   this->saveButton->setIcon (QIcon (":/qe/stripchart/save_file.png"));
   this->saveButton->setFocusPolicy (Qt::NoFocus);
   this->saveButton->setToolTip (" Save scratch pad configuration ");
   this->saveButton->setFixedSize (26, 26);
   QObject::connect (this->saveButton, SIGNAL (clicked ()),
                     this, SLOT (saveWidgetConfiguration ()));

   this->vLayout->addWidget (this->titleFrame);

   this->scrollArea = new QScrollArea (this);
   this->scrollArea->setFrameShape (QFrame::NoFrame);
   this->scrollArea->setFrameShadow (QFrame::Plain);
   this->scrollArea->setVerticalScrollBarPolicy (Qt::ScrollBarAlwaysOn);
   this->scrollArea->setHorizontalScrollBarPolicy (Qt::ScrollBarAlwaysOff);
   this->scrollArea->setWidgetResizable (true);
   this->scrollArea->setMinimumHeight (60);

   this->scrollContents = new QWidget();
   this->scrollContents->setGeometry (QRect (0, 0, 378, 20));
   QSizePolicy sizePolicy (QSizePolicy::Preferred, QSizePolicy::Fixed);
   sizePolicy.setHorizontalStretch (0);
   sizePolicy.setVerticalStretch (0);
   sizePolicy.setHeightForWidth (this->scrollContents->sizePolicy ().hasHeightForWidth ());

   this->scrollContents->setSizePolicy (sizePolicy);
   this->scrollContents->setMinimumSize (QSize (0, 244));

   this->scrollLayout = new QVBoxLayout (scrollContents);
   this->scrollLayout->setSpacing (spacing);
   this->scrollLayout->setMargin (margin);
   this->scrollArea->setWidget (this->scrollContents);
   this->vLayout->addWidget (this->scrollArea);

   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {

      this->items [slot] = new DataSets ();  // allocate item.

      DataSets* item = this->items [slot];

      this->menus [slot] = new QEScratchPadMenu (slot, this->scrollContents);

      item->frame = new QFrame (this);
      item->frame->setFixedHeight (itemFrameHeight);
      item->frame->setAcceptDrops (true);
      item->frame->installEventFilter (this);
      item->frame->setContextMenuPolicy (Qt::CustomContextMenu);

      item->pvName = new QLabel (item->frame);
      item->pvName->setText ("");
      item->pvName->setIndent (indent);
      item->pvName->setSizePolicy (QSizePolicy::Ignored, QSizePolicy::Preferred);
      item->pvName->setStyleSheet (QEUtilities::colourToStyle (clNotInUse));

      item->description = new QELabel (item->frame);
      item->description->setDisplayAlarmState (false);
      item->description->setText ("");
      item->description->setIndent (indent);
      item->description->setSizePolicy (QSizePolicy::Ignored, QSizePolicy::Preferred);
      item->description->setStyleSheet (QEUtilities::colourToStyle (clNotInUse));

      item->value = new QELabel (item->frame);
      item->value->setDisplayAlarmState (true);
      item->value->setText ("");
      item->value->setIndent (indent);
      item->value->setSizePolicy (QSizePolicy::Ignored, QSizePolicy::Preferred);
      item->value->setStyleSheet (QEUtilities::colourToStyle (clNotInUse));
      item->value->setPrecision (12);
      item->value->setUseDbPrecision (false);
      item->value->setNotation (QEStringFormatting::NOTATION_AUTOMATIC);
      item->value->setTrailingZeros (false);
      item->value->setArrayAction (QEStringFormatting::INDEX);
      item->value->setArrayIndex (0);

      // Set up layout - paramers must be same as titlelayout
      //
      item->hLayout = new QHBoxLayout (item->frame);
      item->hLayout->setMargin (horMargin);
      item->hLayout->setSpacing (horSpacing);

      // Add to layouts
      //
      item->hLayout->addWidget (item->pvName);
      item->hLayout->addWidget (item->description);
      item->hLayout->addWidget (item->value);

      this->scrollLayout->addWidget (item->frame);

      QObject::connect (item->frame, SIGNAL (customContextMenuRequested (const QPoint &)),
                        this,        SLOT   (contextMenuRequested (const QPoint &)));

      QObject::connect (this->menus [slot], SIGNAL (contextMenuSelected (const int, const QEScratchPadMenu::ContextMenuOptions)),
                        this,               SLOT   (contextMenuSelected (const int, const QEScratchPadMenu::ContextMenuOptions)));
   }

   this->scrollLayout->addStretch ();
   this->calcMinimumHeight ();

   this->pvNameSelectDialog = new QEPVNameSelectDialog (this);
}

//=================================================================================
// DataSets
//=================================================================================
//
QEScratchPad::DataSets::DataSets () {
   this->thePvName = "";
   this->isHighLighted = false;
}

//---------------------------------------------------------------------------------
//
QEScratchPad::DataSets::~DataSets () {
}

//---------------------------------------------------------------------------------
//
bool QEScratchPad::DataSets::isInUse () const
{
   return !(this->thePvName.isEmpty ());
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::DataSets::setHighLighted (const bool isHighLightedIn)
{
   QString styleSheet;

   // Can only set/remove high ligt if not in use.
   //
   if (!this->isInUse()) {
      this->isHighLighted = isHighLightedIn;
      if (this->isHighLighted) {
         styleSheet = QEUtilities::colourToStyle (clHighLight);
      } else {
         styleSheet = QEUtilities::colourToStyle (clNotInUse);
      }

      this->pvName->setStyleSheet (styleSheet);
      this->description->setStyleSheet (styleSheet);
      this->value->setStyleSheet (styleSheet);
   }
}

//=================================================================================
// QEScratchPad
//=================================================================================
//
QEScratchPad::QEScratchPad (QWidget* parent) : QEAbstractDynamicWidget (parent), QEQuickSort ()
{
   this->createInternalWidgets ();

   this->setNumVariables (0);

   // Configure the panel.
   //
   this->setFrameShape (QFrame::StyledPanel);
   this->setFrameShadow (QFrame::Raised);

   this->setMinimumWidth (800);
   this->calcMinimumHeight ();

   this->selectedItem = NULL_SELECTION;
   this->emitSelectionChangeInhibited = false;
   this->emitPvNameSetChangeInhibited = false;

   this->setAllowDrop (true);
   this->setDisplayAlarmState (false);

   // Use default context menu.
   //
   this->setupContextMenu ();
   this->setNumberOfContextMenuItems (ARRAY_LENGTH (this->items));

   // Ensure we do the resize processing.
   //
   QTimer::singleShot (20, this, SLOT (intialResize ()));
   QTimer::singleShot (200, this, SLOT (intialResize ()));
}

//---------------------------------------------------------------------------------
//
QEScratchPad::~QEScratchPad ()
{
   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      if (this->items [slot]) {
         delete this->items [slot];
      }
   }
}

//------------------------------------------------------------------------------
//
QSize QEScratchPad::sizeHint () const {
   return QSize (800, 50);
}

//------------------------------------------------------------------------------
// manage titleFrame layout.  We use the automatoc layout of one of the
// items to guide the layout of the title frame.
//
void QEScratchPad::resizeEvent (QResizeEvent*)
{
   const int horOffset = 2;
   const int verOffset = 8;

   DataSets* item = this->items [0];   // use of slot 0 is arbitary.

   QRect geo;
   int left;

   geo = item->pvName->geometry ();
   geo.translate (horOffset, verOffset);
   this->titlePvName->setGeometry (geo);

   geo = item->description->geometry ();
   geo.translate (horOffset, verOffset);
   this->titleDescription->setGeometry (geo);

   geo = item->value->geometry ();
   geo.translate (horOffset, verOffset);
   geo.setWidth (geo.width() - 44);
   this->titleValue->setGeometry (geo);

   left = geo.right() + 8;
   geo = this->loadButton->geometry();
   geo.moveLeft (left);   // absolute (as opposed to relative) move.
   this->loadButton->setGeometry (geo);

   left = geo.right() + 4;
   geo = this->saveButton->geometry();
   geo.moveLeft (left);   // absolute (as opposed to relative) move.
   this->saveButton->setGeometry (geo);
}

//---------------------------------------------------------------------------------
// Slot range checking macro function.
// Set default to nil for void functions.
//
#define SLOT_CHECK(slot, default) {                                   \
   if ((slot < 0) || (slot >= ARRAY_LENGTH (this->items))) {          \
      DEBUG << "slot out of range: " << slot;                         \
      return default;                                                 \
   }                                                                  \
}


//---------------------------------------------------------------------------------
//
int QEScratchPad::findSlot (QObject *obj) const
{
   int result = -1;

   for (int slot = 0 ; slot < ARRAY_LENGTH (this->items); slot++) {
      if ((obj == this->items [slot]->frame) ||
          (obj == this->items [slot]->pvName)) {
         // found it.
         //
         result = slot;
         break;
      }
   }

   return result;
}

//---------------------------------------------------------------------------------
//
int QEScratchPad::numberSlotsUsed () const
{
   int last;

   // Find last used item.
   //
   last = -1;
   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      if (this->items [slot]->isInUse ()) {
         last = slot;
      }
   }

   return last + 1;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::calcMinimumHeight ()
{
   int count;
   int delta_top;

   // Find number in use.
   //
   count = this->numberSlotsUsed ();

   // Allow one spare at end of widget if there is room.
   //
   if (count  < ARRAY_LENGTH (this->items)) count++;

   // Set visibility accordingly
   //
   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      this->items [slot]->frame->setVisible (slot < count);
   }

   delta_top = 20;
   this->scrollContents->setFixedHeight ((delta_top * count) + 10);
}

//---------------------------------------------------------------------------------
//
bool QEScratchPad::itemLessThan (const int a, const int b, QObject*) const
{
   if (a == b) {
      return false;  // same, so not less than
   }

   return (this->items [a]->pvName->text() < this->items [b]->pvName->text());
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::swapItems (const int p, const int q, QObject*)
{
   const int a = MIN (p, q);   // order
   const int b = MAX (p, q);

   SLOT_CHECK (a,);
   SLOT_CHECK (b,);
   if (a == b) {
      return;  // nothing do do
   }

   // Swap order in vertical layout and in DataSets items.
   // Alas we have to swap both. Swap must be consistant.
   // Note: we Last later item first.
   //
   QLayoutItem* bLayoutItem = this->scrollLayout->takeAt (b);
   QLayoutItem* aLayoutItem = this->scrollLayout->takeAt (a);

   // QVBoxLayout::insertItem is protected (at least in QT 4)
   // This subclass created to allow access to the insertItem method.
   //
   class ProtectedAccess : public QVBoxLayout {
   public:
      void insertLayoutItem (int index, QLayoutItem * item) {
         this->insertItem (index, item);
      }
   };
   ProtectedAccess* pa = static_cast <ProtectedAccess*> (this->scrollLayout);

   pa->insertLayoutItem (a, bLayoutItem);
   pa->insertLayoutItem (b, aLayoutItem);

   DataSets* tempItemRef = NULL;
   tempItemRef = this->items [a];
   this->items [a] = this->items [b];
   this->items [b] = tempItemRef;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::setSelectItem (const int slot, const bool toggle)
{
   const int previousSelection = this->selectedItem;

   if (slot != NULL_SELECTION) SLOT_CHECK (slot,);

   if (toggle) {
      if (this->selectedItem == slot) {
         this->selectedItem = NULL_SELECTION;
      } else {
         this->selectedItem = slot;
      }
   } else {
      this->selectedItem = slot;
   }

   if (this->selectedItem != previousSelection) {
      if (previousSelection != NULL_SELECTION) {
         DataSets* item = this->items [previousSelection];
         item->frame->setStyleSheet ("");
      }

      if (this->selectedItem != NULL_SELECTION) {
         DataSets* item = this->items [this->selectedItem];
         QString styleSheet = QEUtilities::colourToStyle (clSelected);
         item->frame->setStyleSheet (styleSheet);
      }
   }

   if (this->selectedItem  != NULL_SELECTION)  {
      DataSets* item = this->items [this->selectedItem];
      this->scrollArea->ensureWidgetVisible (item->frame, 0, spacing);
   }

   // This prevents infinite looping in the case of cyclic connections.
   //
   if (!this->emitSelectionChangeInhibited) {
      emit this->selectionChanged (this->selectedItem);
   }
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::intialResize ()
{
    this->resizeEvent (NULL);
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::contextMenuRequested (const QPoint& pos)
{
   QObject *obj = this->sender();   // who sent the signal.
   const int slot = this->findSlot (obj);
   SLOT_CHECK (slot,);

   QWidget* w = dynamic_cast<QWidget*> (obj);
   if (w) {
      QEScratchPadMenu* menu = this->menus [slot];
      DataSets* item = this->items [slot];
      QPoint golbalPos = w->mapToGlobal(pos);
      menu->setIsInUse (item->isInUse ());
      menu->exec (golbalPos, 0);
   }
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::contextMenuSelected (const int slot, const QEScratchPadMenu::ContextMenuOptions option)
{
   SLOT_CHECK (slot,);
   int n;

   switch (option) {
      case QEScratchPadMenu::SCRATCHPAD_PASTE_PV_NAME:
         {
            QClipboard* cb = QApplication::clipboard ();
            QString pasteText = cb->text().trimmed();

            if (! pasteText.isEmpty()) {
               this->setPvName (slot, pasteText);
            }
         }
         break;

      case QEScratchPadMenu::SCRATCHPAD_ADD_PV_NAME:
      case QEScratchPadMenu::SCRATCHPAD_EDIT_PV_NAME:
         this->pvNameSelectDialog->setPvName (this->getPvName (slot));
         n = this->pvNameSelectDialog->exec (this->items [slot]->pvName);
         if (n == 1) {
            this->setPvName (slot, this->pvNameSelectDialog->getPvName ());
         }
         break;

      case QEScratchPadMenu::SCRATCHPAD_DATA_CLEAR:
         this->setPvName (slot, "");
         break;

      default:
         DEBUG << slot <<  option;
         break;
   }
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::pvNameDropEvent (const int slot, QDropEvent *event)
{
   SLOT_CHECK (slot,);

   // If no text available, do nothing
   //
   if (!event->mimeData()->hasText ()){
      event->ignore ();
      return;
   }

   // Get the drop data
   //
   const QMimeData *mime = event->mimeData ();

   // If there is any text, drop the text

   if (!mime->text().isEmpty ()) {
      // Get the component textual parts
      //
      QStringList pieces = mime->text ().split (QRegExp ("\\s+"),
                                                QString::SkipEmptyParts);

      // Carry out the drop action
      //
      this->setPvName (slot, pieces.value (0, ""));
   }

   // Tell the dropee that the drop has been acted on
   //
   if (event->source() == this) {
      event->setDropAction(Qt::CopyAction);
      event->accept();
   } else {
      event->acceptProposedAction ();
   }
}

//---------------------------------------------------------------------------------
//
int QEScratchPad::addPvName (const QString& pvName)
{
   int result = -1;

   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      DataSets* item = this->items [slot];
      if (item->isInUse() == false) {
         // Found an empty slot.
         //
         this->setPvName (slot, pvName);
         result = slot;
         break;
      }
   }

   return result;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::showEvent (QShowEvent* /*event*/ )
{
   // We need focus in order for the up/down key to work.
   //
   this->setFocus ();
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::keyPressEvent (QKeyEvent * event)
{
   const int key = event->key ();
   const Qt::KeyboardModifiers modifier = event->modifiers();
   const bool isShift = ((modifier & Qt::ShiftModifier) != 0);
   const int lastSlotUsed = this->numberSlotsUsed () - 1;

   switch (key) {

      case Qt::Key_Up:
         if (this->selectedItem >= 0) {
            if (isShift && (this->selectedItem > 0)) {
               this->swapItems (this->selectedItem, this->selectedItem - 1);
            }
            this->setSelectItem (this->selectedItem - 1, false);
         }
         break;

      case Qt::Key_Down:
         if (this->selectedItem < lastSlotUsed) {
            if (isShift && (this->selectedItem >= 0)) {
               this->swapItems (this->selectedItem, this->selectedItem + 1);
            }
            this->setSelectItem (this->selectedItem + 1, false);
         }
         break;
   }
}

//---------------------------------------------------------------------------------
//
bool QEScratchPad::eventFilter (QObject *obj, QEvent *event)
{
   const QEvent::Type type = event->type ();
   QMouseEvent* mouseEvent = NULL;
   int slot;

   switch (type) {
      case QEvent::MouseButtonPress:
         this->setFocus ();
         mouseEvent = static_cast<QMouseEvent *> (event);
         slot = this->findSlot (obj);
         if (slot >= 0 && (mouseEvent->button () ==  Qt::LeftButton)) {
            this->setSelectItem (slot, true);
            return true;  // we have handled this mouse press
         }
         break;

      case QEvent::MouseButtonDblClick:
         mouseEvent = static_cast<QMouseEvent *> (event);
         slot = this->findSlot (obj);
         if (slot >= 0 && (mouseEvent->button () ==  Qt::LeftButton)) {
            // Leverage of menu handler
            this->setSelectItem (slot, false);
            this->contextMenuSelected (slot, QEScratchPadMenu::SCRATCHPAD_ADD_PV_NAME);
            return true;  // we have handled double click
         }
         break;

      case QEvent::DragEnter:
         slot = this->findSlot (obj);
         if (slot >= 0) {
            QDragEnterEvent* dragEnterEvent = static_cast<QDragEnterEvent*> (event);

            // Can only drop if text and not in use.
            //
            if ((dragEnterEvent->mimeData()->hasText ()) &&
                (!this->items [slot]->isInUse ())) {
               dragEnterEvent->setDropAction (Qt::CopyAction);
               dragEnterEvent->accept ();
               this->items [slot]->setHighLighted (true);
            } else {
               dragEnterEvent->ignore ();
               this->items [slot]->setHighLighted (false);
            }
            return true;
         }
         break;

      case QEvent::DragLeave:
         slot = this->findSlot (obj);
         if (slot >= 0) {
            this->items [slot]->setHighLighted (false);
            return true;
         }
         break;

      case QEvent::Drop:
         slot = this->findSlot (obj);
         if (slot >= 0) {
            QDropEvent* dropEvent = static_cast<QDropEvent*> (event);
            this->pvNameDropEvent (slot, dropEvent);
            this->items [slot]->setHighLighted (false);
            return true;
         }
         break;

      default:
         // Just fall through
         break;
   }

   return false;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::setSelection (int selectedItemIn)
{
   // A negative selection means no selection
   //
   if (selectedItemIn < 0) selectedItemIn = NULL_SELECTION;

   if (this->selectedItem != selectedItemIn) {
      this->emitSelectionChangeInhibited = true;
      this->setSelectItem (selectedItemIn, false);
      this->emitSelectionChangeInhibited = false;
   }
}

//---------------------------------------------------------------------------------
//
int QEScratchPad::getSelection () const
{
   return this->selectedItem;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::setPvNameSet (const QStringList& pvNameSet)
{
   this->emitPvNameSetChangeInhibited = true;

   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      QString pvName = pvNameSet.value (slot, "");
      this->setPvName (slot, pvName);
   }

   this->emitPvNameSetChangeInhibited = false;
}

//---------------------------------------------------------------------------------
//
QStringList QEScratchPad::getPvNameSet () const
{
   QStringList result;

   // Create a space seperated list of PV names.
   //
   result.clear ();
   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      if (this->items [slot]->isInUse ()) {
         QString pvName = this->getPvName (slot);
         result.append (pvName);
      }
   }
   return result;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::setPvName (const int slot, const QString& pvName)
{
   SLOT_CHECK (slot,);
   QString descPv;

   DataSets* item = this->items [slot];

   item->description->deactivate ();
   item->value->deactivate ();

   item->thePvName = pvName.trimmed ();
   item->pvName->setText (item->thePvName);

   // New PV name or clear - clear current text values.
   item->description->setText ("");
   item->value->setText ("");

   if (item->isInUse()) {
      descPv = QERecordFieldName::fieldPvName (item->thePvName, "DESC");
      item->description->setVariableNameAndSubstitutions (descPv, "", 0);
      item->value->setVariableNameAndSubstitutions (item->thePvName, "", 0);

      // Ensure we always active irrespective of the profile DontActivateYet state.
      //
      item->description->activate ();
      item->value->activate ();

      item->pvName->setStyleSheet (QEUtilities::colourToStyle (clInUse));
      item->description->setStyleSheet (QEUtilities::colourToStyle (clInUse));
      item->value->setStyleSheet (QEUtilities::colourToStyle (clInUse));
   } else {
      item->description->setVariableNameAndSubstitutions ("", "", 0);
      item->value->setVariableNameAndSubstitutions ("", "", 0);

      item->pvName->setStyleSheet (QEUtilities::colourToStyle (clNotInUse));
      item->description->setStyleSheet (QEUtilities::colourToStyle (clNotInUse));
      item->value->setStyleSheet (QEUtilities::colourToStyle (clNotInUse));
   }

   this->calcMinimumHeight ();

   // This prevents infinite looping in the case of cyclic connections.
   //
   if (!this->emitPvNameSetChangeInhibited) {
      emit this->pvNameSetChanged (this->getPvNameSet ());
   }
}


//---------------------------------------------------------------------------------
//
QString QEScratchPad::getPvName (const int slot) const
{
   SLOT_CHECK (slot, "");
   return this->items [slot]->thePvName;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::activated ()
{
   // This prevents infinite looping in the case of cyclic connections.
   //
   if (!this->emitPvNameSetChangeInhibited) {
      emit this->pvNameSetChanged (this->getPvNameSet ());
   }
}

//---------------------------------------------------------------------------------
//
QMenu* QEScratchPad::buildContextMenu ()
{
   const int n = this->numberSlotsUsed ();

   QMenu* menu = QEAbstractDynamicWidget::buildContextMenu ();  // build parent context menu
   QAction* action;

   menu->addSeparator ();

   action = new QAction ("Sort By PV Name", menu);
   action->setCheckable (false);
   action->setEnabled (n >= 2);   // need two or more to tango.
   action->setData (QEScratchPadMenu::SCRATCHPAD_SORT_PV_NAMES);
   menu->addAction (action);

   action = new QAction ("Clear All", menu);
   action->setCheckable (false);
   action->setEnabled (n >= 1);
   action->setData (QEScratchPadMenu::SCRATCHPAD_CLEAR_ALL);
   menu->addAction (action);

   return menu;
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::contextMenuTriggered (int selectedItemNum)
{
   const int n = this->numberSlotsUsed ();

   switch (selectedItemNum) {
      case QEScratchPadMenu::SCRATCHPAD_SORT_PV_NAMES:
         this->setSelectItem (NULL_SELECTION, false);
         this->sort (0, n-1, NULL);
         break;

      case QEScratchPadMenu::SCRATCHPAD_CLEAR_ALL:
         for (int slot = 0; slot < n; slot++) {
            this->setPvName (slot, "");
         }
         break;

      default:
         // process parent context menu
         //
         QEAbstractDynamicWidget::contextMenuTriggered (selectedItemNum);
         break;
   }
}

//---------------------------------------------------------------------------------
// We disallow self drop. We don't need to do this in dragEnterEvent as
// dragMoveEvent called immediatley afterwards.
//
void QEScratchPad::dragMoveEvent (QDragMoveEvent* event)
{
   QFrame* sourceFrame = dynamic_cast <QFrame*> (event->source()->parent());
   if (sourceFrame) {
      // Parent is of the correct type.

      // Extract frame geometry and convert to global coordinates.
      // Map to glabl requires the sourceFrame parant.
      //
      QWidget* gp = dynamic_cast <QWidget*> (sourceFrame->parent ());

      QRect fg = sourceFrame->geometry ();
      QPoint gtl = gp->mapToGlobal (fg.topLeft());
      QPoint gbr = gp->mapToGlobal (fg.bottomRight());
      QRect globalFrameRect = QRect (gtl, gbr);

      // pos is relative this, the scratch pad, widget.
      //
      QPoint globalPos = this->mapToGlobal (event->pos ());

      // Convert drop position to global coordinates as well so that we
      // check if the would be drop location is own frame.
      //
      if (globalFrameRect.contains (globalPos)) {
         event->ignore ();
         return;
      }
   }

   // Allow / re-allow drop. Allow dropping onto other slots.
   //
   event->acceptProposedAction ();
   return;
}

//---------------------------------------------------------------------------------
//
QString QEScratchPad::copyVariable ()
{
   QString result;

   // Create a space seperated list of PV names.
   //
   result = "";
   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      if (this->items [slot]->isInUse ()) {
         QString pvName = this->getPvName (slot);
         if (!result.isEmpty()) result.append (" ");
         result.append (pvName);
      }
   }
   return result;
}

//---------------------------------------------------------------------------------
//
QVariant QEScratchPad::copyData ()
{
   QString result;

   result = "\n";
   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      if (this->items [slot]->isInUse ()) {
         QString pvName = this->getPvName (slot);
         QString pvValue = this->items [slot]->value->text ();

         result.append (QString ("%1\t%2\n").arg (pvName, -40).arg (pvValue));

      }
   }
   return QVariant (result);
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::paste (QVariant s)
{
   QStringList pvNameList;

   pvNameList = QEUtilities::variantToStringList (s);
   for (int j = 0; j < pvNameList.count (); j++) {
      this->addPvName (pvNameList.value (j));
   }
   this->setFocus ();
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::saveConfiguration (PersistanceManager* pm)
{
   const QString formName = this->getPersistantName();

   PMElement formElement = pm->addNamedConfiguration (formName);

   // Save each active PV.
   //
   PMElement pvListElement = formElement.addElement ("PV_List");

   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      DataSets* item = this->items [slot];
      if (item->isInUse()) {
         PMElement pvElement = pvListElement.addElement ("PV");
         pvElement.addAttribute ("id", slot);
         pvElement.addValue ("Name", this->getPvName(slot));
      }
   }
}

//---------------------------------------------------------------------------------
//
void QEScratchPad::restoreConfiguration (PersistanceManager* pm, restorePhases restorePhase)
{
   if (restorePhase != FRAMEWORK) return;

   const QString formName = this->getPersistantName ();

   PMElement formElement = pm->getNamedConfiguration (formName);

   // Restore each PV.
   //
   PMElement pvListElement = formElement.getElement ("PV_List");

   for (int slot = 0; slot < ARRAY_LENGTH (this->items); slot++) {
      PMElement pvElement = pvListElement.getElement ("PV", "id", slot);
      QString pvName;
      bool status;

      if (pvElement.isNull ()) continue;

      // Attempt to extract a PV name
      //
      status = pvElement.getValue ("Name", pvName);
      if (status) {
         this->setPvName (slot, pvName);
      }
   }
}

// end

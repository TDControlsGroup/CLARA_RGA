/*  QEFrame.cpp
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
 *  Copyright (c) 2012 Australian Synchrotron
 *
 *  Author:
 *    Andrew Starritt
 *  Contact details:
 *    andrew.starritt@synchrotron.org.au
 */

#include <QEFrame.h>
#include <QPainter>

//------------------------------------------------------------------------------
//
QEFrame::QEFrame (QWidget *parent) : QFrame (parent), QEWidget (this)
{
   // These are the settings for a drag-and-dropped QFrame within designer, but
   // not set in the constructor, so we don't automatically inherit these settings.
   //
   this->setFrameShape (QFrame::StyledPanel);
   this->setFrameShadow (QFrame::Raised);

   // This is not an EPICS aware widget.
   //
   this->setVariableAsToolTip (false);
   this->setAllowDrop (false);
   this->setNumVariables (0);
}

//------------------------------------------------------------------------------
//
QEFrame::~QEFrame () {
}

//------------------------------------------------------------------------------
//
QSize QEFrame::sizeHint () const {
    return QSize (120, 80);
}


//------------------------------------------------------------------------------
// Manage background pixmap if required
void QEFrame::paintEvent( QPaintEvent* event )
{
    // Do base class paint
    QFrame::paintEvent( event );

    // Nothing more to do if no pixmap
    if( pixmap.isNull() )
    {
        return;
    }

    // Determine the area to draw into
    // If scaling, draw into the entire frame
    // If not scaling, draw into a rectangle the same size as the pixmap
    QRect area;
    if( scaledContents )
    {
        area.setSize( size() );
    }
    else
    {
        area.setLeft( ( size().width() - pixmap.size().width() ) / 2 );
        area.setTop( ( size().height() - pixmap.size().height() ) / 2 );
        area.setSize( pixmap.size() );
    }

    // Draw the pixmap
    QPainter p( this );
    p.setRenderHints( QPainter::Antialiasing );
    p.drawPixmap( area, pixmap );
}

//------------------------------------------------------------------------------
// Set the pixmap used for the background.
// Operates like pixmap property for QLabel
void QEFrame::setPixmap( QPixmap pixmapIn )
{
    pixmap = pixmapIn;
    update();
}

// Get the pixmap used for the background.
// Operates like pixmap property for QLabel
QPixmap QEFrame::getPixmap() const
{
    return pixmap;
}

// Set the flag used to indicate the background is to be scaled to fit the frame. Similar operation to scaledContents property for a QLabel
void QEFrame::setScaledContents( bool scaledContentsIn )
{
    bool repaint = !(scaledContents == scaledContentsIn);

    scaledContents = scaledContentsIn;

    if( repaint )
    {
        update();
    }
}

// Get the flag used to indicate the background is to be scaled to fit the frame. Similar operation to scaledContents property for a QLabel
bool QEFrame::getScaledContents()
{
    return scaledContents;
}



// end

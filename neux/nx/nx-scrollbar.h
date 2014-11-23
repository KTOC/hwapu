/*
 *  Copyright(C) 2006 Neuros Technology International LLC.
 *               <www.neurostechnology.com>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 2 of the License.
 *
 *
 *  This program is distributed in the hope that, in addition to its
 *  original purpose to support Neuros hardware, it will be useful
 *  otherwise, but WITHOUT ANY WARRANTY; without even the implied
 *  warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 ****************************************************************************
 *
 * Widget ScrollBar header.
 *
 * REVISION:
 *
 *
 * 1) Initial creation. ----------------------------------- 2006-03-02 EY
 *
 */

#ifndef _NXSCROLLBAR_H_
#define _NXSCROLLBAR_H_

#include "nx-base.h"


#define SCROLLBAR_WIDTH 			100
#define SCROLLBAR_HEIGHT 			20


typedef struct
{
	int orientation;

	CallBackStruct cb_exposure;

}NX_SCROLLBAR;

/*member  function */
void
NxScrollBarCreate (NX_WIDGET *);
void
NxScrollBarDestroy(NX_WIDGET *);
void
NxScrollBarDraw(NX_WIDGET *);

/*event handler */
void
NxScrollBarExposureHandler (GR_EVENT *, NX_WIDGET *);




/*public function*/

#endif //_NXSCROLLBAR_H_


/*---------------------------------------------------------------------------*\
 *                            OpenSG  Toolbox                                *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OPGPLATFORMUTILS_H_
#define _OSGPLATFORMUTILS_H_

#include "OSGConfig.h"
#include "OSGUtilDef.h"

#include "OSGBoostPathFields.h"

OSG_BEGIN_NAMESPACE

OSG_UTIL_DLLMAPPING
BoostPath getPlatformUserAppDataDir(void);

OSG_UTIL_DLLMAPPING
BoostPath getPlatformTempDataDir   (void);

OSG_END_NAMESPACE

#endif // _OSGPLATFORMUTILS_H_



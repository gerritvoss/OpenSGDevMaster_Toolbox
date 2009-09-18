/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGAnimTemplate.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGAnimTemplateBase.cpp file.
// To modify it, please change the .fcd file (OSGAnimTemplate.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void AnimTemplate::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

AnimTemplate::AnimTemplate(void) :
    Inherited()
{
}

AnimTemplate::AnimTemplate(const AnimTemplate &source) :
    Inherited(source)
{
}

AnimTemplate::~AnimTemplate(void)
{
}

/*----------------------------- class specific ----------------------------*/

void AnimTemplate::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

AnimDataSource *
AnimTemplate::findSource(const std::string &targetId) const
{
    UInt32 srcIdx = 0;

    return findSource(targetId, srcIdx);
}

AnimDataSource *
AnimTemplate::findSource(const std::string &targetId, UInt32 &srcIdx) const
{
    OSG_ASSERT(_mfTargetIds.size() == _mfSources.size());
    OSG_ASSERT(srcIdx              <  _mfSources.size());

    AnimDataSource                  *src    = NULL;
    MFTargetIdsType::const_iterator  idIt  = _mfTargetIds.begin();
    MFTargetIdsType::const_iterator  idEnd = _mfTargetIds.end  ();

    idIt = std::find(idIt + srcIdx, idEnd, targetId);

    if(idIt != idEnd)
    {
        srcIdx = std::distance(_mfTargetIds.begin(), idIt);
        src    = _mfSources[srcIdx];
    }

    return src;
}


void AnimTemplate::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump AnimTemplate NI" << std::endl;
}

OSG_END_NAMESPACE
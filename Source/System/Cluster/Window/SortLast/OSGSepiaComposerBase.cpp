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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class SepiaComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESEPIACOMPOSERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSepiaComposerBase.h"
#include "OSGSepiaComposer.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SepiaComposer
    
 */


SepiaComposerBase::TypeObject SepiaComposerBase::_type(
    SepiaComposerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SepiaComposerBase::createEmpty,
    SepiaComposer::initMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SepiaComposer\"\n"
    "\tparent=\"ImageComposer\"\n"
    "    library=\"Cluster\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SepiaComposerBase::getType(void)
{
    return _type;
}

const FieldContainerType &SepiaComposerBase::getType(void) const
{
    return _type;
}

UInt32 SepiaComposerBase::getContainerSize(void) const
{
    return sizeof(SepiaComposer);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 SepiaComposerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void SepiaComposerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void SepiaComposerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
SepiaComposerPtr SepiaComposerBase::create(void)
{
    SepiaComposerPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<SepiaComposer::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
SepiaComposerPtr SepiaComposerBase::createEmpty(void)
{
    SepiaComposerPtr returnValue;

    newPtr<SepiaComposer>(returnValue);

    return returnValue;
}

FieldContainerPtr SepiaComposerBase::shallowCopy(void) const
{
    SepiaComposerPtr returnValue;

    newPtr(returnValue, dynamic_cast<const SepiaComposer *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SepiaComposerBase::SepiaComposerBase(void) :
    Inherited()
{
}

SepiaComposerBase::SepiaComposerBase(const SepiaComposerBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

SepiaComposerBase::~SepiaComposerBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void SepiaComposerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SepiaComposerBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SepiaComposerBase::createAspectCopy(void) const
{
    SepiaComposerPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SepiaComposer *>(this));

    return returnValue;
}
#endif

void SepiaComposerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SepiaComposerPtr>::_type("SepiaComposerPtr", "ImageComposerPtr");
#endif


OSG_END_NAMESPACE

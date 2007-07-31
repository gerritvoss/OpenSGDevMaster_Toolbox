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
 **     class Group!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGROUPINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGGroupBase.h"
#include "OSGGroup.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Group
    Group is the simplest form of a NodeCore. A group
    carries no predefined data and most actions will only traverse the
    children list. So usually the group does nothing.
 */


GroupBase::TypeObject GroupBase::_type(
    GroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GroupBase::createEmpty,
    Group::initMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Group\"\n"
    "\tparent=\"NodeCore\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "Group is the simplest form of a NodeCore. A group\n"
    "carries no predefined data and most actions will only traverse the\n"
    "children list. So usually the group does nothing.\n"
    "\n"
    "</FieldContainer>\n",
    "Group is the simplest form of a NodeCore. A group\n"
    "carries no predefined data and most actions will only traverse the\n"
    "children list. So usually the group does nothing.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &GroupBase::getType(void) const
{
    return _type;
}

UInt32 GroupBase::getContainerSize(void) const
{
    return sizeof(Group);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GroupPtr GroupBase::create(void)
{
    GroupPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<Group::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
GroupPtr GroupBase::createEmpty(void)
{
    GroupPtr returnValue;

    newPtr<Group>(returnValue);

    return returnValue;
}

FieldContainerPtr GroupBase::shallowCopy(void) const
{
    GroupPtr returnValue;

    newPtr(returnValue, dynamic_cast<const Group *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GroupBase::GroupBase(void) :
    Inherited()
{
}

GroupBase::GroupBase(const GroupBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GroupBase::~GroupBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GroupBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GroupBase::createAspectCopy(void) const
{
    GroupPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Group *>(this));

    return returnValue;
}
#endif

void GroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GroupPtr>::_type("GroupPtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GroupPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, GroupPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, GroupPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

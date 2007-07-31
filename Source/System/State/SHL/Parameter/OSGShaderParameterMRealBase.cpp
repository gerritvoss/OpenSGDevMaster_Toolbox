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
 **     class ShaderParameterMReal!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMREALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterMRealBase.h"
#include "OSGShaderParameterMReal.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterMReal
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          ShaderParameterMRealBase::_mfValue
    parameter value
*/


void ShaderParameterMRealBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderParameterMRealBase::editHandleValue),
        reinterpret_cast<FieldGetMethodSig >(&ShaderParameterMRealBase::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterMRealBase::TypeObject ShaderParameterMRealBase::_type(
    ShaderParameterMRealBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterMRealBase::createEmpty,
    ShaderParameterMReal::initMethod,
    (InitalInsertDescFunc) &ShaderParameterMRealBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterMReal\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterMRealBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterMRealBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterMRealBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterMReal);
}

/*------------------------- decorator get ------------------------------*/


MFReal32 *ShaderParameterMRealBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFReal32 *ShaderParameterMRealBase::getMFValue(void) const
{
    return &_mfValue;
}

#ifdef OSG_1_GET_COMPAT
MFReal32            *ShaderParameterMRealBase::getMFValue          (void)
{
    return this->editMFValue          ();
}
#endif



/*********************************** Non-ptr code ********************************/
void ShaderParameterMRealBase::pushToValue(const Real32& value)
{
    editMField(ValueFieldMask, _mfValue);
    _mfValue.push_back(value);
}

void ShaderParameterMRealBase::insertIntoValue(UInt32                uiIndex,
                                                   const Real32& value   )
{
    editMField(ValueFieldMask, _mfValue);

    MFReal32::iterator fieldIt = _mfValue.begin();

    fieldIt += uiIndex;

    _mfValue.insert(fieldIt, value);
}

void ShaderParameterMRealBase::replaceInValue(UInt32                uiIndex,
                                                       const Real32& value   )
{
    if(uiIndex >= _mfValue.size())
        return;

    editMField(ValueFieldMask, _mfValue);

    _mfValue[uiIndex] = value;
}

void ShaderParameterMRealBase::replaceInValue(const Real32& pOldElem,
                                                        const Real32& pNewElem)
{
    Int32  elemIdx = _mfValue.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFReal32::iterator fieldIt = _mfValue.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ShaderParameterMRealBase::removeFromValue(UInt32 uiIndex)
{
    if(uiIndex < _mfValue.size())
    {
        editMField(ValueFieldMask, _mfValue);

        MFReal32::iterator fieldIt = _mfValue.begin();

        fieldIt += uiIndex;
        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMRealBase::removeFromValue(const Real32& value)
{
    Int32 iElemIdx = _mfValue.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFReal32::iterator fieldIt = _mfValue.begin();

        fieldIt += iElemIdx;

        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMRealBase::clearValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    _mfValue.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMRealBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterMRealBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderParameterMRealBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterMRealPtr ShaderParameterMRealBase::create(void)
{
    ShaderParameterMRealPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<ShaderParameterMReal::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterMRealPtr ShaderParameterMRealBase::createEmpty(void)
{
    ShaderParameterMRealPtr returnValue;

    newPtr<ShaderParameterMReal>(returnValue);

    return returnValue;
}

FieldContainerPtr ShaderParameterMRealBase::shallowCopy(void) const
{
    ShaderParameterMRealPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ShaderParameterMReal *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterMRealBase::ShaderParameterMRealBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderParameterMRealBase::ShaderParameterMRealBase(const ShaderParameterMRealBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterMRealBase::~ShaderParameterMRealBase(void)
{
}


MFReal32::GetHandlePtr ShaderParameterMRealBase::getHandleValue           (void)
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

MFReal32::EditHandlePtr ShaderParameterMRealBase::editHandleValue          (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterMRealBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterMRealBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterMRealBase::createAspectCopy(void) const
{
    ShaderParameterMRealPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterMReal *>(this));

    return returnValue;
}
#endif

void ShaderParameterMRealBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfValue.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterMRealPtr>::_type("ShaderParameterMRealPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterMRealPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ShaderParameterMRealPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ShaderParameterMRealPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

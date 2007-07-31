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
 **     class ShaderParameterMVec2f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERMVEC2FINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterMVec2fBase.h"
#include "OSGShaderParameterMVec2f.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterMVec2f
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec2f           ShaderParameterMVec2fBase::_mfValue
    parameter value
*/


void ShaderParameterMVec2fBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFVec2f::Description(
        MFVec2f::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderParameterMVec2fBase::editHandleValue),
        reinterpret_cast<FieldGetMethodSig >(&ShaderParameterMVec2fBase::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderParameterMVec2fBase::TypeObject ShaderParameterMVec2fBase::_type(
    ShaderParameterMVec2fBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterMVec2fBase::createEmpty,
    ShaderParameterMVec2f::initMethod,
    (InitalInsertDescFunc) &ShaderParameterMVec2fBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterMVec2f\"\n"
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
    "\t\ttype=\"Vec2f\"\n"
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

FieldContainerType &ShaderParameterMVec2fBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterMVec2fBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterMVec2fBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterMVec2f);
}

/*------------------------- decorator get ------------------------------*/


MFVec2f *ShaderParameterMVec2fBase::editMFValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return &_mfValue;
}

const MFVec2f *ShaderParameterMVec2fBase::getMFValue(void) const
{
    return &_mfValue;
}

#ifdef OSG_1_GET_COMPAT
MFVec2f             *ShaderParameterMVec2fBase::getMFValue          (void)
{
    return this->editMFValue          ();
}
#endif



/*********************************** Non-ptr code ********************************/
void ShaderParameterMVec2fBase::pushToValue(const Vec2f& value)
{
    editMField(ValueFieldMask, _mfValue);
    _mfValue.push_back(value);
}

void ShaderParameterMVec2fBase::insertIntoValue(UInt32                uiIndex,
                                                   const Vec2f& value   )
{
    editMField(ValueFieldMask, _mfValue);

    MFVec2f::iterator fieldIt = _mfValue.begin();

    fieldIt += uiIndex;

    _mfValue.insert(fieldIt, value);
}

void ShaderParameterMVec2fBase::replaceInValue(UInt32                uiIndex,
                                                       const Vec2f& value   )
{
    if(uiIndex >= _mfValue.size())
        return;

    editMField(ValueFieldMask, _mfValue);

    _mfValue[uiIndex] = value;
}

void ShaderParameterMVec2fBase::replaceInValue(const Vec2f& pOldElem,
                                                        const Vec2f& pNewElem)
{
    Int32  elemIdx = _mfValue.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFVec2f::iterator fieldIt = _mfValue.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ShaderParameterMVec2fBase::removeFromValue(UInt32 uiIndex)
{
    if(uiIndex < _mfValue.size())
    {
        editMField(ValueFieldMask, _mfValue);

        MFVec2f::iterator fieldIt = _mfValue.begin();

        fieldIt += uiIndex;
        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMVec2fBase::removeFromValue(const Vec2f& value)
{
    Int32 iElemIdx = _mfValue.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ValueFieldMask, _mfValue);

        MFVec2f::iterator fieldIt = _mfValue.begin();

        fieldIt += iElemIdx;

        _mfValue.erase(fieldIt);
    }
}

void ShaderParameterMVec2fBase::clearValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    _mfValue.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterMVec2fBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _mfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterMVec2fBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyToBin(pMem);
    }
}

void ShaderParameterMVec2fBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderParameterMVec2fPtr ShaderParameterMVec2fBase::create(void)
{
    ShaderParameterMVec2fPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<ShaderParameterMVec2f::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterMVec2fPtr ShaderParameterMVec2fBase::createEmpty(void)
{
    ShaderParameterMVec2fPtr returnValue;

    newPtr<ShaderParameterMVec2f>(returnValue);

    return returnValue;
}

FieldContainerPtr ShaderParameterMVec2fBase::shallowCopy(void) const
{
    ShaderParameterMVec2fPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ShaderParameterMVec2f *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterMVec2fBase::ShaderParameterMVec2fBase(void) :
    Inherited(),
    _mfValue                  ()
{
}

ShaderParameterMVec2fBase::ShaderParameterMVec2fBase(const ShaderParameterMVec2fBase &source) :
    Inherited(source),
    _mfValue                  (source._mfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderParameterMVec2fBase::~ShaderParameterMVec2fBase(void)
{
}


MFVec2f::GetHandlePtr ShaderParameterMVec2fBase::getHandleValue           (void)
{
    MFVec2f::GetHandlePtr returnValue(
        new  MFVec2f::GetHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    return returnValue;
}

MFVec2f::EditHandlePtr ShaderParameterMVec2fBase::editHandleValue          (void)
{
    MFVec2f::EditHandlePtr returnValue(
        new  MFVec2f::EditHandle(
             &_mfValue, 
             this->getType().getFieldDesc(ValueFieldId)));

    editMField(ValueFieldMask, _mfValue);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterMVec2fBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterMVec2fBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterMVec2fBase::createAspectCopy(void) const
{
    ShaderParameterMVec2fPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterMVec2f *>(this));

    return returnValue;
}
#endif

void ShaderParameterMVec2fBase::resolveLinks(void)
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
DataType FieldTraits<ShaderParameterMVec2fPtr>::_type("ShaderParameterMVec2fPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterMVec2fPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ShaderParameterMVec2fPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ShaderParameterMVec2fPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

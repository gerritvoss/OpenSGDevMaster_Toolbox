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
 **     class MultiPassMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMULTIPASSMATERIALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGMaterial.h> // Materials Class

#include "OSGMultiPassMaterialBase.h"
#include "OSGMultiPassMaterial.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MultiPassMaterial
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var MaterialPtr     MultiPassMaterialBase::_mfMaterials
    
*/


void MultiPassMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFMaterialPtr::Description(
        MFMaterialPtr::getClassType(),
        "materials",
        "",
        MaterialsFieldId, MaterialsFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MultiPassMaterialBase::editHandleMaterials),
        reinterpret_cast<FieldGetMethodSig >(&MultiPassMaterialBase::getHandleMaterials));

    oType.addInitialDesc(pDesc);
}


MultiPassMaterialBase::TypeObject MultiPassMaterialBase::_type(
    MultiPassMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MultiPassMaterialBase::createEmpty,
    MultiPassMaterial::initMethod,
    (InitalInsertDescFunc) &MultiPassMaterialBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MultiPassMaterial\"\n"
    "\tparent=\"Material\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"materials\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        pushToFieldAs=\"addMaterial\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiPassMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &MultiPassMaterialBase::getType(void) const
{
    return _type;
}

UInt32 MultiPassMaterialBase::getContainerSize(void) const
{
    return sizeof(MultiPassMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MultiPassMaterial::_mfMaterials field.
const MFMaterialPtr *MultiPassMaterialBase::getMFMaterials(void) const
{
    return &_mfMaterials;
}



void MultiPassMaterialBase::addMaterial(MaterialPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(MaterialsFieldMask, _mfMaterials);

    addRef(value);

    _mfMaterials.push_back(value);
}

void MultiPassMaterialBase::assignMaterials(const MFMaterialPtr     &value)
{
    MFMaterialPtr    ::const_iterator elemIt  =
        value.begin();
    MFMaterialPtr    ::const_iterator elemEnd =
        value.end  ();

    static_cast<MultiPassMaterial *>(this)->clearMaterials();

    while(elemIt != elemEnd)
    {
        this->addMaterial(*elemIt);

        ++elemIt;
    }
}

void MultiPassMaterialBase::insertIntoMaterials(UInt32                uiIndex,
                                                   MaterialPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(MaterialsFieldMask, _mfMaterials);

    MFMaterialPtr::iterator fieldIt = _mfMaterials.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfMaterials.insert(fieldIt, value);
}

void MultiPassMaterialBase::replaceInMaterials(UInt32                uiIndex,
                                                       MaterialPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfMaterials.size())
        return;

    editMField(MaterialsFieldMask, _mfMaterials);

    addRef(value);

    subRef(_mfMaterials[uiIndex]);

    _mfMaterials[uiIndex] = value;
}

void MultiPassMaterialBase::replaceInMaterials(MaterialPtrConstArg pOldElem,
                                                        MaterialPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfMaterials.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        MFMaterialPtr::iterator fieldIt = _mfMaterials.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void MultiPassMaterialBase::removeFromMaterials(UInt32 uiIndex)
{
    if(uiIndex < _mfMaterials.size())
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        MFMaterialPtr::iterator fieldIt = _mfMaterials.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfMaterials.erase(fieldIt);
    }
}

void MultiPassMaterialBase::removeFromMaterials(MaterialPtrConstArg value)
{
    Int32 iElemIdx = _mfMaterials.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(MaterialsFieldMask, _mfMaterials);

        MFMaterialPtr::iterator fieldIt = _mfMaterials.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfMaterials.erase(fieldIt);
    }
}
void MultiPassMaterialBase::clearMaterials(void)
{
    editMField(MaterialsFieldMask, _mfMaterials);

    MFMaterialPtr::iterator       fieldIt  = _mfMaterials.begin();
    MFMaterialPtr::const_iterator fieldEnd = _mfMaterials.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfMaterials.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 MultiPassMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        returnValue += _mfMaterials.getBinSize();
    }

    return returnValue;
}

void MultiPassMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.copyToBin(pMem);
    }
}

void MultiPassMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialsFieldMask & whichField))
    {
        _mfMaterials.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MultiPassMaterialPtr MultiPassMaterialBase::create(void)
{
    MultiPassMaterialPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<MultiPassMaterial::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
MultiPassMaterialPtr MultiPassMaterialBase::createEmpty(void)
{
    MultiPassMaterialPtr returnValue;

    newPtr<MultiPassMaterial>(returnValue);

    return returnValue;
}

FieldContainerPtr MultiPassMaterialBase::shallowCopy(void) const
{
    MultiPassMaterialPtr returnValue;

    newPtr(returnValue, dynamic_cast<const MultiPassMaterial *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MultiPassMaterialBase::MultiPassMaterialBase(void) :
    Inherited(),
    _mfMaterials              ()
{
}

MultiPassMaterialBase::MultiPassMaterialBase(const MultiPassMaterialBase &source) :
    Inherited(source),
    _mfMaterials              ()
{
}


/*-------------------------- destructors ----------------------------------*/

MultiPassMaterialBase::~MultiPassMaterialBase(void)
{
}

void MultiPassMaterialBase::onCreate(const MultiPassMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        MFMaterialPtr::const_iterator MaterialsIt  =
            source->_mfMaterials.begin();
        MFMaterialPtr::const_iterator MaterialsEnd =
            source->_mfMaterials.end  ();

        while(MaterialsIt != MaterialsEnd)
        {
            this->addMaterial(*MaterialsIt);

            ++MaterialsIt;
        }
    }
}

MFMaterialPtr::GetHandlePtr MultiPassMaterialBase::getHandleMaterials       (void)
{
    MFMaterialPtr::GetHandlePtr returnValue(
        new  MFMaterialPtr::GetHandle(
             &_mfMaterials, 
             this->getType().getFieldDesc(MaterialsFieldId)));

    return returnValue;
}

MFMaterialPtr::EditHandlePtr MultiPassMaterialBase::editHandleMaterials      (void)
{
    MFMaterialPtr::EditHandlePtr returnValue(
        new  MFMaterialPtr::EditHandle(
             &_mfMaterials, 
             this->getType().getFieldDesc(MaterialsFieldId)));

    returnValue->setAddMethod(boost::bind(&MultiPassMaterial::addMaterial, this, _1));

    editMField(MaterialsFieldMask, _mfMaterials);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MultiPassMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MultiPassMaterialBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MultiPassMaterialBase::createAspectCopy(void) const
{
    MultiPassMaterialPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MultiPassMaterial *>(this));

    return returnValue;
}
#endif

void MultiPassMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();


    static_cast<MultiPassMaterial *>(this)->clearMaterials();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MultiPassMaterialPtr>::_type("MultiPassMaterialPtr", "MaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MultiPassMaterialPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, MultiPassMaterialPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, MultiPassMaterialPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

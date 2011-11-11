/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class TranslationTransformationElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGTranslationTransformationElementBase.h"
#include "OSGTranslationTransformationElement.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TranslationTransformationElement
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Vec3f           TranslationTransformationElementBase::_sfTranslation
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TranslationTransformationElement *, nsOSG>::_type(
    "TranslationTransformationElementPtr", 
    "TransformationElementPtr", 
    TranslationTransformationElement::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TranslationTransformationElement *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TranslationTransformationElement *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TranslationTransformationElement *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TranslationTransformationElementBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Translation",
        "",
        TranslationFieldId, TranslationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TranslationTransformationElement::editHandleTranslation),
        static_cast<FieldGetMethodSig >(&TranslationTransformationElement::getHandleTranslation));

    oType.addInitialDesc(pDesc);
}


TranslationTransformationElementBase::TypeObject TranslationTransformationElementBase::_type(
    TranslationTransformationElementBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TranslationTransformationElementBase::createEmptyLocal),
    TranslationTransformationElement::initMethod,
    TranslationTransformationElement::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TranslationTransformationElement::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TranslationTransformationElement\"\n"
    "    parent=\"TransformationElement\"\n"
    "    library=\"Group\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"Translation\"\n"
    "      type=\"Vec3f\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"0.0f,0.0f,0.0f\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TranslationTransformationElementBase::getType(void)
{
    return _type;
}

const FieldContainerType &TranslationTransformationElementBase::getType(void) const
{
    return _type;
}

UInt32 TranslationTransformationElementBase::getContainerSize(void) const
{
    return sizeof(TranslationTransformationElement);
}

/*------------------------- decorator get ------------------------------*/


SFVec3f *TranslationTransformationElementBase::editSFTranslation(void)
{
    editSField(TranslationFieldMask);

    return &_sfTranslation;
}

const SFVec3f *TranslationTransformationElementBase::getSFTranslation(void) const
{
    return &_sfTranslation;
}






/*------------------------------ access -----------------------------------*/

UInt32 TranslationTransformationElementBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        returnValue += _sfTranslation.getBinSize();
    }

    return returnValue;
}

void TranslationTransformationElementBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        _sfTranslation.copyToBin(pMem);
    }
}

void TranslationTransformationElementBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        editSField(TranslationFieldMask);
        _sfTranslation.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TranslationTransformationElementTransitPtr TranslationTransformationElementBase::createLocal(BitVector bFlags)
{
    TranslationTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TranslationTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TranslationTransformationElementTransitPtr TranslationTransformationElementBase::createDependent(BitVector bFlags)
{
    TranslationTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TranslationTransformationElement>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TranslationTransformationElementTransitPtr TranslationTransformationElementBase::create(void)
{
    TranslationTransformationElementTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TranslationTransformationElement>(tmpPtr);
    }

    return fc;
}

TranslationTransformationElement *TranslationTransformationElementBase::createEmptyLocal(BitVector bFlags)
{
    TranslationTransformationElement *returnValue;

    newPtr<TranslationTransformationElement>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TranslationTransformationElement *TranslationTransformationElementBase::createEmpty(void)
{
    TranslationTransformationElement *returnValue;

    newPtr<TranslationTransformationElement>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TranslationTransformationElementBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TranslationTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TranslationTransformationElement *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TranslationTransformationElementBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TranslationTransformationElement *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TranslationTransformationElement *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TranslationTransformationElementBase::shallowCopy(void) const
{
    TranslationTransformationElement *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TranslationTransformationElement *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TranslationTransformationElementBase::TranslationTransformationElementBase(void) :
    Inherited(),
    _sfTranslation            (Vec3f(0.0f,0.0f,0.0f))
{
}

TranslationTransformationElementBase::TranslationTransformationElementBase(const TranslationTransformationElementBase &source) :
    Inherited(source),
    _sfTranslation            (source._sfTranslation            )
{
}


/*-------------------------- destructors ----------------------------------*/

TranslationTransformationElementBase::~TranslationTransformationElementBase(void)
{
}


GetFieldHandlePtr TranslationTransformationElementBase::getHandleTranslation     (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfTranslation,
             this->getType().getFieldDesc(TranslationFieldId),
             const_cast<TranslationTransformationElementBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TranslationTransformationElementBase::editHandleTranslation    (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfTranslation,
             this->getType().getFieldDesc(TranslationFieldId),
             this));


    editSField(TranslationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TranslationTransformationElementBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TranslationTransformationElement *pThis = static_cast<TranslationTransformationElement *>(this);

    pThis->execSync(static_cast<TranslationTransformationElement *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TranslationTransformationElementBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TranslationTransformationElement *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TranslationTransformationElement *>(pRefAspect),
                  dynamic_cast<const TranslationTransformationElement *>(this));

    return returnValue;
}
#endif

void TranslationTransformationElementBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

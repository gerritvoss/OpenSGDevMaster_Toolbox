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
 **     class ScreenTransform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGNode.h"                    // Beacon Class

#include "OSGScreenTransformBase.h"
#include "OSGScreenTransform.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ScreenTransform
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          ScreenTransformBase::_sfBeacon
    
*/

/*! \var bool            ScreenTransformBase::_sfInvertWorldTransform
    
*/

/*! \var bool            ScreenTransformBase::_sfInvertViewTransform
    
*/

/*! \var bool            ScreenTransformBase::_sfApplyBeaconRotation
    
*/

/*! \var bool            ScreenTransformBase::_sfApplyBeaconScreenTranslation
    
*/

/*! \var Matrix          ScreenTransformBase::_sfView
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<ScreenTransform *, nsOSG>::_type(
    "ScreenTransformPtr", 
    "GroupPtr", 
    ScreenTransform::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(ScreenTransform *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ScreenTransform *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ScreenTransform *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ScreenTransformBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "Beacon",
        "",
        BeaconFieldId, BeaconFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScreenTransform::editHandleBeacon),
        static_cast<FieldGetMethodSig >(&ScreenTransform::getHandleBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "InvertWorldTransform",
        "",
        InvertWorldTransformFieldId, InvertWorldTransformFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScreenTransform::editHandleInvertWorldTransform),
        static_cast<FieldGetMethodSig >(&ScreenTransform::getHandleInvertWorldTransform));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "InvertViewTransform",
        "",
        InvertViewTransformFieldId, InvertViewTransformFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScreenTransform::editHandleInvertViewTransform),
        static_cast<FieldGetMethodSig >(&ScreenTransform::getHandleInvertViewTransform));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ApplyBeaconRotation",
        "",
        ApplyBeaconRotationFieldId, ApplyBeaconRotationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScreenTransform::editHandleApplyBeaconRotation),
        static_cast<FieldGetMethodSig >(&ScreenTransform::getHandleApplyBeaconRotation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ApplyBeaconScreenTranslation",
        "",
        ApplyBeaconScreenTranslationFieldId, ApplyBeaconScreenTranslationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScreenTransform::editHandleApplyBeaconScreenTranslation),
        static_cast<FieldGetMethodSig >(&ScreenTransform::getHandleApplyBeaconScreenTranslation));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "View",
        "",
        ViewFieldId, ViewFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ScreenTransform::editHandleView),
        static_cast<FieldGetMethodSig >(&ScreenTransform::getHandleView));

    oType.addInitialDesc(pDesc);
}


ScreenTransformBase::TypeObject ScreenTransformBase::_type(
    ScreenTransformBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&ScreenTransformBase::createEmptyLocal),
    ScreenTransform::initMethod,
    ScreenTransform::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ScreenTransform::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ScreenTransform\"\n"
    "    parent=\"Group\"\n"
    "    library=\"Group\"\n"
    "    structure=\"concrete\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    "    >\n"
    "  <Field\n"
    "      name=\"Beacon\"\n"
    "      type=\"Node\"\n"
    "      category=\"weakpointer\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"InvertWorldTransform\"\n"
    "      type=\"bool\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"true\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"InvertViewTransform\"\n"
    "      type=\"bool\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"true\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"ApplyBeaconRotation\"\n"
    "      type=\"bool\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"true\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"ApplyBeaconScreenTranslation\"\n"
    "      type=\"bool\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"true\"\n"
    "      >\n"
    "  </Field>\n"
    "  <Field\n"
    "      name=\"View\"\n"
    "      type=\"Matrix\"\n"
    "      category=\"data\"\n"
    "      cardinality=\"single\"\n"
    "      visibility=\"external\"\n"
    "      access=\"public\"\n"
    "      defaultValue=\"1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f\"\n"
    "      >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScreenTransformBase::getType(void)
{
    return _type;
}

const FieldContainerType &ScreenTransformBase::getType(void) const
{
    return _type;
}

UInt32 ScreenTransformBase::getContainerSize(void) const
{
    return sizeof(ScreenTransform);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ScreenTransform::_sfBeacon field.
const SFWeakNodePtr *ScreenTransformBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}

SFWeakNodePtr       *ScreenTransformBase::editSFBeacon         (void)
{
    editSField(BeaconFieldMask);

    return &_sfBeacon;
}

SFBool *ScreenTransformBase::editSFInvertWorldTransform(void)
{
    editSField(InvertWorldTransformFieldMask);

    return &_sfInvertWorldTransform;
}

const SFBool *ScreenTransformBase::getSFInvertWorldTransform(void) const
{
    return &_sfInvertWorldTransform;
}


SFBool *ScreenTransformBase::editSFInvertViewTransform(void)
{
    editSField(InvertViewTransformFieldMask);

    return &_sfInvertViewTransform;
}

const SFBool *ScreenTransformBase::getSFInvertViewTransform(void) const
{
    return &_sfInvertViewTransform;
}


SFBool *ScreenTransformBase::editSFApplyBeaconRotation(void)
{
    editSField(ApplyBeaconRotationFieldMask);

    return &_sfApplyBeaconRotation;
}

const SFBool *ScreenTransformBase::getSFApplyBeaconRotation(void) const
{
    return &_sfApplyBeaconRotation;
}


SFBool *ScreenTransformBase::editSFApplyBeaconScreenTranslation(void)
{
    editSField(ApplyBeaconScreenTranslationFieldMask);

    return &_sfApplyBeaconScreenTranslation;
}

const SFBool *ScreenTransformBase::getSFApplyBeaconScreenTranslation(void) const
{
    return &_sfApplyBeaconScreenTranslation;
}


SFMatrix *ScreenTransformBase::editSFView(void)
{
    editSField(ViewFieldMask);

    return &_sfView;
}

const SFMatrix *ScreenTransformBase::getSFView(void) const
{
    return &_sfView;
}






/*------------------------------ access -----------------------------------*/

UInt32 ScreenTransformBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }
    if(FieldBits::NoField != (InvertWorldTransformFieldMask & whichField))
    {
        returnValue += _sfInvertWorldTransform.getBinSize();
    }
    if(FieldBits::NoField != (InvertViewTransformFieldMask & whichField))
    {
        returnValue += _sfInvertViewTransform.getBinSize();
    }
    if(FieldBits::NoField != (ApplyBeaconRotationFieldMask & whichField))
    {
        returnValue += _sfApplyBeaconRotation.getBinSize();
    }
    if(FieldBits::NoField != (ApplyBeaconScreenTranslationFieldMask & whichField))
    {
        returnValue += _sfApplyBeaconScreenTranslation.getBinSize();
    }
    if(FieldBits::NoField != (ViewFieldMask & whichField))
    {
        returnValue += _sfView.getBinSize();
    }

    return returnValue;
}

void ScreenTransformBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InvertWorldTransformFieldMask & whichField))
    {
        _sfInvertWorldTransform.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InvertViewTransformFieldMask & whichField))
    {
        _sfInvertViewTransform.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ApplyBeaconRotationFieldMask & whichField))
    {
        _sfApplyBeaconRotation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ApplyBeaconScreenTranslationFieldMask & whichField))
    {
        _sfApplyBeaconScreenTranslation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ViewFieldMask & whichField))
    {
        _sfView.copyToBin(pMem);
    }
}

void ScreenTransformBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        editSField(BeaconFieldMask);
        _sfBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InvertWorldTransformFieldMask & whichField))
    {
        editSField(InvertWorldTransformFieldMask);
        _sfInvertWorldTransform.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InvertViewTransformFieldMask & whichField))
    {
        editSField(InvertViewTransformFieldMask);
        _sfInvertViewTransform.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ApplyBeaconRotationFieldMask & whichField))
    {
        editSField(ApplyBeaconRotationFieldMask);
        _sfApplyBeaconRotation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ApplyBeaconScreenTranslationFieldMask & whichField))
    {
        editSField(ApplyBeaconScreenTranslationFieldMask);
        _sfApplyBeaconScreenTranslation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ViewFieldMask & whichField))
    {
        editSField(ViewFieldMask);
        _sfView.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ScreenTransformTransitPtr ScreenTransformBase::createLocal(BitVector bFlags)
{
    ScreenTransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ScreenTransform>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ScreenTransformTransitPtr ScreenTransformBase::createDependent(BitVector bFlags)
{
    ScreenTransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ScreenTransform>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ScreenTransformTransitPtr ScreenTransformBase::create(void)
{
    ScreenTransformTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ScreenTransform>(tmpPtr);
    }

    return fc;
}

ScreenTransform *ScreenTransformBase::createEmptyLocal(BitVector bFlags)
{
    ScreenTransform *returnValue;

    newPtr<ScreenTransform>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ScreenTransform *ScreenTransformBase::createEmpty(void)
{
    ScreenTransform *returnValue;

    newPtr<ScreenTransform>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ScreenTransformBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ScreenTransform *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScreenTransform *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScreenTransformBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ScreenTransform *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScreenTransform *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScreenTransformBase::shallowCopy(void) const
{
    ScreenTransform *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ScreenTransform *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ScreenTransformBase::ScreenTransformBase(void) :
    Inherited(),
    _sfBeacon                 (NULL),
    _sfInvertWorldTransform   (bool(true)),
    _sfInvertViewTransform    (bool(true)),
    _sfApplyBeaconRotation    (bool(true)),
    _sfApplyBeaconScreenTranslation(bool(true)),
    _sfView                   (Matrix(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f))
{
}

ScreenTransformBase::ScreenTransformBase(const ScreenTransformBase &source) :
    Inherited(source),
    _sfBeacon                 (NULL),
    _sfInvertWorldTransform   (source._sfInvertWorldTransform   ),
    _sfInvertViewTransform    (source._sfInvertViewTransform    ),
    _sfApplyBeaconRotation    (source._sfApplyBeaconRotation    ),
    _sfApplyBeaconScreenTranslation(source._sfApplyBeaconScreenTranslation),
    _sfView                   (source._sfView                   )
{
}


/*-------------------------- destructors ----------------------------------*/

ScreenTransformBase::~ScreenTransformBase(void)
{
}

void ScreenTransformBase::onCreate(const ScreenTransform *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ScreenTransform *pThis = static_cast<ScreenTransform *>(this);

        pThis->setBeacon(source->getBeacon());
    }
}

GetFieldHandlePtr ScreenTransformBase::getHandleBeacon          (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             const_cast<ScreenTransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScreenTransformBase::editHandleBeacon         (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfBeacon,
             this->getType().getFieldDesc(BeaconFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ScreenTransform::setBeacon,
                    static_cast<ScreenTransform *>(this), _1));

    editSField(BeaconFieldMask);

    return returnValue;
}

GetFieldHandlePtr ScreenTransformBase::getHandleInvertWorldTransform (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfInvertWorldTransform,
             this->getType().getFieldDesc(InvertWorldTransformFieldId),
             const_cast<ScreenTransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScreenTransformBase::editHandleInvertWorldTransform(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfInvertWorldTransform,
             this->getType().getFieldDesc(InvertWorldTransformFieldId),
             this));


    editSField(InvertWorldTransformFieldMask);

    return returnValue;
}

GetFieldHandlePtr ScreenTransformBase::getHandleInvertViewTransform (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfInvertViewTransform,
             this->getType().getFieldDesc(InvertViewTransformFieldId),
             const_cast<ScreenTransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScreenTransformBase::editHandleInvertViewTransform(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfInvertViewTransform,
             this->getType().getFieldDesc(InvertViewTransformFieldId),
             this));


    editSField(InvertViewTransformFieldMask);

    return returnValue;
}

GetFieldHandlePtr ScreenTransformBase::getHandleApplyBeaconRotation (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfApplyBeaconRotation,
             this->getType().getFieldDesc(ApplyBeaconRotationFieldId),
             const_cast<ScreenTransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScreenTransformBase::editHandleApplyBeaconRotation(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfApplyBeaconRotation,
             this->getType().getFieldDesc(ApplyBeaconRotationFieldId),
             this));


    editSField(ApplyBeaconRotationFieldMask);

    return returnValue;
}

GetFieldHandlePtr ScreenTransformBase::getHandleApplyBeaconScreenTranslation (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfApplyBeaconScreenTranslation,
             this->getType().getFieldDesc(ApplyBeaconScreenTranslationFieldId),
             const_cast<ScreenTransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScreenTransformBase::editHandleApplyBeaconScreenTranslation(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfApplyBeaconScreenTranslation,
             this->getType().getFieldDesc(ApplyBeaconScreenTranslationFieldId),
             this));


    editSField(ApplyBeaconScreenTranslationFieldMask);

    return returnValue;
}

GetFieldHandlePtr ScreenTransformBase::getHandleView            (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfView,
             this->getType().getFieldDesc(ViewFieldId),
             const_cast<ScreenTransformBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ScreenTransformBase::editHandleView           (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfView,
             this->getType().getFieldDesc(ViewFieldId),
             this));


    editSField(ViewFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ScreenTransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ScreenTransform *pThis = static_cast<ScreenTransform *>(this);

    pThis->execSync(static_cast<ScreenTransform *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ScreenTransformBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ScreenTransform *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ScreenTransform *>(pRefAspect),
                  dynamic_cast<const ScreenTransform *>(this));

    return returnValue;
}
#endif

void ScreenTransformBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ScreenTransform *>(this)->setBeacon(NULL);


}


OSG_END_NAMESPACE

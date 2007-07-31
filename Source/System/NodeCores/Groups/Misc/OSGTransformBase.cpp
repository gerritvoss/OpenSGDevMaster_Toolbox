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
 **     class Transform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETRANSFORMINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTransformBase.h"
#include "OSGTransform.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Transform
    The basic Transformation class. Just keeps a single matrix. For more complex
    behaviour, see its descendents.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Matrixr         TransformBase::_sfMatrix
    The transformation matrix.
*/


void TransformBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrixr::Description(
        SFMatrixr::getClassType(),
        "matrix",
        "The transformation matrix.\n",
        MatrixFieldId, MatrixFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TransformBase::editHandleMatrix),
        reinterpret_cast<FieldGetMethodSig >(&TransformBase::getHandleMatrix));

    oType.addInitialDesc(pDesc);
}


TransformBase::TypeObject TransformBase::_type(
    TransformBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TransformBase::createEmpty,
    Transform::initMethod,
    (InitalInsertDescFunc) &TransformBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Transform\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "The basic Transformation class. Just keeps a single matrix. For more complex\n"
    "behaviour, see its descendents.\n"
    "\t<Field\n"
    "\t\tname=\"matrix\"\n"
    "\t\ttype=\"Matrixr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe transformation matrix.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The basic Transformation class. Just keeps a single matrix. For more complex\n"
    "behaviour, see its descendents.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TransformBase::getType(void)
{
    return _type;
}

const FieldContainerType &TransformBase::getType(void) const
{
    return _type;
}

UInt32 TransformBase::getContainerSize(void) const
{
    return sizeof(Transform);
}

/*------------------------- decorator get ------------------------------*/


SFMatrixr *TransformBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrixr *TransformBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}

#ifdef OSG_1_GET_COMPAT
SFMatrixr           *TransformBase::getSFMatrix         (void)
{
    return this->editSFMatrix         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 TransformBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }

    return returnValue;
}

void TransformBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
}

void TransformBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TransformPtr TransformBase::create(void)
{
    TransformPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<Transform::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
TransformPtr TransformBase::createEmpty(void)
{
    TransformPtr returnValue;

    newPtr<Transform>(returnValue);

    return returnValue;
}

FieldContainerPtr TransformBase::shallowCopy(void) const
{
    TransformPtr returnValue;

    newPtr(returnValue, dynamic_cast<const Transform *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TransformBase::TransformBase(void) :
    Inherited(),
    _sfMatrix                 ()
{
}

TransformBase::TransformBase(const TransformBase &source) :
    Inherited(source),
    _sfMatrix                 (source._sfMatrix                 )
{
}


/*-------------------------- destructors ----------------------------------*/

TransformBase::~TransformBase(void)
{
}


SFMatrixr::GetHandlePtr TransformBase::getHandleMatrix          (void)
{
    SFMatrixr::GetHandlePtr returnValue(
        new  SFMatrixr::GetHandle(
             &_sfMatrix, 
             this->getType().getFieldDesc(MatrixFieldId)));

    return returnValue;
}

SFMatrixr::EditHandlePtr TransformBase::editHandleMatrix         (void)
{
    SFMatrixr::EditHandlePtr returnValue(
        new  SFMatrixr::EditHandle(
             &_sfMatrix, 
             this->getType().getFieldDesc(MatrixFieldId)));

    editSField(MatrixFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TransformBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TransformBase::createAspectCopy(void) const
{
    TransformPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Transform *>(this));

    return returnValue;
}
#endif

void TransformBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TransformPtr>::_type("TransformPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TransformPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, TransformPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, TransformPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

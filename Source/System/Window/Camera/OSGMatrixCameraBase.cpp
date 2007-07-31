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
 **     class MatrixCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATRIXCAMERAINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGMatrixCameraBase.h"
#include "OSGMatrixCamera.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MatrixCamera
    \ingroup GrpSystemWindowCameras

    The Matrix Camera class, see \ref PageSystemWindowCameraMatrix for
    a description.

    The used matrices are stored in the _sfModelviewMatrix and
    _sfProjectionMatrix Fields.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Matrix          MatrixCameraBase::_sfProjectionMatrix
    
*/

/*! \var Matrix          MatrixCameraBase::_sfModelviewMatrix
    
*/

/*! \var bool            MatrixCameraBase::_sfUseBeacon
    Use beacon if set to get the modelview matrix
*/


void MatrixCameraBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "ProjectionMatrix",
        "",
        ProjectionMatrixFieldId, ProjectionMatrixFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraBase::editHandleProjectionMatrix),
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraBase::getHandleProjectionMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "ModelviewMatrix",
        "",
        ModelviewMatrixFieldId, ModelviewMatrixFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraBase::editHandleModelviewMatrix),
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraBase::getHandleModelviewMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "useBeacon",
        "Use beacon if set to get the modelview matrix\n",
        UseBeaconFieldId, UseBeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MatrixCameraBase::editHandleUseBeacon),
        reinterpret_cast<FieldGetMethodSig >(&MatrixCameraBase::getHandleUseBeacon));

    oType.addInitialDesc(pDesc);
}


MatrixCameraBase::TypeObject MatrixCameraBase::_type(
    MatrixCameraBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MatrixCameraBase::createEmpty,
    MatrixCamera::initMethod,
    (InitalInsertDescFunc) &MatrixCameraBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MatrixCamera\"\n"
    "\tparent=\"Camera\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Matrix Camera class, see \\ref PageSystemWindowCameraMatrix for\n"
    "a description.\n"
    "\n"
    "The used matrices are stored in the _sfModelviewMatrix and\n"
    "_sfProjectionMatrix Fields.\n"
    "\t<Field\n"
    "\t\tname=\"ProjectionMatrix\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ModelviewMatrix\"\n"
    "\t\ttype=\"Matrix\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "        name=\"useBeacon\"\n"
    "        type=\"bool\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    Use beacon if set to get the modelview matrix\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Matrix Camera class, see \\ref PageSystemWindowCameraMatrix for\n"
    "a description.\n"
    "\n"
    "The used matrices are stored in the _sfModelviewMatrix and\n"
    "_sfProjectionMatrix Fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MatrixCameraBase::getType(void)
{
    return _type;
}

const FieldContainerType &MatrixCameraBase::getType(void) const
{
    return _type;
}

UInt32 MatrixCameraBase::getContainerSize(void) const
{
    return sizeof(MatrixCamera);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *MatrixCameraBase::editSFProjectionMatrix(void)
{
    editSField(ProjectionMatrixFieldMask);

    return &_sfProjectionMatrix;
}

const SFMatrix *MatrixCameraBase::getSFProjectionMatrix(void) const
{
    return &_sfProjectionMatrix;
}

#ifdef OSG_1_GET_COMPAT
SFMatrix            *MatrixCameraBase::getSFProjectionMatrix(void)
{
    return this->editSFProjectionMatrix();
}
#endif

SFMatrix *MatrixCameraBase::editSFModelviewMatrix(void)
{
    editSField(ModelviewMatrixFieldMask);

    return &_sfModelviewMatrix;
}

const SFMatrix *MatrixCameraBase::getSFModelviewMatrix(void) const
{
    return &_sfModelviewMatrix;
}

#ifdef OSG_1_GET_COMPAT
SFMatrix            *MatrixCameraBase::getSFModelviewMatrix(void)
{
    return this->editSFModelviewMatrix();
}
#endif

SFBool *MatrixCameraBase::editSFUseBeacon(void)
{
    editSField(UseBeaconFieldMask);

    return &_sfUseBeacon;
}

const SFBool *MatrixCameraBase::getSFUseBeacon(void) const
{
    return &_sfUseBeacon;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *MatrixCameraBase::getSFUseBeacon      (void)
{
    return this->editSFUseBeacon      ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 MatrixCameraBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
    {
        returnValue += _sfProjectionMatrix.getBinSize();
    }
    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
    {
        returnValue += _sfModelviewMatrix.getBinSize();
    }
    if(FieldBits::NoField != (UseBeaconFieldMask & whichField))
    {
        returnValue += _sfUseBeacon.getBinSize();
    }

    return returnValue;
}

void MatrixCameraBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
    {
        _sfProjectionMatrix.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
    {
        _sfModelviewMatrix.copyToBin(pMem);
    }
    if(FieldBits::NoField != (UseBeaconFieldMask & whichField))
    {
        _sfUseBeacon.copyToBin(pMem);
    }
}

void MatrixCameraBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ProjectionMatrixFieldMask & whichField))
    {
        _sfProjectionMatrix.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ModelviewMatrixFieldMask & whichField))
    {
        _sfModelviewMatrix.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (UseBeaconFieldMask & whichField))
    {
        _sfUseBeacon.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MatrixCameraPtr MatrixCameraBase::create(void)
{
    MatrixCameraPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<MatrixCamera::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
MatrixCameraPtr MatrixCameraBase::createEmpty(void)
{
    MatrixCameraPtr returnValue;

    newPtr<MatrixCamera>(returnValue);

    return returnValue;
}

FieldContainerPtr MatrixCameraBase::shallowCopy(void) const
{
    MatrixCameraPtr returnValue;

    newPtr(returnValue, dynamic_cast<const MatrixCamera *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MatrixCameraBase::MatrixCameraBase(void) :
    Inherited(),
    _sfProjectionMatrix       (),
    _sfModelviewMatrix        (),
    _sfUseBeacon              ()
{
}

MatrixCameraBase::MatrixCameraBase(const MatrixCameraBase &source) :
    Inherited(source),
    _sfProjectionMatrix       (source._sfProjectionMatrix       ),
    _sfModelviewMatrix        (source._sfModelviewMatrix        ),
    _sfUseBeacon              (source._sfUseBeacon              )
{
}


/*-------------------------- destructors ----------------------------------*/

MatrixCameraBase::~MatrixCameraBase(void)
{
}


SFMatrix::GetHandlePtr MatrixCameraBase::getHandleProjectionMatrix (void)
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfProjectionMatrix, 
             this->getType().getFieldDesc(ProjectionMatrixFieldId)));

    return returnValue;
}

SFMatrix::EditHandlePtr MatrixCameraBase::editHandleProjectionMatrix(void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfProjectionMatrix, 
             this->getType().getFieldDesc(ProjectionMatrixFieldId)));

    editSField(ProjectionMatrixFieldMask);

    return returnValue;
}

SFMatrix::GetHandlePtr MatrixCameraBase::getHandleModelviewMatrix (void)
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfModelviewMatrix, 
             this->getType().getFieldDesc(ModelviewMatrixFieldId)));

    return returnValue;
}

SFMatrix::EditHandlePtr MatrixCameraBase::editHandleModelviewMatrix(void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfModelviewMatrix, 
             this->getType().getFieldDesc(ModelviewMatrixFieldId)));

    editSField(ModelviewMatrixFieldMask);

    return returnValue;
}

SFBool::GetHandlePtr MatrixCameraBase::getHandleUseBeacon       (void)
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseBeacon, 
             this->getType().getFieldDesc(UseBeaconFieldId)));

    return returnValue;
}

SFBool::EditHandlePtr MatrixCameraBase::editHandleUseBeacon      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseBeacon, 
             this->getType().getFieldDesc(UseBeaconFieldId)));

    editSField(UseBeaconFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MatrixCameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MatrixCameraBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MatrixCameraBase::createAspectCopy(void) const
{
    MatrixCameraPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MatrixCamera *>(this));

    return returnValue;
}
#endif

void MatrixCameraBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MatrixCameraPtr>::_type("MatrixCameraPtr", "CameraPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MatrixCameraPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, MatrixCameraPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, MatrixCameraPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

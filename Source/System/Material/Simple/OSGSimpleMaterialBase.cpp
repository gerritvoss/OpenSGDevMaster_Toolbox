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
 **     class SimpleMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESIMPLEMATERIALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // ColorMaterial default header


#include "OSGSimpleMaterialBase.h"
#include "OSGSimpleMaterial.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SimpleMaterial
    \ingroup GrpSystemMaterial

    The simple material class. See \ref PageSystemMaterialSimpleMaterial for a
    description.

    This material wraps the standard calls to glMaterial() in
    OSG::SimpleMaterial::_sfAmbient, OSG::SimpleMaterial::_sfDiffuse, 
    OSG::SimpleMaterial::_sfEmission, OSG::SimpleMaterial::_sfSpecular, 
    OSG::SimpleMaterial::_sfShininess. In addition it supports transparency 
    (OSG::SimpleMaterial::_sfTransparency), can switch lighting 
    (OSG::SimpleMaterial::_sfLit) and the color material 
    (OSG::SimpleMaterial::_sfColorMaterial).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color3r         SimpleMaterialBase::_sfAmbient
    The ambient color for the material.
*/

/*! \var Color3r         SimpleMaterialBase::_sfDiffuse
    The diffuse color for the material.
*/

/*! \var Color3r         SimpleMaterialBase::_sfSpecular
    The color used for the specular highlight on the object.
*/

/*! \var Real            SimpleMaterialBase::_sfShininess
    The shininess value to use when lighting the object.  Higher values equal smaller and brighter highlights.
*/

/*! \var Color3r         SimpleMaterialBase::_sfEmission
    
*/

/*! \var Real            SimpleMaterialBase::_sfTransparency
    Defines how transparent objects are rendered with this material.
*/

/*! \var bool            SimpleMaterialBase::_sfLit
    
*/

/*! \var GLenum          SimpleMaterialBase::_sfColorMaterial
    Defines which color material mode this material affects.
*/


void SimpleMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFColor3r::Description(
        SFColor3r::getClassType(),
        "ambient",
        "The ambient color for the material.\n",
        AmbientFieldId, AmbientFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleAmbient),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleAmbient));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3r::Description(
        SFColor3r::getClassType(),
        "diffuse",
        "The diffuse color for the material.\n",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleDiffuse),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleDiffuse));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3r::Description(
        SFColor3r::getClassType(),
        "specular",
        "The color used for the specular highlight on the object.\n",
        SpecularFieldId, SpecularFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleSpecular),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleSpecular));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "shininess",
        "The shininess value to use when lighting the object.  Higher values equal smaller and brighter highlights.\n",
        ShininessFieldId, ShininessFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleShininess),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleShininess));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor3r::Description(
        SFColor3r::getClassType(),
        "emission",
        "",
        EmissionFieldId, EmissionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleEmission),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleEmission));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "transparency",
        "Defines how transparent objects are rendered with this material.\n",
        TransparencyFieldId, TransparencyFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleTransparency),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleTransparency));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "lit",
        "",
        LitFieldId, LitFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleLit),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleLit));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "colorMaterial",
        "Defines which color material mode this material affects.\n",
        ColorMaterialFieldId, ColorMaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SimpleMaterialBase::editHandleColorMaterial),
        reinterpret_cast<FieldGetMethodSig >(&SimpleMaterialBase::getHandleColorMaterial));

    oType.addInitialDesc(pDesc);
}


SimpleMaterialBase::TypeObject SimpleMaterialBase::_type(
    SimpleMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SimpleMaterialBase::createEmpty,
    SimpleMaterial::initMethod,
    (InitalInsertDescFunc) &SimpleMaterialBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SimpleMaterial\"\n"
    "\tparent=\"ChunkMaterial\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The simple material class. See \\ref PageSystemMaterialSimpleMaterial for a\n"
    "description.\n"
    "\n"
    "This material wraps the standard calls to glMaterial() in\n"
    "OSG::SimpleMaterial::_sfAmbient, OSG::SimpleMaterial::_sfDiffuse, \n"
    "OSG::SimpleMaterial::_sfEmission, OSG::SimpleMaterial::_sfSpecular, \n"
    "OSG::SimpleMaterial::_sfShininess. In addition it supports transparency \n"
    "(OSG::SimpleMaterial::_sfTransparency), can switch lighting \n"
    "(OSG::SimpleMaterial::_sfLit) and the color material \n"
    "(OSG::SimpleMaterial::_sfColorMaterial).\n"
    "\t<Field\n"
    "\t\tname=\"ambient\"\n"
    "\t\ttype=\"Color3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f\"\n"
    "\t>\n"
    "        The ambient color for the material.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"diffuse\"\n"
    "\t\ttype=\"Color3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f\"\n"
    "\t>\n"
    "        The diffuse color for the material.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"specular\"\n"
    "\t\ttype=\"Color3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f\"\n"
    "\t>\n"
    "        The color used for the specular highlight on the object.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"shininess\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f\"\n"
    "                min_value=\"0.0\"\n"
    "                max_value=\"128.0\"\n"
    "\t>\n"
    "        The shininess value to use when lighting the object.  Higher values equal smaller and brighter highlights.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"emission\"\n"
    "\t\ttype=\"Color3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"transparency\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f\"\n"
    "                min_value=\"0.0\"\n"
    "                max_value=\"1.0\"\n"
    "\t>\n"
    "        Defines how transparent objects are rendered with this material.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lit\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"colorMaterial\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_DIFFUSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "                potential_values=\"GL_AMBIENT,GL_DIFFUSE,GL_SPECULAR,GL_AMBIENT_AND_DIFFUSE,GL_EMISSION\"\n"
    "\t>\n"
    "        Defines which color material mode this material affects.\n"
    "\t</Field>\n"
    "</FieldContainer>\n"
    "\n"
    "\n",
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The simple material class. See \\ref PageSystemMaterialSimpleMaterial for a\n"
    "description.\n"
    "\n"
    "This material wraps the standard calls to glMaterial() in\n"
    "OSG::SimpleMaterial::_sfAmbient, OSG::SimpleMaterial::_sfDiffuse, \n"
    "OSG::SimpleMaterial::_sfEmission, OSG::SimpleMaterial::_sfSpecular, \n"
    "OSG::SimpleMaterial::_sfShininess. In addition it supports transparency \n"
    "(OSG::SimpleMaterial::_sfTransparency), can switch lighting \n"
    "(OSG::SimpleMaterial::_sfLit) and the color material \n"
    "(OSG::SimpleMaterial::_sfColorMaterial).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SimpleMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &SimpleMaterialBase::getType(void) const
{
    return _type;
}

UInt32 SimpleMaterialBase::getContainerSize(void) const
{
    return sizeof(SimpleMaterial);
}

/*------------------------- decorator get ------------------------------*/


SFColor3r *SimpleMaterialBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor3r *SimpleMaterialBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}

#ifdef OSG_1_GET_COMPAT
SFColor3r           *SimpleMaterialBase::getSFAmbient        (void)
{
    return this->editSFAmbient        ();
}
#endif

SFColor3r *SimpleMaterialBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor3r *SimpleMaterialBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}

#ifdef OSG_1_GET_COMPAT
SFColor3r           *SimpleMaterialBase::getSFDiffuse        (void)
{
    return this->editSFDiffuse        ();
}
#endif

SFColor3r *SimpleMaterialBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor3r *SimpleMaterialBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}

#ifdef OSG_1_GET_COMPAT
SFColor3r           *SimpleMaterialBase::getSFSpecular       (void)
{
    return this->editSFSpecular       ();
}
#endif

SFReal *SimpleMaterialBase::editSFShininess(void)
{
    editSField(ShininessFieldMask);

    return &_sfShininess;
}

const SFReal *SimpleMaterialBase::getSFShininess(void) const
{
    return &_sfShininess;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *SimpleMaterialBase::getSFShininess      (void)
{
    return this->editSFShininess      ();
}
#endif

SFColor3r *SimpleMaterialBase::editSFEmission(void)
{
    editSField(EmissionFieldMask);

    return &_sfEmission;
}

const SFColor3r *SimpleMaterialBase::getSFEmission(void) const
{
    return &_sfEmission;
}

#ifdef OSG_1_GET_COMPAT
SFColor3r           *SimpleMaterialBase::getSFEmission       (void)
{
    return this->editSFEmission       ();
}
#endif

SFReal *SimpleMaterialBase::editSFTransparency(void)
{
    editSField(TransparencyFieldMask);

    return &_sfTransparency;
}

const SFReal *SimpleMaterialBase::getSFTransparency(void) const
{
    return &_sfTransparency;
}

#ifdef OSG_1_GET_COMPAT
SFReal              *SimpleMaterialBase::getSFTransparency   (void)
{
    return this->editSFTransparency   ();
}
#endif

SFBool *SimpleMaterialBase::editSFLit(void)
{
    editSField(LitFieldMask);

    return &_sfLit;
}

const SFBool *SimpleMaterialBase::getSFLit(void) const
{
    return &_sfLit;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *SimpleMaterialBase::getSFLit            (void)
{
    return this->editSFLit            ();
}
#endif

SFGLenum *SimpleMaterialBase::editSFColorMaterial(void)
{
    editSField(ColorMaterialFieldMask);

    return &_sfColorMaterial;
}

const SFGLenum *SimpleMaterialBase::getSFColorMaterial(void) const
{
    return &_sfColorMaterial;
}

#ifdef OSG_1_GET_COMPAT
SFGLenum            *SimpleMaterialBase::getSFColorMaterial  (void)
{
    return this->editSFColorMaterial  ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 SimpleMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        returnValue += _sfShininess.getBinSize();
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        returnValue += _sfEmission.getBinSize();
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        returnValue += _sfTransparency.getBinSize();
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        returnValue += _sfLit.getBinSize();
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        returnValue += _sfColorMaterial.getBinSize();
    }

    return returnValue;
}

void SimpleMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        _sfTransparency.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyToBin(pMem);
    }
}

void SimpleMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TransparencyFieldMask & whichField))
    {
        _sfTransparency.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SimpleMaterialPtr SimpleMaterialBase::create(void)
{
    SimpleMaterialPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<SimpleMaterial::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
SimpleMaterialPtr SimpleMaterialBase::createEmpty(void)
{
    SimpleMaterialPtr returnValue;

    newPtr<SimpleMaterial>(returnValue);

    return returnValue;
}

FieldContainerPtr SimpleMaterialBase::shallowCopy(void) const
{
    SimpleMaterialPtr returnValue;

    newPtr(returnValue, dynamic_cast<const SimpleMaterial *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SimpleMaterialBase::SimpleMaterialBase(void) :
    Inherited(),
    _sfAmbient                (Color3r(0.f,0.f,0.f)),
    _sfDiffuse                (Color3r(0.f,0.f,0.f)),
    _sfSpecular               (Color3r(0.f,0.f,0.f)),
    _sfShininess              (Real(1.f)),
    _sfEmission               (Color3r(0.f,0.f,0.f)),
    _sfTransparency           (Real(0.f)),
    _sfLit                    (bool(true)),
    _sfColorMaterial          (GLenum(GL_DIFFUSE))
{
}

SimpleMaterialBase::SimpleMaterialBase(const SimpleMaterialBase &source) :
    Inherited(source),
    _sfAmbient                (source._sfAmbient                ),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfShininess              (source._sfShininess              ),
    _sfEmission               (source._sfEmission               ),
    _sfTransparency           (source._sfTransparency           ),
    _sfLit                    (source._sfLit                    ),
    _sfColorMaterial          (source._sfColorMaterial          )
{
}


/*-------------------------- destructors ----------------------------------*/

SimpleMaterialBase::~SimpleMaterialBase(void)
{
}


SFColor3r::GetHandlePtr SimpleMaterialBase::getHandleAmbient         (void)
{
    SFColor3r::GetHandlePtr returnValue(
        new  SFColor3r::GetHandle(
             &_sfAmbient, 
             this->getType().getFieldDesc(AmbientFieldId)));

    return returnValue;
}

SFColor3r::EditHandlePtr SimpleMaterialBase::editHandleAmbient        (void)
{
    SFColor3r::EditHandlePtr returnValue(
        new  SFColor3r::EditHandle(
             &_sfAmbient, 
             this->getType().getFieldDesc(AmbientFieldId)));

    editSField(AmbientFieldMask);

    return returnValue;
}

SFColor3r::GetHandlePtr SimpleMaterialBase::getHandleDiffuse         (void)
{
    SFColor3r::GetHandlePtr returnValue(
        new  SFColor3r::GetHandle(
             &_sfDiffuse, 
             this->getType().getFieldDesc(DiffuseFieldId)));

    return returnValue;
}

SFColor3r::EditHandlePtr SimpleMaterialBase::editHandleDiffuse        (void)
{
    SFColor3r::EditHandlePtr returnValue(
        new  SFColor3r::EditHandle(
             &_sfDiffuse, 
             this->getType().getFieldDesc(DiffuseFieldId)));

    editSField(DiffuseFieldMask);

    return returnValue;
}

SFColor3r::GetHandlePtr SimpleMaterialBase::getHandleSpecular        (void)
{
    SFColor3r::GetHandlePtr returnValue(
        new  SFColor3r::GetHandle(
             &_sfSpecular, 
             this->getType().getFieldDesc(SpecularFieldId)));

    return returnValue;
}

SFColor3r::EditHandlePtr SimpleMaterialBase::editHandleSpecular       (void)
{
    SFColor3r::EditHandlePtr returnValue(
        new  SFColor3r::EditHandle(
             &_sfSpecular, 
             this->getType().getFieldDesc(SpecularFieldId)));

    editSField(SpecularFieldMask);

    return returnValue;
}

SFReal::GetHandlePtr SimpleMaterialBase::getHandleShininess       (void)
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfShininess, 
             this->getType().getFieldDesc(ShininessFieldId)));

    return returnValue;
}

SFReal::EditHandlePtr SimpleMaterialBase::editHandleShininess      (void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfShininess, 
             this->getType().getFieldDesc(ShininessFieldId)));

    editSField(ShininessFieldMask);

    return returnValue;
}

SFColor3r::GetHandlePtr SimpleMaterialBase::getHandleEmission        (void)
{
    SFColor3r::GetHandlePtr returnValue(
        new  SFColor3r::GetHandle(
             &_sfEmission, 
             this->getType().getFieldDesc(EmissionFieldId)));

    return returnValue;
}

SFColor3r::EditHandlePtr SimpleMaterialBase::editHandleEmission       (void)
{
    SFColor3r::EditHandlePtr returnValue(
        new  SFColor3r::EditHandle(
             &_sfEmission, 
             this->getType().getFieldDesc(EmissionFieldId)));

    editSField(EmissionFieldMask);

    return returnValue;
}

SFReal::GetHandlePtr SimpleMaterialBase::getHandleTransparency    (void)
{
    SFReal::GetHandlePtr returnValue(
        new  SFReal::GetHandle(
             &_sfTransparency, 
             this->getType().getFieldDesc(TransparencyFieldId)));

    return returnValue;
}

SFReal::EditHandlePtr SimpleMaterialBase::editHandleTransparency   (void)
{
    SFReal::EditHandlePtr returnValue(
        new  SFReal::EditHandle(
             &_sfTransparency, 
             this->getType().getFieldDesc(TransparencyFieldId)));

    editSField(TransparencyFieldMask);

    return returnValue;
}

SFBool::GetHandlePtr SimpleMaterialBase::getHandleLit             (void)
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfLit, 
             this->getType().getFieldDesc(LitFieldId)));

    return returnValue;
}

SFBool::EditHandlePtr SimpleMaterialBase::editHandleLit            (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfLit, 
             this->getType().getFieldDesc(LitFieldId)));

    editSField(LitFieldMask);

    return returnValue;
}

SFGLenum::GetHandlePtr SimpleMaterialBase::getHandleColorMaterial   (void)
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfColorMaterial, 
             this->getType().getFieldDesc(ColorMaterialFieldId)));

    return returnValue;
}

SFGLenum::EditHandlePtr SimpleMaterialBase::editHandleColorMaterial  (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfColorMaterial, 
             this->getType().getFieldDesc(ColorMaterialFieldId)));

    editSField(ColorMaterialFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SimpleMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SimpleMaterialBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SimpleMaterialBase::createAspectCopy(void) const
{
    SimpleMaterialPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SimpleMaterial *>(this));

    return returnValue;
}
#endif

void SimpleMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SimpleMaterialPtr>::_type("SimpleMaterialPtr", "ChunkMaterialPtr");
#endif


OSG_END_NAMESPACE

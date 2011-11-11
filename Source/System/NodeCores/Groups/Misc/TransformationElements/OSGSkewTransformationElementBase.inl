/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class SkewTransformationElement!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &SkewTransformationElementBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SkewTransformationElementBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SkewTransformationElementBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SkewTransformationElement::_sfRotationAxis field.

inline
Vec3f &SkewTransformationElementBase::editRotationAxis(void)
{
    editSField(RotationAxisFieldMask);

    return _sfRotationAxis.getValue();
}

//! Get the value of the SkewTransformationElement::_sfRotationAxis field.
inline
const Vec3f &SkewTransformationElementBase::getRotationAxis(void) const
{
    return _sfRotationAxis.getValue();
}

//! Set the value of the SkewTransformationElement::_sfRotationAxis field.
inline
void SkewTransformationElementBase::setRotationAxis(const Vec3f &value)
{
    editSField(RotationAxisFieldMask);

    _sfRotationAxis.setValue(value);
}
//! Get the value of the SkewTransformationElement::_sfTranslationAxis field.

inline
Vec3f &SkewTransformationElementBase::editTranslationAxis(void)
{
    editSField(TranslationAxisFieldMask);

    return _sfTranslationAxis.getValue();
}

//! Get the value of the SkewTransformationElement::_sfTranslationAxis field.
inline
const Vec3f &SkewTransformationElementBase::getTranslationAxis(void) const
{
    return _sfTranslationAxis.getValue();
}

//! Set the value of the SkewTransformationElement::_sfTranslationAxis field.
inline
void SkewTransformationElementBase::setTranslationAxis(const Vec3f &value)
{
    editSField(TranslationAxisFieldMask);

    _sfTranslationAxis.setValue(value);
}
//! Get the value of the SkewTransformationElement::_sfAngle field.

inline
Real32 &SkewTransformationElementBase::editAngle(void)
{
    editSField(AngleFieldMask);

    return _sfAngle.getValue();
}

//! Get the value of the SkewTransformationElement::_sfAngle field.
inline
      Real32  SkewTransformationElementBase::getAngle(void) const
{
    return _sfAngle.getValue();
}

//! Set the value of the SkewTransformationElement::_sfAngle field.
inline
void SkewTransformationElementBase::setAngle(const Real32 value)
{
    editSField(AngleFieldMask);

    _sfAngle.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void SkewTransformationElementBase::execSync (      SkewTransformationElementBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RotationAxisFieldMask & whichField))
        _sfRotationAxis.syncWith(pFrom->_sfRotationAxis);

    if(FieldBits::NoField != (TranslationAxisFieldMask & whichField))
        _sfTranslationAxis.syncWith(pFrom->_sfTranslationAxis);

    if(FieldBits::NoField != (AngleFieldMask & whichField))
        _sfAngle.syncWith(pFrom->_sfAngle);
}
#endif


inline
const Char8 *SkewTransformationElementBase::getClassname(void)
{
    return "SkewTransformationElement";
}
OSG_GEN_CONTAINERPTR(SkewTransformationElement);

OSG_END_NAMESPACE


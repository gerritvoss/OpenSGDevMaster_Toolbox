/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class Stage!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &StageBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 StageBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 StageBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the Stage::_sfRenderTarget field.
inline
FrameBufferObjectPtr StageBase::getRenderTarget(void) const
{
    return _sfRenderTarget.getValue();
}

//! Set the value of the Stage::_sfRenderTarget field.
inline
void StageBase::setRenderTarget(const FrameBufferObjectPtr value)
{
    editSField(RenderTargetFieldMask);

    _sfRenderTarget.setValue(value);

}
//! Get the value of the Stage::_sfInheritedTarget field.

inline
bool &StageBase::editInheritedTarget(void)
{
    editSField(InheritedTargetFieldMask);

    return _sfInheritedTarget.getValue();
}

//! Get the value of the Stage::_sfInheritedTarget field.
inline
const bool &StageBase::getInheritedTarget(void) const
{
    return _sfInheritedTarget.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &StageBase::getInheritedTarget(void)
{
    return this->editInheritedTarget();
}
#endif

//! Set the value of the Stage::_sfInheritedTarget field.
inline
void StageBase::setInheritedTarget(const bool &value)
{
    editSField(InheritedTargetFieldMask);

    _sfInheritedTarget.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void StageBase::execSync (      StageBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RenderTargetFieldMask & whichField))
        _sfRenderTarget.syncWith(pFrom->_sfRenderTarget);

    if(FieldBits::NoField != (InheritedTargetFieldMask & whichField))
        _sfInheritedTarget.syncWith(pFrom->_sfInheritedTarget);
}
#endif


inline
Char8 *StageBase::getClassname(void)
{
    return "Stage";
}
OSG_GEN_CONTAINERPTR(Stage);

OSG_END_NAMESPACE


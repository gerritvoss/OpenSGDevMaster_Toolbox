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
 **     class Animation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AnimationBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 AnimationBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 AnimationBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the Animation::_sfTimeSensor field.
inline
AnimTimeSensor * AnimationBase::getTimeSensor(void) const
{
    return _sfTimeSensor.getValue();
}

//! Set the value of the Animation::_sfTimeSensor field.
inline
void AnimationBase::setTimeSensor(AnimTimeSensor * const value)
{
    editSField(TimeSensorFieldMask);

    _sfTimeSensor.setValue(value);
}

//! Get the value of the Animation::_sfTemplate field.
inline
AnimTemplate * AnimationBase::getTemplate(void) const
{
    return _sfTemplate.getValue();
}

//! Set the value of the Animation::_sfTemplate field.
inline
void AnimationBase::setTemplate(AnimTemplate * const value)
{
    editSField(TemplateFieldMask);

    _sfTemplate.setValue(value);
}
//! Get the value of the Animation::_sfEnabled field.

inline
bool &AnimationBase::editEnabled(void)
{
    editSField(EnabledFieldMask);

    return _sfEnabled.getValue();
}

//! Get the value of the Animation::_sfEnabled field.
inline
      bool  AnimationBase::getEnabled(void) const
{
    return _sfEnabled.getValue();
}

//! Set the value of the Animation::_sfEnabled field.
inline
void AnimationBase::setEnabled(const bool value)
{
    editSField(EnabledFieldMask);

    _sfEnabled.setValue(value);
}
//! Get the value of the Animation::_sfWeight field.

inline
Real32 &AnimationBase::editWeight(void)
{
    editSField(WeightFieldMask);

    return _sfWeight.getValue();
}

//! Get the value of the Animation::_sfWeight field.
inline
      Real32  AnimationBase::getWeight(void) const
{
    return _sfWeight.getValue();
}

//! Set the value of the Animation::_sfWeight field.
inline
void AnimationBase::setWeight(const Real32 value)
{
    editSField(WeightFieldMask);

    _sfWeight.setValue(value);
}

//! Get the value of the \a index element the Animation::_mfChannels field.
inline
AnimChannel * AnimationBase::getChannels(const UInt32 index) const
{
    return _mfChannels[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void AnimationBase::execSync (      AnimationBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TimeSensorFieldMask & whichField))
        _sfTimeSensor.syncWith(pFrom->_sfTimeSensor);

    if(FieldBits::NoField != (TemplateFieldMask & whichField))
        _sfTemplate.syncWith(pFrom->_sfTemplate);

    if(FieldBits::NoField != (ChannelsFieldMask & whichField))
        _mfChannels.syncWith(pFrom->_mfChannels,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pFrom->_sfEnabled);

    if(FieldBits::NoField != (WeightFieldMask & whichField))
        _sfWeight.syncWith(pFrom->_sfWeight);
}
#endif


inline
const Char8 *AnimationBase::getClassname(void)
{
    return "Animation";
}
OSG_GEN_CONTAINERPTR(Animation);

OSG_END_NAMESPACE

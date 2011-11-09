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
 **     class KeyEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &KeyEventDetailsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 KeyEventDetailsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 KeyEventDetailsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the KeyEventDetails::_sfKey field.

inline
UInt32 &KeyEventDetailsBase::editKey(void)
{
    editSField(KeyFieldMask);

    return _sfKey.getValue();
}

//! Get the value of the KeyEventDetails::_sfKey field.
inline
      UInt32  KeyEventDetailsBase::getKey(void) const
{
    return _sfKey.getValue();
}

//! Set the value of the KeyEventDetails::_sfKey field.
inline
void KeyEventDetailsBase::setKey(const UInt32 value)
{
    editSField(KeyFieldMask);

    _sfKey.setValue(value);
}
//! Get the value of the KeyEventDetails::_sfModifiers field.

inline
UInt32 &KeyEventDetailsBase::editModifiers(void)
{
    editSField(ModifiersFieldMask);

    return _sfModifiers.getValue();
}

//! Get the value of the KeyEventDetails::_sfModifiers field.
inline
      UInt32  KeyEventDetailsBase::getModifiers(void) const
{
    return _sfModifiers.getValue();
}

//! Set the value of the KeyEventDetails::_sfModifiers field.
inline
void KeyEventDetailsBase::setModifiers(const UInt32 value)
{
    editSField(ModifiersFieldMask);

    _sfModifiers.setValue(value);
}

//! Get the value of the KeyEventDetails::_sfWindow field.
inline
Window * KeyEventDetailsBase::getWindow(void) const
{
    return _sfWindow.getValue();
}

//! Set the value of the KeyEventDetails::_sfWindow field.
inline
void KeyEventDetailsBase::setWindow(Window * const value)
{
    editSField(WindowFieldMask);

    _sfWindow.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void KeyEventDetailsBase::execSync (      KeyEventDetailsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (KeyFieldMask & whichField))
        _sfKey.syncWith(pFrom->_sfKey);

    if(FieldBits::NoField != (ModifiersFieldMask & whichField))
        _sfModifiers.syncWith(pFrom->_sfModifiers);

    if(FieldBits::NoField != (WindowFieldMask & whichField))
        _sfWindow.syncWith(pFrom->_sfWindow);
}
#endif


inline
const Char8 *KeyEventDetailsBase::getClassname(void)
{
    return "KeyEventDetails";
}
OSG_GEN_CONTAINERPTR(KeyEventDetails);

OSG_END_NAMESPACE


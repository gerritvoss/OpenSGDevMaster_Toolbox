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
 **     class XWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE



//! access the type of the class
inline
OSG::FieldContainerType &XWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 XWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 XWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the XWindow::_sfDisplay field.

inline
DisplayP &XWindowBase::editDisplay(void)
{
    editSField(DisplayFieldMask);

    return _sfDisplay.getValue();
}

//! Get the value of the XWindow::_sfDisplay field.
inline
const DisplayP &XWindowBase::getDisplay(void) const
{
    return _sfDisplay.getValue();
}

//! Set the value of the XWindow::_sfDisplay field.
inline
void XWindowBase::setDisplay(const DisplayP &value)
{
    editSField(DisplayFieldMask);

    _sfDisplay.setValue(value);
}
//! Get the value of the XWindow::_sfWindow field.

inline
X11Window &XWindowBase::editWindow(void)
{
    editSField(WindowFieldMask);

    return _sfWindow.getValue();
}

//! Get the value of the XWindow::_sfWindow field.
inline
const X11Window &XWindowBase::getWindow(void) const
{
    return _sfWindow.getValue();
}

//! Set the value of the XWindow::_sfWindow field.
inline
void XWindowBase::setWindow(const X11Window &value)
{
    editSField(WindowFieldMask);

    _sfWindow.setValue(value);
}
//! Get the value of the XWindow::_sfContext field.

inline
GLXContext &XWindowBase::editContext(void)
{
    editSField(ContextFieldMask);

    return _sfContext.getValue();
}

//! Get the value of the XWindow::_sfContext field.
inline
const GLXContext &XWindowBase::getContext(void) const
{
    return _sfContext.getValue();
}

//! Set the value of the XWindow::_sfContext field.
inline
void XWindowBase::setContext(const GLXContext &value)
{
    editSField(ContextFieldMask);

    _sfContext.setValue(value);
}
//! Get the value of the XWindow::_sfFbConfigId field.

inline
Int32 &XWindowBase::editFbConfigId(void)
{
    editSField(FbConfigIdFieldMask);

    return _sfFbConfigId.getValue();
}

//! Get the value of the XWindow::_sfFbConfigId field.
inline
      Int32  XWindowBase::getFbConfigId(void) const
{
    return _sfFbConfigId.getValue();
}

//! Set the value of the XWindow::_sfFbConfigId field.
inline
void XWindowBase::setFbConfigId(const Int32 value)
{
    editSField(FbConfigIdFieldMask);

    _sfFbConfigId.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void XWindowBase::execSync (      XWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
        _sfDisplay.syncWith(pFrom->_sfDisplay);

    if(FieldBits::NoField != (WindowFieldMask & whichField))
        _sfWindow.syncWith(pFrom->_sfWindow);

    if(FieldBits::NoField != (ContextFieldMask & whichField))
        _sfContext.syncWith(pFrom->_sfContext);

    if(FieldBits::NoField != (FbConfigIdFieldMask & whichField))
        _sfFbConfigId.syncWith(pFrom->_sfFbConfigId);
}
#endif


inline
const Char8 *XWindowBase::getClassname(void)
{
    return "XWindow";
}


OSG_GEN_CONTAINERPTR(XWindow);

OSG_END_NAMESPACE


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
 **     class XWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEXWINDOWINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGXWindowBase.h"
#include "OSGXWindow.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::XWindow
    The class for X-based windows. See \ref PageWindowX for a description.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var DisplayP        XWindowBase::_sfDisplay
    
*/

/*! \var X11Window       XWindowBase::_sfWindow
    
*/

/*! \var GLXContext      XWindowBase::_sfContext
    
*/


void XWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFDisplayP::Description(
        SFDisplayP::getClassType(),
        "display",
        "",
        DisplayFieldId, DisplayFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&XWindowBase::editHandleDisplay),
        reinterpret_cast<FieldGetMethodSig >(&XWindowBase::getHandleDisplay));

    oType.addInitialDesc(pDesc);

    pDesc = new SFX11Window::Description(
        SFX11Window::getClassType(),
        "window",
        "",
        WindowFieldId, WindowFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&XWindowBase::editHandleWindow),
        reinterpret_cast<FieldGetMethodSig >(&XWindowBase::getHandleWindow));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLXContext::Description(
        SFGLXContext::getClassType(),
        "context",
        "",
        ContextFieldId, ContextFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&XWindowBase::editHandleContext),
        reinterpret_cast<FieldGetMethodSig >(&XWindowBase::getHandleContext));

    oType.addInitialDesc(pDesc);
}


XWindowBase::TypeObject XWindowBase::_type(
    XWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &XWindowBase::createEmpty,
    XWindow::initMethod,
    (InitalInsertDescFunc) &XWindowBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"XWindow\"\n"
    "\tparent=\"Window\"\n"
    "\tlibrary=\"WindowX\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "The class for X-based windows. See \\ref PageWindowX for a description.\n"
    "\t<Field\n"
    "\t\tname=\"display\"\n"
    "\t\ttype=\"DisplayP\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\theader=\"OSGXWindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"window\"\n"
    "\t\ttype=\"X11Window\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\theader=\"OSGXWindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"context\"\n"
    "\t\ttype=\"GLXContext\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\theader=\"OSGXWindowDataFields.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The class for X-based windows. See \\ref PageWindowX for a description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &XWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &XWindowBase::getType(void) const
{
    return _type;
}

UInt32 XWindowBase::getContainerSize(void) const
{
    return sizeof(XWindow);
}

/*------------------------- decorator get ------------------------------*/


SFDisplayP *XWindowBase::editSFDisplay(void)
{
    editSField(DisplayFieldMask);

    return &_sfDisplay;
}

const SFDisplayP *XWindowBase::getSFDisplay(void) const
{
    return &_sfDisplay;
}

#ifdef OSG_1_GET_COMPAT
SFDisplayP          *XWindowBase::getSFDisplay        (void)
{
    return this->editSFDisplay        ();
}
#endif

SFX11Window *XWindowBase::editSFWindow(void)
{
    editSField(WindowFieldMask);

    return &_sfWindow;
}

const SFX11Window *XWindowBase::getSFWindow(void) const
{
    return &_sfWindow;
}

#ifdef OSG_1_GET_COMPAT
SFX11Window         *XWindowBase::getSFWindow         (void)
{
    return this->editSFWindow         ();
}
#endif

SFGLXContext *XWindowBase::editSFContext(void)
{
    editSField(ContextFieldMask);

    return &_sfContext;
}

const SFGLXContext *XWindowBase::getSFContext(void) const
{
    return &_sfContext;
}

#ifdef OSG_1_GET_COMPAT
SFGLXContext        *XWindowBase::getSFContext        (void)
{
    return this->editSFContext        ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 XWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
    {
        returnValue += _sfDisplay.getBinSize();
    }
    if(FieldBits::NoField != (WindowFieldMask & whichField))
    {
        returnValue += _sfWindow.getBinSize();
    }
    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        returnValue += _sfContext.getBinSize();
    }

    return returnValue;
}

void XWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
    {
        _sfDisplay.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WindowFieldMask & whichField))
    {
        _sfWindow.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        _sfContext.copyToBin(pMem);
    }
}

void XWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
    {
        _sfDisplay.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WindowFieldMask & whichField))
    {
        _sfWindow.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        _sfContext.copyFromBin(pMem);
    }
}

//! create a new instance of the class
XWindowPtr XWindowBase::create(void)
{
    XWindowPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<XWindow::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
XWindowPtr XWindowBase::createEmpty(void)
{
    XWindowPtr returnValue;

    newPtr<XWindow>(returnValue);

    return returnValue;
}

FieldContainerPtr XWindowBase::shallowCopy(void) const
{
    XWindowPtr returnValue;

    newPtr(returnValue, dynamic_cast<const XWindow *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

XWindowBase::XWindowBase(void) :
    Inherited(),
    _sfDisplay                (DisplayP(NULL)),
    _sfWindow                 (),
    _sfContext                ()
{
}

XWindowBase::XWindowBase(const XWindowBase &source) :
    Inherited(source),
    _sfDisplay                (source._sfDisplay                ),
    _sfWindow                 (source._sfWindow                 ),
    _sfContext                (source._sfContext                )
{
}


/*-------------------------- destructors ----------------------------------*/

XWindowBase::~XWindowBase(void)
{
}


SFDisplayP::GetHandlePtr XWindowBase::getHandleDisplay         (void)
{
    SFDisplayP::GetHandlePtr returnValue(
        new  SFDisplayP::GetHandle(
             &_sfDisplay, 
             this->getType().getFieldDesc(DisplayFieldId)));

    return returnValue;
}

SFDisplayP::EditHandlePtr XWindowBase::editHandleDisplay        (void)
{
    SFDisplayP::EditHandlePtr returnValue(
        new  SFDisplayP::EditHandle(
             &_sfDisplay, 
             this->getType().getFieldDesc(DisplayFieldId)));

    editSField(DisplayFieldMask);

    return returnValue;
}

SFX11Window::GetHandlePtr XWindowBase::getHandleWindow          (void)
{
    SFX11Window::GetHandlePtr returnValue(
        new  SFX11Window::GetHandle(
             &_sfWindow, 
             this->getType().getFieldDesc(WindowFieldId)));

    return returnValue;
}

SFX11Window::EditHandlePtr XWindowBase::editHandleWindow         (void)
{
    SFX11Window::EditHandlePtr returnValue(
        new  SFX11Window::EditHandle(
             &_sfWindow, 
             this->getType().getFieldDesc(WindowFieldId)));

    editSField(WindowFieldMask);

    return returnValue;
}

SFGLXContext::GetHandlePtr XWindowBase::getHandleContext         (void)
{
    SFGLXContext::GetHandlePtr returnValue(
        new  SFGLXContext::GetHandle(
             &_sfContext, 
             this->getType().getFieldDesc(ContextFieldId)));

    return returnValue;
}

SFGLXContext::EditHandlePtr XWindowBase::editHandleContext        (void)
{
    SFGLXContext::EditHandlePtr returnValue(
        new  SFGLXContext::EditHandle(
             &_sfContext, 
             this->getType().getFieldDesc(ContextFieldId)));

    editSField(ContextFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void XWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<XWindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr XWindowBase::createAspectCopy(void) const
{
    XWindowPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const XWindow *>(this));

    return returnValue;
}
#endif

void XWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<XWindowPtr>::_type("XWindowPtr", "WindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(XWindowPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, XWindowPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, XWindowPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE

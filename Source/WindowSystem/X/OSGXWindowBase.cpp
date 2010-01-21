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

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGXWindowBase.h"
#include "OSGXWindow.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::XWindow
    The class for X-based windows. See \ref PageWindowX for a description.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var DisplayP        XWindowBase::_sfDisplay
    
*/

/*! \var X11Window       XWindowBase::_sfWindow
    
*/

/*! \var GLXContext      XWindowBase::_sfContext
    
*/

/*! \var Int32           XWindowBase::_sfFbConfigId
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<XWindow *>::_type("XWindowPtr", "WindowEventProducerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(XWindow *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           XWindow *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           XWindow *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void XWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFDisplayP::Description(
        SFDisplayP::getClassType(),
        "display",
        "",
        DisplayFieldId, DisplayFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&XWindow::editHandleDisplay),
        static_cast<FieldGetMethodSig >(&XWindow::getHandleDisplay));

    oType.addInitialDesc(pDesc);

    pDesc = new SFX11Window::Description(
        SFX11Window::getClassType(),
        "window",
        "",
        WindowFieldId, WindowFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&XWindow::editHandleWindow),
        static_cast<FieldGetMethodSig >(&XWindow::getHandleWindow));

    oType.addInitialDesc(pDesc);

    pDesc = new SFGLXContext::Description(
        SFGLXContext::getClassType(),
        "context",
        "",
        ContextFieldId, ContextFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&XWindow::editHandleContext),
        static_cast<FieldGetMethodSig >(&XWindow::getHandleContext));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "fbConfigId",
        "",
        FbConfigIdFieldId, FbConfigIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&XWindow::editHandleFbConfigId),
        static_cast<FieldGetMethodSig >(&XWindow::getHandleFbConfigId));

    oType.addInitialDesc(pDesc);
}


XWindowBase::TypeObject XWindowBase::_type(
    XWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&XWindowBase::createEmptyLocal),
    XWindow::initMethod,
    XWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&XWindow::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"XWindow\"\n"
    "   parent=\"WindowEventProducer\"\n"
    "   library=\"WindowX\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   docGroupBase=\"GrpWindowX\"\n"
    "   >\n"
    "  The class for X-based windows. See \\ref PageWindowX for a description.\n"
    "  <Field\n"
    "\t name=\"display\"\n"
    "\t type=\"DisplayP\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t fieldHeader=\"OSGXWindowDataFields.h\"\n"
    "\t access=\"public\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"window\"\n"
    "\t type=\"X11Window\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t fieldHeader=\"OSGXWindowDataFields.h\"\n"
    "\t access=\"public\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"context\"\n"
    "\t type=\"GLXContext\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t defaultValue=\"NULL\"\n"
    "\t fieldHeader=\"OSGXWindowDataFields.h\"\n"
    "\t access=\"public\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "\t >\n"
    "  </Field>\n"
    "  <Field\n"
    "\t name=\"fbConfigId\"\n"
    "\t type=\"Int32\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"internal\"\n"
    "\t defaultValue=\"-1\"\n"
    "\t access=\"public\"\n"
    "     fieldFlags=\"FClusterLocal\"\n"
    "\t >\n"
    "  </Field>\n"
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


SFX11Window *XWindowBase::editSFWindow(void)
{
    editSField(WindowFieldMask);

    return &_sfWindow;
}

const SFX11Window *XWindowBase::getSFWindow(void) const
{
    return &_sfWindow;
}


SFGLXContext *XWindowBase::editSFContext(void)
{
    editSField(ContextFieldMask);

    return &_sfContext;
}

const SFGLXContext *XWindowBase::getSFContext(void) const
{
    return &_sfContext;
}


SFInt32 *XWindowBase::editSFFbConfigId(void)
{
    editSField(FbConfigIdFieldMask);

    return &_sfFbConfigId;
}

const SFInt32 *XWindowBase::getSFFbConfigId(void) const
{
    return &_sfFbConfigId;
}






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
    if(FieldBits::NoField != (FbConfigIdFieldMask & whichField))
    {
        returnValue += _sfFbConfigId.getBinSize();
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
    if(FieldBits::NoField != (FbConfigIdFieldMask & whichField))
    {
        _sfFbConfigId.copyToBin(pMem);
    }
}

void XWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DisplayFieldMask & whichField))
    {
        editSField(DisplayFieldMask);
        _sfDisplay.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WindowFieldMask & whichField))
    {
        editSField(WindowFieldMask);
        _sfWindow.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ContextFieldMask & whichField))
    {
        editSField(ContextFieldMask);
        _sfContext.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FbConfigIdFieldMask & whichField))
    {
        editSField(FbConfigIdFieldMask);
        _sfFbConfigId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
XWindowTransitPtr XWindowBase::createLocal(BitVector bFlags)
{
    XWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<XWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
XWindowTransitPtr XWindowBase::createDependent(BitVector bFlags)
{
    XWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<XWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
XWindowTransitPtr XWindowBase::create(void)
{
    XWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<XWindow>(tmpPtr);
    }

    return fc;
}

XWindow *XWindowBase::createEmptyLocal(BitVector bFlags)
{
    XWindow *returnValue;

    newPtr<XWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
XWindow *XWindowBase::createEmpty(void)
{
    XWindow *returnValue;

    newPtr<XWindow>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr XWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    XWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const XWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr XWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    XWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const XWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr XWindowBase::shallowCopy(void) const
{
    XWindow *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const XWindow *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

XWindowBase::XWindowBase(void) :
    Inherited(),
    _sfDisplay                (DisplayP(NULL)),
    _sfWindow                 (X11Window(NULL)),
    _sfContext                (GLXContext(NULL)),
    _sfFbConfigId             (Int32(-1))
{
}

XWindowBase::XWindowBase(const XWindowBase &source) :
    Inherited(source),
    _sfDisplay                (source._sfDisplay                ),
    _sfWindow                 (source._sfWindow                 ),
    _sfContext                (source._sfContext                ),
    _sfFbConfigId             (source._sfFbConfigId             )
{
}


/*-------------------------- destructors ----------------------------------*/

XWindowBase::~XWindowBase(void)
{
}


GetFieldHandlePtr XWindowBase::getHandleDisplay         (void) const
{
    SFDisplayP::GetHandlePtr returnValue(
        new  SFDisplayP::GetHandle(
             &_sfDisplay,
             this->getType().getFieldDesc(DisplayFieldId),
             const_cast<XWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr XWindowBase::editHandleDisplay        (void)
{
    SFDisplayP::EditHandlePtr returnValue(
        new  SFDisplayP::EditHandle(
             &_sfDisplay,
             this->getType().getFieldDesc(DisplayFieldId),
             this));


    editSField(DisplayFieldMask);

    return returnValue;
}

GetFieldHandlePtr XWindowBase::getHandleWindow          (void) const
{
    SFX11Window::GetHandlePtr returnValue(
        new  SFX11Window::GetHandle(
             &_sfWindow,
             this->getType().getFieldDesc(WindowFieldId),
             const_cast<XWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr XWindowBase::editHandleWindow         (void)
{
    SFX11Window::EditHandlePtr returnValue(
        new  SFX11Window::EditHandle(
             &_sfWindow,
             this->getType().getFieldDesc(WindowFieldId),
             this));


    editSField(WindowFieldMask);

    return returnValue;
}

GetFieldHandlePtr XWindowBase::getHandleContext         (void) const
{
    SFGLXContext::GetHandlePtr returnValue(
        new  SFGLXContext::GetHandle(
             &_sfContext,
             this->getType().getFieldDesc(ContextFieldId),
             const_cast<XWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr XWindowBase::editHandleContext        (void)
{
    SFGLXContext::EditHandlePtr returnValue(
        new  SFGLXContext::EditHandle(
             &_sfContext,
             this->getType().getFieldDesc(ContextFieldId),
             this));


    editSField(ContextFieldMask);

    return returnValue;
}

GetFieldHandlePtr XWindowBase::getHandleFbConfigId      (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfFbConfigId,
             this->getType().getFieldDesc(FbConfigIdFieldId),
             const_cast<XWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr XWindowBase::editHandleFbConfigId     (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfFbConfigId,
             this->getType().getFieldDesc(FbConfigIdFieldId),
             this));


    editSField(FbConfigIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void XWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    XWindow *pThis = static_cast<XWindow *>(this);

    pThis->execSync(static_cast<XWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *XWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    XWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const XWindow *>(pRefAspect),
                  dynamic_cast<const XWindow *>(this));

    return returnValue;
}
#endif

void XWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE

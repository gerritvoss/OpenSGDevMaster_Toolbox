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
 **     class XWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGXWINDOWBASE_H_
#define _OSGXWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowXDef.h"

//#include "OSGBaseTypes.h"

#include "OSGWindowEventProducer.h" // Parent

#include "OSGXWindowDataFields.h"       // Display type
#include "OSGSysFields.h"               // FbConfigId type

#include "OSGXWindowFields.h"

OSG_BEGIN_NAMESPACE


class XWindow;

//! \brief XWindow Base Class.

class OSG_WINDOWX_DLLMAPPING XWindowBase : public WindowEventProducer
{
  public:

    typedef WindowEventProducer Inherited;
    typedef WindowEventProducer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(XWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DisplayFieldId = Inherited::NextFieldId,
        WindowFieldId = DisplayFieldId + 1,
        ContextFieldId = WindowFieldId + 1,
        FbConfigIdFieldId = ContextFieldId + 1,
        NextFieldId = FbConfigIdFieldId + 1
    };

    static const OSG::BitVector DisplayFieldMask =
        (TypeTraits<BitVector>::One << DisplayFieldId);
    static const OSG::BitVector WindowFieldMask =
        (TypeTraits<BitVector>::One << WindowFieldId);
    static const OSG::BitVector ContextFieldMask =
        (TypeTraits<BitVector>::One << ContextFieldId);
    static const OSG::BitVector FbConfigIdFieldMask =
        (TypeTraits<BitVector>::One << FbConfigIdFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFDisplayP        SFDisplayType;
    typedef SFX11Window       SFWindowType;
    typedef SFGLXContext      SFContextType;
    typedef SFInt32           SFFbConfigIdType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFDisplayP          *editSFDisplay        (void);
            const SFDisplayP          *getSFDisplay         (void) const;

                  SFX11Window         *editSFWindow         (void);
            const SFX11Window         *getSFWindow          (void) const;

                  SFGLXContext        *editSFContext        (void);
            const SFGLXContext        *getSFContext         (void) const;

                  SFInt32             *editSFFbConfigId     (void);
            const SFInt32             *getSFFbConfigId      (void) const;


                  DisplayP            &editDisplay        (void);
            const DisplayP            &getDisplay         (void) const;

                  X11Window           &editWindow         (void);
            const X11Window           &getWindow          (void) const;

                  GLXContext          &editContext        (void);
            const GLXContext          &getContext         (void) const;

                  Int32               &editFbConfigId     (void);
                  Int32                getFbConfigId      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDisplay        (const DisplayP &value);
            void setWindow         (const X11Window &value);
            void setContext        (const GLXContext &value);
            void setFbConfigId     (const Int32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  XWindowTransitPtr  create          (void);
    static  XWindow           *createEmpty     (void);

    static  XWindowTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  XWindow            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  XWindowTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFDisplayP        _sfDisplay;
    SFX11Window       _sfWindow;
    SFGLXContext      _sfContext;
    SFInt32           _sfFbConfigId;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    XWindowBase(void);
    XWindowBase(const XWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~XWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleDisplay         (void) const;
    EditFieldHandlePtr editHandleDisplay        (void);
    GetFieldHandlePtr  getHandleWindow          (void) const;
    EditFieldHandlePtr editHandleWindow         (void);
    GetFieldHandlePtr  getHandleContext         (void) const;
    EditFieldHandlePtr editHandleContext        (void);
    GetFieldHandlePtr  getHandleFbConfigId      (void) const;
    EditFieldHandlePtr editHandleFbConfigId     (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      XWindowBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const XWindowBase &source);
};

typedef XWindowBase *XWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGXWINDOWBASE_H_ */

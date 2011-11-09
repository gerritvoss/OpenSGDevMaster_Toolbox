/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class MouseEventDetails
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMOUSEEVENTDETAILSBASE_H_
#define _OSGMOUSEEVENTDETAILSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGInputEventDetails.h" // Parent

#include "OSGSysFields.h"               // Button type
#include "OSGVecFields.h"               // Location type
#include "OSGViewportFields.h"          // Viewport type

#include "OSGMouseEventDetailsFields.h"

OSG_BEGIN_NAMESPACE


class MouseEventDetails;

//! \brief MouseEventDetails Base Class.

class OSG_SYSTEM_DLLMAPPING MouseEventDetailsBase : public InputEventDetails
{
  public:

    typedef InputEventDetails Inherited;
    typedef InputEventDetails ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(MouseEventDetails);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ButtonFieldId = Inherited::NextFieldId,
        ClickCountFieldId = ButtonFieldId + 1,
        LocationFieldId = ClickCountFieldId + 1,
        DeltaFieldId = LocationFieldId + 1,
        ViewportFieldId = DeltaFieldId + 1,
        NextFieldId = ViewportFieldId + 1
    };

    static const OSG::BitVector ButtonFieldMask =
        (TypeTraits<BitVector>::One << ButtonFieldId);
    static const OSG::BitVector ClickCountFieldMask =
        (TypeTraits<BitVector>::One << ClickCountFieldId);
    static const OSG::BitVector LocationFieldMask =
        (TypeTraits<BitVector>::One << LocationFieldId);
    static const OSG::BitVector DeltaFieldMask =
        (TypeTraits<BitVector>::One << DeltaFieldId);
    static const OSG::BitVector ViewportFieldMask =
        (TypeTraits<BitVector>::One << ViewportFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt16          SFButtonType;
    typedef SFUInt16          SFClickCountType;
    typedef SFPnt2f           SFLocationType;
    typedef SFVec2f           SFDeltaType;
    typedef SFUnrecViewportPtr SFViewportType;

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


            const SFUInt16            *getSFButton          (void) const;

            const SFUInt16            *getSFClickCount      (void) const;

            const SFPnt2f             *getSFLocation        (void) const;

            const SFVec2f             *getSFDelta           (void) const;
            const SFUnrecViewportPtr  *getSFViewport       (void) const;


                  UInt16               getButton          (void) const;

                  UInt16               getClickCount      (void) const;

            const Pnt2f               &getLocation        (void) const;

            const Vec2f               &getDelta           (void) const;

                  Viewport * getViewport       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  MouseEventDetailsTransitPtr  create          (void);
    static  MouseEventDetails           *createEmpty     (void);

    static  MouseEventDetailsTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  MouseEventDetails            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  MouseEventDetailsTransitPtr  createDependent  (BitVector bFlags);

    static  MouseEventDetails           *createUnregistered(void);

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

    SFUInt16          _sfButton;
    SFUInt16          _sfClickCount;
    SFPnt2f           _sfLocation;
    SFVec2f           _sfDelta;
    SFUnrecViewportPtr _sfViewport;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MouseEventDetailsBase(void);
    MouseEventDetailsBase(const MouseEventDetailsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MouseEventDetailsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const MouseEventDetails *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleButton          (void) const;
    EditFieldHandlePtr editHandleButton         (void);
    GetFieldHandlePtr  getHandleClickCount      (void) const;
    EditFieldHandlePtr editHandleClickCount     (void);
    GetFieldHandlePtr  getHandleLocation        (void) const;
    EditFieldHandlePtr editHandleLocation       (void);
    GetFieldHandlePtr  getHandleDelta           (void) const;
    EditFieldHandlePtr editHandleDelta          (void);
    GetFieldHandlePtr  getHandleViewport        (void) const;
    EditFieldHandlePtr editHandleViewport       (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt16            *editSFButton         (void);

                  SFUInt16            *editSFClickCount     (void);

                  SFPnt2f             *editSFLocation       (void);

                  SFVec2f             *editSFDelta          (void);
                  SFUnrecViewportPtr  *editSFViewport       (void);


                  UInt16              &editButton         (void);

                  UInt16              &editClickCount     (void);

                  Pnt2f               &editLocation       (void);

                  Vec2f               &editDelta          (void);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setButton         (const UInt16 value);
            void setClickCount     (const UInt16 value);
            void setLocation       (const Pnt2f &value);
            void setDelta          (const Vec2f &value);
            void setViewport       (Viewport * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      MouseEventDetailsBase *pFrom,
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
    void operator =(const MouseEventDetailsBase &source);
};

typedef MouseEventDetailsBase *MouseEventDetailsBaseP;

OSG_END_NAMESPACE

#endif /* _OSGMOUSEEVENTDETAILSBASE_H_ */

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
 **     class LookAtTransformationElement
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLOOKATTRANSFORMATIONELEMENTBASE_H_
#define _OSGLOOKATTRANSFORMATIONELEMENTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGTransformationElement.h" // Parent

#include "OSGVecFields.h"               // EyePosition type

#include "OSGLookAtTransformationElementFields.h"

OSG_BEGIN_NAMESPACE


class LookAtTransformationElement;

//! \brief LookAtTransformationElement Base Class.

class OSG_GROUP_DLLMAPPING LookAtTransformationElementBase : public TransformationElement
{
  public:

    typedef TransformationElement Inherited;
    typedef TransformationElement ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(LookAtTransformationElement);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        EyePositionFieldId = Inherited::NextFieldId,
        LookAtPositionFieldId = EyePositionFieldId + 1,
        UpDirectionFieldId = LookAtPositionFieldId + 1,
        NextFieldId = UpDirectionFieldId + 1
    };

    static const OSG::BitVector EyePositionFieldMask =
        (TypeTraits<BitVector>::One << EyePositionFieldId);
    static const OSG::BitVector LookAtPositionFieldMask =
        (TypeTraits<BitVector>::One << LookAtPositionFieldId);
    static const OSG::BitVector UpDirectionFieldMask =
        (TypeTraits<BitVector>::One << UpDirectionFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt3f           SFEyePositionType;
    typedef SFPnt3f           SFLookAtPositionType;
    typedef SFVec3f           SFUpDirectionType;

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


                  SFPnt3f             *editSFEyePosition    (void);
            const SFPnt3f             *getSFEyePosition     (void) const;

                  SFPnt3f             *editSFLookAtPosition (void);
            const SFPnt3f             *getSFLookAtPosition  (void) const;

                  SFVec3f             *editSFUpDirection    (void);
            const SFVec3f             *getSFUpDirection     (void) const;


                  Pnt3f               &editEyePosition    (void);
            const Pnt3f               &getEyePosition     (void) const;

                  Pnt3f               &editLookAtPosition (void);
            const Pnt3f               &getLookAtPosition  (void) const;

                  Vec3f               &editUpDirection    (void);
            const Vec3f               &getUpDirection     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setEyePosition    (const Pnt3f &value);
            void setLookAtPosition (const Pnt3f &value);
            void setUpDirection    (const Vec3f &value);

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

    static  LookAtTransformationElementTransitPtr  create          (void);
    static  LookAtTransformationElement           *createEmpty     (void);

    static  LookAtTransformationElementTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  LookAtTransformationElement            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  LookAtTransformationElementTransitPtr  createDependent  (BitVector bFlags);

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

    SFPnt3f           _sfEyePosition;
    SFPnt3f           _sfLookAtPosition;
    SFVec3f           _sfUpDirection;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LookAtTransformationElementBase(void);
    LookAtTransformationElementBase(const LookAtTransformationElementBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LookAtTransformationElementBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleEyePosition     (void) const;
    EditFieldHandlePtr editHandleEyePosition    (void);
    GetFieldHandlePtr  getHandleLookAtPosition  (void) const;
    EditFieldHandlePtr editHandleLookAtPosition (void);
    GetFieldHandlePtr  getHandleUpDirection     (void) const;
    EditFieldHandlePtr editHandleUpDirection    (void);

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

            void execSync (      LookAtTransformationElementBase *pFrom,
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
    void operator =(const LookAtTransformationElementBase &source);
};

typedef LookAtTransformationElementBase *LookAtTransformationElementBaseP;

OSG_END_NAMESPACE

#endif /* _OSGLOOKATTRANSFORMATIONELEMENTBASE_H_ */

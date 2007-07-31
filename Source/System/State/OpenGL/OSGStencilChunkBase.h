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
 **     class StencilChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSTENCILCHUNKBASE_H_
#define _OSGSTENCILCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGGLenumFields.h" // StencilFunc type
#include "OSGInt32Fields.h" // StencilValue type
#include "OSGUInt32Fields.h" // StencilMask type
#include "OSGGLenumFields.h" // StencilOpFail type
#include "OSGGLenumFields.h" // StencilOpZFail type
#include "OSGGLenumFields.h" // StencilOpZPass type
#include "OSGInt32Fields.h" // ClearBuffer type
#include "OSGUInt32Fields.h" // BitMask type

#include "OSGStencilChunkFields.h"

OSG_BEGIN_NAMESPACE

class StencilChunk;

//! \brief StencilChunk Base Class.

class OSG_STATE_DLLMAPPING StencilChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(StencilChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        StencilFuncFieldId = Inherited::NextFieldId,
        StencilValueFieldId = StencilFuncFieldId + 1,
        StencilMaskFieldId = StencilValueFieldId + 1,
        StencilOpFailFieldId = StencilMaskFieldId + 1,
        StencilOpZFailFieldId = StencilOpFailFieldId + 1,
        StencilOpZPassFieldId = StencilOpZFailFieldId + 1,
        ClearBufferFieldId = StencilOpZPassFieldId + 1,
        BitMaskFieldId = ClearBufferFieldId + 1,
        NextFieldId = BitMaskFieldId + 1
    };

    static const OSG::BitVector StencilFuncFieldMask =
        (TypeTraits<BitVector>::One << StencilFuncFieldId);
    static const OSG::BitVector StencilValueFieldMask =
        (TypeTraits<BitVector>::One << StencilValueFieldId);
    static const OSG::BitVector StencilMaskFieldMask =
        (TypeTraits<BitVector>::One << StencilMaskFieldId);
    static const OSG::BitVector StencilOpFailFieldMask =
        (TypeTraits<BitVector>::One << StencilOpFailFieldId);
    static const OSG::BitVector StencilOpZFailFieldMask =
        (TypeTraits<BitVector>::One << StencilOpZFailFieldId);
    static const OSG::BitVector StencilOpZPassFieldMask =
        (TypeTraits<BitVector>::One << StencilOpZPassFieldId);
    static const OSG::BitVector ClearBufferFieldMask =
        (TypeTraits<BitVector>::One << ClearBufferFieldId);
    static const OSG::BitVector BitMaskFieldMask =
        (TypeTraits<BitVector>::One << BitMaskFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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


#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFStencilFunc     (void);
#endif
                  SFGLenum            *editSFStencilFunc    (void);
            const SFGLenum            *getSFStencilFunc     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFStencilValue    (void);
#endif
                  SFInt32             *editSFStencilValue   (void);
            const SFInt32             *getSFStencilValue    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFStencilMask     (void);
#endif
                  SFUInt32            *editSFStencilMask    (void);
            const SFUInt32            *getSFStencilMask     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFStencilOpFail   (void);
#endif
                  SFGLenum            *editSFStencilOpFail  (void);
            const SFGLenum            *getSFStencilOpFail   (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFStencilOpZFail  (void);
#endif
                  SFGLenum            *editSFStencilOpZFail (void);
            const SFGLenum            *getSFStencilOpZFail  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFStencilOpZPass  (void);
#endif
                  SFGLenum            *editSFStencilOpZPass (void);
            const SFGLenum            *getSFStencilOpZPass  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFClearBuffer     (void);
#endif
                  SFInt32             *editSFClearBuffer    (void);
            const SFInt32             *getSFClearBuffer     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFBitMask         (void);
#endif
                  SFUInt32            *editSFBitMask        (void);
            const SFUInt32            *getSFBitMask         (void) const;


#ifdef OSG_1_GET_COMPAT
                  GLenum              &getStencilFunc     (void);
#endif
                  GLenum              &editStencilFunc    (void);
            const GLenum              &getStencilFunc     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getStencilValue    (void);
#endif
                  Int32               &editStencilValue   (void);
            const Int32               &getStencilValue    (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getStencilMask     (void);
#endif
                  UInt32              &editStencilMask    (void);
            const UInt32              &getStencilMask     (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getStencilOpFail   (void);
#endif
                  GLenum              &editStencilOpFail  (void);
            const GLenum              &getStencilOpFail   (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getStencilOpZFail  (void);
#endif
                  GLenum              &editStencilOpZFail (void);
            const GLenum              &getStencilOpZFail  (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getStencilOpZPass  (void);
#endif
                  GLenum              &editStencilOpZPass (void);
            const GLenum              &getStencilOpZPass  (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getClearBuffer     (void);
#endif
                  Int32               &editClearBuffer    (void);
            const Int32               &getClearBuffer     (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getBitMask         (void);
#endif
                  UInt32              &editBitMask        (void);
            const UInt32              &getBitMask         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setStencilFunc    (const GLenum &value);
            void setStencilValue   (const Int32 &value);
            void setStencilMask    (const UInt32 &value);
            void setStencilOpFail  (const GLenum &value);
            void setStencilOpZFail (const GLenum &value);
            void setStencilOpZPass (const GLenum &value);
            void setClearBuffer    (const Int32 &value);
            void setBitMask        (const UInt32 &value);

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

    static  StencilChunkPtr create     (void);
    static  StencilChunkPtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFGLenum          _sfStencilFunc;
    SFInt32           _sfStencilValue;
    SFUInt32          _sfStencilMask;
    SFGLenum          _sfStencilOpFail;
    SFGLenum          _sfStencilOpZFail;
    SFGLenum          _sfStencilOpZPass;
    SFInt32           _sfClearBuffer;
    SFUInt32          _sfBitMask;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    StencilChunkBase(void);
    StencilChunkBase(const StencilChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~StencilChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    SFGLenum::GetHandlePtr  getHandleStencilFunc     (void);
    SFGLenum::EditHandlePtr editHandleStencilFunc    (void);
    SFInt32::GetHandlePtr  getHandleStencilValue    (void);
    SFInt32::EditHandlePtr editHandleStencilValue   (void);
    SFUInt32::GetHandlePtr  getHandleStencilMask     (void);
    SFUInt32::EditHandlePtr editHandleStencilMask    (void);
    SFGLenum::GetHandlePtr  getHandleStencilOpFail   (void);
    SFGLenum::EditHandlePtr editHandleStencilOpFail  (void);
    SFGLenum::GetHandlePtr  getHandleStencilOpZFail  (void);
    SFGLenum::EditHandlePtr editHandleStencilOpZFail (void);
    SFGLenum::GetHandlePtr  getHandleStencilOpZPass  (void);
    SFGLenum::EditHandlePtr editHandleStencilOpZPass (void);
    SFInt32::GetHandlePtr  getHandleClearBuffer     (void);
    SFInt32::EditHandlePtr editHandleClearBuffer    (void);
    SFUInt32::GetHandlePtr  getHandleBitMask         (void);
    SFUInt32::EditHandlePtr editHandleBitMask        (void);

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

            void execSync (      StencilChunkBase *pFrom,
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
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const StencilChunkBase &source);
};

typedef StencilChunkBase *StencilChunkBaseP;

/** Type specific RefPtr type for StencilChunk. */
typedef RefPtr<StencilChunkPtr> StencilChunkRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<StencilChunkBase::isNodeCore>,
    CoredNodePtr<StencilChunk>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        StencilChunkNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGSTENCILCHUNKBASE_H_ */

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
 **     class Material
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMATERIALBASE_H_
#define _OSGMATERIALBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGInt32Fields.h" // SortKey type
#include "OSGInt32Fields.h" // TransparencyMode type

#include "OSGMaterialFields.h"

OSG_BEGIN_NAMESPACE

class Material;

//! \brief Material Base Class.

class OSG_SYSTEM_DLLMAPPING MaterialBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Material>::ObjPtr         ObjPtr;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Material>::ObjPtrConst    ObjPtrConst;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Material>::ObjConstPtr    ObjConstPtr;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Material>::ObjPtrArg      ObjPtrArg;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Material>::ObjConstPtrArg ObjConstPtrArg;
    typedef PointerFwdBuilder<AttachmentContainerPtr,
                              AttachmentContainerConstPtr,
                              Material>::ObjPtrConstArg ObjPtrConstArg;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SortKeyFieldId = Inherited::NextFieldId,
        TransparencyModeFieldId = SortKeyFieldId + 1,
        NextFieldId = TransparencyModeFieldId + 1
    };

    static const OSG::BitVector SortKeyFieldMask =
        (TypeTraits<BitVector>::One << SortKeyFieldId);
    static const OSG::BitVector TransparencyModeFieldMask =
        (TypeTraits<BitVector>::One << TransparencyModeFieldId);
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


#ifdef OSG_1_COMPAT
                  SFInt32             *getSFSortKey         (void);
#endif
                  SFInt32             *editSFSortKey        (void);
            const SFInt32             *getSFSortKey         (void) const;

#ifdef OSG_1_COMPAT
                  SFInt32             *getSFTransparencyMode (void);
#endif
                  SFInt32             *editSFTransparencyMode(void);
            const SFInt32             *getSFTransparencyMode (void) const;


#ifdef OSG_1_COMPAT
                  Int32               &getSortKey         (void);
#endif
                  Int32               &editSortKey        (void);
            const Int32               &getSortKey         (void) const;

#ifdef OSG_1_COMPAT
                  Int32               &getTransparencyMode (void);
#endif
                  Int32               &editTransparencyMode(void);
            const Int32               &getTransparencyMode (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSortKey        (const Int32 &value);
            void setTransparencyMode(const Int32 &value);

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
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFInt32           _sfSortKey;
    SFInt32           _sfTransparencyMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    MaterialBase(void);
    MaterialBase(const MaterialBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~MaterialBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_FIELDCONTAINERPTR
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);

            void execSync (      MaterialBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo,
                                 UInt32             uiCopyOffset);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      MaterialBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

#if 0
    virtual void execBeginEditV(ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);

            void execBeginEdit (ConstFieldMaskArg whichField,
                                UInt32            uiAspect,
                                UInt32            uiContainerSize);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

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
    void operator =(const MaterialBase &source);
};

typedef MaterialBase *MaterialBaseP;

/** Type specific RefPtr type for Material. */
typedef RefPtr<MaterialPtr> MaterialRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<MaterialBase::isNodeCore>,
    CoredNodePtr<Material>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        MaterialNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGMATERIALBASE_H_ */

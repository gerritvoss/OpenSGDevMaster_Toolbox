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
 **     class StageData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSTAGEDATABASE_H_
#define _OSGSTAGEDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGFieldBundle.h" // Parent

#include "OSGInt32Fields.h" // PartitionRangeBegin type
#include "OSGInt32Fields.h" // PartitionRangeEnd type
#include "OSGInt32Fields.h" // GroupMode type

#include "OSGStageDataFields.h"

OSG_BEGIN_NAMESPACE

class StageData;

//! \brief StageData Base Class.

class OSG_GROUP_DLLMAPPING StageDataBase : public FieldBundle
{
  public:

    typedef FieldBundle Inherited;
    typedef FieldBundle ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(StageData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PartitionRangeBeginFieldId = Inherited::NextFieldId,
        PartitionRangeEndFieldId = PartitionRangeBeginFieldId + 1,
        GroupModeFieldId = PartitionRangeEndFieldId + 1,
        NextFieldId = GroupModeFieldId + 1
    };

    static const OSG::BitVector PartitionRangeBeginFieldMask =
        (TypeTraits<BitVector>::One << PartitionRangeBeginFieldId);
    static const OSG::BitVector PartitionRangeEndFieldMask =
        (TypeTraits<BitVector>::One << PartitionRangeEndFieldId);
    static const OSG::BitVector GroupModeFieldMask =
        (TypeTraits<BitVector>::One << GroupModeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldBundleType &getClassType   (void);
    static UInt32           getClassTypeId (void);
    static UInt16           getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldBundleType &getType         (void);
    virtual const FieldBundleType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFPartitionRangeBegin (void);
#endif
                  SFInt32             *editSFPartitionRangeBegin(void);
            const SFInt32             *getSFPartitionRangeBegin (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFPartitionRangeEnd (void);
#endif
                  SFInt32             *editSFPartitionRangeEnd(void);
            const SFInt32             *getSFPartitionRangeEnd (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFInt32             *getSFGroupMode       (void);
#endif
                  SFInt32             *editSFGroupMode      (void);
            const SFInt32             *getSFGroupMode       (void) const;


#ifdef OSG_1_GET_COMPAT
                  Int32               &getPartitionRangeBegin (void);
#endif
                  Int32               &editPartitionRangeBegin(void);
            const Int32               &getPartitionRangeBegin (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getPartitionRangeEnd (void);
#endif
                  Int32               &editPartitionRangeEnd(void);
            const Int32               &getPartitionRangeEnd (void) const;

#ifdef OSG_1_GET_COMPAT
                  Int32               &getGroupMode       (void);
#endif
                  Int32               &editGroupMode      (void);
            const Int32               &getGroupMode       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPartitionRangeBegin(const Int32 &value);
            void setPartitionRangeEnd(const Int32 &value);
            void setGroupMode      (const Int32 &value);

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

    static  StageDataP create     (void);
    static  StageDataP createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldBundleP shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFInt32           _sfPartitionRangeBegin;
    SFInt32           _sfPartitionRangeEnd;
    SFInt32           _sfGroupMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    StageDataBase(void);
    StageDataBase(const StageDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~StageDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    SFInt32::GetHandlePtr  getHandlePartitionRangeBegin (void);
    SFInt32::EditHandlePtr editHandlePartitionRangeBegin(void);
    SFInt32::GetHandlePtr  getHandlePartitionRangeEnd (void);
    SFInt32::EditHandlePtr editHandlePartitionRangeEnd(void);
    SFInt32::GetHandlePtr  getHandleGroupMode       (void);
    SFInt32::EditHandlePtr editHandleGroupMode      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

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
    void operator =(const StageDataBase &source);
};

/** Type specific RefPtr type for StageData. */
typedef RefPtr<StageDataP> StageDataRefP;


OSG_END_NAMESPACE

#endif /* _OSGSTAGEDATABASE_H_ */

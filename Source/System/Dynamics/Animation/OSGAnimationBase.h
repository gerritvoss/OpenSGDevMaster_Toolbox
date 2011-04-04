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
 **     class Animation
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGANIMATIONBASE_H_
#define _OSGANIMATIONBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGAnimTimeSensorFields.h"    // TimeSensor type
#include "OSGAnimTemplateFields.h"      // Template type
#include "OSGAnimChannelFields.h"       // Channels type
#include "OSGSysFields.h"               // Enabled type

#include "OSGAnimationFields.h"

OSG_BEGIN_NAMESPACE

class Animation;

//! \brief Animation Base Class.

class OSG_DYNAMICS_DLLMAPPING AnimationBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Animation);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        TimeSensorFieldId = Inherited::NextFieldId,
        TemplateFieldId = TimeSensorFieldId + 1,
        ChannelsFieldId = TemplateFieldId + 1,
        EnabledFieldId = ChannelsFieldId + 1,
        WeightFieldId = EnabledFieldId + 1,
        NextFieldId = WeightFieldId + 1
    };

    static const OSG::BitVector TimeSensorFieldMask =
        (TypeTraits<BitVector>::One << TimeSensorFieldId);
    static const OSG::BitVector TemplateFieldMask =
        (TypeTraits<BitVector>::One << TemplateFieldId);
    static const OSG::BitVector ChannelsFieldMask =
        (TypeTraits<BitVector>::One << ChannelsFieldId);
    static const OSG::BitVector EnabledFieldMask =
        (TypeTraits<BitVector>::One << EnabledFieldId);
    static const OSG::BitVector WeightFieldMask =
        (TypeTraits<BitVector>::One << WeightFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecAnimTimeSensorPtr SFTimeSensorType;
    typedef SFUnrecAnimTemplatePtr SFTemplateType;
    typedef MFUnrecChildAnimChannelPtr MFChannelsType;
    typedef SFBool            SFEnabledType;
    typedef SFReal32          SFWeightType;

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

            const SFUnrecAnimTemplatePtr *getSFTemplate       (void) const;
                  SFUnrecAnimTemplatePtr *editSFTemplate       (void);
            const MFUnrecChildAnimChannelPtr *getMFChannels       (void) const;
                  MFUnrecChildAnimChannelPtr *editMFChannels       (void);

                  SFBool              *editSFEnabled        (void);
            const SFBool              *getSFEnabled         (void) const;

                  SFReal32            *editSFWeight         (void);
            const SFReal32            *getSFWeight          (void) const;


                  AnimTemplate * getTemplate       (void) const;

                  AnimChannel * getChannels       (const UInt32 index) const;

                  bool                &editEnabled        (void);
                  bool                 getEnabled         (void) const;

                  Real32              &editWeight         (void);
                  Real32               getWeight          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTemplate       (AnimTemplate * const value);
            void setEnabled        (const bool value);
            void setWeight         (const Real32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToChannels            (AnimChannel * const value   );
    void assignChannels           (const MFUnrecChildAnimChannelPtr &value);
    void removeFromChannels (UInt32               uiIndex );
    void removeObjFromChannels(AnimChannel * const value   );
    void clearChannels              (void                         );

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

    static  AnimationTransitPtr  create          (void);
    static  Animation           *createEmpty     (void);

    static  AnimationTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Animation            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  AnimationTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecAnimTimeSensorPtr _sfTimeSensor;
    SFUnrecAnimTemplatePtr _sfTemplate;
    MFUnrecChildAnimChannelPtr _mfChannels;
    SFBool            _sfEnabled;
    SFReal32          _sfWeight;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    AnimationBase(void);
    AnimationBase(const AnimationBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AnimationBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Animation *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleTimeSensor      (void) const;
    EditFieldHandlePtr editHandleTimeSensor     (void);
    GetFieldHandlePtr  getHandleTemplate        (void) const;
    EditFieldHandlePtr editHandleTemplate       (void);
    GetFieldHandlePtr  getHandleChannels        (void) const;
    EditFieldHandlePtr editHandleChannels       (void);
    GetFieldHandlePtr  getHandleEnabled         (void) const;
    EditFieldHandlePtr editHandleEnabled        (void);
    GetFieldHandlePtr  getHandleWeight          (void) const;
    EditFieldHandlePtr editHandleWeight         (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecAnimTimeSensorPtr *getSFTimeSensor      (void) const;
                  SFUnrecAnimTimeSensorPtr *editSFTimeSensor     (void);


                  AnimTimeSensor * getTimeSensor     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setTimeSensor     (AnimTimeSensor * const value);

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

            void execSync (      AnimationBase *pFrom,
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
    void operator =(const AnimationBase &source);
};

typedef AnimationBase *AnimationBaseP;

typedef CoredNodeRefPtr  <Animation> AnimationNodeRefPtr;
typedef CoredNodeMTRefPtr<Animation> AnimationNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGANIMATIONBASE_H_ */
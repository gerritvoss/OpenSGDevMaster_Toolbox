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
 **     class ClusterWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCLUSTERWINDOWBASE_H_
#define _OSGCLUSTERWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGClusterDef.h"

#include "OSGBaseTypes.h"

#include "OSGWindow.h" // Parent

#include "OSGStringFields.h" // Servers type
#include "OSGStringFields.h" // ConnectionType type
#include "OSGStringFields.h" // ConnectionInterface type
#include "OSGStringFields.h" // ConnectionDestination type
#include "OSGStringFields.h" // ConnectionParams type
#include "OSGUInt32Fields.h" // ServicePort type
#include "OSGStringFields.h" // ServiceAddress type
#include "OSGStringFields.h" // ServiceInterface type
#include "OSGWindowFields.h" // ClientWindow type
#include "OSGUInt32Fields.h" // Interleave type
#include "OSGUInt32Fields.h" // FrameCount type
#include "OSGImageComposerFields.h" // Composer type
#include "OSGStringFields.h" // Autostart type

#include "OSGClusterWindowFields.h"

OSG_BEGIN_NAMESPACE

class ClusterWindow;

//! \brief ClusterWindow Base Class.

class OSG_CLUSTER_DLLMAPPING ClusterWindowBase : public Window
{
  public:

    typedef Window Inherited;
    typedef Window ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ClusterWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ServersFieldId = Inherited::NextFieldId,
        ConnectionTypeFieldId = ServersFieldId + 1,
        ConnectionInterfaceFieldId = ConnectionTypeFieldId + 1,
        ConnectionDestinationFieldId = ConnectionInterfaceFieldId + 1,
        ConnectionParamsFieldId = ConnectionDestinationFieldId + 1,
        ServicePortFieldId = ConnectionParamsFieldId + 1,
        ServiceAddressFieldId = ServicePortFieldId + 1,
        ServiceInterfaceFieldId = ServiceAddressFieldId + 1,
        ClientWindowFieldId = ServiceInterfaceFieldId + 1,
        InterleaveFieldId = ClientWindowFieldId + 1,
        FrameCountFieldId = InterleaveFieldId + 1,
        ComposerFieldId = FrameCountFieldId + 1,
        AutostartFieldId = ComposerFieldId + 1,
        NextFieldId = AutostartFieldId + 1
    };

    static const OSG::BitVector ServersFieldMask =
        (TypeTraits<BitVector>::One << ServersFieldId);
    static const OSG::BitVector ConnectionTypeFieldMask =
        (TypeTraits<BitVector>::One << ConnectionTypeFieldId);
    static const OSG::BitVector ConnectionInterfaceFieldMask =
        (TypeTraits<BitVector>::One << ConnectionInterfaceFieldId);
    static const OSG::BitVector ConnectionDestinationFieldMask =
        (TypeTraits<BitVector>::One << ConnectionDestinationFieldId);
    static const OSG::BitVector ConnectionParamsFieldMask =
        (TypeTraits<BitVector>::One << ConnectionParamsFieldId);
    static const OSG::BitVector ServicePortFieldMask =
        (TypeTraits<BitVector>::One << ServicePortFieldId);
    static const OSG::BitVector ServiceAddressFieldMask =
        (TypeTraits<BitVector>::One << ServiceAddressFieldId);
    static const OSG::BitVector ServiceInterfaceFieldMask =
        (TypeTraits<BitVector>::One << ServiceInterfaceFieldId);
    static const OSG::BitVector ClientWindowFieldMask =
        (TypeTraits<BitVector>::One << ClientWindowFieldId);
    static const OSG::BitVector InterleaveFieldMask =
        (TypeTraits<BitVector>::One << InterleaveFieldId);
    static const OSG::BitVector FrameCountFieldMask =
        (TypeTraits<BitVector>::One << FrameCountFieldId);
    static const OSG::BitVector ComposerFieldMask =
        (TypeTraits<BitVector>::One << ComposerFieldId);
    static const OSG::BitVector AutostartFieldMask =
        (TypeTraits<BitVector>::One << AutostartFieldId);
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
                  MFString            *getMFServers         (void);
#endif
                  MFString            *editMFServers        (void);
            const MFString            *getMFServers         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFConnectionType  (void);
#endif
                  SFString            *editSFConnectionType (void);
            const SFString            *getSFConnectionType  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFConnectionInterface (void);
#endif
                  SFString            *editSFConnectionInterface(void);
            const SFString            *getSFConnectionInterface (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFConnectionDestination (void);
#endif
                  SFString            *editSFConnectionDestination(void);
            const SFString            *getSFConnectionDestination (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFConnectionParams (void);
#endif
                  SFString            *editSFConnectionParams(void);
            const SFString            *getSFConnectionParams (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFServicePort     (void);
#endif
                  SFUInt32            *editSFServicePort    (void);
            const SFUInt32            *getSFServicePort     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFServiceAddress  (void);
#endif
                  SFString            *editSFServiceAddress (void);
            const SFString            *getSFServiceAddress  (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFString            *getSFServiceInterface (void);
#endif
                  SFString            *editSFServiceInterface(void);
            const SFString            *getSFServiceInterface (void) const;
            const SFWindowPtr         *getSFClientWindow    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFInterleave      (void);
#endif
                  SFUInt32            *editSFInterleave     (void);
            const SFUInt32            *getSFInterleave      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFFrameCount      (void);
#endif
                  SFUInt32            *editSFFrameCount     (void);
            const SFUInt32            *getSFFrameCount      (void) const;
            const SFImageComposerPtr  *getSFComposer        (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFString            *getMFAutostart       (void);
#endif
                  MFString            *editMFAutostart      (void);
            const MFString            *getMFAutostart       (void) const;


#ifdef OSG_1_GET_COMPAT
                  std::string         &getServers         (const UInt32 index);
                  MFString            &getServers        (void);
#endif
                  std::string         &editServers        (const UInt32 index);
            const std::string         &getServers         (const UInt32 index) const;
                  MFString            &editServers        (void);
            const MFString            &getServers        (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getConnectionType  (void);
#endif
                  std::string         &editConnectionType (void);
            const std::string         &getConnectionType  (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getConnectionInterface (void);
#endif
                  std::string         &editConnectionInterface(void);
            const std::string         &getConnectionInterface (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getConnectionDestination (void);
#endif
                  std::string         &editConnectionDestination(void);
            const std::string         &getConnectionDestination (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getConnectionParams (void);
#endif
                  std::string         &editConnectionParams(void);
            const std::string         &getConnectionParams (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getServicePort     (void);
#endif
                  UInt32              &editServicePort    (void);
            const UInt32              &getServicePort     (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getServiceAddress  (void);
#endif
                  std::string         &editServiceAddress (void);
            const std::string         &getServiceAddress  (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getServiceInterface (void);
#endif
                  std::string         &editServiceInterface(void);
            const std::string         &getServiceInterface (void) const;

                  WindowPtrConst getClientWindow   (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getInterleave      (void);
#endif
                  UInt32              &editInterleave     (void);
            const UInt32              &getInterleave      (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getFrameCount      (void);
#endif
                  UInt32              &editFrameCount     (void);
            const UInt32              &getFrameCount      (void) const;

                  ImageComposerPtrConst getComposer       (void) const;

#ifdef OSG_1_GET_COMPAT
                  std::string         &getAutostart       (const UInt32 index);
                  MFString            &getAutostart      (void);
#endif
                  std::string         &editAutostart      (const UInt32 index);
            const std::string         &getAutostart       (const UInt32 index) const;
                  MFString            &editAutostart      (void);
            const MFString            &getAutostart      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setConnectionType (const std::string &value);
            void setConnectionInterface(const std::string &value);
            void setConnectionDestination(const std::string &value);
            void setConnectionParams(const std::string &value);
            void setServicePort    (const UInt32 &value);
            void setServiceAddress (const std::string &value);
            void setServiceInterface(const std::string &value);
            void setClientWindow   (WindowPtrConstArg value);
            void setInterleave     (const UInt32 &value);
            void setFrameCount     (const UInt32 &value);
            void setComposer       (ImageComposerPtrConstArg value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */


    void pushToServers                     (const std::string&value   );
    void insertIntoServers                 (      UInt32     uiIndex,
                                            const std::string&value   );
    void replaceInServers                  (      UInt32     uiIndex,
                                            const std::string&value   );
    void replaceInServers                  (const std::string&pOldElem,
                                            const std::string&pNewElem);
    void removeFromServers                 (      UInt32     uiIndex );
    void removeFromServers                 (const std::string&value   );
    void clearServers                      (      void               );



    void pushToAutostart                   (const std::string&value   );
    void insertIntoAutostart               (      UInt32     uiIndex,
                                            const std::string&value   );
    void replaceInAutostart                (      UInt32     uiIndex,
                                            const std::string&value   );
    void replaceInAutostart                (const std::string&pOldElem,
                                            const std::string&pNewElem);
    void removeFromAutostart               (      UInt32     uiIndex );
    void removeFromAutostart               (const std::string&value   );
    void clearAutostart                    (      void               );


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

    static  ClusterWindowPtr create     (void);
    static  ClusterWindowPtr createEmpty(void);

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

    MFString          _mfServers;
    SFString          _sfConnectionType;
    SFString          _sfConnectionInterface;
    SFString          _sfConnectionDestination;
    SFString          _sfConnectionParams;
    SFUInt32          _sfServicePort;
    SFString          _sfServiceAddress;
    SFString          _sfServiceInterface;
    SFWindowPtr       _sfClientWindow;
    SFUInt32          _sfInterleave;
    SFUInt32          _sfFrameCount;
    SFImageComposerPtr _sfComposer;
    MFString          _mfAutostart;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ClusterWindowBase(void);
    ClusterWindowBase(const ClusterWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ClusterWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ClusterWindow *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    MFString::GetHandlePtr  getHandleServers         (void);
    MFString::EditHandlePtr editHandleServers        (void);
    SFString::GetHandlePtr  getHandleConnectionType  (void);
    SFString::EditHandlePtr editHandleConnectionType (void);
    SFString::GetHandlePtr  getHandleConnectionInterface (void);
    SFString::EditHandlePtr editHandleConnectionInterface(void);
    SFString::GetHandlePtr  getHandleConnectionDestination (void);
    SFString::EditHandlePtr editHandleConnectionDestination(void);
    SFString::GetHandlePtr  getHandleConnectionParams (void);
    SFString::EditHandlePtr editHandleConnectionParams(void);
    SFUInt32::GetHandlePtr  getHandleServicePort     (void);
    SFUInt32::EditHandlePtr editHandleServicePort    (void);
    SFString::GetHandlePtr  getHandleServiceAddress  (void);
    SFString::EditHandlePtr editHandleServiceAddress (void);
    SFString::GetHandlePtr  getHandleServiceInterface (void);
    SFString::EditHandlePtr editHandleServiceInterface(void);
    SFWindowPtr::GetHandlePtr  getHandleClientWindow    (void);
    SFWindowPtr::EditHandlePtr editHandleClientWindow   (void);
    SFUInt32::GetHandlePtr  getHandleInterleave      (void);
    SFUInt32::EditHandlePtr editHandleInterleave     (void);
    SFUInt32::GetHandlePtr  getHandleFrameCount      (void);
    SFUInt32::EditHandlePtr editHandleFrameCount     (void);
    SFImageComposerPtr::GetHandlePtr  getHandleComposer        (void);
    SFImageComposerPtr::EditHandlePtr editHandleComposer       (void);
    MFString::GetHandlePtr  getHandleAutostart       (void);
    MFString::EditHandlePtr editHandleAutostart      (void);

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

            void execSync (      ClusterWindowBase *pFrom,
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
    void operator =(const ClusterWindowBase &source);
};

typedef ClusterWindowBase *ClusterWindowBaseP;

/** Type specific RefPtr type for ClusterWindow. */
typedef RefPtr<ClusterWindowPtr> ClusterWindowRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<ClusterWindowBase::isNodeCore>,
    CoredNodePtr<ClusterWindow>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        ClusterWindowNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGCLUSTERWINDOWBASE_H_ */

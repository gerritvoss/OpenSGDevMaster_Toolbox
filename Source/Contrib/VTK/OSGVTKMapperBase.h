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
 **     class VTKMapper
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGVTKMAPPERBASE_H_
#define _OSGVTKMAPPERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribVTKDef.h"

#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGNodeFields.h" // Root type
#include "OSGNodeFields.h" // GeoRoots type
#include "OSGGeometryFields.h" // Geometries type
#include "OSGChunkMaterialFields.h" // Materials type
#include "OSGMaterialChunkFields.h" // MaterialChunks type
#include "OSGGeoPnt3fPropertyFields.h" // Positions type
#include "OSGGeoUInt32PropertyFields.h" // Length type
#include "OSGGeoUInt8PropertyFields.h" // Types type
#include "OSGGeoColor4fPropertyFields.h" // Colors type
#include "OSGGeoVec3fPropertyFields.h" // Normals type

#include "OSGVTKMapperFields.h"

OSG_BEGIN_NAMESPACE

class VTKMapper;

//! \brief VTKMapper Base Class.

class OSG_CONTRIBVTK_DLLMAPPING VTKMapperBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(VTKMapper);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootFieldId = Inherited::NextFieldId,
        GeoRootsFieldId = RootFieldId + 1,
        GeometriesFieldId = GeoRootsFieldId + 1,
        MaterialsFieldId = GeometriesFieldId + 1,
        MaterialChunksFieldId = MaterialsFieldId + 1,
        PositionsFieldId = MaterialChunksFieldId + 1,
        LengthFieldId = PositionsFieldId + 1,
        TypesFieldId = LengthFieldId + 1,
        ColorsFieldId = TypesFieldId + 1,
        NormalsFieldId = ColorsFieldId + 1,
        NextFieldId = NormalsFieldId + 1
    };

    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector GeoRootsFieldMask =
        (TypeTraits<BitVector>::One << GeoRootsFieldId);
    static const OSG::BitVector GeometriesFieldMask =
        (TypeTraits<BitVector>::One << GeometriesFieldId);
    static const OSG::BitVector MaterialsFieldMask =
        (TypeTraits<BitVector>::One << MaterialsFieldId);
    static const OSG::BitVector MaterialChunksFieldMask =
        (TypeTraits<BitVector>::One << MaterialChunksFieldId);
    static const OSG::BitVector PositionsFieldMask =
        (TypeTraits<BitVector>::One << PositionsFieldId);
    static const OSG::BitVector LengthFieldMask =
        (TypeTraits<BitVector>::One << LengthFieldId);
    static const OSG::BitVector TypesFieldMask =
        (TypeTraits<BitVector>::One << TypesFieldId);
    static const OSG::BitVector ColorsFieldMask =
        (TypeTraits<BitVector>::One << ColorsFieldId);
    static const OSG::BitVector NormalsFieldMask =
        (TypeTraits<BitVector>::One << NormalsFieldId);
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

            const SFUnrecNodePtr      *getSFRoot            (void) const;
            const MFUnrecNodePtr      *getMFGeoRoots        (void) const;
            const MFUnrecGeometryPtr  *getMFGeometries      (void) const;
            const MFUnrecChunkMaterialPtr *getMFMaterials       (void) const;
            const MFUnrecMaterialChunkPtr *getMFMaterialChunks  (void) const;
            const MFUnrecGeoPnt3fPropertyPtr *getMFPositions       (void) const;
            const MFUnrecGeoUInt32PropertyPtr *getMFLength          (void) const;
            const MFUnrecGeoUInt8PropertyPtr *getMFTypes           (void) const;
            const MFUnrecGeoColor4fPropertyPtr *getMFColors          (void) const;
            const MFUnrecGeoVec3fPropertyPtr *getMFNormals         (void) const;


                  NodePtr getRoot           (void) const;

                  NodePtr getGeoRoots       (const UInt32 index) const;
            const MFUnrecNodePtr      &getGeoRoots       (void) const;

                  GeometryPtr getGeometries     (const UInt32 index) const;
            const MFUnrecGeometryPtr  &getGeometries     (void) const;

                  ChunkMaterialPtr getMaterials      (const UInt32 index) const;
            const MFUnrecChunkMaterialPtr &getMaterials      (void) const;

                  MaterialChunkPtr getMaterialChunks (const UInt32 index) const;
            const MFUnrecMaterialChunkPtr &getMaterialChunks (void) const;

                  GeoPnt3fPropertyPtr getPositions      (const UInt32 index) const;
            const MFUnrecGeoPnt3fPropertyPtr &getPositions      (void) const;

                  GeoUInt32PropertyPtr getLength         (const UInt32 index) const;
            const MFUnrecGeoUInt32PropertyPtr &getLength         (void) const;

                  GeoUInt8PropertyPtr getTypes          (const UInt32 index) const;
            const MFUnrecGeoUInt8PropertyPtr &getTypes          (void) const;

                  GeoColor4fPropertyPtr getColors         (const UInt32 index) const;
            const MFUnrecGeoColor4fPropertyPtr &getColors         (void) const;

                  GeoVec3fPropertyPtr getNormals        (const UInt32 index) const;
            const MFUnrecGeoVec3fPropertyPtr &getNormals        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRoot           (const NodePtr value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToGeoRoots            (const NodePtr value   );
    void assignGeoRoots            (const MFUnrecNodePtr    &value);
    void insertIntoGeoRoots      (      UInt32         uiIndex,
                                             const NodePtr value   );
    void replaceInGeoRoots  (      UInt32         uiIndex,
                                             const NodePtr value   );
    void replaceInGeoRoots (const NodePtr pOldElem,
                                             const NodePtr pNewElem);
    void removeFromGeoRoots (UInt32                uiIndex );
    void removeFromGeoRoots(const NodePtr value   );
    void clearGeoRoots              (void                          );



    void pushToGeometries           (const GeometryPtr value   );
    void assignGeometries           (const MFUnrecGeometryPtr &value);
    void insertIntoGeometries      (      UInt32         uiIndex,
                                             const GeometryPtr value   );
    void replaceInGeometries  (      UInt32         uiIndex,
                                             const GeometryPtr value   );
    void replaceInGeometries (const GeometryPtr pOldElem,
                                             const GeometryPtr pNewElem);
    void removeFromGeometries (UInt32                uiIndex );
    void removeFromGeometries(const GeometryPtr value   );
    void clearGeometries            (void                          );



    void pushToMaterials           (const ChunkMaterialPtr value   );
    void assignMaterials           (const MFUnrecChunkMaterialPtr &value);
    void insertIntoMaterials      (      UInt32         uiIndex,
                                             const ChunkMaterialPtr value   );
    void replaceInMaterials  (      UInt32         uiIndex,
                                             const ChunkMaterialPtr value   );
    void replaceInMaterials (const ChunkMaterialPtr pOldElem,
                                             const ChunkMaterialPtr pNewElem);
    void removeFromMaterials (UInt32                uiIndex );
    void removeFromMaterials(const ChunkMaterialPtr value   );
    void clearMaterials             (void                          );



    void pushToMaterialChunks           (const MaterialChunkPtr value   );
    void assignMaterialChunks           (const MFUnrecMaterialChunkPtr &value);
    void insertIntoMaterialChunks      (      UInt32         uiIndex,
                                             const MaterialChunkPtr value   );
    void replaceInMaterialChunks  (      UInt32         uiIndex,
                                             const MaterialChunkPtr value   );
    void replaceInMaterialChunks (const MaterialChunkPtr pOldElem,
                                             const MaterialChunkPtr pNewElem);
    void removeFromMaterialChunks (UInt32                uiIndex );
    void removeFromMaterialChunks(const MaterialChunkPtr value   );
    void clearMaterialChunks            (void                          );



    void pushToPositions           (const GeoPnt3fPropertyPtr value   );
    void assignPositions           (const MFUnrecGeoPnt3fPropertyPtr &value);
    void insertIntoPositions      (      UInt32         uiIndex,
                                             const GeoPnt3fPropertyPtr value   );
    void replaceInPositions  (      UInt32         uiIndex,
                                             const GeoPnt3fPropertyPtr value   );
    void replaceInPositions (const GeoPnt3fPropertyPtr pOldElem,
                                             const GeoPnt3fPropertyPtr pNewElem);
    void removeFromPositions (UInt32                uiIndex );
    void removeFromPositions(const GeoPnt3fPropertyPtr value   );
    void clearPositions             (void                          );



    void pushToLength              (const GeoUInt32PropertyPtr value   );
    void assignLength              (const MFUnrecGeoUInt32PropertyPtr &value);
    void insertIntoLength      (      UInt32         uiIndex,
                                             const GeoUInt32PropertyPtr value   );
    void replaceInLength  (      UInt32         uiIndex,
                                             const GeoUInt32PropertyPtr value   );
    void replaceInLength (const GeoUInt32PropertyPtr pOldElem,
                                             const GeoUInt32PropertyPtr pNewElem);
    void removeFromLength (UInt32                uiIndex );
    void removeFromLength(const GeoUInt32PropertyPtr value   );
    void clearLength                (void                          );



    void pushToTypes               (const GeoUInt8PropertyPtr value   );
    void assignTypes               (const MFUnrecGeoUInt8PropertyPtr &value);
    void insertIntoTypes      (      UInt32         uiIndex,
                                             const GeoUInt8PropertyPtr value   );
    void replaceInTypes   (      UInt32         uiIndex,
                                             const GeoUInt8PropertyPtr value   );
    void replaceInTypes  (const GeoUInt8PropertyPtr pOldElem,
                                             const GeoUInt8PropertyPtr pNewElem);
    void removeFromTypes (UInt32                uiIndex );
    void removeFromTypes(const GeoUInt8PropertyPtr value   );
    void clearTypes                 (void                          );



    void pushToColors              (const GeoColor4fPropertyPtr value   );
    void assignColors              (const MFUnrecGeoColor4fPropertyPtr &value);
    void insertIntoColors      (      UInt32         uiIndex,
                                             const GeoColor4fPropertyPtr value   );
    void replaceInColors  (      UInt32         uiIndex,
                                             const GeoColor4fPropertyPtr value   );
    void replaceInColors (const GeoColor4fPropertyPtr pOldElem,
                                             const GeoColor4fPropertyPtr pNewElem);
    void removeFromColors (UInt32                uiIndex );
    void removeFromColors(const GeoColor4fPropertyPtr value   );
    void clearColors                (void                          );



    void pushToNormals             (const GeoVec3fPropertyPtr value   );
    void assignNormals             (const MFUnrecGeoVec3fPropertyPtr &value);
    void insertIntoNormals      (      UInt32         uiIndex,
                                             const GeoVec3fPropertyPtr value   );
    void replaceInNormals  (      UInt32         uiIndex,
                                             const GeoVec3fPropertyPtr value   );
    void replaceInNormals (const GeoVec3fPropertyPtr pOldElem,
                                             const GeoVec3fPropertyPtr pNewElem);
    void removeFromNormals (UInt32                uiIndex );
    void removeFromNormals(const GeoVec3fPropertyPtr value   );
    void clearNormals               (void                          );


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

    static  VTKMapperTransitPtr create          (void);
    static  VTKMapperPtr        createEmpty     (void);

    static  VTKMapperTransitPtr createLocal     (
                                              BitVector bFlags = FCLocal::All);

    static  VTKMapperPtr        createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecNodePtr    _sfRoot;
    MFUnrecNodePtr    _mfGeoRoots;
    MFUnrecGeometryPtr _mfGeometries;
    MFUnrecChunkMaterialPtr _mfMaterials;
    MFUnrecMaterialChunkPtr _mfMaterialChunks;
    MFUnrecGeoPnt3fPropertyPtr _mfPositions;
    MFUnrecGeoUInt32PropertyPtr _mfLength;
    MFUnrecGeoUInt8PropertyPtr _mfTypes;
    MFUnrecGeoColor4fPropertyPtr _mfColors;
    MFUnrecGeoVec3fPropertyPtr _mfNormals;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    VTKMapperBase(void);
    VTKMapperBase(const VTKMapperBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~VTKMapperBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const VTKMapper *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleGeoRoots        (void) const;
    EditFieldHandlePtr editHandleGeoRoots       (void);
    GetFieldHandlePtr  getHandleGeometries      (void) const;
    EditFieldHandlePtr editHandleGeometries     (void);
    GetFieldHandlePtr  getHandleMaterials       (void) const;
    EditFieldHandlePtr editHandleMaterials      (void);
    GetFieldHandlePtr  getHandleMaterialChunks  (void) const;
    EditFieldHandlePtr editHandleMaterialChunks (void);
    GetFieldHandlePtr  getHandlePositions       (void) const;
    EditFieldHandlePtr editHandlePositions      (void);
    GetFieldHandlePtr  getHandleLength          (void) const;
    EditFieldHandlePtr editHandleLength         (void);
    GetFieldHandlePtr  getHandleTypes           (void) const;
    EditFieldHandlePtr editHandleTypes          (void);
    GetFieldHandlePtr  getHandleColors          (void) const;
    EditFieldHandlePtr editHandleColors         (void);
    GetFieldHandlePtr  getHandleNormals         (void) const;
    EditFieldHandlePtr editHandleNormals        (void);

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

            void execSync (      VTKMapperBase *pFrom,
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
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const VTKMapperBase &source);
};

typedef VTKMapperBase *VTKMapperBaseP;

typedef CoredNodeRefPtr  <VTKMapper> VTKMapperNodeRefPtr;
typedef CoredNodeMTRefPtr<VTKMapper> VTKMapperNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGVTKMAPPERBASE_H_ */

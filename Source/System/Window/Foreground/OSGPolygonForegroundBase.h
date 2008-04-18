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
 **     class PolygonForeground
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPOLYGONFOREGROUNDBASE_H_
#define _OSGPOLYGONFOREGROUNDBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGForeground.h" // Parent

#include "OSGMaterialFields.h" // Material type
#include "OSGPnt2fFields.h" // Positions type
#include "OSGVec3fFields.h" // TexCoords type
#include "OSGBoolFields.h" // NormalizedX type
#include "OSGBoolFields.h" // NormalizedY type
#include "OSGUInt16Fields.h" // AspectHeight type
#include "OSGUInt16Fields.h" // AspectWidth type
#include "OSGReal32Fields.h" // Scale type
#include "OSGBoolFields.h" // Tile type

#include "OSGPolygonForegroundFields.h"

OSG_BEGIN_NAMESPACE

class PolygonForeground;

//! \brief PolygonForeground Base Class.

class OSG_WINDOW_DLLMAPPING PolygonForegroundBase : public Foreground
{
  public:

    typedef Foreground Inherited;
    typedef Foreground ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PolygonForeground);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        MaterialFieldId = Inherited::NextFieldId,
        PositionsFieldId = MaterialFieldId + 1,
        TexCoordsFieldId = PositionsFieldId + 1,
        NormalizedXFieldId = TexCoordsFieldId + 1,
        NormalizedYFieldId = NormalizedXFieldId + 1,
        AspectHeightFieldId = NormalizedYFieldId + 1,
        AspectWidthFieldId = AspectHeightFieldId + 1,
        ScaleFieldId = AspectWidthFieldId + 1,
        TileFieldId = ScaleFieldId + 1,
        NextFieldId = TileFieldId + 1
    };

    static const OSG::BitVector MaterialFieldMask =
        (TypeTraits<BitVector>::One << MaterialFieldId);
    static const OSG::BitVector PositionsFieldMask =
        (TypeTraits<BitVector>::One << PositionsFieldId);
    static const OSG::BitVector TexCoordsFieldMask =
        (TypeTraits<BitVector>::One << TexCoordsFieldId);
    static const OSG::BitVector NormalizedXFieldMask =
        (TypeTraits<BitVector>::One << NormalizedXFieldId);
    static const OSG::BitVector NormalizedYFieldMask =
        (TypeTraits<BitVector>::One << NormalizedYFieldId);
    static const OSG::BitVector AspectHeightFieldMask =
        (TypeTraits<BitVector>::One << AspectHeightFieldId);
    static const OSG::BitVector AspectWidthFieldMask =
        (TypeTraits<BitVector>::One << AspectWidthFieldId);
    static const OSG::BitVector ScaleFieldMask =
        (TypeTraits<BitVector>::One << ScaleFieldId);
    static const OSG::BitVector TileFieldMask =
        (TypeTraits<BitVector>::One << TileFieldId);
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

            const SFUnrecMaterialPtr  *getSFMaterial        (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFPnt2f             *getMFPositions       (void);
#endif
                  MFPnt2f             *editMFPositions      (void);
            const MFPnt2f             *getMFPositions       (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFVec3f             *getMFTexCoords       (void);
#endif
                  MFVec3f             *editMFTexCoords      (void);
            const MFVec3f             *getMFTexCoords       (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFNormalizedX     (void);
#endif
                  SFBool              *editSFNormalizedX    (void);
            const SFBool              *getSFNormalizedX     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFNormalizedY     (void);
#endif
                  SFBool              *editSFNormalizedY    (void);
            const SFBool              *getSFNormalizedY     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt16            *getSFAspectHeight    (void);
#endif
                  SFUInt16            *editSFAspectHeight   (void);
            const SFUInt16            *getSFAspectHeight    (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt16            *getSFAspectWidth     (void);
#endif
                  SFUInt16            *editSFAspectWidth    (void);
            const SFUInt16            *getSFAspectWidth     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFScale           (void);
#endif
                  SFReal32            *editSFScale          (void);
            const SFReal32            *getSFScale           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFTile            (void);
#endif
                  SFBool              *editSFTile           (void);
            const SFBool              *getSFTile            (void) const;


                  MaterialPtr getMaterial       (void) const;

#ifdef OSG_1_GET_COMPAT
                  Pnt2f               &getPositions       (const UInt32 index);
                  MFPnt2f             &getPositions      (void);
#endif
                  Pnt2f               &editPositions      (const UInt32 index);
            const Pnt2f               &getPositions       (const UInt32 index) const;
                  MFPnt2f             &editPositions      (void);
            const MFPnt2f             &getPositions      (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec3f               &getTexCoords       (const UInt32 index);
                  MFVec3f             &getTexCoords      (void);
#endif
                  Vec3f               &editTexCoords      (const UInt32 index);
            const Vec3f               &getTexCoords       (const UInt32 index) const;
                  MFVec3f             &editTexCoords      (void);
            const MFVec3f             &getTexCoords      (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getNormalizedX     (void);
#endif
                  bool                &editNormalizedX    (void);
            const bool                &getNormalizedX     (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getNormalizedY     (void);
#endif
                  bool                &editNormalizedY    (void);
            const bool                &getNormalizedY     (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt16              &getAspectHeight    (void);
#endif
                  UInt16              &editAspectHeight   (void);
            const UInt16              &getAspectHeight    (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt16              &getAspectWidth     (void);
#endif
                  UInt16              &editAspectWidth    (void);
            const UInt16              &getAspectWidth     (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getScale           (void);
#endif
                  Real32              &editScale          (void);
            const Real32              &getScale           (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getTile            (void);
#endif
                  bool                &editTile           (void);
            const bool                &getTile            (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setMaterial       (const MaterialPtr value);
            void setNormalizedX    (const bool &value);
            void setNormalizedY    (const bool &value);
            void setAspectHeight   (const UInt16 &value);
            void setAspectWidth    (const UInt16 &value);
            void setScale          (const Real32 &value);
            void setTile           (const bool &value);

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

    static  PolygonForegroundTransitPtr create          (void);
    static  PolygonForegroundPtr        createEmpty     (void);

    static  PolygonForegroundTransitPtr createLocal     (
                                              BitVector bFlags = FCLocal::All);

    static  PolygonForegroundPtr        createEmptyLocal(
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

    SFUnrecMaterialPtr _sfMaterial;
    MFPnt2f           _mfPositions;
    MFVec3f           _mfTexCoords;
    SFBool            _sfNormalizedX;
    SFBool            _sfNormalizedY;
    SFUInt16          _sfAspectHeight;
    SFUInt16          _sfAspectWidth;
    SFReal32          _sfScale;
    SFBool            _sfTile;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PolygonForegroundBase(void);
    PolygonForegroundBase(const PolygonForegroundBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PolygonForegroundBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const PolygonForeground *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleMaterial        (void) const;
    EditFieldHandlePtr editHandleMaterial       (void);
    GetFieldHandlePtr  getHandlePositions       (void) const;
    EditFieldHandlePtr editHandlePositions      (void);
    GetFieldHandlePtr  getHandleTexCoords       (void) const;
    EditFieldHandlePtr editHandleTexCoords      (void);
    GetFieldHandlePtr  getHandleNormalizedX     (void) const;
    EditFieldHandlePtr editHandleNormalizedX    (void);
    GetFieldHandlePtr  getHandleNormalizedY     (void) const;
    EditFieldHandlePtr editHandleNormalizedY    (void);
    GetFieldHandlePtr  getHandleAspectHeight    (void) const;
    EditFieldHandlePtr editHandleAspectHeight   (void);
    GetFieldHandlePtr  getHandleAspectWidth     (void) const;
    EditFieldHandlePtr editHandleAspectWidth    (void);
    GetFieldHandlePtr  getHandleScale           (void) const;
    EditFieldHandlePtr editHandleScale          (void);
    GetFieldHandlePtr  getHandleTile            (void) const;
    EditFieldHandlePtr editHandleTile           (void);

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

            void execSync (      PolygonForegroundBase *pFrom,
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
    void operator =(const PolygonForegroundBase &source);
};

typedef PolygonForegroundBase *PolygonForegroundBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPOLYGONFOREGROUNDBASE_H_ */

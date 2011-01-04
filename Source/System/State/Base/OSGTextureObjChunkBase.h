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
 **     class TextureObjChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREOBJCHUNKBASE_H_
#define _OSGTEXTUREOBJCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGTextureBaseChunk.h" // Parent

#include "OSGImageFields.h"             // Image type
#include "OSGBaseFields.h"              // InternalFormat type
#include "OSGSysFields.h"               // Scale type

#include "OSGTextureObjChunkFields.h"

OSG_BEGIN_NAMESPACE

class TextureObjChunk;

//! \brief TextureObjChunk Base Class.

class OSG_SYSTEM_DLLMAPPING TextureObjChunkBase : public TextureBaseChunk
{
  public:

    typedef TextureBaseChunk Inherited;
    typedef TextureBaseChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TextureObjChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ImageFieldId = Inherited::NextFieldId,
        InternalFormatFieldId = ImageFieldId + 1,
        ExternalFormatFieldId = InternalFormatFieldId + 1,
        ScaleFieldId = ExternalFormatFieldId + 1,
        FrameFieldId = ScaleFieldId + 1,
        MinFilterFieldId = FrameFieldId + 1,
        MagFilterFieldId = MinFilterFieldId + 1,
        WrapSFieldId = MagFilterFieldId + 1,
        WrapTFieldId = WrapSFieldId + 1,
        WrapRFieldId = WrapTFieldId + 1,
        GLIdFieldId = WrapRFieldId + 1,
        PriorityFieldId = GLIdFieldId + 1,
        DirtyLeftFieldId = PriorityFieldId + 1,
        DirtyMinXFieldId = DirtyLeftFieldId + 1,
        DirtyMaxXFieldId = DirtyMinXFieldId + 1,
        DirtyMinYFieldId = DirtyMaxXFieldId + 1,
        DirtyMaxYFieldId = DirtyMinYFieldId + 1,
        DirtyMinZFieldId = DirtyMaxYFieldId + 1,
        DirtyMaxZFieldId = DirtyMinZFieldId + 1,
        AnisotropyFieldId = DirtyMaxZFieldId + 1,
        BorderColorFieldId = AnisotropyFieldId + 1,
        CompareModeFieldId = BorderColorFieldId + 1,
        CompareFuncFieldId = CompareModeFieldId + 1,
        DepthModeFieldId = CompareFuncFieldId + 1,
        BorderWidthFieldId = DepthModeFieldId + 1,
        SkipMipMapLevelsFieldId = BorderWidthFieldId + 1,
        NextFieldId = SkipMipMapLevelsFieldId + 1
    };

    static const OSG::BitVector ImageFieldMask =
        (TypeTraits<BitVector>::One << ImageFieldId);
    static const OSG::BitVector InternalFormatFieldMask =
        (TypeTraits<BitVector>::One << InternalFormatFieldId);
    static const OSG::BitVector ExternalFormatFieldMask =
        (TypeTraits<BitVector>::One << ExternalFormatFieldId);
    static const OSG::BitVector ScaleFieldMask =
        (TypeTraits<BitVector>::One << ScaleFieldId);
    static const OSG::BitVector FrameFieldMask =
        (TypeTraits<BitVector>::One << FrameFieldId);
    static const OSG::BitVector MinFilterFieldMask =
        (TypeTraits<BitVector>::One << MinFilterFieldId);
    static const OSG::BitVector MagFilterFieldMask =
        (TypeTraits<BitVector>::One << MagFilterFieldId);
    static const OSG::BitVector WrapSFieldMask =
        (TypeTraits<BitVector>::One << WrapSFieldId);
    static const OSG::BitVector WrapTFieldMask =
        (TypeTraits<BitVector>::One << WrapTFieldId);
    static const OSG::BitVector WrapRFieldMask =
        (TypeTraits<BitVector>::One << WrapRFieldId);
    static const OSG::BitVector GLIdFieldMask =
        (TypeTraits<BitVector>::One << GLIdFieldId);
    static const OSG::BitVector PriorityFieldMask =
        (TypeTraits<BitVector>::One << PriorityFieldId);
    static const OSG::BitVector DirtyLeftFieldMask =
        (TypeTraits<BitVector>::One << DirtyLeftFieldId);
    static const OSG::BitVector DirtyMinXFieldMask =
        (TypeTraits<BitVector>::One << DirtyMinXFieldId);
    static const OSG::BitVector DirtyMaxXFieldMask =
        (TypeTraits<BitVector>::One << DirtyMaxXFieldId);
    static const OSG::BitVector DirtyMinYFieldMask =
        (TypeTraits<BitVector>::One << DirtyMinYFieldId);
    static const OSG::BitVector DirtyMaxYFieldMask =
        (TypeTraits<BitVector>::One << DirtyMaxYFieldId);
    static const OSG::BitVector DirtyMinZFieldMask =
        (TypeTraits<BitVector>::One << DirtyMinZFieldId);
    static const OSG::BitVector DirtyMaxZFieldMask =
        (TypeTraits<BitVector>::One << DirtyMaxZFieldId);
    static const OSG::BitVector AnisotropyFieldMask =
        (TypeTraits<BitVector>::One << AnisotropyFieldId);
    static const OSG::BitVector BorderColorFieldMask =
        (TypeTraits<BitVector>::One << BorderColorFieldId);
    static const OSG::BitVector CompareModeFieldMask =
        (TypeTraits<BitVector>::One << CompareModeFieldId);
    static const OSG::BitVector CompareFuncFieldMask =
        (TypeTraits<BitVector>::One << CompareFuncFieldId);
    static const OSG::BitVector DepthModeFieldMask =
        (TypeTraits<BitVector>::One << DepthModeFieldId);
    static const OSG::BitVector BorderWidthFieldMask =
        (TypeTraits<BitVector>::One << BorderWidthFieldId);
    static const OSG::BitVector SkipMipMapLevelsFieldMask =
        (TypeTraits<BitVector>::One << SkipMipMapLevelsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecChildImagePtr SFImageType;
    typedef SFGLenum          SFInternalFormatType;
    typedef SFGLenum          SFExternalFormatType;
    typedef SFBool            SFScaleType;
    typedef SFUInt32          SFFrameType;
    typedef SFGLenum          SFMinFilterType;
    typedef SFGLenum          SFMagFilterType;
    typedef SFGLenum          SFWrapSType;
    typedef SFGLenum          SFWrapTType;
    typedef SFGLenum          SFWrapRType;
    typedef SFGLenum          SFGLIdType;
    typedef SFReal32          SFPriorityType;
    typedef SFInt32           SFDirtyLeftType;
    typedef SFInt32           SFDirtyMinXType;
    typedef SFInt32           SFDirtyMaxXType;
    typedef SFInt32           SFDirtyMinYType;
    typedef SFInt32           SFDirtyMaxYType;
    typedef SFInt32           SFDirtyMinZType;
    typedef SFInt32           SFDirtyMaxZType;
    typedef SFReal32          SFAnisotropyType;
    typedef SFColor4f         SFBorderColorType;
    typedef SFGLenum          SFCompareModeType;
    typedef SFGLenum          SFCompareFuncType;
    typedef SFGLenum          SFDepthModeType;
    typedef SFUInt32          SFBorderWidthType;
    typedef SFReal32          SFSkipMipMapLevelsType;

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

            const SFUnrecChildImagePtr *getSFImage          (void) const;
                  SFUnrecChildImagePtr *editSFImage          (void);

                  SFGLenum            *editSFInternalFormat (void);
            const SFGLenum            *getSFInternalFormat  (void) const;

                  SFGLenum            *editSFExternalFormat (void);
            const SFGLenum            *getSFExternalFormat  (void) const;

                  SFBool              *editSFScale          (void);
            const SFBool              *getSFScale           (void) const;

                  SFUInt32            *editSFFrame          (void);
            const SFUInt32            *getSFFrame           (void) const;

                  SFGLenum            *editSFMinFilter      (void);
            const SFGLenum            *getSFMinFilter       (void) const;

                  SFGLenum            *editSFMagFilter      (void);
            const SFGLenum            *getSFMagFilter       (void) const;

                  SFGLenum            *editSFWrapS          (void);
            const SFGLenum            *getSFWrapS           (void) const;

                  SFGLenum            *editSFWrapT          (void);
            const SFGLenum            *getSFWrapT           (void) const;

                  SFGLenum            *editSFWrapR          (void);
            const SFGLenum            *getSFWrapR           (void) const;

                  SFGLenum            *editSFGLId           (void);
            const SFGLenum            *getSFGLId            (void) const;

                  SFReal32            *editSFPriority       (void);
            const SFReal32            *getSFPriority        (void) const;

                  SFInt32             *editSFDirtyLeft      (void);
            const SFInt32             *getSFDirtyLeft       (void) const;

                  SFInt32             *editSFDirtyMinX      (void);
            const SFInt32             *getSFDirtyMinX       (void) const;

                  SFInt32             *editSFDirtyMaxX      (void);
            const SFInt32             *getSFDirtyMaxX       (void) const;

                  SFInt32             *editSFDirtyMinY      (void);
            const SFInt32             *getSFDirtyMinY       (void) const;

                  SFInt32             *editSFDirtyMaxY      (void);
            const SFInt32             *getSFDirtyMaxY       (void) const;

                  SFInt32             *editSFDirtyMinZ      (void);
            const SFInt32             *getSFDirtyMinZ       (void) const;

                  SFInt32             *editSFDirtyMaxZ      (void);
            const SFInt32             *getSFDirtyMaxZ       (void) const;

                  SFReal32            *editSFAnisotropy     (void);
            const SFReal32            *getSFAnisotropy      (void) const;

                  SFColor4f           *editSFBorderColor    (void);
            const SFColor4f           *getSFBorderColor     (void) const;

                  SFGLenum            *editSFCompareMode    (void);
            const SFGLenum            *getSFCompareMode     (void) const;

                  SFGLenum            *editSFCompareFunc    (void);
            const SFGLenum            *getSFCompareFunc     (void) const;

                  SFGLenum            *editSFDepthMode      (void);
            const SFGLenum            *getSFDepthMode       (void) const;

                  SFUInt32            *editSFBorderWidth    (void);
            const SFUInt32            *getSFBorderWidth     (void) const;

                  SFReal32            *editSFSkipMipMapLevels(void);
            const SFReal32            *getSFSkipMipMapLevels (void) const;


                  Image * getImage          (void) const;

                  GLenum              &editInternalFormat (void);
            const GLenum              &getInternalFormat  (void) const;

                  GLenum              &editExternalFormat (void);
            const GLenum              &getExternalFormat  (void) const;

                  bool                &editScale          (void);
                  bool                 getScale           (void) const;

                  UInt32              &editFrame          (void);
                  UInt32               getFrame           (void) const;

                  GLenum              &editMinFilter      (void);
            const GLenum              &getMinFilter       (void) const;

                  GLenum              &editMagFilter      (void);
            const GLenum              &getMagFilter       (void) const;

                  GLenum              &editWrapS          (void);
            const GLenum              &getWrapS           (void) const;

                  GLenum              &editWrapT          (void);
            const GLenum              &getWrapT           (void) const;

                  GLenum              &editWrapR          (void);
            const GLenum              &getWrapR           (void) const;

                  GLenum              &editGLId           (void);
            const GLenum              &getGLId            (void) const;

                  Real32              &editPriority       (void);
                  Real32               getPriority        (void) const;

                  Int32               &editDirtyLeft      (void);
                  Int32                getDirtyLeft       (void) const;

                  Int32               &editDirtyMinX      (void);
                  Int32                getDirtyMinX       (void) const;

                  Int32               &editDirtyMaxX      (void);
                  Int32                getDirtyMaxX       (void) const;

                  Int32               &editDirtyMinY      (void);
                  Int32                getDirtyMinY       (void) const;

                  Int32               &editDirtyMaxY      (void);
                  Int32                getDirtyMaxY       (void) const;

                  Int32               &editDirtyMinZ      (void);
                  Int32                getDirtyMinZ       (void) const;

                  Int32               &editDirtyMaxZ      (void);
                  Int32                getDirtyMaxZ       (void) const;

                  Real32              &editAnisotropy     (void);
                  Real32               getAnisotropy      (void) const;

                  Color4f             &editBorderColor    (void);
            const Color4f             &getBorderColor     (void) const;

                  GLenum              &editCompareMode    (void);
            const GLenum              &getCompareMode     (void) const;

                  GLenum              &editCompareFunc    (void);
            const GLenum              &getCompareFunc     (void) const;

                  GLenum              &editDepthMode      (void);
            const GLenum              &getDepthMode       (void) const;

                  UInt32              &editBorderWidth    (void);
                  UInt32               getBorderWidth     (void) const;

                  Real32              &editSkipMipMapLevels(void);
                  Real32               getSkipMipMapLevels (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setImage          (Image * const value);
            void setInternalFormat (const GLenum &value);
            void setExternalFormat (const GLenum &value);
            void setScale          (const bool value);
            void setFrame          (const UInt32 value);
            void setMinFilter      (const GLenum &value);
            void setMagFilter      (const GLenum &value);
            void setWrapS          (const GLenum &value);
            void setWrapT          (const GLenum &value);
            void setWrapR          (const GLenum &value);
            void setGLId           (const GLenum &value);
            void setPriority       (const Real32 value);
            void setDirtyLeft      (const Int32 value);
            void setDirtyMinX      (const Int32 value);
            void setDirtyMaxX      (const Int32 value);
            void setDirtyMinY      (const Int32 value);
            void setDirtyMaxY      (const Int32 value);
            void setDirtyMinZ      (const Int32 value);
            void setDirtyMaxZ      (const Int32 value);
            void setAnisotropy     (const Real32 value);
            void setBorderColor    (const Color4f &value);
            void setCompareMode    (const GLenum &value);
            void setCompareFunc    (const GLenum &value);
            void setDepthMode      (const GLenum &value);
            void setBorderWidth    (const UInt32 value);
            void setSkipMipMapLevels(const Real32 value);

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

    static  TextureObjChunkTransitPtr  create          (void);
    static  TextureObjChunk           *createEmpty     (void);

    static  TextureObjChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TextureObjChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TextureObjChunkTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecChildImagePtr _sfImage;
    SFGLenum          _sfInternalFormat;
    SFGLenum          _sfExternalFormat;
    SFBool            _sfScale;
    SFUInt32          _sfFrame;
    SFGLenum          _sfMinFilter;
    SFGLenum          _sfMagFilter;
    SFGLenum          _sfWrapS;
    SFGLenum          _sfWrapT;
    SFGLenum          _sfWrapR;
    SFGLenum          _sfGLId;
    SFReal32          _sfPriority;
    SFInt32           _sfDirtyLeft;
    SFInt32           _sfDirtyMinX;
    SFInt32           _sfDirtyMaxX;
    SFInt32           _sfDirtyMinY;
    SFInt32           _sfDirtyMaxY;
    SFInt32           _sfDirtyMinZ;
    SFInt32           _sfDirtyMaxZ;
    SFReal32          _sfAnisotropy;
    SFColor4f         _sfBorderColor;
    SFGLenum          _sfCompareMode;
    SFGLenum          _sfCompareFunc;
    SFGLenum          _sfDepthMode;
    SFUInt32          _sfBorderWidth;
    SFReal32          _sfSkipMipMapLevels;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureObjChunkBase(void);
    TextureObjChunkBase(const TextureObjChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureObjChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextureObjChunk *source = NULL);

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

    GetFieldHandlePtr  getHandleImage           (void) const;
    EditFieldHandlePtr editHandleImage          (void);
    GetFieldHandlePtr  getHandleInternalFormat  (void) const;
    EditFieldHandlePtr editHandleInternalFormat (void);
    GetFieldHandlePtr  getHandleExternalFormat  (void) const;
    EditFieldHandlePtr editHandleExternalFormat (void);
    GetFieldHandlePtr  getHandleScale           (void) const;
    EditFieldHandlePtr editHandleScale          (void);
    GetFieldHandlePtr  getHandleFrame           (void) const;
    EditFieldHandlePtr editHandleFrame          (void);
    GetFieldHandlePtr  getHandleMinFilter       (void) const;
    EditFieldHandlePtr editHandleMinFilter      (void);
    GetFieldHandlePtr  getHandleMagFilter       (void) const;
    EditFieldHandlePtr editHandleMagFilter      (void);
    GetFieldHandlePtr  getHandleWrapS           (void) const;
    EditFieldHandlePtr editHandleWrapS          (void);
    GetFieldHandlePtr  getHandleWrapT           (void) const;
    EditFieldHandlePtr editHandleWrapT          (void);
    GetFieldHandlePtr  getHandleWrapR           (void) const;
    EditFieldHandlePtr editHandleWrapR          (void);
    GetFieldHandlePtr  getHandleGLId            (void) const;
    EditFieldHandlePtr editHandleGLId           (void);
    GetFieldHandlePtr  getHandlePriority        (void) const;
    EditFieldHandlePtr editHandlePriority       (void);
    GetFieldHandlePtr  getHandleDirtyLeft       (void) const;
    EditFieldHandlePtr editHandleDirtyLeft      (void);
    GetFieldHandlePtr  getHandleDirtyMinX       (void) const;
    EditFieldHandlePtr editHandleDirtyMinX      (void);
    GetFieldHandlePtr  getHandleDirtyMaxX       (void) const;
    EditFieldHandlePtr editHandleDirtyMaxX      (void);
    GetFieldHandlePtr  getHandleDirtyMinY       (void) const;
    EditFieldHandlePtr editHandleDirtyMinY      (void);
    GetFieldHandlePtr  getHandleDirtyMaxY       (void) const;
    EditFieldHandlePtr editHandleDirtyMaxY      (void);
    GetFieldHandlePtr  getHandleDirtyMinZ       (void) const;
    EditFieldHandlePtr editHandleDirtyMinZ      (void);
    GetFieldHandlePtr  getHandleDirtyMaxZ       (void) const;
    EditFieldHandlePtr editHandleDirtyMaxZ      (void);
    GetFieldHandlePtr  getHandleAnisotropy      (void) const;
    EditFieldHandlePtr editHandleAnisotropy     (void);
    GetFieldHandlePtr  getHandleBorderColor     (void) const;
    EditFieldHandlePtr editHandleBorderColor    (void);
    GetFieldHandlePtr  getHandleCompareMode     (void) const;
    EditFieldHandlePtr editHandleCompareMode    (void);
    GetFieldHandlePtr  getHandleCompareFunc     (void) const;
    EditFieldHandlePtr editHandleCompareFunc    (void);
    GetFieldHandlePtr  getHandleDepthMode       (void) const;
    EditFieldHandlePtr editHandleDepthMode      (void);
    GetFieldHandlePtr  getHandleBorderWidth     (void) const;
    EditFieldHandlePtr editHandleBorderWidth    (void);
    GetFieldHandlePtr  getHandleSkipMipMapLevels (void) const;
    EditFieldHandlePtr editHandleSkipMipMapLevels(void);

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

            void execSync (      TextureObjChunkBase *pFrom,
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
    void operator =(const TextureObjChunkBase &source);
};

typedef TextureObjChunkBase *TextureObjChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTEXTUREOBJCHUNKBASE_H_ */
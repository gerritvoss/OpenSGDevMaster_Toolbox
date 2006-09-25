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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTUREOBJCHUNKFIELDS_H_
#define _OSGTEXTUREOBJCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGTextureBaseChunkFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class TextureObjChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureObjChunkPtr

typedef PointerFwdBuilder<TextureBaseChunkPtr, 
                          TextureBaseChunkConstPtr,
                          TextureObjChunk>::ObjPtr         TextureObjChunkPtr;
typedef PointerFwdBuilder<TextureBaseChunkPtr, 
                          TextureBaseChunkConstPtr,
                          TextureObjChunk>::ObjPtrConst    TextureObjChunkPtrConst;
typedef PointerFwdBuilder<TextureBaseChunkPtr, 
                          TextureBaseChunkConstPtr,
                          TextureObjChunk>::ObjConstPtr    TextureObjChunkConstPtr;
typedef PointerFwdBuilder<TextureBaseChunkPtr, 
                          TextureBaseChunkConstPtr,
                          TextureObjChunk>::ObjPtrArg      TextureObjChunkPtrArg;
typedef PointerFwdBuilder<TextureBaseChunkPtr, 
                          TextureBaseChunkConstPtr,
                          TextureObjChunk>::ObjConstPtrArg TextureObjChunkConstPtrArg;
typedef PointerFwdBuilder<TextureBaseChunkPtr, 
                          TextureBaseChunkConstPtr,
                          TextureObjChunk>::ObjPtrConstArg TextureObjChunkPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TextureObjChunkPtr> : 
    public FieldTraitsTemplateBase<TextureObjChunkPtr>
{
  private:

    static DataType             _type;                       

  public:

    typedef FieldTraits<TextureObjChunkPtr>  Self;

    enum                        { StringConvertable = 0x00 };

    static OSG_SYSTEM_DLLMAPPING 
                     DataType &getType (void);

    static const char *getSName(void) { return "SFTextureObjChunkPtr"; }
    static const char *getMName(void) { return "MFTextureObjChunkPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TextureObjChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SFieldAdaptor<TextureObjChunkPtr, SFFieldContainerPtr> SFTextureObjChunkPtr;
#endif

#ifndef OSG_COMPILETEXTUREOBJCHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(SField, TextureObjChunkPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MFieldAdaptor<TextureObjChunkPtr, MFFieldContainerPtr> MFTextureObjChunkPtr;
#endif

#ifndef OSG_COMPILETEXTUREOBJCHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(MField, TextureObjChunkPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGTEXTUREOBJCHUNKFIELDS_HEADER_CVSID "@(#)$Id: FCFieldsTemplate_h.h 106 2006-09-14 03:15:53Z dirk $"

#endif /* _OSGTEXTUREOBJCHUNKFIELDS_H_ */

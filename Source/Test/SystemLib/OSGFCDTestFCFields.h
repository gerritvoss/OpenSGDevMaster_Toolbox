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


#ifndef _OSGFCDTESTFCFIELDS_H_
#define _OSGFCDTESTFCFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class FCDTestFC;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! FCDTestFCPtr

OSG_GEN_CONTAINERPTR(FCDTestFC);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<FCDTestFCPtr> :
    public FieldTraitsFCPtrBase<FCDTestFCPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<FCDTestFCPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFFCDTestFCPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFFCDTestFCPtr"; }
};

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFCDTestFCPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<FCDTestFCPtr, 0>
    \hideinhierarchy
 */
#endif


template <>
struct FieldTraits<FCDTestFCPtr, 1> :
    public FieldTraitsFCPtrBase<FCDTestFCPtr, 1>
{
  private:

  public:

    typedef FieldTraits<FCDTestFCPtr, 1>  Self;
    typedef FieldContainerPtr           ParentType;

    static const FieldType::Cardinality eParentCard = FieldType::MultiField;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFFCDTestFCPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFFCDTestFCPtr"; }
};

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFieldContainerChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFieldContainerChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFieldContainerChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFieldContainerChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFieldContainerChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFieldContainerChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFieldContainerChildFCDTestFCPtr"; 
}

template<> inline
const Char8 *FieldTraits<FCDTestFCPtr, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFieldContainerChildFCDTestFCPtr"; 
}


#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef FieldContainerPtrSField<FCDTestFCPtr,
                                RecordedRefCountPolicy  > SFRecFCDTestFCPtr;
typedef FieldContainerPtrSField<FCDTestFCPtr,
                                UnrecordedRefCountPolicy> SFUnrecFCDTestFCPtr;
typedef FieldContainerPtrSField<FCDTestFCPtr,
                                WeakRefCountPolicy      > SFWeakFCDTestFCPtr;
typedef FieldContainerPtrSField<FCDTestFCPtr,
                                NoRefCountPolicy        > SFUncountedFCDTestFCPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef FieldContainerPtrMField<FCDTestFCPtr,
                                RecordedRefCountPolicy  > MFRecFCDTestFCPtr;
typedef FieldContainerPtrMField<FCDTestFCPtr,
                                UnrecordedRefCountPolicy> MFUnrecFCDTestFCPtr;
typedef FieldContainerPtrMField<FCDTestFCPtr,
                                WeakRefCountPolicy      > MFWeakFCDTestFCPtr;
typedef FieldContainerPtrMField<FCDTestFCPtr,
                                NoRefCountPolicy        > MFUncountedFCDTestFCPtr;
#endif



typedef FieldContainerPtrChildSField<
          FCDTestFCPtr, 
          UnrecordedRefCountPolicy,
          1                  > SFUnrecFieldContainerChildFCDTestFCPtr;

typedef SFUnrecFieldContainerChildFCDTestFCPtr 
    SFUnrecChildFCDTestFCPtr;


typedef FieldContainerPtrChildMField<
          FCDTestFCPtr, 
          UnrecordedRefCountPolicy,
          1                  > MFUnrecFieldContainerChildFCDTestFCPtr;

typedef MFUnrecFieldContainerChildFCDTestFCPtr
    MFUnrecChildFCDTestFCPtr;

OSG_END_NAMESPACE

#endif /* _OSGFCDTESTFCFIELDS_H_ */
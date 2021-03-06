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


#ifndef _OSGGEOMETRYFIELDS_H_
#define _OSGGEOMETRYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class Geometry;

OSG_GEN_CONTAINERPTR(Geometry);
/*! \ingroup GrpDrawablesGeometryFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<Geometry *, nsOSG> :
    public FieldTraitsFCPtrBase<Geometry *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<Geometry *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeometryPtr"; 
}

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeometryPtr"; 
}

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeometryPtr"; 
}

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeometryPtr"; 
}

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeometryPtr"; 
}

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeometryPtr"; 
}

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeometryPtr"; 
}

template<> inline
const Char8 *FieldTraits<Geometry *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeometryPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<Geometry *,
                      RecordedRefCountPolicy, nsOSG  > SFRecGeometryPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<Geometry *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecGeometryPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<Geometry *,
                      WeakRefCountPolicy, nsOSG      > SFWeakGeometryPtr;
/*! \ingroup GrpDrawablesGeometryFieldSFields */
typedef PointerSField<Geometry *,
                      NoRefCountPolicy, nsOSG        > SFUncountedGeometryPtr;


/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<Geometry *,
                      RecordedRefCountPolicy, nsOSG  > MFRecGeometryPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<Geometry *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecGeometryPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<Geometry *,
                      WeakRefCountPolicy, nsOSG      > MFWeakGeometryPtr;
/*! \ingroup GrpDrawablesGeometryFieldMFields */
typedef PointerMField<Geometry *,
                      NoRefCountPolicy, nsOSG        > MFUncountedGeometryPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecGeometryPtr : 
    public PointerSField<Geometry *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecGeometryPtr : 
    public PointerSField<Geometry *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakGeometryPtr :
    public PointerSField<Geometry *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedGeometryPtr :
    public PointerSField<Geometry *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecGeometryPtr :
    public PointerMField<Geometry *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecGeometryPtr :
    public PointerMField<Geometry *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakGeometryPtr :
    public PointerMField<Geometry *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawablesGeometryFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedGeometryPtr :
    public PointerMField<Geometry *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOMETRYFIELDS_H_ */

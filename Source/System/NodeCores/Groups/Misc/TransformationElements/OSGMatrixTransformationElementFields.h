/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGMATRIXTRANSFORMATIONELEMENTFIELDS_H_
#define _OSGMATRIXTRANSFORMATIONELEMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class MatrixTransformationElement;

OSG_GEN_CONTAINERPTR(MatrixTransformationElement);
/*! \ingroup GrpGroupFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<MatrixTransformationElement *, nsOSG> :
    public FieldTraitsFCPtrBase<MatrixTransformationElement *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<MatrixTransformationElement *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMatrixTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMatrixTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMatrixTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMatrixTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMatrixTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMatrixTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMatrixTransformationElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixTransformationElement *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMatrixTransformationElementPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<MatrixTransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > SFRecMatrixTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<MatrixTransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecMatrixTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<MatrixTransformationElement *,
                      WeakRefCountPolicy, nsOSG      > SFWeakMatrixTransformationElementPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<MatrixTransformationElement *,
                      NoRefCountPolicy, nsOSG        > SFUncountedMatrixTransformationElementPtr;


/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<MatrixTransformationElement *,
                      RecordedRefCountPolicy, nsOSG  > MFRecMatrixTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<MatrixTransformationElement *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecMatrixTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<MatrixTransformationElement *,
                      WeakRefCountPolicy, nsOSG      > MFWeakMatrixTransformationElementPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<MatrixTransformationElement *,
                      NoRefCountPolicy, nsOSG        > MFUncountedMatrixTransformationElementPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecMatrixTransformationElementPtr : 
    public PointerSField<MatrixTransformationElement *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecMatrixTransformationElementPtr : 
    public PointerSField<MatrixTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakMatrixTransformationElementPtr :
    public PointerSField<MatrixTransformationElement *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedMatrixTransformationElementPtr :
    public PointerSField<MatrixTransformationElement *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecMatrixTransformationElementPtr :
    public PointerMField<MatrixTransformationElement *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecMatrixTransformationElementPtr :
    public PointerMField<MatrixTransformationElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakMatrixTransformationElementPtr :
    public PointerMField<MatrixTransformationElement *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedMatrixTransformationElementPtr :
    public PointerMField<MatrixTransformationElement *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMATRIXTRANSFORMATIONELEMENTFIELDS_H_ */

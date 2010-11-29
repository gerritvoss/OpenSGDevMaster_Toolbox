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


#ifndef _OSGSKELETONOGREJOINTFIELDS_H_
#define _OSGSKELETONOGREJOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SkeletonOgreJoint;

OSG_GEN_CONTAINERPTR(SkeletonOgreJoint);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<SkeletonOgreJoint *> :
    public FieldTraitsFCPtrBase<SkeletonOgreJoint *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SkeletonOgreJoint *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSkeletonOgreJointPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSkeletonOgreJointPtr"; }
};

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSkeletonOgreJointPtr"; 
}


/*! \ingroup GrpDynamicsFieldTraits
 */
template <>
struct FieldTraits<SkeletonOgreJoint *, 1> :
    public FieldTraitsFCPtrBase<SkeletonOgreJoint *, 1>
{
  private:

  public:
    typedef FieldTraits<SkeletonOgreJoint *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildSkeletonOgreJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonOgreJoint *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildSkeletonOgreJointPtr"; 
}


/*! \ingroup GrpDynamicsFieldTraits
 */
template <>
struct FieldTraits<SkeletonOgreJoint *, 2> : 
    public FieldTraitsFCPtrBase<SkeletonOgreJoint *, 2>
{
  private:

    static  DataType                                _type;

  public:

    static const bool bIsPointerField = true;

    typedef FieldTraits<SkeletonOgreJoint *, 2>        Self;


    enum             { Convertible = Self::NotConvertible };
    
    static OSG_DYNAMICS_DLLMAPPING
                 DataType &getType (void);

    static const Char8    *getSName(void) 
    {
        return "SFParentSkeletonOgreJointPtr"; 
    }

    static const Char8    *getMName(void) 
    { 
        return "MFParentSkeletonOgreJointPtr"; 
    }
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonOgreJoint *,
                      RecordedRefCountPolicy  > SFRecSkeletonOgreJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonOgreJoint *,
                      UnrecordedRefCountPolicy> SFUnrecSkeletonOgreJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonOgreJoint *,
                      WeakRefCountPolicy      > SFWeakSkeletonOgreJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonOgreJoint *,
                      NoRefCountPolicy        > SFUncountedSkeletonOgreJointPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonOgreJoint *,
                      RecordedRefCountPolicy  > MFRecSkeletonOgreJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonOgreJoint *,
                      UnrecordedRefCountPolicy> MFUnrecSkeletonOgreJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonOgreJoint *,
                      WeakRefCountPolicy      > MFWeakSkeletonOgreJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonOgreJoint *,
                      NoRefCountPolicy        > MFUncountedSkeletonOgreJointPtr;



/*! \ingroup GrpDynamicsFieldSFields */
typedef ChildPointerSField<
          SkeletonOgreJoint *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildSkeletonOgreJointPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef ChildPointerMField<
          SkeletonOgreJoint *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildSkeletonOgreJointPtr;


/*! \ingroup GrpDynamicsFieldSFields */
typedef ParentPointerSField<
          SkeletonOgreJoint *, 
          NoRefCountPolicy,
          2    > SFParentSkeletonOgreJointPtr;

/*! \ingroup GrpDynamicsFieldMFields */
typedef ParentPointerMField<
          SkeletonOgreJoint *, 
          NoRefCountPolicy,
          2    > MFParentSkeletonOgreJointPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecSkeletonOgreJointPtr : 
    public PointerSField<SkeletonOgreJoint *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecSkeletonOgreJointPtr : 
    public PointerSField<SkeletonOgreJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakSkeletonOgreJointPtr :
    public PointerSField<SkeletonOgreJoint *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedSkeletonOgreJointPtr :
    public PointerSField<SkeletonOgreJoint *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecSkeletonOgreJointPtr :
    public PointerMField<SkeletonOgreJoint *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecSkeletonOgreJointPtr :
    public PointerMField<SkeletonOgreJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakSkeletonOgreJointPtr :
    public PointerMField<SkeletonOgreJoint *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedSkeletonOgreJointPtr :
    public PointerMField<SkeletonOgreJoint *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecChildSkeletonOgreJointPtr :
    public ChildPointerSField<
        SkeletonOgreJoint *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecChildSkeletonOgreJointPtr :
    public ChildPointerMField<
        SkeletonOgreJoint *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFParentSkeletonOgreJointPtr :
    public ParentPointerSField<
        SkeletonOgreJoint *, 
        NoRefCountPolicy,
        2    > {};

/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFParentSkeletonOgreJointPtr :
    public  ParentPointerMField<
        SkeletonOgreJoint *, 
        NoRefCountPolicy,
        2    > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKELETONOGREJOINTFIELDS_H_ */
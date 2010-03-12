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


#ifndef _OSGSKELETONJOINTFIELDS_H_
#define _OSGSKELETONJOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SkeletonJoint;

OSG_GEN_CONTAINERPTR(SkeletonJoint);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<SkeletonJoint *> :
    public FieldTraitsFCPtrBase<SkeletonJoint *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SkeletonJoint *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSkeletonJointPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSkeletonJointPtr"; }
};

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSkeletonJointPtr"; 
}


/*! \ingroup GrpDynamicsFieldTraits
 */
template <>
struct FieldTraits<SkeletonJoint *, 1> :
    public FieldTraitsFCPtrBase<SkeletonJoint *, 1>
{
  private:

  public:
    typedef FieldTraits<SkeletonJoint *, 1>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);
};

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChildSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChildSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChildSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChildSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChildSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChildSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChildSkeletonJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonJoint *, 1>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChildSkeletonJointPtr"; 
}


/*! \ingroup GrpDynamicsFieldTraits
 */
template <>
struct FieldTraits<SkeletonJoint *, 2> : 
    public FieldTraitsFCPtrBase<SkeletonJoint *, 2>
{
  private:

    static  DataType                                _type;

  public:

    static const bool bIsPointerField = true;

    typedef FieldTraits<SkeletonJoint *, 2>        Self;


    enum             { Convertible = Self::NotConvertible };
    
    static OSG_DYNAMICS_DLLMAPPING
                 DataType &getType (void);

    static const Char8    *getSName(void) 
    {
        return "SFParentSkeletonJointPtr"; 
    }

    static const Char8    *getMName(void) 
    { 
        return "MFParentSkeletonJointPtr"; 
    }
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonJoint *,
                      RecordedRefCountPolicy  > SFRecSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonJoint *,
                      UnrecordedRefCountPolicy> SFUnrecSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonJoint *,
                      WeakRefCountPolicy      > SFWeakSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonJoint *,
                      NoRefCountPolicy        > SFUncountedSkeletonJointPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonJoint *,
                      RecordedRefCountPolicy  > MFRecSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonJoint *,
                      UnrecordedRefCountPolicy> MFUnrecSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonJoint *,
                      WeakRefCountPolicy      > MFWeakSkeletonJointPtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<SkeletonJoint *,
                      NoRefCountPolicy        > MFUncountedSkeletonJointPtr;



/*! \ingroup GrpDynamicsFieldSFields */
typedef ChildPointerSField<
          SkeletonJoint *, 
          UnrecordedRefCountPolicy,
          1             > SFUnrecChildSkeletonJointPtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef ChildPointerMField<
          SkeletonJoint *, 
          UnrecordedRefCountPolicy,
          1             > MFUnrecChildSkeletonJointPtr;


/*! \ingroup GrpDynamicsFieldSFields */
typedef ParentPointerSField<
          SkeletonJoint *, 
          NoRefCountPolicy,
          2    > SFParentSkeletonJointPtr;

/*! \ingroup GrpDynamicsFieldMFields */
typedef ParentPointerMField<
          SkeletonJoint *, 
          NoRefCountPolicy,
          2    > MFParentSkeletonJointPtr;



#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecSkeletonJointPtr : 
    public PointerSField<SkeletonJoint *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecSkeletonJointPtr : 
    public PointerSField<SkeletonJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakSkeletonJointPtr :
    public PointerSField<SkeletonJoint *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedSkeletonJointPtr :
    public PointerSField<SkeletonJoint *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecSkeletonJointPtr :
    public PointerMField<SkeletonJoint *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecSkeletonJointPtr :
    public PointerMField<SkeletonJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakSkeletonJointPtr :
    public PointerMField<SkeletonJoint *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedSkeletonJointPtr :
    public PointerMField<SkeletonJoint *,
                         NoRefCountPolicy        > {};



/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecChildSkeletonJointPtr :
    public ChildPointerSField<
        SkeletonJoint *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecChildSkeletonJointPtr :
    public ChildPointerMField<
        SkeletonJoint *, 
        UnrecordedRefCountPolicy,
        1             > {};


/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFParentSkeletonJointPtr :
    public ParentPointerSField<
        SkeletonJoint *, 
        NoRefCountPolicy,
        2    > {};

/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFParentSkeletonJointPtr :
    public  ParentPointerMField<
        SkeletonJoint *, 
        NoRefCountPolicy,
        2    > {};


#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKELETONJOINTFIELDS_H_ */
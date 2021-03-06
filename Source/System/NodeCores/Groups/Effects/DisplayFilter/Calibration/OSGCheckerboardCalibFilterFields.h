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


#ifndef _OSGCHECKERBOARDCALIBFILTERFIELDS_H_
#define _OSGCHECKERBOARDCALIBFILTERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class CheckerboardCalibFilter;

OSG_GEN_CONTAINERPTR(CheckerboardCalibFilter);
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldTraits
    \ingroup GrpLibOSGEffectGroups
 */
template <>
struct FieldTraits<CheckerboardCalibFilter *, nsOSG> :
    public FieldTraitsFCPtrBase<CheckerboardCalibFilter *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<CheckerboardCalibFilter *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EFFECTGROUPS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCheckerboardCalibFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCheckerboardCalibFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCheckerboardCalibFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCheckerboardCalibFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCheckerboardCalibFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCheckerboardCalibFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCheckerboardCalibFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<CheckerboardCalibFilter *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCheckerboardCalibFilterPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<CheckerboardCalibFilter *,
                      RecordedRefCountPolicy, nsOSG  > SFRecCheckerboardCalibFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<CheckerboardCalibFilter *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecCheckerboardCalibFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<CheckerboardCalibFilter *,
                      WeakRefCountPolicy, nsOSG      > SFWeakCheckerboardCalibFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields */
typedef PointerSField<CheckerboardCalibFilter *,
                      NoRefCountPolicy, nsOSG        > SFUncountedCheckerboardCalibFilterPtr;


/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<CheckerboardCalibFilter *,
                      RecordedRefCountPolicy, nsOSG  > MFRecCheckerboardCalibFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<CheckerboardCalibFilter *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecCheckerboardCalibFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<CheckerboardCalibFilter *,
                      WeakRefCountPolicy, nsOSG      > MFWeakCheckerboardCalibFilterPtr;
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields */
typedef PointerMField<CheckerboardCalibFilter *,
                      NoRefCountPolicy, nsOSG        > MFUncountedCheckerboardCalibFilterPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFRecCheckerboardCalibFilterPtr : 
    public PointerSField<CheckerboardCalibFilter *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUnrecCheckerboardCalibFilterPtr : 
    public PointerSField<CheckerboardCalibFilter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFWeakCheckerboardCalibFilterPtr :
    public PointerSField<CheckerboardCalibFilter *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUncountedCheckerboardCalibFilterPtr :
    public PointerSField<CheckerboardCalibFilter *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFRecCheckerboardCalibFilterPtr :
    public PointerMField<CheckerboardCalibFilter *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUnrecCheckerboardCalibFilterPtr :
    public PointerMField<CheckerboardCalibFilter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFWeakCheckerboardCalibFilterPtr :
    public PointerMField<CheckerboardCalibFilter *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpEffectsGroupsDisplayFilterFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUncountedCheckerboardCalibFilterPtr :
    public PointerMField<CheckerboardCalibFilter *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCHECKERBOARDCALIBFILTERFIELDS_H_ */

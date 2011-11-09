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


#ifndef _OSGWINDOWEVENTDETAILSFIELDS_H_
#define _OSGWINDOWEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class WindowEventDetails;

OSG_GEN_CONTAINERPTR(WindowEventDetails);
/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<WindowEventDetails *, nsOSG> :
    public FieldTraitsFCPtrBase<WindowEventDetails *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<WindowEventDetails *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

};

template<> inline
const Char8 *FieldTraits<WindowEventDetails *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventDetails *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventDetails *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventDetails *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdWindowEventDetailsPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventDetails *,
                      RecordedRefCountPolicy, nsOSG  > SFRecWindowEventDetailsPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventDetails *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecWindowEventDetailsPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventDetails *,
                      WeakRefCountPolicy, nsOSG      > SFWeakWindowEventDetailsPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventDetails *,
                      NoRefCountPolicy, nsOSG        > SFUncountedWindowEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecWindowEventDetailsPtr : 
    public PointerSField<WindowEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecWindowEventDetailsPtr : 
    public PointerSField<WindowEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakWindowEventDetailsPtr :
    public PointerSField<WindowEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedWindowEventDetailsPtr :
    public PointerSField<WindowEventDetails *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGWINDOWEVENTDETAILSFIELDS_H_ */

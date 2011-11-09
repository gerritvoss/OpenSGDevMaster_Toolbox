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


#ifndef _OSGWINDOWEVENTPRODUCERFIELDS_H_
#define _OSGWINDOWEVENTPRODUCERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class WindowEventProducer;

OSG_GEN_CONTAINERPTR(WindowEventProducer);
/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<WindowEventProducer *, nsOSG> :
    public FieldTraitsFCPtrBase<WindowEventProducer *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<WindowEventProducer *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecWindowEventProducerPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecWindowEventProducerPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakWindowEventProducerPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdWindowEventProducerPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecWindowEventProducerPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecWindowEventProducerPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakWindowEventProducerPtr"; 
}

template<> inline
const Char8 *FieldTraits<WindowEventProducer *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdWindowEventProducerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventProducer *,
                      RecordedRefCountPolicy, nsOSG  > SFRecWindowEventProducerPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventProducer *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecWindowEventProducerPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventProducer *,
                      WeakRefCountPolicy, nsOSG      > SFWeakWindowEventProducerPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<WindowEventProducer *,
                      NoRefCountPolicy, nsOSG        > SFUncountedWindowEventProducerPtr;


/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<WindowEventProducer *,
                      RecordedRefCountPolicy, nsOSG  > MFRecWindowEventProducerPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<WindowEventProducer *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecWindowEventProducerPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<WindowEventProducer *,
                      WeakRefCountPolicy, nsOSG      > MFWeakWindowEventProducerPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<WindowEventProducer *,
                      NoRefCountPolicy, nsOSG        > MFUncountedWindowEventProducerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecWindowEventProducerPtr : 
    public PointerSField<WindowEventProducer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecWindowEventProducerPtr : 
    public PointerSField<WindowEventProducer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakWindowEventProducerPtr :
    public PointerSField<WindowEventProducer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedWindowEventProducerPtr :
    public PointerSField<WindowEventProducer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecWindowEventProducerPtr :
    public PointerMField<WindowEventProducer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecWindowEventProducerPtr :
    public PointerMField<WindowEventProducer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakWindowEventProducerPtr :
    public PointerMField<WindowEventProducer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedWindowEventProducerPtr :
    public PointerMField<WindowEventProducer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGWINDOWEVENTPRODUCERFIELDS_H_ */

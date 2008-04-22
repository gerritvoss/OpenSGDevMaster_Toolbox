/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

#ifndef _OSGATTACHMENTMAPFIELDTRAITS_H_
#define _OSTATTACHMENTMAPFIELDTRAITS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGFieldTraits.h"
#include "OSGContainerForwards.h"

#include "OSGAttachment.h"

#include "map"

OSG_BEGIN_NAMESPACE

typedef std::map<UInt32, AttachmentPtr>  AttachmentMap;

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

#ifdef OSG_DOC_FILES_IN_MODULE
/*! \file OSGBaseFieldTraits.h
    \ingroup GrpBaseField
    \ingroup GrpBaseFieldTraits
*/
#endif

/*! \ingroup GrpBaseFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<AttachmentMap> : 
    public FieldTraitsTemplateBase<AttachmentMap>
{
  private:

    static  DataType                                 _type;

  public:

    typedef FieldTraits<AttachmentMap>  Self;


    enum             { Convertible = Self::NotConvertible                  };

    static OSG_SYSTEM_DLLMAPPING
                 DataType &getType      (void);

    static const Char8    *getSName     (void) 
    {
        return "SFAttachmentPtrMap"; 
    }

    static const Char8    *getMName     (void)
    {
        return "MFAttachmentPtrMap"; 
    }
    
    static UInt32 getBinSize(const AttachmentMap &aMap)
    {
        AttachmentMap::const_iterator mapIt  = aMap.begin();
        AttachmentMap::const_iterator mapEnd = aMap.end  ();

        UInt32 numPublicObjects = 0;

        for(; mapIt != mapEnd; ++mapIt)
        {
            if(mapIt->second->getInternal().getValue() == false)
            {
                ++numPublicObjects;
            }
        }

        // number of elements in map + binding and pointer id for each element
        return sizeof(UInt32) +
                numPublicObjects * (sizeof(UInt16) + sizeof(UInt32));
    }

    static UInt32 getBinSize(const AttachmentMap *aMaps,
                                   UInt32         numObjects)
    {
        UInt32 size = 0;

        // defaut: individual field sizes
        for(UInt32 i = 0; i < numObjects; ++i)
        {
            size += getBinSize(aMaps[i]);
        }

        return size;
    }
    
    static void copyToBin(      BinaryDataHandler &pMem,
                          const AttachmentMap     &aMap )
    {
        AttachmentMap::const_iterator mapIt  = aMap.begin();
        AttachmentMap::const_iterator mapEnd = aMap.end  ();
        
        UInt32 numPublicObjects = 0;
        UInt16 binding;
        UInt32 fcId;
        
        for(; mapIt != mapEnd; ++mapIt)
        {
            if(mapIt->second->getInternal().getValue() == false)
            {
                ++numPublicObjects;
            }
        }
        
        pMem.putValue(numPublicObjects);
        
        for(mapIt = aMap.begin(); mapIt != mapEnd; ++mapIt)
        {
            if(mapIt->second->getInternal().getValue() == false)
            {
                binding = mapIt->first & 0xFFFF;
                fcId    = mapIt->second->getId();
                
                pMem.putValue(binding);
                pMem.putValue(fcId   );
            }
        }
    }
    
    static void copyToBin(      BinaryDataHandler &pMem,
                          const AttachmentMap     *aMaps,
                                UInt32             numObjects)
    {
        for(UInt32 i = 0; i < numObjects; ++i)
        {
            copyToBin(pMem, aMaps[i]);
        }
    }
    
    static void copyFromBin(BinaryDataHandler &pMem,
                            AttachmentMap     &aMap )
    {
        AttachmentPtr attPtr;
        UInt32        key;
        UInt16        binding;
        UInt32        fcId;
        UInt32        size;
        
        pMem.getValue(size);


        AttachmentMap::const_iterator mapIt  = aMap.begin();
        AttachmentMap::const_iterator mapEnd = aMap.begin();

        for(; mapIt != mapEnd; ++mapIt)
        {
            if((*mapIt).second != NullFC)
            {
                Thread::getCurrentChangeList()->addDelayedSubRef<
                    UnrecordedRefCountPolicy>((*mapIt).second);
            }
        }
        
        aMap.clear();

        
        for(UInt32 i = 0; i < size; ++i)
        {
            pMem.getValue(binding);
            pMem.getValue(fcId   );
            
            attPtr = dynamic_cast<AttachmentPtr>(
                FieldContainerFactory::the()->getMappedContainer(fcId));
            
            key = (static_cast<UInt32>(attPtr->getGroupId()) << 16) | binding;

            UnrecordedRefCountPolicy::addRef(attPtr);

            aMap.insert(AttachmentMap::value_type(key, attPtr));
        }
    }
    
    static void copyFromBin(BinaryDataHandler &pMem,
                            AttachmentMap     *aMaps,
                            UInt32             numObjects)
    {
        for(UInt32 i = 0; i < numObjects; ++i)
        {
            copyFromBin(pMem, aMaps[i]);
        }
    }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ContainerAttachmentMap> */
/*! \hideinhierarchy                               */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)

OSG_END_NAMESPACE

#endif /* _OSGATTACHMENTMAPFIELDTRAITS_H_ */

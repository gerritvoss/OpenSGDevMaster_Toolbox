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

OSG_BEGIN_NAMESPACE

/*---------------------------------------------------------------------*/

inline
EditMFieldHandle<MFFieldContainerPtr>::EditMFieldHandle(
    const EditMFieldHandle &source) :
    
     Inherited (source)
{
}

inline
EditMFieldHandle<MFFieldContainerPtr>::EditMFieldHandle(      
          MFFieldContainerPtr  *pField, 
    const FieldDescriptionBase *pDescription) :

     Inherited (pField, 
                pDescription)
{
}

inline
const FieldType &EditMFieldHandle<MFFieldContainerPtr>::getType(void) const
{
    return MFFieldContainerPtr::getClassType();
}

inline
bool EditMFieldHandle<MFFieldContainerPtr>::isPointerField(void) const
{
    return true;
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::add(
    FieldContainerPtrConstArg pNewElement)
{
    if(_fAddMethod != NULL)
    {
        _fAddMethod(pNewElement);
    }
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::replace(
    const UInt32                    uiIndex,
          FieldContainerPtrConstArg pNewElement)
{
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::pushValueToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushValueToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::pushSizeToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushSizeToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::setAddMethod(AddMethod fMethod)
{
    _fAddMethod = fMethod;
}

inline
bool EditMFieldHandle<MFFieldContainerPtr>::equal(Inherited::Ptr rhs)
{
    Ptr pOther = boost::dynamic_pointer_cast<EditMFieldHandle>(rhs);

    if(pOther == NULL)
    {
        return false;
    }

    MFFieldContainerPtr *pLhs = 
        static_cast<MFFieldContainerPtr *>(        _pField);

    MFFieldContainerPtr *pRhs = 
        static_cast<MFFieldContainerPtr *>(pOther->_pField);

    return (*pLhs) == (*pRhs);
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::pushValueFromCString(
    const Char8 *str)
{
    FWARNING(("illegal pushValueFromCString called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::copyValues(
    GetFieldHandlePtr source)
{
    FWARNING(("illegal copyValues called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFFieldContainerPtr>::shareValues(
    GetFieldHandlePtr source)
{
    OSG_ASSERT(false);
}


inline
void EditMFieldHandle<MFFieldContainerPtr>::cloneValues(
          GetFieldHandlePtr  pSrc,
    const TypePtrVector     &shareTypes,
    const TypePtrVector     &ignoreTypes,
    const TypeIdVector      &shareGroupIds,
    const TypeIdVector      &ignoreGroupIds) const
{
    OSG_ASSERT(false);
}

/*---------------------------------------------------------------------*/

inline
GetMFieldHandle<MFFieldContainerPtr>::GetMFieldHandle(
    const GetMFieldHandle &source) :

    Inherited(source)
{
}

inline
GetMFieldHandle<MFFieldContainerPtr>::GetMFieldHandle(
    const MFFieldContainerPtr  *pField, 
    const FieldDescriptionBase *pDescription) :

    Inherited(pField, pDescription)
{
}

inline
const FieldType &GetMFieldHandle<MFFieldContainerPtr>::getType(void) const
{
    return MFFieldContainerPtr::getClassType();
}


inline
bool GetMFieldHandle<MFFieldContainerPtr>::isPointerField(void) const
{
    return true;
}


inline
void GetMFieldHandle<MFFieldContainerPtr>::pushValueToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushValueToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void GetMFieldHandle<MFFieldContainerPtr>::pushSizeToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushSizeToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
bool GetMFieldHandle<MFFieldContainerPtr>::equal(Inherited::Ptr rhs)
{
    Ptr pOther = boost::dynamic_pointer_cast<GetMFieldHandle>(rhs);

    if(pOther == NULL)
    {
        return false;
    }

    MFFieldContainerPtr const *pLhs = 
        static_cast<MFFieldContainerPtr const *>(        _pField);

    MFFieldContainerPtr const *pRhs = 
        static_cast<MFFieldContainerPtr const *>(pOther->_pField);

    return (*pLhs) == (*pRhs);
}

inline
MFFieldContainerPtr const *
    GetMFieldHandle<MFFieldContainerPtr>::operator ->(void)
{
    return static_cast<MFFieldContainerPtr const *>(_pField);
}

inline
MFFieldContainerPtr const &
    GetMFieldHandle<MFFieldContainerPtr>::operator * (void)
{
    return *(static_cast<MFFieldContainerPtr const *>(_pField));
}


/*---------------------------------------------------------------------*/

template<class FieldT> inline
GetFCPtrMFieldHandle<FieldT>::GetFCPtrMFieldHandle(
    const GetFCPtrMFieldHandle &source) :

    Inherited(source)
{
}

template<class FieldT> inline
GetFCPtrMFieldHandle<FieldT>::GetFCPtrMFieldHandle(
    const FieldT               *pField, 
    const FieldDescriptionBase *pDescription) :

    Inherited(pField, pDescription)
{
}

template<class FieldT> inline
const FieldType &GetFCPtrMFieldHandle<FieldT>::getType(void) const
{
    return FieldT::getClassType();
}

template<class FieldT> inline
void GetFCPtrMFieldHandle<FieldT>::pushValueToStream(OutStream &str) const
{
    FWARNING(("illegal pushValueToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

template<class FieldT> inline
void GetFCPtrMFieldHandle<FieldT>::pushSizeToStream(OutStream &str) const
{
    FWARNING(("illegal pushSizeToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

template<class FieldT> inline
FieldT const *GetFCPtrMFieldHandle<FieldT>::operator ->(void)
{
    return static_cast<FieldT const *>(_pField);
}

template<class FieldT> inline
FieldT const &GetFCPtrMFieldHandle<FieldT>::operator * (void)
{
    return *(static_cast<FieldT const *>(_pField));
}


/*---------------------------------------------------------------------*/

template<class FieldT> inline
EditFCPtrMFieldHandle<FieldT>::EditFCPtrMFieldHandle(
    const EditFCPtrMFieldHandle &source) :
    
     Inherited (source            ),
    _fAddMethod(source._fAddMethod)
{
}

template<class FieldT> inline
EditFCPtrMFieldHandle<FieldT>::EditFCPtrMFieldHandle( 
          FieldT               *pField, 
    const FieldDescriptionBase *pDescription) :

     Inherited (pField, 
                pDescription),
    _fAddMethod(NULL        )
{
}

template<class FieldT> inline
const FieldType &EditFCPtrMFieldHandle<FieldT>::getType(void) const
{
    return FieldT::getClassType();
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::add(FieldContainerPtrConstArg pNewElement)
{
    typename FieldT::ArgumentType pVal = 
        dynamic_cast<typename FieldT::ArgumentType>(pNewElement);

    if(pNewElement != NULL && pVal == NULL)
        return;

    if(_fAddMethod != NULL)
    {
        _fAddMethod(pVal);
    }
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::replace(
    const    UInt32                    uiIndex,
             FieldContainerPtrConstArg pNewElement)
{
    OSG_ASSERT(false);
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::pushValueToStream(OutStream &str) const
{
    FWARNING(("illegal pushValueToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::pushSizeToStream(OutStream &str) const
{
    FWARNING(("illegal pushSizeToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::setAddMethod(AddMethod fMethod)
{
    _fAddMethod = fMethod;
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::pushValueFromCString(const Char8 *str)
{
    FWARNING(("illegal pushValueFromCString called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::copyValues(GetFieldHandlePtr  source)
{
    FWARNING(("illegal copyValues called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::shareValues(GetFieldHandlePtr source)
{
    OSG_ASSERT(false);
}

template<class FieldT> inline
void EditFCPtrMFieldHandle<FieldT>::cloneValues(
              GetFieldHandlePtr  pSrc,
        const TypePtrVector     &shareTypes,
        const TypePtrVector     &ignoreTypes,
        const TypeIdVector      &shareGroupIds,
        const TypeIdVector      &ignoreGroupIds) const
{
    OSG_ASSERT(false);
}

/*---------------------------------------------------------------------*/


inline
EditMFieldHandle<MFParentFieldContainerPtr>::EditMFieldHandle(
    const EditMFieldHandle &source) :

    Inherited(source)
{
}

inline
EditMFieldHandle<MFParentFieldContainerPtr>::EditMFieldHandle(      
          MFParentFieldContainerPtr *pField, 
    const FieldDescriptionBase      *pDescription) :

    Inherited(pField, pDescription)
{
}

inline
const FieldType &EditMFieldHandle<MFParentFieldContainerPtr>::getType(
    void) const
{
    return MFParentFieldContainerPtr::getClassType();
}

inline
bool EditMFieldHandle<MFParentFieldContainerPtr>::isPointerField(void) const
{
    return true;
}

inline
void EditMFieldHandle<MFParentFieldContainerPtr>::pushValueToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushValueToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFParentFieldContainerPtr>::pushSizeToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushSizeToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
bool EditMFieldHandle<MFParentFieldContainerPtr>::equal(Inherited::Ptr rhs)
{
    Ptr pOther = boost::dynamic_pointer_cast<EditMFieldHandle>(rhs);

    if(pOther == NULL)
    {
        return false;
    }

    MFParentFieldContainerPtr *pLhs = 
        static_cast<MFParentFieldContainerPtr *>(        _pField);

    MFParentFieldContainerPtr *pRhs = 
        static_cast<MFParentFieldContainerPtr *>(pOther->_pField);

    return (*pLhs) == (*pRhs);
}

inline
void EditMFieldHandle<MFParentFieldContainerPtr>::pushValueFromCString(
    const Char8 *str)
{
    FWARNING(("illegal pushValueFromCString called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFParentFieldContainerPtr>::copyValues(
    GetFieldHandlePtr source)
{
    FWARNING(("illegal copyValues called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void EditMFieldHandle<MFParentFieldContainerPtr>::shareValues(
    GetFieldHandlePtr source)
{
    FWARNING(("illegal copyValues called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}


inline
void EditMFieldHandle<MFParentFieldContainerPtr>::cloneValues(
          GetFieldHandlePtr  pSrc,
    const TypePtrVector     &shareTypes,
    const TypePtrVector     &ignoreTypes,
    const TypeIdVector      &shareGroupIds,
    const TypeIdVector      &ignoreGroupIds) const
{
    FWARNING(("illegal copyValues called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}


/*---------------------------------------------------------------------*/


inline
GetMFieldHandle<MFParentFieldContainerPtr>::GetMFieldHandle(
    const GetMFieldHandle &source) :

    Inherited(source)
{
}

inline
GetMFieldHandle<MFParentFieldContainerPtr>::GetMFieldHandle(
    const MFParentFieldContainerPtr *pField, 
    const FieldDescriptionBase      *pDescription) :

    Inherited(pField, pDescription)
{
}

inline
const FieldType &
    GetMFieldHandle<MFParentFieldContainerPtr>::getType(void) const
{
    return MFFieldContainerPtr::getClassType();
}


inline
bool GetMFieldHandle<MFParentFieldContainerPtr>::isPointerField(void) const
{
    return true;
}

inline
void GetMFieldHandle<MFParentFieldContainerPtr>::pushValueToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushValueToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
void GetMFieldHandle<MFParentFieldContainerPtr>::pushSizeToStream(
    OutStream &str) const
{
    FWARNING(("illegal pushSizeToStream called for %s\n", 
              this->getName().c_str()));
    OSG_ASSERT(false);
}

inline
bool GetMFieldHandle<MFParentFieldContainerPtr>::equal(Inherited::Ptr rhs)
{
    Ptr pOther = boost::dynamic_pointer_cast<GetMFieldHandle>(rhs);

    if(pOther == NULL)
    {
        return false;
    }

    MFParentFieldContainerPtr const *pLhs = 
        static_cast<MFParentFieldContainerPtr const *>(        _pField);

    MFParentFieldContainerPtr const *pRhs = 
        static_cast<MFParentFieldContainerPtr const *>(pOther->_pField);

    return (*pLhs) == (*pRhs);
}

inline
MFParentFieldContainerPtr const *
    GetMFieldHandle<MFParentFieldContainerPtr>::operator ->(void)
{
    return static_cast<MFParentFieldContainerPtr const *>(_pField);
}

inline
MFParentFieldContainerPtr const &
    GetMFieldHandle<MFParentFieldContainerPtr>::operator * (void)
{
    return *(static_cast<MFParentFieldContainerPtr const *>(_pField));
}

OSG_END_NAMESPACE

/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

#ifndef _OSGCGFXVARIABLETEXOBJ_H_
#define _OSGCGFXVARIABLETEXOBJ_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGCgFXVariableTexObjBase.h"

OSG_BEGIN_NAMESPACE

class CgFXMaterial;
class ColladaDomProfileCgFXHandler;

/*! \brief CgFXVariableTexObj class. See \ref 
           PageSystemCgFXVariableTexObj for a description.
    \ingroup GrpSystemCgFCVariables
    \ingroup GrpLibOSGSystem
    \includebasedoc
 */

class OSG_CONTRIBCGFX_DLLMAPPING CgFXVariableTexObj : 
    public CgFXVariableTexObjBase
{
  private:

    /*==========================  PUBLIC  =================================*/

  public:

    enum CgFXVType
    {
        CgFXTypeTexObj = ShaderVariable::SHVTypeFunctor + 1
    };

    typedef CgFXVariableTexObjBase Inherited;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField, 
                         UInt32            origin,
                         BitVector         details);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    CgFXVariableTexObj(void);
    CgFXVariableTexObj(const CgFXVariableTexObj &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CgFXVariableTexObj(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Init                                     */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Init                                     */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class CgFXVariableTexObjBase;
    friend class CgFXMaterial;

    friend class ColladaDomProfileCgFXHandler;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CgFXVariableTexObj &source);
};

typedef CgFXVariableTexObj *CgFXVariableTexObjP;

OSG_END_NAMESPACE

#include "OSGCgFXVariableTexObjBase.inl"
#include "OSGCgFXVariableTexObj.inl"

#endif /* _OSGCGFXVARIABLETEXOBJ_H_ */

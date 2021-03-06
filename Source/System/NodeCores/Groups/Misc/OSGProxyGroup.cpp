/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#include <cstdlib>
#include <cstdio>

#include <sstream>
#include <fstream>

#include "OSGConfig.h"

#include "OSGAction.h"
#include "OSGCamera.h"
#include "OSGRenderAction.h"
#include "OSGSceneFileHandler.h"
#include "OSGVolumeDraw.h"

#include "OSGProxyGroup.h"

OSG_USING_NAMESPACE

// Documentation for this class is emited in the
// OSGProxyGroupBase.cpp file.
// To modify it, please change the .fcd file (OSGProxyGroup.fcd) and
// regenerate the base file.

/*-------------------------------------------------------------------------*/
/*                               Sync                                      */

void ProxyGroup::changed(ConstFieldMaskArg whichField, 
                         UInt32            origin,
                         BitVector         details)
{
    if(whichField & (UrlFieldMask))
    {
        if(getAbsoluteUrl().empty())
        {
            PathHandler *ph = SceneFileHandler::the()->getPathHandler();

            if(ph != NULL) 
            {
                setAbsoluteUrl(ph->findFile(getUrl().c_str()));
            }

            if(getAbsoluteUrl().empty())
            {
                setAbsoluteUrl(getUrl());
            }

            setState(NOT_LOADED);
        }
    }
    if(whichField & (StateFieldMask |
                     UrlFieldMask   |
                     VolumeFieldMask))
    {
        for(UInt32 i = 0; i < _mfParents.size(); i++)
        {
            _mfParents[i]->invalidateVolume();
        }
    }

    Inherited::changed(whichField, origin, details);
}

/*-------------------------------------------------------------------------*/
/*                               Dump                                      */

void ProxyGroup::dump(       UInt32    OSG_CHECK_ARG(uiIndent), 
                       const BitVector OSG_CHECK_ARG(bvFlags )) const
{
    SLOG << "Dump ProxyGroup NI" << std::endl;
}

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

ProxyGroup::ProxyGroup(void) :
    Inherited()
{
}

ProxyGroup::ProxyGroup(const ProxyGroup &source) :
    Inherited(source)
{
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

ProxyGroup::~ProxyGroup(void)
{
}

void ProxyGroup::resolveLinks(void)
{
    _loadedRoot = NULL;
}

/*! 
  If url was loaded, extend volume by loaded geometry. Otherwise
  extend volume by the volume given in the proxy object
*/

void ProxyGroup::adjustVolume(Volume &volume)
{
    volume.setValid();
    volume.setEmpty();

    if(getEnabled() == false)
        return;

    if(getState() == LOADED && getRoot() != NULL)
    {
        volume.extendBy(getRoot()->getVolume());
    }
    else
    {
        volume.extendBy(getVolume());
    }
}

/*-------------------------------------------------------------------------*/
/*                                Draw                                     */

/*!
  Draw loaded geometry. If nothing was loaded until now, start
  loading. If loading is not finished, draw the children of 
  thid group.
 */

#ifdef OSG_OLD_RENDER_ACTION
ActionBase::ResultE ProxyGroup::render(Action *action)
{
    DrawActionBase *da        = dynamic_cast<DrawActionBase *>(action);

    if(getEnabled() == false)
        return ActionBase::Continue;

    if(getState() == NOT_LOADED)
        startLoading();

    if(getState() == LOAD_THREAD_FINISHED)
    {
        if(_loadedRoot != NULL)
        {
            _loadThread = NULL;

            setRoot(_loadedRoot);

            getRoot()->invalidateVolume();
            getRoot()->updateVolume();


            setState(LOADED);

            da->getActNode()->invalidateVolume();
            da->getActNode()->updateVolume    ();
        }
        else
        {
            SWARNING << "failed to load " << getAbsoluteUrl() << std::endl;

            setState(LOAD_ERROR);
        }
    }

    if(getState() == LOADED)
    {
        da->useNodeList();

        if(da->isVisible(getCPtr(getRoot())))
            da->addNode(getRoot());
    }
    else
    {
        if(da->getActNode()->getNChildren() == 0)
        {
            Color3f col;
            col.setValuesRGB(.5,.3,0);            

            dropVolume(da, da->getActNode(), col);
        }
    }

    // thread cleanup
    if(_loadThread && _loadQueue.empty())
    {
        printf("join\n");
        BaseThread::join(_loadThread);
        _loadThread = NULL;
    }

    return Action::Continue;
}
#endif

ActionBase::ResultE ProxyGroup::render(Action *action)
{
    return Action::Continue;
}

/*-------------------------------------------------------------------------*/
/*                               loading                                   */

/*!
  Load the given URL, currently the URL is treated as a filename.
 */

void ProxyGroup::startLoading(void)
{
#ifdef OSG_OLD_RENDER_ACTION
    if(getConcurrentLoad() == false)
    {
        if(getMFInline()->size() == 0)
        {
            _loadedRoot = SceneFileHandler::the()->read(
                getAbsoluteUrl().c_str());
        }
        else
        {
            std::stringstream tmpStream(std::ios_base::in    |
                                        std::ios_base::out   |
                                        std::ios_base::binary);

            tmpStream.write(
                reinterpret_cast<const char*>(&getMFInline()->front()), 
                getMFInline()->size ());

            _loadedRoot = SceneFileHandler::the()->read(tmpStream, "osb");
        }

        setState(LOAD_THREAD_FINISHED);
    }
    else
    {
        if(_loadLock == NULL)
        {
            _loadLock = Lock::get("ProxyGroupLoadLock");
        }

        _loadLock->acquire();
        
        bool noThread = _loadQueue.empty();
        
        _loadQueue.push(this);

        setState(LOAD_THREAD_RUNNING);
        
        _loadLock->release();
        
        if(noThread)
        {
            if(_loadThread)
                BaseThread::join(_loadThread);

            _loadThread = dynamic_cast<Thread *>(
                ThreadManager::the()->getThread(NULL));

            _loadThread->runFunction(loadProc, 
                                     Thread::getCurrentAspect(),
                                     NULL                     );
        }
    }
#endif
}

/*-------------------------------------------------------------------------*/
/*                               Init                                      */

void ProxyGroup::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
        RenderAction::registerEnterDefault(
            ProxyGroup::getClassType(),
            reinterpret_cast<Action::Callback>(&ProxyGroup::render));
    }
}


void ProxyGroup::loadProc(void *)
{
#ifdef OSG_OLD_RENDER_ACTION
    bool stopThread = false;

    ProxyGroup *g;

    _loadLock->acquire();

    g = _loadQueue.front();

    _loadLock->release();

    while(!stopThread)
    {
        if(g->getMFInline()->size() == 0) 
        {
            g->_loadedRoot=SceneFileHandler::the()->read(
                g->getAbsoluteUrl().c_str());
        }
        else
        {
            std::stringstream tmpStream(std::ios_base::in    |
                                        std::ios_base::out   |
                                        std::ios_base::binary);

            tmpStream.write(
                reinterpret_cast<const char *>(&g->getMFInline()->front()),
                g->getMFInline()->size());

            g->_loadedRoot = SceneFileHandler::the()->read(tmpStream, "osb");
        }

        g->setState(LOAD_THREAD_FINISHED);
        
        _loadLock->acquire();

        _loadQueue.pop();

        if(_loadQueue.empty())
        {
            stopThread=true;
        }
        else
        {
            g=_loadQueue.front();
        }

        _loadLock->release();
    }
#endif
}

Thread                         *ProxyGroup::_loadThread = NULL;

std::queue<ProxyGroupUnrecPtr>  ProxyGroup::_loadQueue  =
    std::queue<ProxyGroupUnrecPtr>();

Lock                           *ProxyGroup::_loadLock   = NULL;

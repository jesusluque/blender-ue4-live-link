/* This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "RequiredProgramMainCPPInclude.h"
#include "UObject/Object.h"
#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkCameraRole.h"
#include "Roles/LiveLinkCameraTypes.h"
#include "Roles/LiveLinkLightRole.h"
#include "Roles/LiveLinkLightTypes.h"
#include "Roles/LiveLinkTransformRole.h"
#include "Roles/LiveLinkTransformTypes.h"
#include "LiveLinkProvider.h"
#include "LiveLinkRefSkeleton.h"
#include "LiveLinkTypes.h"
#include "BlenderLiveLinkCommon.h"

IMPLEMENT_APPLICATION(BlenderLiveLinkPlugin, "BlenderLiveLinkPlugin");

class BlenderLiveLinkLib
{
public:
    BlenderLiveLinkLib();
    ~BlenderLiveLinkLib();
    bool LibInit();
    bool LibOpen();
    bool LibReady();
    bool LibClose();
    bool LibRelease();

    bool bSuccess = true;
};

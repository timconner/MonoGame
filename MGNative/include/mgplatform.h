// MonoGame - Copyright (C) The MonoGame Team
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.

#pragma once

#include "mgcommon.h"
#include "mgenums.h"

//
// Structs
//

struct MGRectangle
{
public:
    mgint x;
    mgint y;
    mgint w;
    mgint h;
};

struct MGPoint
{
public:
    mgint x;
    mgint y;
};

//
// Application
//

MG_EXPORT MGGameRunBehavior     MG_Initialize             ();
MG_EXPORT mgbool                MG_Update                 (mgbool* isActive);
MG_EXPORT MGDisplayOrientation  MG_GetDisplayOrientation  ();

//
// Window
//

MG_EXPORT void*                 MG_GetWindowHandle        ();
MG_EXPORT mgbool                MG_GetWindowResizable     ();
MG_EXPORT void                  MG_SetWindowResizable     (mgbool value);
MG_EXPORT MGRectangle           MG_GetWindowClientBounds  ();
MG_EXPORT MGPoint               MG_GetWindowPosition      ();
MG_EXPORT void                  MG_SetWindowPosition      (MGPoint position);
MG_EXPORT mgstring              MG_GetWindowTitle         ();
MG_EXPORT void                  MG_SetWindowTitle         (mgstring title);

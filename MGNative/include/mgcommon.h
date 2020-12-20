// MonoGame - Copyright (C) The MonoGame Team
// This file is subject to the terms and conditions defined in
// file 'LICENSE.txt', which is part of this source code package.

#pragma once

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef DLL_EXPORT
#define MG_EXPORT extern "C" __declspec(dllexport)
#else
#define MG_EXPORT extern "C"
#endif

//
// Just a few types we use to match C# interop.
//

struct MGString
{

};

typedef int                  mgint;
typedef unsigned int         mgbool;
typedef unsigned long long   mgulong;
typedef unsigned int         mguint;
typedef unsigned char        mgbyte;
typedef char                 mgchar;
typedef MGString*            mgstring;

MGString* MG_GetMGString(const char* str)
{
    char* copy = (char*)malloc(strlen(str) + 1); 
    strcpy(copy, str);

    return (MGString*)copy;
}

std::string MG_GetString(MGString* str)
{
    return std::string { reinterpret_cast<char*>(str) };
}

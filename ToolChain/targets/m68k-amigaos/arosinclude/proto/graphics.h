#ifndef PROTO_GRAPHICS_H
#define PROTO_GRAPHICS_H

/*
    *** Automatically generated from 'graphics.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <graphics/gfx.h>
#include <graphics/displayinfo.h>
#include <inline/graphics_protos.h>
#define NOLIBDEFINES
#else
#include <clib/graphics_protos.h>
#endif /* __VBCC__ */

#if !defined(GfxBase) && !defined(__NOLIBBASE__) && !defined(__GRAPHICS_NOLIBBASE__)
extern struct GfxBase *GfxBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(GRAPHICS_NOLIBDEFINES)
#   include <defines/graphics.h>
#endif

#endif /* PROTO_GRAPHICS_H */

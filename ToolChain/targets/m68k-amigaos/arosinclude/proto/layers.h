#ifndef PROTO_LAYERS_H
#define PROTO_LAYERS_H

/*
    *** Automatically generated from 'layers.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/layers_protos.h>
#define NOLIBDEFINES
#else
#include <clib/layers_protos.h>
#endif /* __VBCC__ */

#if !defined(LayersBase) && !defined(__NOLIBBASE__) && !defined(__LAYERS_NOLIBBASE__)
extern struct Library *LayersBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(LAYERS_NOLIBDEFINES)
#   include <defines/layers.h>
#endif

#endif /* PROTO_LAYERS_H */

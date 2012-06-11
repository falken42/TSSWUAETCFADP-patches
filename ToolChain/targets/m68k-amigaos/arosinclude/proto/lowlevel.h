#ifndef PROTO_LOWLEVEL_H
#define PROTO_LOWLEVEL_H

/*
    *** Automatically generated from 'lowlevel.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/lowlevel_protos.h>
#define NOLIBDEFINES
#else
#include <clib/lowlevel_protos.h>
#endif /* __VBCC__ */

#if !defined(LowLevelBase) && !defined(__NOLIBBASE__) && !defined(__LOWLEVEL_NOLIBBASE__)
extern struct Library *LowLevelBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(LOWLEVEL_NOLIBDEFINES)
#   include <defines/lowlevel.h>
#endif

#endif /* PROTO_LOWLEVEL_H */

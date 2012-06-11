#ifndef PROTO_CAMD_H
#define PROTO_CAMD_H

/*
    *** Automatically generated from 'camd.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/camd_protos.h>
#define NOLIBDEFINES
#else
#include <clib/camd_protos.h>
#endif /* __VBCC__ */

#if !defined(CamdBase) && !defined(__NOLIBBASE__) && !defined(__CAMD_NOLIBBASE__)
extern struct Library *CamdBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(CAMD_NOLIBDEFINES)
#   include <defines/camd.h>
#endif

#endif /* PROTO_CAMD_H */

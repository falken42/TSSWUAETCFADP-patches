#ifndef PROTO_AROS_H
#define PROTO_AROS_H

/*
    *** Automatically generated from 'aros.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/aros_protos.h>
#define NOLIBDEFINES
#else
#include <clib/aros_protos.h>
#endif /* __VBCC__ */

#if !defined(ArosBase) && !defined(__NOLIBBASE__) && !defined(__AROS_NOLIBBASE__)
extern struct Library *ArosBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(AROS_NOLIBDEFINES)
#   include <defines/aros.h>
#endif

#endif /* PROTO_AROS_H */

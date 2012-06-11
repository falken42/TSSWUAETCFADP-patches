#ifndef PROTO_GADTOOLS_H
#define PROTO_GADTOOLS_H

/*
    *** Automatically generated from 'gadtools.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/gadtools_protos.h>
#define NOLIBDEFINES
#else
#include <clib/gadtools_protos.h>
#endif /* __VBCC__ */

#if !defined(GadToolsBase) && !defined(__NOLIBBASE__) && !defined(__GADTOOLS_NOLIBBASE__)
extern struct Library *GadToolsBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(GADTOOLS_NOLIBDEFINES)
#   include <defines/gadtools.h>
#endif

#endif /* PROTO_GADTOOLS_H */

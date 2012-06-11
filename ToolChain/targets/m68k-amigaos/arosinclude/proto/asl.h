#ifndef PROTO_ASL_H
#define PROTO_ASL_H

/*
    *** Automatically generated from 'asl.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/asl_protos.h>
#define NOLIBDEFINES
#else
#include <clib/asl_protos.h>
#endif /* __VBCC__ */

#if !defined(AslBase) && !defined(__NOLIBBASE__) && !defined(__ASL_NOLIBBASE__)
extern struct Library *AslBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(ASL_NOLIBDEFINES)
#   include <defines/asl.h>
#endif

#endif /* PROTO_ASL_H */

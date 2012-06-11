#ifndef PROTO_REXXSUPPORT_H
#define PROTO_REXXSUPPORT_H

/*
    *** Automatically generated from 'rexxsupport.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/rexxsupport_protos.h>
#define NOLIBDEFINES
#else
#include <clib/rexxsupport_protos.h>
#endif /* __VBCC__ */

#if !defined(RexxSupportBase) && !defined(__NOLIBBASE__) && !defined(__REXXSUPPORT_NOLIBBASE__)
extern struct Library *RexxSupportBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(REXXSUPPORT_NOLIBDEFINES)
#   include <defines/rexxsupport.h>
#endif

#endif /* PROTO_REXXSUPPORT_H */

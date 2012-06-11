#ifndef PROTO_REXXSYSLIB_H
#define PROTO_REXXSYSLIB_H

/*
    *** Automatically generated from 'rexxsyslib.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/rexxsyslib_protos.h>
#define NOLIBDEFINES
#else
#include <clib/rexxsyslib_protos.h>
#endif /* __VBCC__ */

#if !defined(RexxSysBase) && !defined(__NOLIBBASE__) && !defined(__REXXSYSLIB_NOLIBBASE__)
extern struct RxsLib *RexxSysBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(REXXSYSLIB_NOLIBDEFINES)
#   include <defines/rexxsyslib.h>
#endif

#endif /* PROTO_REXXSYSLIB_H */

#ifndef PROTO_EXEC_H
#define PROTO_EXEC_H

/*
    *** Automatically generated from 'exec.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
typedef AROS_32BIT_TYPE		AVLKey;			/* fix missing ABLKey definition */
#include <inline/exec_protos.h>
#define NOLIBDEFINES
#else
#include <clib/exec_protos.h>
#endif /* __VBCC__ */

#if !defined(SysBase) && !defined(__NOLIBBASE__) && !defined(__EXEC_NOLIBBASE__)
extern struct ExecBase *SysBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(EXEC_NOLIBDEFINES)
#   include <defines/exec.h>
#endif

#endif /* PROTO_EXEC_H */

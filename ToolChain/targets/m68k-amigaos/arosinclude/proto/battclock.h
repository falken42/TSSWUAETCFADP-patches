#ifndef PROTO_BATTCLOCK_H
#define PROTO_BATTCLOCK_H

/*
    *** Automatically generated from 'battclock.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/battclock_protos.h>
#define NOLIBDEFINES
#else
#include <clib/battclock_protos.h>
#endif /* __VBCC__ */

#if !defined(BattClockBase) && !defined(__NOLIBBASE__) && !defined(__BATTCLOCK_NOLIBBASE__)
extern APTR BattClockBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(BATTCLOCK_NOLIBDEFINES)
#   include <defines/battclock.h>
#endif

#endif /* PROTO_BATTCLOCK_H */

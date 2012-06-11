#ifndef PROTO_TIMER_H
#define PROTO_TIMER_H

/*
    *** Automatically generated from 'timer.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/timer_protos.h>
#define NOLIBDEFINES
#else
#include <clib/timer_protos.h>
#endif /* __VBCC__ */

#if !defined(TimerBase) && !defined(__NOLIBBASE__) && !defined(__TIMER_NOLIBBASE__)
extern struct Device *TimerBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(TIMER_NOLIBDEFINES)
#   include <defines/timer.h>
#endif

#endif /* PROTO_TIMER_H */

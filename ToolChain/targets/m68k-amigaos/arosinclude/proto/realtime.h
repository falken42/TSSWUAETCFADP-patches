#ifndef PROTO_REALTIME_H
#define PROTO_REALTIME_H

/*
    *** Automatically generated from 'realtime.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/realtime_protos.h>
#define NOLIBDEFINES
#else
#include <clib/realtime_protos.h>
#endif /* __VBCC__ */

#if !defined(RealTimeBase) && !defined(__NOLIBBASE__) && !defined(__REALTIME_NOLIBBASE__)
extern struct Library *RealTimeBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(REALTIME_NOLIBDEFINES)
#   include <defines/realtime.h>
#endif

#endif /* PROTO_REALTIME_H */

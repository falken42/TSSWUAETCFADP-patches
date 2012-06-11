#ifndef PROTO_ICON_H
#define PROTO_ICON_H

/*
    *** Automatically generated from 'icon.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/icon_protos.h>
#define NOLIBDEFINES
#else
#include <clib/icon_protos.h>
#endif /* __VBCC__ */

#if !defined(IconBase) && !defined(__NOLIBBASE__) && !defined(__ICON_NOLIBBASE__)
extern struct IconBase *IconBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(ICON_NOLIBDEFINES)
#   include <defines/icon.h>
#endif

#endif /* PROTO_ICON_H */

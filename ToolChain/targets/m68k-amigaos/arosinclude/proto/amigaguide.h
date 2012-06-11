#ifndef PROTO_AMIGAGUIDE_H
#define PROTO_AMIGAGUIDE_H

/*
    *** Automatically generated from 'amigaguide.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/amigaguide_protos.h>
#define NOLIBDEFINES
#else
#include <clib/amigaguide_protos.h>
#endif /* __VBCC__ */

#if !defined(AmigaGuideBase) && !defined(__NOLIBBASE__) && !defined(__AMIGAGUIDE_NOLIBBASE__)
extern struct Library *AmigaGuideBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(AMIGAGUIDE_NOLIBDEFINES)
#   include <defines/amigaguide.h>
#endif

#endif /* PROTO_AMIGAGUIDE_H */

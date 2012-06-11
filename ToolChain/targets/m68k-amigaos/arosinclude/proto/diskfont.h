#ifndef PROTO_DISKFONT_H
#define PROTO_DISKFONT_H

/*
    *** Automatically generated from 'diskfont.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/diskfont_protos.h>
#define NOLIBDEFINES
#else
#include <clib/diskfont_protos.h>
#endif /* __VBCC__ */

#if !defined(DiskfontBase) && !defined(__NOLIBBASE__) && !defined(__DISKFONT_NOLIBBASE__)
extern struct Library *DiskfontBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(DISKFONT_NOLIBDEFINES)
#   include <defines/diskfont.h>
#endif

#endif /* PROTO_DISKFONT_H */

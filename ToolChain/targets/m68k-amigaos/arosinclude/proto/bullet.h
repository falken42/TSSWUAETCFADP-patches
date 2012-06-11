#ifndef PROTO_BULLET_H
#define PROTO_BULLET_H

/*
    *** Automatically generated from 'bullet.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/bullet_protos.h>
#define NOLIBDEFINES
#else
#include <clib/bullet_protos.h>
#endif /* __VBCC__ */

#if !defined(BulletBase) && !defined(__NOLIBBASE__) && !defined(__BULLET_NOLIBBASE__)
extern struct Library *BulletBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(BULLET_NOLIBDEFINES)
#   include <defines/bullet.h>
#endif

#endif /* PROTO_BULLET_H */

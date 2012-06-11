#ifndef PROTO_MATHTRANS_H
#define PROTO_MATHTRANS_H

/*
    *** Automatically generated from 'mathtrans.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/mathtrans_protos.h>
#define NOLIBDEFINES
#else
#include <clib/mathtrans_protos.h>
#endif /* __VBCC__ */

#if !defined(MathTransBase) && !defined(__NOLIBBASE__) && !defined(__MATHTRANS_NOLIBBASE__)
extern struct Library *MathTransBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(MATHTRANS_NOLIBDEFINES)
#   include <defines/mathtrans.h>
#endif

#endif /* PROTO_MATHTRANS_H */

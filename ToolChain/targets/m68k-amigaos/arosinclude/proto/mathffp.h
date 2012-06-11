#ifndef PROTO_MATHFFP_H
#define PROTO_MATHFFP_H

/*
    *** Automatically generated from 'mathffp.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/mathffp_protos.h>
#define NOLIBDEFINES
#else
#include <clib/mathffp_protos.h>
#endif /* __VBCC__ */

#if !defined(MathBase) && !defined(__NOLIBBASE__) && !defined(__MATHFFP_NOLIBBASE__)
extern struct Library *MathBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(MATHFFP_NOLIBDEFINES)
#   include <defines/mathffp.h>
#endif

#endif /* PROTO_MATHFFP_H */

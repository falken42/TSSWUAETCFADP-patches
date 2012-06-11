#ifndef PROTO_REQTOOLS_H
#define PROTO_REQTOOLS_H

/*
    *** Automatically generated from 'reqtools.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/reqtools_protos.h>
#define NOLIBDEFINES
#else
#include <clib/reqtools_protos.h>
#endif /* __VBCC__ */

#if !defined(ReqToolsBase) && !defined(__NOLIBBASE__) && !defined(__REQTOOLS_NOLIBBASE__)
extern struct ReqToolsBase *ReqToolsBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(REQTOOLS_NOLIBDEFINES)
#   include <defines/reqtools.h>
#endif

#endif /* PROTO_REQTOOLS_H */

#ifndef PROTO_LOCALE_H
#define PROTO_LOCALE_H

/*
    *** Automatically generated from 'locale.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/locale_protos.h>
#define NOLIBDEFINES
#else
#include <clib/locale_protos.h>
#endif /* __VBCC__ */

#if !defined(LocaleBase) && !defined(__NOLIBBASE__) && !defined(__LOCALE_NOLIBBASE__)
extern struct LocaleBase *LocaleBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(LOCALE_NOLIBDEFINES)
#   include <defines/locale.h>
#endif

#endif /* PROTO_LOCALE_H */

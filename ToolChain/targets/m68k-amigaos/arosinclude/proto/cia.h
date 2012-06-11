/*
    Copyright © 1995-2004, The AROS Development Team. All rights reserved.
    $Id: cia.h 21547 2004-04-26 20:02:43Z chodorowski $
*/

#ifndef PROTO_CIA_H
#define PROTO_CIA_H

#ifndef AROS_SYSTEM_H
#include <aros/system.h>
#endif

#ifdef __VBCC__
#include <inline/cia_protos.h>
#else
#include <clib/cia_protos.h>
#include <defines/cia.h>
#endif /* __VBCC__ */

#endif /* PROTO_CIA_H */

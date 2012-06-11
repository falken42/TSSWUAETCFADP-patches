/*
    Copyright © 1995-2004, The AROS Development Team. All rights reserved.
    $Id: arossupport.h 21547 2004-04-26 20:02:43Z chodorowski $
*/

#ifndef PROTO_AROSSUPPORT_H
#define PROTO_AROSSUPPORT_H

#ifndef AROS_SYSTEM_H
#include <aros/system.h>
#endif

#ifdef __VBCC__
#include <inline/arossupport_protos.h>
#else
#include <clib/arossupport_protos.h>
#include <defines/arossupport.h>
#endif /* __VBCC__ */

#endif /* PROTO_AROSSUPPORT_H */

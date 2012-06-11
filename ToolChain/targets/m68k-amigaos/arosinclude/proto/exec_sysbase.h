/*
    Copyright © 1995-2004, The AROS Development Team. All rights reserved.
    $Id: exec_sysbase.h 21547 2004-04-26 20:02:43Z chodorowski $
*/

#ifndef PROTO_EXEC_SYSBASE_H
#define PROTO_EXEC_SYSBASE_H

#ifndef AROS_SYSTEM_H
#include <aros/system.h>
#endif

#ifdef __VBCC__
#include <inline/exec_sysbase_protos.h>
#else
#include <clib/exec_sysbase_protos.h>
#include <defines/exec_sysbase.h>
#endif /* __VBCC__ */

#endif /* PROTO_EXEC_SYSBASE_H */

/*
    Copyright © 1995-2004, The AROS Development Team. All rights reserved.
    $Id: disk.h 21547 2004-04-26 20:02:43Z chodorowski $
*/

#ifndef PROTO_DISK_H
#define PROTO_DISK_H

#ifndef AROS_SYSTEM_H
#include <aros/system.h>
#endif

#ifdef __VBCC__
#include <inline/disk_protos.h>
#else
#include <clib/disk_protos.h>
#include <defines/disk.h>
#endif /* __VBCC__ */

#endif /* PROTO_DISK_H */

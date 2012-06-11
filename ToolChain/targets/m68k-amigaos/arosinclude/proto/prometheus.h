#ifndef PROTO_PROMETHEUS_H
#define PROTO_PROMETHEUS_H

/*
    *** Automatically generated from 'prometheus.conf'. Edits will be lost. ***
    Copyright © 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/system.h>

#ifdef __VBCC__
#include <inline/prometheus_protos.h>
#define NOLIBDEFINES
#else
#include <clib/prometheus_protos.h>
#endif /* __VBCC__ */

#if !defined(PrometheusBase) && !defined(__NOLIBBASE__) && !defined(__PROMETHEUS_NOLIBBASE__)
extern struct Library *PrometheusBase;
#endif

#if !defined(NOLIBDEFINES) && !defined(PROMETHEUS_NOLIBDEFINES)
#   include <defines/prometheus.h>
#endif

#endif /* PROTO_PROMETHEUS_H */

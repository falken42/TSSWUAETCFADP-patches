#ifndef _AROS_TIMEVAL_H_
#define _AROS_TIMEVAL_H_

#include <aros/cpu.h>

/* The following structure is composed of two anonymous unions so that it
   can be transparently used by both AROS-style programs and POSIX-style
   ones. For binary compatibility reasons the fields in the unions MUST
   have the same size, however they can have different signs (as it is
   the case for microseconds).  */

#ifdef __VBCC__
/*	VBCC does not support the __extension__ keyword, and does not support
	multiple unnamed structs/unions either.  The only solution here is
	to choose either the AROS type or the POSIX type, and we go with AROS. */
struct timeval
{
    unsigned AROS_32BIT_TYPE tv_secs;   /* Seconds passed. */
    unsigned AROS_32BIT_TYPE tv_micro;	/* Microseconds passed in the current second. */
};
#else /* !__VBCC__ */
__extension__ struct timeval
{
    union  /* Seconds passed. */
    {
        unsigned AROS_32BIT_TYPE tv_secs;   /* AROS field */
	unsigned AROS_32BIT_TYPE tv_sec;    /* POSIX field */
    };
    union /* Microseconds passed in the current second. */
    {
        unsigned AROS_32BIT_TYPE tv_micro; /* AROS field */
	signed   AROS_32BIT_TYPE tv_usec;  /* POSIX field */
    };
};

#endif /* __VBCC__ */

#endif /* ! _SYS__TIMEVAL_H_ */

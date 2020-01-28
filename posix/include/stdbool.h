/*
 * This copy of stdbool.h is from Jens Staal's earlier port
 * with the comment that it is "copied over by hand from the
 * FreeBSD web interface an update with proper credits to
 * follow soon.". Installing 'libcurl' from Ports may yield
 * another copy, and only one is needed.
 */

#ifndef _STDBOOL_H_
#define _STDBOOL_H_
#endif

#define __bool_true_false_are_defined 1

#define true 1
#define false 0

#define bool _Bool
typedef int _Bool;


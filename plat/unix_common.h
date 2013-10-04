/*
 * Copyright (c) 2013, Joyent, Inc. All rights reserved.
 */

#ifndef _UNIX_COMMON_H
#define	_UNIX_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include "plat.h"
#include "dynstr.h"

/*int unix_raw_mode(int fd, char **errmsg);*/
int unix_open_serial(char *devpath, int *outfd, char **errmsg, int *permfail);
int unix_send_reset(mdata_plat_t *mpl);


#ifdef __cplusplus
}
#endif

#endif /* _UNIX_COMMON_H */

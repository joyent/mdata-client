/*
 * Copyright (c) 2013, Joyent, Inc. All rights reserved.
 */

#ifndef _PLAT_H
#define	_PLAT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "dynstr.h"

typedef struct mdata_plat mdata_plat_t;

/*int open_metadata_stream(FILE **fp, char **err);*/
int plat_init(mdata_plat_t **, char **er, int *);
int plat_recv(mdata_plat_t *, string_t *, int);
int plat_send(mdata_plat_t *, string_t *);
void plat_fini(mdata_plat_t *);

#ifdef __cplusplus
}
#endif

#endif /* _PLAT_H */

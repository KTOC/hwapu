#ifndef STORAGE__H
#define STORAGE__H
/*
 *  Copyright(C) 2006 Neuros Technology International LLC.
 *               <www.neurostechnology.com>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 2 of the License.
 *
 *
 *  This program is distributed in the hope that, in addition to its
 *  original purpose to support Neuros hardware, it will be useful
 *  otherwise, but WITHOUT ANY WARRANTY; without even the implied
 *  warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 ****************************************************************************
 *
 * Storage support module header.
 *
 * REVISION:
 *
 *
 * 1) Initial creation. ----------------------------------- 2006-07-20 MG
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <mntent.h>
#include <linux/limits.h>

#define KILOBYTE	1024
#define MEGABYTE	(KILOBYTE*1024)
#define GIGABYTE	(MEGABYTE*1024)

typedef struct
{
	char device[128];
	char mount_point[128];
	unsigned long long total;
	unsigned long long free;
	int ro;
} storage_info_t;

typedef int (*storage_enum_func)(struct mntent *mount_entry, void* user_data);

const char * CoolCreateReadableSizeString(unsigned long long size, unsigned long display_unit);
int CoolStorageEnumerate(storage_enum_func cb, void* user_data);
int CoolStorageAvailable(storage_info_t *si, int sicount);
int CoolStorageSearch(const storage_info_t *si, int sicount, const char *path);

/*
 * check whether media (/dev/....) is mounted readonly
 *
 * return: 0: writeable
 *         1: readonly
 *         -1: unknown
 */
int CoolStorageReadOnly(const char *device);

int CoolCdromMediaPresent(void);
int CoolCDDAGetTrackCount(void);

#endif /* STORAGE__H */

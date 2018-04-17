/*
 * Declarations for file handle and file table management.
 */

#ifndef _FILE_H_
#define _FILE_H_

/*
 * Contains some file-related maximum length constants
 */
#include <limits.h>

/*
 * Put your function declarations and data types here ...
 */

#define NUM_FILES 32

struct file {
	bool free;
	struct vnode *v;
};

struct file fds[NUM_FILES];
int open_files = 0;

#endif /* _FILE_H_ */
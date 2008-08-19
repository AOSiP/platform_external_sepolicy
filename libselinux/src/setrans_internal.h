/* Author: Trusted Computer Solutions, Inc. */

#define SETRANS_UNIX_SOCKET "/var/run/setrans/.setrans-unix"

#define RAW_TO_TRANS_CONTEXT		2
#define TRANS_TO_RAW_CONTEXT		3
#define MAX_DATA_BUF			8192

extern int init_context_translations(void);
extern void fini_context_translations(void);

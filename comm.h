#ifndef __COMM_H__
#define __COMM_H__

#include <stdio.h>

#define __LINUX__ 1

#define dbg(fmt, ...)                                                                     \
	do                                                                                    \
	{                                                                                     \
		printf("[DEBUG %s:%d] " fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__); \
	} while (0)
#define info(fmt, ...)                                                                    \
	do                                                                                    \
	{                                                                                     \
		printf("[INFO  %s:%d] " fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__); \
	} while (0)
#define warn(fmt, ...)                                                                    \
	do                                                                                    \
	{                                                                                     \
		printf("[WARN %s:%d] " fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__); \
	} while (0)
#define err(fmt, ...)                                                                     \
	do                                                                                    \
	{                                                                                     \
		printf("[ERROR %s:%d] " fmt, __FUNCTION__, __LINE__, ##__VA_ARGS__); \
	} while (0)

#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <arpa/inet.h>
#include <netinet/in.h>

#endif

#ifndef __MD5_H__
#define __MD5_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    void md5(uint8_t *initial_msg, size_t initial_len, uint8_t *out_md5_str);

#ifdef __cplusplus
}
#endif
#endif

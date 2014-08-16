#ifndef __LZMA_LIB_H__
#define __LZMA_LIB_H__

#include <zlib.h>

int lzmalib_uncompress OF((Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen));
int lzmawrt_uncompress OF((Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen));

#endif
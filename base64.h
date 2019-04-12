/*
 *  base64.h
 *
 *  copyright (c) 2019 Xiongfei Shi
 *
 *  author: Xiongfei Shi <jenson.shixf(a)gmail.com>
 *  license: Apache2.0
 *
 *  https://github.com/shixiongfei/base64
 */

#ifndef __BASE64_H__
#define __BASE64_H__

#ifdef __cplusplus
extern "C" {
#endif

int base64_enclen(int len);
int base64_declen(int len);

int base64_encode(char *base64, const void *data, int length);
int base64_decode(void *buffer, const char *base64, int length);

#ifdef __cplusplus
};
#endif

#endif /* __BASE64_H__ */

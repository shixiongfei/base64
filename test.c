/*
 *  test.c
 *
 *  copyright (c) 2019 Xiongfei Shi
 *
 *  author: Xiongfei Shi <jenson.shixf(a)gmail.com>
 *  license: Apache2.0
 *
 *  https://github.com/shixiongfei/base64
 */

#include <stdio.h>
#include <string.h>

#include "base64.h"

int main(int argc, char *argv[]) {
  char text[] = { "Hello World!" };
  char encode[64] = { 0 };
  char decode[64] = { 0 };
  int enclen, declen;

  enclen = base64_enclen((int)strlen(text));
  printf("Encode evaluate size: %d\n", enclen);

  enclen = base64_encode(encode, text, (int)strlen(text));
  printf("Encode real size: %d\n", enclen);

  declen = base64_declen(enclen);
  printf("Decode evaluate size: %d\n", declen);

  declen = base64_decode(decode, encode, enclen);
  printf("Decode real size: %d\n", declen);

  printf("Encode: %s\n", encode);
  printf("Decode: %s\n", decode);
}

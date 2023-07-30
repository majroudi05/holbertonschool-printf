#ifndef MY_PRINTF
#define MY_PRINTF
#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>
#include<limits.h>
#include<stdlib.h>
#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0}
typedef struct parameters
{
  unsigned int unsign :1;
  unsigned int plus_flag :1;
  unsigned int space_flag :1;
  unsigned int hashtag_flag :1;
  unsigned int zero_flag :1;
  unsigned int minus_flag :1;
  unsigned int width;
  unsigned int precision;
} params_t;
int _printf(const char *format, ...);
#endif

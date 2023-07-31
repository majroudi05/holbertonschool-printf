#ifndef MY_PRINTF
#define MY_PRINTF
#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>
#include<limits.h>
#include<stdlib.h>
typedef struct specifier
{
  char *specifier;
  int (*f)(va_list);
}specifier_t;
int _printf(const *format, ...);
int _putchar(char c);
#endif

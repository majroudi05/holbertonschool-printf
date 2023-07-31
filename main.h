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
} specifier_t;
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int (*get_specifier(const char c))(va_list ap);
#endif

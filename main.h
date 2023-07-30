#ifndef MY_PRINTF
#define MY_PRINTF
#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>
#include<limits.h>
#include<stdlib.h>
#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
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
  unsigned int h_modifier :1;
  unsigned int l_modifier :1;
} params_t;
typedef struct specifier
{
  char *specifier;
  int (*f)(va_list, params_t *);
}specifier_t;
int _putchar(int c);
int print_char(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int _printf(const char *format, ...);
int get_flag(char *s, params_t *params)
int get_modifier(char *s, params_t *params)
char *get_precision(char *p, params_t *params, va_list ap)
int get_print_func(char *s, va_list ap, params_t *params)
char *get_width(char *s, params_t *params, va_list ap)
int (*get_specifier(char *s)(va_list ap, params_t *params)
void init_params(params_t *params, va_list ap)
#endif

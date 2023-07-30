#include"main.h"
/**
 *
 *
 *
 *
 **/
int print_char(va_list ap, params_t *params)
{
  char c = ' ';
  unsigned int p = 1, sum = 0, ch = va_arg(ap, int);
  if (params->minus_flag)
    sum += _putchar(ch);
  while (p++ < params->width)
    sum += _putchar(c);
  if (!params->minus_flag)
    sum += _putchar(ch);
  return (sum);
}

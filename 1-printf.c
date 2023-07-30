#include"main.h"
/**
 *
 *
 *
 *
 *
 **/
int _printf(const char *format, ...)
{
  int sum;
  va_list ap;
  char *p, *start;
  params_t params = PARAMS-INIT;
  va_start(ap, format);
  if (!format || (format[0] == '%' && !format[1]))
    return (-1);
  if(format[0] == '%' && format[1] == ' ' && !format[2])
    return (-1);
  for (p = (char*)format; *p; p++)
    {
      init_params(&params, ap);
      if (*p != '%')
	{
	  sum += _putchar(*p);
	  continue;
	}
      start = p;
      p++;
      while (get_flag(p, &params))
	{
	  p++;
	}
      p = get_width(p, &params, ap);
      p = get_precision(p, &params, ap);
      if (get_modifier(p, &params))
	p++;
      if (!get_specifier(p))
	sum += print_from_to(start,p,

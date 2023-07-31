#include"main.h"
/**
 *_printf - printf function
 *@format: format
 *Return: printed chars
 **/
int _printf(const char *format, ...)
{
int i;
int max = 0;
va_list ap;
if (format == '\0' || (format[i] == '%' && format[i + 1] != ' '))
return (-1);
va_strat(ap, format);
for (i = 0; forma[i] != '\0'; i++)
if (format[i] != '%')
{
max =  _putchar(format[i]);
}

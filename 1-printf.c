#include"main.h"
/**
 *_printf - printf function
 *@format: format
 *Return: printed chars
 **/
int _printf(const char *format, ...)
{
int i = 0;
int sum = 0;
va_list ap;
va_start(ap, format);
if (format == NULL || (format[i] == '%' && format[i + 1] != ' '))
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
sum +=  _putchar(format[i]);
}
else if (format[i] == '%' && format[i + 1] != '\0')
{
int (*sp_func)(va_list) = NULL;
sp_func = get_specifier(format[i + 1]);
if (sp_func == NULL)
{
sum += _putchar(format[i]);
sum += _putchar(format[i + 1]);
}
else
{
sum += sp_func(ap);
}
i += 2;
}
else
{
return (-1);
}
}
va_end(ap);
return (sum);
}

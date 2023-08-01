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
int (*sp_func)(va_list);
va_start(ap, format);
if (format == NULL)
{
return (-1);
}
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
sum +=  _putchar(format[i]);
}
else if (format[i] == '%' && format[i + 1] != '\0')
{
i++;
sp_func = NULL;
sp_func = get_specifier(format[i]);
if (sp_func == NULL)
{
sum += _putchar('%');
sum += _putchar(format[i]);
}
else
{
sum += sp_func(ap);
}
}
else
{
va_end(ap);
return (-1);
}
}
va_end(ap);
return (sum);
}

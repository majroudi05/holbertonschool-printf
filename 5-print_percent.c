#include"main.h"
/**
 *print_percent - print percent
 *@ap: input value
 *Return: length of percent
 *
 **/
int print_percent(va_list ap)
{
int i;
char str = va_arg(ap, char);
for (i = 0; str[i]; i++)
{
_putchar(str[i]);
l++;
}
return (1);
}

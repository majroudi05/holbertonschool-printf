#include "main.h"
/**
 *print_char - print charachters
 *@ap: input value
 *Return: length of characters printed
 **/
int print_char(va_list ap)
{
char c = va_arg(ap, int);
_putchar(c);
return (1);
}

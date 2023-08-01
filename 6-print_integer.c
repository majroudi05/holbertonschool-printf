#include"main.h"
/**
 *print_integer - print integer
 *@ap: input value
 *Return: length of integer
 *
 **/
int print_integer(va_list ap)
{
int num = va_arg(ap, int);
char buffer[20];
int i = 0;
int l = 0;
if (num < 0)
{
_putchar('-');
num += -num;
}
do
{
buffer[i++] = '0' + (num % 10);
num /= 10;
 }while (num != 0);
while (i > 0)
{
_putchar(buffer[--i]);
l++;
}
return (l);
}

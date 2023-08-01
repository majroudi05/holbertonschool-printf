#include"main.h"
/**
 *print_integer - print integer
 *@ap: input value
 *Return: length of integer
 *
 **/
int print_integer(va_list ap)
{
int var = va_arg(ap, int);
unsigned int num;
char buffer[20];
int i = 0;
int l = 0;
if (var < 0)
{
_putchar('-');
num = -var;
l++;
}
else
{
num = var;
}
do {
buffer[i++] = '0' + (num % 10);
num /= 10;
} while (num != 0);
while (i > 0)
{
_putchar(buffer[--i]);
l++;
}
return (l);
}

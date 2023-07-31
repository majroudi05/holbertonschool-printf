#include"main.h"
/**
 *print_string - print string
 *@ap: input  value
 *Rutern: length of the printed string
 *
 **/
int print_string(va_list ap)
{
char *str = va_arg(ap, char*);
int i;
int l = 0;
if (str == NULL)
{
str = "(null)";
}
for(i = 0; str[i]; i++)
{
_putchar(str[i]);
l++;
}
return (l);
}

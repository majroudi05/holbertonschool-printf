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
for(i = 0; str[i]; i++)
{
l +=  _putchar(str[i]);
}
return (l);
}

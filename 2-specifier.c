#include"main.h"
/**
 *get_specifier - find the format of specifier
 *@c: the format of specifier
 *Return: the number of bytes printed
 **/
int (*get_specifier(const char c))(va_list ap)
{
int i = 0;
specifier_t arry[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{NULL, NULL}
};
for ( i = 0; arry[i].specifier;i++)
{
if (*arry[i].specifier == c)
return (arry[i].f);
}
 return (NULL);
}

#include"main.h"
/**
 *get_specifier - find the format of specifier
 *@s: the format of specifier
 *Return: the number of bytes printed
 **/
int (*get_specifier(const char *c))(va_list ap)
{
  int i;
  specifier_t arry[] = {
			{"c", print_char};
			{"s", print_string};
			{"%", print_precent};
			{NULL, NULL}
  };
}

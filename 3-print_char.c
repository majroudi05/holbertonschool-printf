#include "mainh"

int print_char(va_list ap)
{
	char c = va_arg(ap, int);
	_putchar(c);
	return(1);
}

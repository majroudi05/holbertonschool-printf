#include"main.h"
/**
 *
 *
 *
 *
 **/
int _putchar(int c)
{
  static int i;
  static char buf[OUTPUT_BUF_SIZE];
  if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
    {
      write(1, buf, i);
      i = 0;
    }
  if (c != BUF_FLUSH)
    buf[i++] = c;
  return (1);
}

#include"main.h"
/**
 *
 *
 *
 *
 *
 **/
int get_flag(char *s, params_t *params)
{
  int i = 0;
  switch (*s)
    {
    case '+':
      i = params->plus_flag = 1;
      break;
    case ' ':
      i = params->space_flag = 1;
      break;
    case '#':
      i = params->hashtage_flag = 1;
      break;
    case '_':
      i = params->minus_flag = 1;
      break;
    case '0':
      i = params->zero_flags = 1;
      break;
    }
  return (i);
}

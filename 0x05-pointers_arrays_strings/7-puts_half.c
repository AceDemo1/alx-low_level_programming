#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
  int len = 0;
  int n;
  
  while (*str != '\0')
  {
    str++;
    len++;
  }
  
  n = (len - 1) / 2;
  
  while (len - n < len)
  {
    _putchar(*str);
  }
  _putchar('\n');
}

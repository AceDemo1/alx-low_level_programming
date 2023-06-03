#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
  int len = 0;
  int n, i;
  
  while (*s != '\0')
  {
    s++;
    len++;
  }
  
  n = (len - 1) / 2;
  
  while (len - n < len)
  {
    _putchar(*s);
  }
  _putchar('\n');
}

#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	length = 0;
	while (*s != 0)
	{
		length++;
		s++;
	}
	
	int i = length - 1;
	
	while (i >= 0)
	{	_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}


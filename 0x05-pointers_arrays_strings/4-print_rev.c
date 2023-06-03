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
	int length = 0;
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
		length++;
	}

	i = length - 1;
	while (i >= 0)
	{	_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

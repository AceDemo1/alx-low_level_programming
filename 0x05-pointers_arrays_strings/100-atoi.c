#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int si = 1;
	int re = 0;

	while (*s == ' ')
		s++;
	if (*s == '-')
	{
		si = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		re = re * 10 + (*s - '0');
		s++;
	}
	re = re * si;
	return (re);
}


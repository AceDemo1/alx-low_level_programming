#include "main.h"

/**
 *_islower - returns 1 for lowercase alphabet and 0 for uppercase alphabet
 *
 *@c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

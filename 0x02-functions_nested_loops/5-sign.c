#include"main.h"

/**
 * print_sign - Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+' + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0' + 0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-' + 0);
		return (-1);
	}
}

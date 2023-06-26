#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list arg;

	va_start(arg, n);
	if (n == 0)
		return (0);
	while (i < n)
	{
		sum += va_arg(arg, unsigned int);
		i++;
	}
	va_end(arg);
	return (sum);
}

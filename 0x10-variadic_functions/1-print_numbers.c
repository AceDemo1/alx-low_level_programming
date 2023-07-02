#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @n: number of parameter
 * @separator: separator between two numbers
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int num;
	va_list a;

	if (separator != NULL)
	{
	va_start(a, n);
	while (i < n)
	{	num = va_arg(a, unsigned int);
		printf("%d", num);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(a);
	}
}


#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separator between two strings
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *str;

	va_start(a, n);
	while (i < n)
	{
		str = va_arg(a, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("%s", "(nil)");
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(a);
}


#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything (any data type)
 * @format: pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	int is_first = 1;

	va_start(args, format);
	while (format && format[i])
	{
		if (!is_first)
			printf(", ");
		is_first = 0;

		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}

		i++;
	}
	va_end(args);

	printf("\n");
}


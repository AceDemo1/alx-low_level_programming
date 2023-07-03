#include "variadic_functions.h"

/**
 * print_all - prints anything (any data type)
 * @format: pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list a;

	va_start(a, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(a, int));
			i++;
			continue;
		}
		if (format[i] == 'i')
		{
			printf("%d", va_arg(a, int));
			i++;
			continue;
		}
		if (format[i] == 'f')
		{
			printf("%f", va_arg(a, double));
			i++;
			continue;
		}
		if (format[i] == 's')
		{
			str = va_arg(a, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			i++;
			continue;
		}
		i++;
	}
	printf("\n");
	va_end(a);
}


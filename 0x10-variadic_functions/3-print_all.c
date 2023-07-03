#include "variadic_functions.h"

/**
 * print_all - prints anything(any data type)
 * @format: pointer to string of data format types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list a;

	va_start(a, format);
	while (format[i])
 	{
		if(format[i] == 'c')
			printf("%c", va_arg(a, int));
	 	else if (format[i] == 'i')
 			printf("%d", va_arg(a, int));
		else if(format[i] == 'f')
			printf("%f", va_arg(a, double));
		else if (format[i] == 's')
		{
			str = va_arg(a, char*);
			if (str == NULL)
				printf("(nil)");
 			else
 				printf("%s",str);
		}
 		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
				printf(", ");
		i++;
	}
	printf("\n");
	va_end(a);
}

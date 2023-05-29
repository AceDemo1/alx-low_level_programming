#include"main.h"

/**
* times_table - prints the 9 times table, starting with 0
*/

void times_table(void)
{
	int i, j, prod;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			prod = i * j;
			_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			if (j != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			j++;
		}
			_putchar('\n');

	}
}

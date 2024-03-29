#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n1 = 0;

	while (n1 <= 8)
	{
		int n2 = n1 + 1;

		while (n2 <= 9)
		{
			putchar(n1 + '0');
			putchar(n2 + '0');
			if (!(n1 == 8 && n2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}

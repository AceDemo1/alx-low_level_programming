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
	int n1,n2;

	n1 = 0;
	n2 = n1+1;
	putchar(n1 + '0');
	n1++;	
	putchar(n2 + '0');
	n2++;
	while (n1 <= 8)
	{
		while (n2 <= 9)
		{
			putchar(',');
			putchar(' ');
			putchar(n1 + '0');
			putchar(n2 + '0');
			n2++;
		}
		n1++;
	}
	return (0);
}

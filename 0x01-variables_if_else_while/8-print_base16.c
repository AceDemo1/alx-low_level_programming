#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print prints all the numbers of base 16 in lowercase
 *              while using int variable
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;
	char al = 'a';

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		putchar(digit + '0');
		++digit;
	}
	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

	return (0);
}

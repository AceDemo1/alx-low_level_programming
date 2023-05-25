#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print value alphabet in lower case
 * 
 * 
 * Return: Always 0 (Success)
*/

int main(void)
{
	int alpha = 'a';
	while (alpha <='z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}

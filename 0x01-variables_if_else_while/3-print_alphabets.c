#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a,A;
	a = 'a';
	A = 'A';
	
	while (a <= 'z'&& A <= 'Z')
	{
		putchar(a A);
		a++, A++;
	}
	putchar('/n');

	return(0);
}

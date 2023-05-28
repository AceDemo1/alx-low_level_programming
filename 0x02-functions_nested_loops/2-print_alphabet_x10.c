#include"main.h"

/**
* print_alphabet - utilizes on the _putchar function
* to print the alphabet a - z 10 times
*/

void print_alphabet_x10(void)
{
	char al = 'a';
	int i = 1;
	while (i <= 10)
	{
		while (al <= 'z')
		{
		_putchar(al);
		al++;
		_putchar('\n');
		}
	i++;
	}
}

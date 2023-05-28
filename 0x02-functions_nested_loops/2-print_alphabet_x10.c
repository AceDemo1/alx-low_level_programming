#include"main.h"

/**
* print_alphabet_x10 - function that will print the alphabet 10 times
*
*/
void print_alphabet_x10(void)
{
	int i = 1;
	while(i <= 10)
	{
		char al = 'a';
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
	_putchar('\n');
	i++;
	}
}

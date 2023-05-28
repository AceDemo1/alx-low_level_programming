#include"main.h"

/**
* print_alphabet - utilizes on the _putchar function 
* to print the alphabet a - z
*/

void print_alphabet(void)
{	
	char al = 'a';

	while (al < 'z')
		{
		_putchar(al);
		al++;
		}
	_putchar('\n');
}

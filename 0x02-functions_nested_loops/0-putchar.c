#include<stdio.h>
#include <string.h>
/**
 *
 * print - _putchar
 *
 * Return 0 (sucess)
*/

int _putchar(char c);

int main(void)
{
	char a[] = "_putchar";
	int i = 0;
	int j = strlen(a);
	while(i <= j)
	{
		_putchar(a[i]);
		i++;
	}

	_putchar('\n');

return (0);	
}

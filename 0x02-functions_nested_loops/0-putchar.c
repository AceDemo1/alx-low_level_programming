#include<stdio.h>
#include <string.h>
/**
* _putchar - to printout characters
*
* @c: The character to be printed
*
* main - Entry point
*
* Description: This function prints a single character to the standard output.
*
* Return: Always 0 (sucess)
*/

int _putchar(char c);

int main(void)
{
char a[] = "_putchar";
int i = 0;
int j = strlen(a);
while (i < j)
{
_putchar(a[i]);
i++;
}

_putchar('\n');

return (0);
}

#include"main.h"
#include <string.h>
/**
 * _putchar - Custom function to print a single character
 * @c: The character to be printed
 *
 * Description: This function prints a single character to the standard output.
 * Return: On success, it returns the character that was printed.
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

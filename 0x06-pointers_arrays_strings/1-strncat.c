#include "main.h"
/** 
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (n > 0 && (*src != '\0' || n > 1))
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	*p = '\0';
	return (dest);
}

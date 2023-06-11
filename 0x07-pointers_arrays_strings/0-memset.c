#include <stddef.h>

/**
 * _memset - Fills a memory area with a constant byte.
 * @s: Pointer to the memory area.
 * @b: Constant byte to fill the memory area with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory area after it has been filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (s == NULL)
		return NULL;

	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return s;
}


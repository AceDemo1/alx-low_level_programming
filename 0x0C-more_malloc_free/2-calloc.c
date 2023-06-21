#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	unsigned int tot;
	unsigned int i = 0;
	unsigned char *b = (unsigned char *)p;

	tot = nmemb * size;
	while (i < tot)
	{
		b[i] = 0;
		i++;
	}
	return (p);
}

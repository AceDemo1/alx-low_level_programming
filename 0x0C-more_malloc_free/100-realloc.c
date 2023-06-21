#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 *
 * @ptr: pointer to previous memory
 * @old_size: old memory array size
 * @new_size: new memory array size
 *
 * Return: pointer to new memory
 *         NULL if it fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, n;
	char *s = (char *)ptr;
	void *newall;
	char *d;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newall = malloc(sizeof(char) * new_size);
		if (newall == NULL)
			return (NULL);
		return (newall);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
		n = old_size;
	else
		n = old_size;
	newall = malloc(sizeof(char) * new_size);
	if (newall == NULL)
		return (NULL);
	d = newall;
	for (i = 0; i < n; i++)
	d[i] = s[i];
	free(ptr);
	return (newall);
}

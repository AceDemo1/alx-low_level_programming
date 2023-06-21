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
	void *newall;

	newall = malloc(sizeof(new_size));
	if (new_size > old_size)
	{
		char *s = (char *)ptr;
		char *d = (char *)newall;
		unsigned int i;

		for (i = 0; i < old_size; i++)
			d[i] = s[i];
		free (ptr);
		return (newall);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		return (newall);
	}
	else (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}

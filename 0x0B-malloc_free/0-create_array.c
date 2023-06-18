#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

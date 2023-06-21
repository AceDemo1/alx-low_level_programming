#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	if (min > max)
		return (NULL);
	int *arr = malloc(sizeof(int) * (max - min + 1);
	
	if (arr == NULL)
		return (NULL);
	for (int i = 0; i <= max -min; i++)
		arr[i] = min + i;
	return (arr);
}

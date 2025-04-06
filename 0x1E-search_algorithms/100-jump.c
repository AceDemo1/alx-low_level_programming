#include "search_algos.h"

/**
* jump_search - function that searches for a value in a sorted array
* using JUmp Search Algorithm
* @array: a pointer to the first element of the array to search
* @size: the number of element in array
* @value: the value to search for
* Return: the first index where value is located
*         -1 if value is not present in array
*         -1 if array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, step = sqrt(size), i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (step < size && array[step] < value)
	{
		start = step;
		step += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, step);
	for (i = start; i <= step; i++)
	{
		if (i == size)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * using Interpolation Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search at an index
 * Return: the first index where value is located
 *         -1 if value is not present in array
 *         -1 if array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid, start = 0, end = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (size != 0)
	{
		mid = start + ((end - start) * (value - array[start]) /
			       (array[end] - array[start]));

		printf("Value checked array[%ld]", mid);
		if (mid >= size)
		{
			printf(" is out of range\n");
			break;
		}
		printf(" = [%d]\n", array[mid]);

		if (start == end)
			break;
		else if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}

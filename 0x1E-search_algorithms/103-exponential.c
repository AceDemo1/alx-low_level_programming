#include "search_algos.h"

/**
 * print_array - function that print an array
 * @array: an array
 * @left: the beginning of the array
 * @right: the end of the array
 * Return: Nothing
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_linear - function that searches for a value in an sorted array
 * using Binear Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @start: the beginning of the array
 * @end: the end of the array
 * @value: the value to search at an index
 * Return: the first index where value is located
 *         -1 if value is not present in array
 *         -1 if array is NULL
 */
int binary_search_linear(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	if (array == NULL)
		return (-1);

	while (end >= start)
	{
		print_array(array, start, end);
		mid = start + (end - start) / 2;

		if (value == array[mid])
			return (mid);
		if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

/**
 * min_value - function that retrieve the min value
 * @a: a value
 * @b: another value
 * Return: the min value
 */
int min_value(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}

/**
 * exponential_search - function that searches for a value in an sorted array
 * using Exponential Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search at an index
 * Return: the first index where value is located
 *         -1 if value is not present in array
 *         -1 if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] != value)
	{
		index = 1;
		while (index < size && array[index] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			index *= 2;
		}
	}
	return (binary_search_linear(array, index / 2,
				     min_value(index, size - 1), value));
}

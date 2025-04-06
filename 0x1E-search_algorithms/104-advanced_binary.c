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
 * binear_search_recursive - function that searches for a value in an sorted of integers
 * using Binear Search Algorithm with recursion
 * @array: a pointer to the first element of the array to search in
 * @start: the beginning of the array
 * @end: the end of the array
 * @value: the value to search at an index
 * Return: the first index where value is located
 *         -1 if value is not present in array
 *         -1 if array is NULL
 */
int binary_search_recursive(int *array, size_t start, size_t end, int value)
{
    size_t mid;

	if (start > end)
		return (-1);

	print_array(array, start, end);

	mid = start + (end - start) / 2;
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (binary_search_recursive(array, mid + 1, end, value));
	return (binary_search_recursive(array, start, mid - 1, value));
}

/**
 * advanced_binary - function that searches for a value in an sorted of integers
 * using Binear Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search at an index
 * Return: the first index where value is located
 *         -1 if value is not present in array
 *         -1 if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (binary_search_recursive(array, 0, size - 1, value));
}

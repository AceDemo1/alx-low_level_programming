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
 * binary_search - function that searches for a value in an sorted of integers
 * using Binear Search Algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search at an index
 * Return: the first index where value is located
 *         -1 if value is not present in array
 *         -1 if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			left = mid + 1;

		else
			right = mid - 1;
	}
	return (-1);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **arr2, i = 0, j = 0;
	
	int **arr2 = (int **)malloc (sizeof(int *) *  height);
	if (arr2 == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		arr2[i] = (int  *)malloc(sizof(int) * width);
		if (arr2[i] == NULL)
		{
			return NULL;
		}
		while (j < width)
		{
			arr2[i][j] = 0;
			j++;
		}
		i++;
	}

	return (arr2);
}

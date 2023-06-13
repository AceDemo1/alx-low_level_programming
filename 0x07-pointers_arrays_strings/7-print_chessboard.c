#include "main.h"
/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar("%c", a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

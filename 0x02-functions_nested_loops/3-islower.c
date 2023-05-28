#include "main.h"

/**
 *_islower - returns 1 for lowercase alphabet and 0 for uppercase alphabet
 */

int _islower(int c)
{
	char al[] = "abcdefghijklmnopqrstuvwxyz";
	char AL[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;

	if (i >= 0 && i <= 25 && c == al[i]);
	{
		return 1;
	}
	else if (j >= 0 && j <= 25 && c == AL[j]);
	{
		return 0;
	}
}

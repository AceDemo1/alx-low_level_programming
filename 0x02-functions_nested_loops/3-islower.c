#include "main.h"

/**
 *_islower - returns 1 for lowercase alphabet and 0 for uppercase alphabet
 */

int _islower(int c)
{
	char al[] = "abcdefghijklmnopqrstuvwxyz";
	char AL[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	int j = 0;

	if (c == al[i])
	{	
		return 1;
	}
	else if (c == AL[j])
	{
		return 0;
	}
}

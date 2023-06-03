#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	int j = 0;
	char ch;
	int k = 0;

	while (s[j] != '\0')
	{
		j++;
		len;
	}
	
	i = len - 1;
	while (k >= 0)
	{
		ch = s[k];
		s[k] = s[i]
		s[i] = ch;
	}
}

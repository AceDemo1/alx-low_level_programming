#include <stdlib.h>

/**
 * wordcount - get word count from string
 *             without spaces
 *
 * @str: string to count words present
 *
 * Return: The number of words
*/

int wordcount(char *str)
{
	int a = 0, i = 0, j = 0;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	char *newstr;

	while (str[a] != '\0')
	{
		a++;
	}
	newstr = malloc(sizeof(char) * (a + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	while (i < a)
	{
		if (str[j] != " ")
		{
		newstr[i] = str[j];
		}
		newstr[i] = '\n';
		i++;
	}
	return (newstr);
}

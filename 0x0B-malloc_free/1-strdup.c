#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *newstr;
	int len = 0, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		str++;
		len++;
	}
	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		newstr[i] = str[i];
		i++;
	}

	return (newstr);


}

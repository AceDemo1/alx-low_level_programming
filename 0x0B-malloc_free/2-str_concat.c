#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0' && s2[len2] != '\0')
	{
		len1++;
		len2++;
	}
	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}

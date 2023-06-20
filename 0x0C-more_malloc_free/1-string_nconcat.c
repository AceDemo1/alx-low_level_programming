#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	char *newmo = malloc(len1 + n + 1);

	if (newmo == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		newmo[i] = s1[i];
		i++;
	}
	if (n >= len2 - 1)
	{
		while (s2[j] != '\0')
		{
			newmo[i] = s2[j];
			i++;
			j++;
		}
	}
	else if (n < len2-1)
	{
		while (j <= n)
		{
			newmo[i] = s2[j];
			i++;
			j++;
		}
	}
	else if (s2 == NULL)
	{
		newmo[i] = " ";
	}
	return (newmo);
}

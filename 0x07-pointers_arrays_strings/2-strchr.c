/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}
	if (s[j] == c)
		return &(s[j]);
	return (NULL);
}


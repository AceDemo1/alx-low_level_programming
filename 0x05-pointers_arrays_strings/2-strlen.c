/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 1;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

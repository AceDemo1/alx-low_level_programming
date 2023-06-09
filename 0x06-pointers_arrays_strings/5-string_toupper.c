/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @s : pointer to input char
 *
 * Return: @s
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] >= 'a' && s[i])
	{
		s[i] = s[i] - ('b' - 'B');
		i++;
	}
	return (s);
}
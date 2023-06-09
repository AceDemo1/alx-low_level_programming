/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i, j;

	i = 0;
	j = 0;
	char a[] = "aeotl";
	char b[] = "AEOTL";
	char c[] = "43071";

	while (s[i] != '\0')
	{
		while (j < 5)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] == c[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len = 0;
	char ch;
	char *st = s;

	/*find string length without null char*/
	while (s != '\0')
	{
		len++;
		s++;
	}

	s = s - 1;
	while (st < s)
	{
		ch = *st;
		*st = *s;
		*s = ch;
	}

}

#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 *         or NULL if it fails
*/

char *argstostr(int ac, char **av)
{
	int tot = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	char *newstr;
	int a = 0;

	while (a < ac)
	{
		int b = 0;
		while (av[a][b] != '\0')
		{
			b++;
			tot++;
		}
		a++;
		tot;
	}
	newstr = malloc(sizeof(char) * (tot + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (i < ac)
	{
		int j = 0;

		while (av[i][j] != '\0')
		{
			newstr[k] = av[i][j];
			j++;
			k++;
		}
		newstr[i] = '\n';
		k++;
		i++;
	}
	newstr[k] = '\0';
	return (newstr);
}
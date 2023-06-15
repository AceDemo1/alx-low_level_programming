#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	int i = 0;

	while (argv[0][i] != '\0')
	{
		putchar(argv[0][i]);
		i++;
	}
	putchar('\n');
	return (0);
}

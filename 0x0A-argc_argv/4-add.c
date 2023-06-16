#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (i < argc)
		{
			if (!isdigit(atoi(argv[i])))
			{
				printf("%s\n", "Error");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
			i++;
		}
	printf("%d\n", sum);
	return (0);
	}
}


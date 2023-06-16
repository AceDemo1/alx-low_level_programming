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
	int i = 0, sum = 0;

	if (argc < 2)
	{
		print("%d\n", 0);
		return (0);
	}
	else if (!isdigit(argv[i]))
	{
		print("%s\n", "Error");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			print("%d\n", sum += atoi(argv[i]));
			return (0);
	}
}


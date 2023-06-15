#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i, mul;
	if (argc < 3 || argc > 3)
	{
		printf("%s\n", Error);
		return (1);
	}
	else
	{
		mul = argv[1] * argv[2];
		printf("%d\n, mul);
	}
}

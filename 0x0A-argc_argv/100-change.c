#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return(0);
	}
	int coins = 0;

	coins = coins + cents / 25;
	cents = cents % 25;
	coins = coins + cents / 10;
        cents = cents % 10;
	coins = coins + cents / 5;
        cents = cents % 5;
	coins = coins + cents / 1;
        cents = cents % 1;
	printf("%d\n", coins);
	return (0);
}

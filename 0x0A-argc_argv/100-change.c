#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins to make change.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly 1 - 1.
 *         If the argument is negative - 0.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int cents, coins;
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
   cents = atoi(argv[1]);
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }
coins = 0;
   coins += cents / 25; 
    cents %= 25;         
    coins += cents / 10; 
    cents %= 10;         
    coins += cents / 5;  
    cents %= 5;          
    coins += cents;      
    printf("%d\n", coins);
    return 0;
}

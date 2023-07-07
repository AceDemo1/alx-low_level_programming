#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
**/
void bmain(void) __attribute__((constructor));
void bmain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include <stdio.h>

/**
 * bmain - function executed before main
 * Return: no return.
**/
void bmain(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

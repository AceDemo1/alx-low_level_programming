#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}


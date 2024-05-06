#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a DLL
 * @h: a pointer to the begining of a doubly linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t n = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		n++;
		tmp = tmp->next;
	}

	return (n);
}

#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked DLL
 * @h: a pointer to the beginning of doubly linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t n = 0;

	while (tmp)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}

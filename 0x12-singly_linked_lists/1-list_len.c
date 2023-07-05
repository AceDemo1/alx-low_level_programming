#include "lists.h"

/**
 * list_len - gets the number of nodes
 *
 * @h: pointer to the head (first node)
 *
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t i = 1;

	while (h->next != NULL)
		h = h->next;
		i++;

	return (i);
}

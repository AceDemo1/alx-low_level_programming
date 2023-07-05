#include "lists.h"

/**
 * print_list - print elements in a linked list
 *
 * @h: pointer to head first node
 *
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	int node_num = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		node_num += 1;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (node_num);
}

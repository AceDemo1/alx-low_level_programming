#include "lists.h"

/**
 * dlistint_len - function that returns the number of node
 * @h: a pointer at the beginning of a (doubly) linked list
 * Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 * @h: a double pointer at the beginning of a doubly linked list
 * @idx: the position where the new node should be added
 * @n: the data of a node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t len_node = 0;
	dlistint_t *new_node, *tmp;
	unsigned int i;

	len_node = dlistint_len(*h);
	if (idx > len_node)
		return (NULL);

	if (*h == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);

	new_node->n = n;
	tmp = *h;

	for (i = 0; i < idx - 1; i++)
		tmp = tmp->next;

	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}

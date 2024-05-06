#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a DLL
 * @head: a pointer at the beginning of a doubly linked list
 * @index: the position of the node return
 * Return: the node at the index, or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (tmp)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (tmp);
}

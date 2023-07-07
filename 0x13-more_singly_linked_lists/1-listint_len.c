#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}


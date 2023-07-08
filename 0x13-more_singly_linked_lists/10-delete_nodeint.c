#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp1, *temp2;

	temp1 = *head;
	temp2 = *head;
	if (index == 0)
	{
		*head = temp2->next;
		free(temp2);
		return (1);
	}
	else if (index > 0)
	{
		while (i < index)
		{
			temp1 = temp2;
			temp2 = temp2->next;
			i++;
		}
	temp1->next = temp2->next;
	free(temp2);
	return (1);
	}
	else
		return (-1);
}

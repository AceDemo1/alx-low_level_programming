#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given position.
 * @head: Address of the pointer to the first node.
 * @idx: Index of the new node to be inserted (starting from 0).
 * @n: Data of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *newnode;

	if (*head == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else if (idx != 0)
	{
		while (i < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (NULL);
	}

	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}


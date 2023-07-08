#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *newnode;
	
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			newnode->next = NULL;
			*head = newnode;
			return (newnode);
		}
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}


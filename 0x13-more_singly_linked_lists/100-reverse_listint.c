#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = *head;
	listint_t *temp2 = *head;

	temp1 = NULL;
	temp2 = NULL;
	while (*head != NULL)
	{
		temp2 = *head->next;
		*head->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp2;
	return (*head);
}

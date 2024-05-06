#include "lists.h"

/**
 * free_dlistint - function that fress a doubly linked list
 * @head: a pointer at the beginning of a doubly linked list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}

#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a DLL
 * @head: a pointer at the beginning of a doubly linked list
 * Return: the sum of all the data n or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

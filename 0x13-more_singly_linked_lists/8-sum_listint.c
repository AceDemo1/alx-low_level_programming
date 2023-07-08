#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data (n) in a list.
 * @head: Address of the first node of the list.
 * Return: Integer.
 **/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp =! NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

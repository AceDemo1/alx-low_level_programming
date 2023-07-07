#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		free(head);
	temp = head;
	while (temp->next != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
	free(temp->str);
	free(temp);
}


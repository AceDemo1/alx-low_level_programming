#include "lists.h"

/**
 * add_node_end - adds a node at the end of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *newNode;
	list_t *temp;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = NULL;
	if (*head == NULL)
		*head = newNode;
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	return (newNode);
}


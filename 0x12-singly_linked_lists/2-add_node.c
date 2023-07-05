#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 *
 * Return: NULL if it fails / starting addr of the list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i = 0;

	for (i; str[i]; i++);		
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	if (*head == NULL)
		newNode->next = NULL;
	else
		 newNode->next = *head;
	*head = newNode;
	return (newNode);
}

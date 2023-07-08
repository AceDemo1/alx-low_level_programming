#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	int *visited = NULL;
	int is_loop = 0;

	visited = calloc(1024, sizeof(int));
	if (visited == NULL)
		exit(98);

	while (current)
	{
		if (visited[((size_t)current) % 1024])
		{
			is_loop = 1;
			break;
		}

		visited[((size_t)current) % 1024] = 1;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}

	free(visited);

	if (is_loop)
		printf("-> [%p] %d\n", (void *)current, current->n);

	return count;
}


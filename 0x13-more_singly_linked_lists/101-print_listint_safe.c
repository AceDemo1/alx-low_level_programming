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
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;
	int loop = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

	slow = head;
	fast = head;

	if (loop)
	{
		while (slow != fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			fast = fast->next;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
	}
	else
	{
		while (slow)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
		}
	}

	count = loop ? 0 : count_nodes(head);
	printf("Number of nodes: %lu\n", count);

	return count;
}

/**
 * count_nodes - Counts the number of nodes in a linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t count_nodes(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}

	return count;
}


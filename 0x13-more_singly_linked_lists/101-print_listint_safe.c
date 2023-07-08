#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

const listint_t *find_loop_node(const listint_t *head);
void print_with_loop(const listint_t *head, const listint_t *loop_node);

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	const listint_t *loop_node;
	size_t count = 0;

	current = head;

	/* Check if the list is empty */
	if (current == NULL)
		return (0);

	/* Detect loop using Floyd's cycle detection algorithm */
	loop_node = find_loop_node(current);

	if (loop_node != NULL)
	{
		print_with_loop(current, loop_node);
		return (count);
	}

	/* No loop detected, print the list normally */
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}

	return (count);
}

/**
 * find_loop_node - Finds the node where the loop begins in a linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The node where the loop begins, or NULL if there is no loop.
 */
const listint_t *find_loop_node(const listint_t *head)
{
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return slow;
		}
	}

	return NULL;
}

/**
 * print_with_loop - Prints a linked list containing a loop.
 * @head: A pointer to the head of the list.
 * @loop_node: The node where the loop begins.
 */
void print_with_loop(const listint_t *head, const listint_t *loop_node)
{
	const listint_t *current = head;
	size_t count = 0;
	int loop_started = 0;

	while (current != loop_node)
	{
		printf("[%p] %d\n", (void *)current, current->n);

		count++;
		current = current->next;
	}

	printf("[%p] %d\n", (void *)current, current->n);
	printf("-> [%p] %d\n", (void *)current->next, current->next->n);
	count++;

	current = current->next;
	while (current != loop_node)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		count++;
	}

	printf("Loop starts at [%p] %d\n", (void *)loop_node, loop_node->n);
	printf("Loop size = %lu\n", count);
}


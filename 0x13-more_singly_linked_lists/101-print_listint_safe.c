#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t count = 0;

	if (!head)
		exit(98);

	slow_ptr = head;
	fast_ptr = head;

	while (fast_ptr && fast_ptr->next)
	{
		count++;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("Loop detected in list\n");
			exit(98);
		}

		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
	}

	count++;
	printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);

	return (count);
}


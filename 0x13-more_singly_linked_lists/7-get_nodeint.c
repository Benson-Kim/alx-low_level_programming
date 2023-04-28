#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: A pointer to the first node of the listint_t list.
 * @index: The index of the node to be returned, starting at 0.
 *
 * Return: A pointer to the nth node of the list, or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int node_count = 0;

	while (current_node != NULL)
	{
		if (node_count == index)
			return (current_node);

		current_node = current_node->next;
		node_count++;
	}

	return (NULL);
}


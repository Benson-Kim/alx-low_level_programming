#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the data for the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	unsigned int i;

	if (head == NULL) /* check if head is NULL */
		return (NULL);

	new_node = malloc(sizeof(listint_t)); /* allocate memory for new node */
	if (new_node == NULL) /* check if allocation failed */
		return (NULL);

	new_node->n = n; /* set data for new node */

	if (idx == 0) /* insert at the beginning */
	{
		new_node->next = *head; /* link new node to head */
		*head = new_node; /* make new node the head */
		return (new_node); /* return new node */
	}

	current = *head; /* set current to head */

	for (i = 0; i < idx - 1; i++) /* loop until one position before index */
	{
		if (current == NULL) /* check if index is out of range */
		{
			free(new_node); /* free new node */
			return (NULL); /* return NULL */
		}
		current = current->next; /* move to the next node */
	}

	new_node->next = current->next; /* link new node to next node */
	current->next = new_node; /* link current node to new node */

	return (new_node); /* return new node */
}

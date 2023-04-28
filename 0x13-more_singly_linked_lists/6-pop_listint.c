#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: A pointer to a pointer to the first node of the listint_t list.
 *
 * Return: The data of the deleted head node (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (data);

	temp_node = *head;
	data = temp_node->n;
	*head = temp_node->next;
	free(temp_node);

	return (data);
}


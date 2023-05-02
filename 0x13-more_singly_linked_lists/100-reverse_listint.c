#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* pointer to store the previous node */
	listint_t *next; /* pointer to store the next node */

	if (head == NULL) /* check if head is NULL */
		return (NULL);

	while (*head != NULL) /* loop through the list */
	{
		next = (*head)->next; /* store the next node */
		(*head)->next = prev; /* link current node to previous node */
		prev = *head; /* update previous node */
		*head = next; /* update current node */
	}

	*head = prev; /* make the last node the new head */

	return (*head); /* return the new head */
}

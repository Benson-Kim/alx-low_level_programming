#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL) /* check if head is NULL */
		return;

	while (*head != NULL) /* loop through the list */
	{
		tmp = *head; /* store the current node */
		*head = (*head)->next; /* move the head to the next node */
		free(tmp); /* free the stored node */
	}
}

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head
 * @head: Double pointer to thne head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		/* If the list is empty of head is null,nothing to free */
		return;
	/* initialize current to the head of the list */
	current = *head;

	while (current != NULL)
	{
		/* store the next node in a temporary variable */
		temp = current->next;
		free(current); /* Free thne current node */
		current = temp; /* Move to the next node */
	}

	*head = NULL; /* set the head to NULL to indicate an empty list*/
}

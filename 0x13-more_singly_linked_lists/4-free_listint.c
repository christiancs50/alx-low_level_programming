#include "lists.h"

/**
 * free_listint - Retfurn the nummber of elements in a linked list
 * @head: Poointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current; /* pointer to cross the list */

	while (head != NULL)
	{
		current = head; /* store current node in 'current' */
		head = head->next; /* Move to the next node */
		free(current); /* Free memory of current node */
	}
}


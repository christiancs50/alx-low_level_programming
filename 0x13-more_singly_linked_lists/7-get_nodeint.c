#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 * Return: Pointer to the nth node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head; /* Start at the head node */

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next; /* move to next node */
	}

	/* check if the index is valic and the next node exists */
	if (i == index && current != NULL)
		return (current); /* rtn a pointer to nnth node	*/
	else
		return (NULL); /* node does not exist at the given index */
}

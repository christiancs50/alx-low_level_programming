#include "lists.h"

/**
 * listint_len - Returns a number of elements in a linked list
 * @h: Pointer to the head of linked liist
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0; /* Initia..  a variable to count nodes */

	while (h != NULL)
	{
		node_count++; /* Increment the count for each node */
		h = h->next; /* Move to the next node */
	}
	return (node_count);
}

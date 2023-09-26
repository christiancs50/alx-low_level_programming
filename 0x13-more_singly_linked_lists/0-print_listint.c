#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * @h: pointer to string
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0; /* initiate a variable to count node */

	while (h != NULL)
	{
		/* Print the value of the current node */
		printf("%d\n", (int)(h->n));
		h = h->next; /* Move to the next node */
		node_count++;  /* Increment the node count */
	}
	return (node_count); /* Return the total number of nodes */
}


#include "lists.h"

/**
 * sum_listint - Return the sum of all data in link list
 * @head: Pointer to the head node
 * Return: sum of data of NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n; /* add data of current node */
		current = current->next; /* Move to next node */
	}

	return (sum);
}

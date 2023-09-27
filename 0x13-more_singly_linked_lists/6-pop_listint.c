#include "lists.h"

/**
 * pop_listint - Deletes the node of a linkked list and return data
 * @head: Double pointer to the head of the list
 * Return:data of deleted node or 0
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0); /* if is empty, return NULL */

	temp = *head; /*stores a reference   */
	data = temp->n; /* Get data of the current note */
	*head = (*head)->next; /* Update the head pointer */
	free(temp); /* Free the old head node */

	return (data); /*return the data of deleted node */
}

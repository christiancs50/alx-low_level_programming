#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index n a l list
 * @head: Double pointer to the head of the list
 * @index: Index of the node to be deleted (starting at 0)
 * Return: 1 if deletion succeeds, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		/* Delete the first node (head)*/
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1); /* to indicate success */
	}

	prev = *head;

	for (i = 0; i < index - 1 && prev != NULL; i++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}

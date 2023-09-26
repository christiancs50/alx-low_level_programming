#include "lists.h"

/**
 * add_nodeint_end - Adds a new node of a linked list
 * @head: Pointer to a pointer to the head of the linkes list
 * @n: Value stored in the new node.
 * Return: Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* New node pointer */
	listint_t *current; /* Pionter to cross the list */

	/* Designate memory for the new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL) /* memory allocation fail */
	{
		return (NULL);
	}

	/* Value of the new node */
	new_node->n = n;

	/*Initialize the next pointer of the node to NULL */
	new_node->next = NULL;

	/* If list is empty, set header to the new node */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head; /* Cross to the last node */
		while (current->next != NULL)
		{
			current = current->next;
		}
		/* add the new node after the last node */
		current->next = new_node;
	}
	return (new_node); /* Return the addres of the new mode */
}

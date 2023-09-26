#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at beginning of a list
 * @head: Pointer to a pointer to the head
 * @n: The value to be stores in the new node
 * Return: Null or the address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* new node pointer */

	/* Desinate memory for the new node */
	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL) /*if memory allocation fail */
	{
		return (NULL);
	}

	/* Set value of the new node */
	new_node->n = n;

	/* Set the pointer of the new node to the current pointer */
	new_node->next = *head;


	/* Update the head pointer to point to the new node */
	*head = new_node;

	return (new_node);
}

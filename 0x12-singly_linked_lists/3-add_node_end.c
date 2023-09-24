#include "lists.h"

/**
 * add_node_end- function that adds a new node
 * @head: string - (malloc'ed string)
 * @str : length of the string
 * Return: NULL or elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	temp = temp->next;
	temp->next = new;

	return (new);
}

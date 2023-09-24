#include "lists.h"

/**
 * add_node - function that adds a new node
 * @head: pointer to first node
 * @str: length of the string
 * Return: elements in pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *next;
	unsigned int len = 0;

	while (str[len])
	len++;
	next = malloc(sizeof(list_t));
	if (!next)
	return (NULL);

	next->str = strdup(str);
	next->len = len;
	next->next = (*head);
	(*head) = next;
	return (*head);
}

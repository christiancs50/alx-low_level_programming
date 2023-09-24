#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
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

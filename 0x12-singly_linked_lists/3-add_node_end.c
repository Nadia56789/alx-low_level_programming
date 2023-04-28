#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *l;
	int len;
	list_t *node, *last;

	new = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	l = strdup(str);
	if (!str)
	{
		free(node);
	return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	node->str = l;
	node->len = len;
	node->next = NULL;

	if (*head == NULL)
		*head = node;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
	}

	return (*head);
}

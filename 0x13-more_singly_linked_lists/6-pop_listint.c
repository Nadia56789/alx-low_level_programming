#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the first element of a singly linked list.
 * @head: Pointer to a list.
 * Return: Integer if success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int m;

	if (*head == NULL)
		return (0);

	node = *head;
	*head = node->next;
	m = node->n;
	free(node);
	return (m);
}

#include "lists.h"

/**
 *free_listint - Frees a list
 *@head: A pointer to the list head
 *
 */

void free_listint(listint_t *head)
{
	list_t *cpt;

	while (head)
	{
		cpt = head->next;
		free(head);
		head = cpt;
	}
}

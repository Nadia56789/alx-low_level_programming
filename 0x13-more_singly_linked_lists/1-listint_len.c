#include "lists.h"
#include <stdio.h>

/**
 * listint_t - returns then number of elements in a list.
 * @s: singly linked list.
 * Return: number of elements in the list.
 */

size_t listint_t(const listint_t *s)
{
	size_t cpt = 0;

	while (s != NULL)

	{
		
		s = s->next;
		cpt++;
	}


	return (cpt);
}

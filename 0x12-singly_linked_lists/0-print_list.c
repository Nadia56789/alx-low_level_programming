#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list_t
 * @h: pointer to the list_t
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cpt = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		cpt++;
	}

	return (cpt);
}




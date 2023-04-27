#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	char *cpt;
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	cpt = strdup(str);
	if (!cpt)
	{
		free(new);
		return (NULL);
	}
	while (str[len])

	new->str = cpt;
	new->len = len;
	new->next = *head;
	len++;

	*head = new;

	return (new);

}

#include "lists.h"

/**
* print_list - prints all the elements of a list
* @h:pointer to the list
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{

size_t cpt = 0;

while (cpt)
{
if (cpt->r)
printf("[%d] %s\n", cursor->len, cursor->str);
else
printf("[0] (nil)\n");
cpt++;
cpt = cpt->next;
}

return (cpt);
}

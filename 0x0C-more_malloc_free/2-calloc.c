#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
return (NULL);
}
void *ptr;
ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < (nmemb * size); i++)
ptr[i] = 0;

return (ptr);
}

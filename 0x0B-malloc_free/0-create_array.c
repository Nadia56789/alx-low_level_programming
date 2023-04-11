#include <stdlib.h>
#include "main.h"
/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it failso or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

if (size == 0)
{
return (NULL);
}

arr = malloc(sizeof(char) * size);

if (arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);



}


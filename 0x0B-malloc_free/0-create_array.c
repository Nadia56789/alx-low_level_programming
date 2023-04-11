#include <stdlib.h>
/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it failso or pointer to array
*/

char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (NULL);
}

char *arr = malloc(sizeof(char) * size);

if (arr == Null)
{
return (Null);
}

for (unsigned int i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);



}


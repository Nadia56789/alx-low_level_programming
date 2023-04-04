#include "main.h"
/**
*_memcpy - The _memcpy() function that copies memory area
*@dest:area where bytes are copied to
*@src:area where bytes are copied from
*@n: function copies
*Return: returns a pointer to @dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
src[i] = dest[i];
i++
}
return (dest);
}

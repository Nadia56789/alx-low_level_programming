#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str)
{
int len, index;
char *copy;
if (str == NULL)
{
return (NULL);
}

for (index = 0; str[index]; index++)

		len++;


copy = malloc(len + 1);


if (copy == NULL)
{

return (NULL);
}


strcpy(copy, str);

return (copy);
}

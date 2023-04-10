#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */

int _strlen(char *s)
{
int i, cpt;

cpt = 0;
for (i = 0; s[i] != '\0'; i++)
cpt++;
return (cpt);
}

#include "main.h"
/**
 *_strchr -  locates a character in a string
 *@s string targeted
 *@c character targeted
 *Return: Returns a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
else
return (Null);
}


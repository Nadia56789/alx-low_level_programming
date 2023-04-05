#include "main.h"
/**
* _strlen_recursion - return the  length of a string
* @s: string to be measured
*Return: length of the string
*/

int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s != '\0')
	{
		lent++;
		lent = lent + _strlen_recursion(s + 1);
	}
	return (lent);

}


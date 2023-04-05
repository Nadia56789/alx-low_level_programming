#include "main.h"

int _strlen_recursion(char *s)
{
	int lent = 0;
	if (*s != '\0')
	{
		lent++;
		lent = lent + _strlen_recursion(s+1);
	}
	return (lent);

}


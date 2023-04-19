#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the person name
 * @f: pointer point to a fonction
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name || f)
		f(name);
}

#include "function_pointers.h"

/**
 * int_index - int_index
 *@size: is the number of elements in the array array
 *@cmp: is a pointer to the function to be used to compare values
 *@array: Array containing elements
 * Return: returns -1 if no element match
 * or when size is less than zero
 *return pointer to the first corresponding element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	return (-1);
}

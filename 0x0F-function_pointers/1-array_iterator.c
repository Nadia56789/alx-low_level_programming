#include "function_pointers.h"

/**
*array_iterator - executes a function on each element of an array
*@array: the array
*@size: size of array
*@action:  executes a function given as a parameter on each element of an array
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL || action != NULL)

		for (i = 0; i < (int) size; i++)
		{
		action(array[i]);
		}
}

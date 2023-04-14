#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: smallest range of values stored
 * @max: largest range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}

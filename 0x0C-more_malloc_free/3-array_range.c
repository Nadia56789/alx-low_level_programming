#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min:smallest number in the array
  * @max:lagrest value in the array
  * Return: integer value
  */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);
arr = (int *) malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (int i = 0; i <= (max - min); i++)
{
arr[i] = min + i;
}
return (arr);
}

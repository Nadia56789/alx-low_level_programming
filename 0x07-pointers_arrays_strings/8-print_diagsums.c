#include "main.h"
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/

void print_diagsums(int *a, int size)
{
int sum1 = 0, int sum2 = 0, int i;

for (int i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)]
}
printf("Sum of diagonal 1: %d\n", sum1);
printf("Sum of diagonal 2: %d\n", sum2);
}

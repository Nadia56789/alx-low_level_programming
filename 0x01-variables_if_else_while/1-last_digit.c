#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *Description: 'get the last digit of a number'
 *Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
		printf("last digit of %d is %d and is greater then 5\n", n, ld);
        if (ld == 0)
        	printf("last digit of %d is %d and is 0\n", n, ld);
        if (ld < 6 && ld != 0)
		printf("last digit of %d is %d and is less than 6\n", n, ld);
	return (0);
}

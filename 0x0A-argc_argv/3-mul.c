#include <stdio.h>
/**
* main - prints multiplication of two numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: returns 0
*/

int main(int argc, char **argv)
{
	int i, j;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);

	return (0);
}

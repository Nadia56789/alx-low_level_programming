#include <stdio.h>

/**
* main - prints all arguments it received
*@argc: argument count
*@argv: argument vector
*Return: returns 0
*/

int main(int argc, char *argv[])
{
		int count;

		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);

		return (0);
}

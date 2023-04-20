#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - Prints numbers, followed by a new line.
*@separator: The string to be printed between numbers.
*@n: The number of integers passed to the function.
*return nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
		unsigned int i;


		va_start(list, n);


		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));


			if (i != (n - 1) && separator)
				printf("%s", separator);
		}


		printf("\n");


		va_end(list);
	}

}



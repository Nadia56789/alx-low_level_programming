#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings, followed by a new line
 *@separator:is the string to be printed between the strings
 *@n:is the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list list;
		char *arg;
		unsigned int i;


		va_start(list, n);


		for (i = 0; i < n; i++)
		{
			arg = va_arg(strings, char *);


			if (!arg)
				printf("(nil)");
			else
				printf("%s", str);

			if (i != (n - 1) && separator)
				printf("%s", separator);
		}


		printf("\n");


		va_end(list);
	}




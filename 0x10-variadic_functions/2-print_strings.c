#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator:string to be printed between the strings
 * @n: number of strings passed to the function
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nptr;

	va_start(nptr, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(nptr, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(nptr, char*));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nptr);
}

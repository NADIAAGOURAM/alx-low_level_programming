#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:string to be printed between numbers
 * @n: number of integers passed to the function
 * Return:void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nptr;

	va_start(nptr, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d%s", va_arg(nptr, unsigned int), separator);
		printf("\n")
	}
	va_end(nptr);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n:number of parameters
 * Return:sum if n not null otherwise 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list nptr;

	if (n == 0)
		return (0);
	va_start(nptr, n);
	for (i = 0; i < n; i++)
		sum += sum + va_arg(nptr, unsigned int);
	va_end(nptr);
	return (sum);
}

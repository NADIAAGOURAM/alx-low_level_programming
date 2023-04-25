#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 * Return:void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
        {
                printf("%i, ", n);
                n--;
        }
	while (n == 98)
	{
		printf("98");
		printf('\n');
	}
}

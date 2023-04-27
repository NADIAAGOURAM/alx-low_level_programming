#include "main.h"

/**
 * print_square -prints a square, followed by a new line.
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}

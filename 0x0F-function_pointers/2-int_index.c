#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: array
 * @size: the size of the array
 * @cmpa: pointer to the function
 * Return:index of the first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size)
	{
		for (i = 0 ; i < size ; i++)
		{
			if ((*cmp)array[i] != 0)	
				return (i);
			else
				return (-1);
		}
	else
		return (-1);
	}
}

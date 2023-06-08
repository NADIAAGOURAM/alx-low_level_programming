#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 & 1
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number <<= 1;
		number += *b - '0';
	}
	return (number);
}

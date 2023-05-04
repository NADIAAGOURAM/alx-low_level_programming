#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: pointer
 * Return: char
*/

char *string_toupper(char *c)
{
	int j;

	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] >= 'a' && c[j] <= 'z')
			c[j] = c[j} - 32;
	}
	return (c);
}

#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @c: string
 * Return: char
 */

char *cap_string(char *c)
{
	int i = 0;
	char sep[] = ",\t;\n; .!?\"(){}";

	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
			i++;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (c[i] == sep[j])
				c[i] = c[i] - 32;
		}
	}
	return (c);
}

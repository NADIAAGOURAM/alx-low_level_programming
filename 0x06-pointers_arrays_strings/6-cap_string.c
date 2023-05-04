#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 * @c: string
 * Return: char
 */

char *cap_string(char *c)
{
	int i = 0;
	int j;
	char sep[] = ",\t;\n; .!?\"(){}";

	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
			i++;
		for (j = 0; j < 12; j++)
		{
			if (c[i - 1] == sep[j])
				c[i] = c[i] - 32;
			i++;
		}
	}
	return (c);
}

#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 * Return: String
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
	}
}

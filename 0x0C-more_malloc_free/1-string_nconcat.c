#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1:first string
 * @s2:second string
 * @n:bytes of s2
 * Return:char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "\0";
	else
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}

	if (s2 == NULL)
		s2 = "\0";
	else
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}
	if (n > len2)
		n = len2;
	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}

#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings.
 * @s1:string1
 * @s2:string2
 * Return:pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1, len2;

	if (s1 == NULL)
		s1 = "\0";
	else
		len1 = _strlen(s1);

	if (s2 == NULL)
		s2 = "\0";
	else
		len2 = _strlen(s2);
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		concat[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		concat[len1] = s2[len2];
		len1++;
		len2++;
	}
	concat[len1] = '\0';
	return (concat);
}


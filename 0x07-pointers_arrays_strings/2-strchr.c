#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s:char
 * @c:char
 * Return:char
 */

char *_strchr(char *s, char c)
{
	char *ch = NULL;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			ch = s[i];
		i++
	}
	return (ch);
}

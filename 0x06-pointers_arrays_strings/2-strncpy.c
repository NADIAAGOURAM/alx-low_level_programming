#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest:string
 * @src:string
 * @n:int
 * Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	do {
		dest[i] = '\0';
		i++;
	} while (i < n);

	return (dest);
}

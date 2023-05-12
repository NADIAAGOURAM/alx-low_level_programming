#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest:char
 * @src:char
 * @n:unsigned int bytes
 * Return: dest char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

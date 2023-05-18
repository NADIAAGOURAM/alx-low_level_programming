#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s:char
 * @b:char
 * @n:unsigned int
 * Return:char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb:elements
 * @size:bytes
 * Return:pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size);
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


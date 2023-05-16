#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string that duplicate the string str
 * @str:string to be duplicated
 * Return:pointer to string or NULL
 */

char *_strdup(char *str)
{
	char *a;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	a = malloc(sizeof(char) * size + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0;i < size; i++)
		a[i] = str[i];
	return (a);
}

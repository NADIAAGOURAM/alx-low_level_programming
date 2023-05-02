#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: string
 * Return: half of string
 */

void puts_half(char *str)
{
	int len, j, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (j = (len - 1) / 2; j < len - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}


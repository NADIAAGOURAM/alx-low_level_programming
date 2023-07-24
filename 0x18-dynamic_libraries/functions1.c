#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower -> checks for a lowercase character
 *
 * @c: Character Of _islower
 *
 * Return: 1 and 0 (Condition)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _isalpha -> checks for a alphabetic character
 *
 * @c: Character Of _isalpha
 *
 * Return: 1 and 0 (Condition)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _abs -> prints the sign of a number
 *
 * @n: _abs inpute
 *
 * Return: Always n (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}

/**
 * _isupper -> Checks for uppercase character
 *
 * @c: Input character
 *
 * Return: 0 or 1 (Condition)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _isdigit -> Checks for digit 0 - 9
 *
 * @c: Input
 *
 * Return: 0 or 1 (Condition)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * _strlen -> The length of a string
 *
 * @s: Input
 *
 * Return: i String Length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * _puts -> Prints a string
 *
 * @str: Input
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * *_strcpy -> Copy String From Source Into Destinse
 *
 * @dest: Empty Input
 * @src: Input Source
 *
 * Return: Destinse String
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _atoi -> Convert string to integer
 *
 * @s: Input
 *
 * Return: Integer Converted
 */

int _atoi(char *s)
{
	int i;
	int sin;
	unsigned int digit;

	i = 0;
	sin = 1;
	digit = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sin *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (digit * 10) + (s[i] - '0');
		}
		else if (digit > 0)
			break;
		i++;
	}
	return (digit * sin);
}

/**
 * *_strcat -> Appends the src string to the dest string
 *
 * @dest: Destination Input
 * @src: Source Input
 *
 * Return: Destination
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _memset - function that fills memory with a constant byte
 * @s: a character
 * @b: a constant byte
 * @n: unsigned int
 *
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * *_strncat -> Appends Selected Number Elements src string to the dest string
 *
 * @dest: Destination Input
 * @src: Source Input
 * @n: Number Elements
 *
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; dest[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _memcpy - function that copies memory area
 * @dest: character
 * @src: character
 * @n: unsigned int
 *
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strchr - function that locates a character in a string
 * @s: a string
 * @c: character
 *
 * Return: a pointer to the initial occurrence or null."
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}

/**
 * *_strncpy -> Copy Number Of String From Source Into Destinse
 *
 * @dest: Empty Input
 * @src: Input Source
 * @n: Input Number
 *
 * Return: Destinse String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * _strcmp ->  Compares two strings
 *
 * @s1: First Input
 * @s2: Second Input
 *
 * Return: 0 Or Different (Condition)
 */

int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: character
 * @accept: character
 *
 * Return: whole number without a sign
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value = 0;

	for (i = 0; s[i]; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				value++;
				break;
			}
		}
		if (!accept[n])
			break;
	}
	return (value);
}

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to character
 * @accept: input
 *
 * Return: either a pointer to the byte in s or null
 */

char *_strpbrk(char *s, char *accept)
{
	char *n;

	while (*s != '\0')
	{
		for (n = accept; *n != '\0'; n++)
		{
			if (*s == *n)
				return (s);
		}
		s++;
	}
	return (NULL);
}

/**
 * _strstr - function that locates a substring
 * @haystack:  char
 * @needle:  char
 *
 * Return: either a pointer to a character or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;
		while (*b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}
		if (!*b)
			return (a);
		haystack++;
	}
	return (NULL);
}

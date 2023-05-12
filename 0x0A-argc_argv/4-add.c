#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", sum);
	return (sum);
}


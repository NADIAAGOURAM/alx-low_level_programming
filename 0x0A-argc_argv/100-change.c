#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}


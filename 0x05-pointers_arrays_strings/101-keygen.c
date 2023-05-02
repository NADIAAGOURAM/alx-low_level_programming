#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;
	char ch;

	srand(time(NULL));
	while (sum <= 2645)
	{
		ch = rand() % 120;
		sum += ch;
		putchar(ch);
	}
	putchar(2772 - sum);
	return (0);
}

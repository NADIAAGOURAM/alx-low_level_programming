#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main -  prints the opcodes of its own main function
 *@argc:number of arguments
 *@argv:array of arguments
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
}


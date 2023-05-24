#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b
 * @a:integer
 * @b:integer
 * Return:result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a:integer
 * @b:integer
 * Return:result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a:integer
 * @b:integer
 * Return:result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of a and b
 * @a:integer
 * @b:integer
 * Return:result
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a:integer
 * @b:integer
 * Return:result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}

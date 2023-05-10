#include "main.h"

int sqrtt(int n, int sq);

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n:integer number
 * Return:natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrtt(n, 1));
}

/**
 * sqrtt - squar root of a number
 * @n:integer
 * @sq:integer
 * Return:integer
 */

int sqrtt(int n, int sq)
{
	if (sq * sq > n)
		return (-1):
	if (sq * sq == n)
		return (sq);
	return (sqrtt(n, sq + 1));
}

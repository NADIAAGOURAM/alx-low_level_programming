#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @n: input integer
 * Return:1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - if a number is prime
 * @n:integer
 * @i:integer
 * Return:integer
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}

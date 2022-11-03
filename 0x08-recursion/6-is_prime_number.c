#include "main.h"

/**
 *is_prime - is prime?
 *@a: int
 *@n: int
 *
 *Return: int
 */

int is_prime(int a, int n)
{
	if (n < 2 || !(n % a))
		return (0);
	else if (a > n / 2)
		return (1);
	else
		return (is_prime(a + 1, n));
}

/**
 *is_prime_number - check for prime
 *@n: int
 *
 *Return: integer
 */

int is_prime_number(int n)
{
	return (is_prime(2, n));
}

#include "main.h"

/**
 * factorial - gert factorial of int
 *
 * @n: number
 *
 * Return: N/A
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

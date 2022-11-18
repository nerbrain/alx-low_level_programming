#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: number of args
 *
 * Return: sum of inputs
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (a = 0; a < n; a++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

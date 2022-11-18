#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string between numbers
 * @n: ints
 *
 * return: n/a
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;



	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(list, int));
		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

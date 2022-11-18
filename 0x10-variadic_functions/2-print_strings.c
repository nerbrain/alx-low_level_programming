#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed.
 * @n: int
 *
 * Return: n/a
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;
	char *b;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(list, char *);

		if (b)
			printf("%s", b);
		else
			printf("(nil)");

		if (a < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(list);
}

#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: types of arguments.
 *
 * Return: n/a
 */
void print_all(const char * const format, ...)
{
	va_list list;
    const char args[] = "cifs";
	unsigned int a = 0, b, c = 0;
	char *st;
	

    
	va_start(list, format);
	while (format && format[a])
	{
		b = 0;
		while (args[b])
		{
			if (format[a] == args[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(list, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(list, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(list, double)), c = 1;
			break;
		case 's':
			st = va_arg(list, char *), c = 1;
			if (!st)
			{
				printf("(nil)");
				break;
			}
			printf("%s", st);
			break;
		} a++;
	}
	printf("\n"), va_end(list);
}

#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: size of triangle
 *
 * Return: N/A
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < size - a; b++)
			_putchar(' ');
		for (b--; b < size; b++)
			_putchar(35);
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 *
 * Return: N/A
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

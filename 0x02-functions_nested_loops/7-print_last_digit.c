#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - prints last digit of int
 *
 * @n: int to be checked to be checked
 *
 * Return: something
 */
int print_last_digit(int n)
{
	int b = n % 10;

	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
}

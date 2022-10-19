#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - list numbers until 98
 *
 * @n: value to start from
 *
 * Return: N/A
 */
void print_to_98(int n)
{

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d,", n);
		}
		printf("\n");
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				break;
			}
			printf("%d,", n);
		}
		printf("\n");
	}
	else
	{
		printf("%d \n", n);
	}
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - start function
 * Return: return 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; a <= 57; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');

			if (b == 57)
			{
				break;
			}
		}

		if (a == 57)
		{
			break;
		}
	}
	return (0);
}

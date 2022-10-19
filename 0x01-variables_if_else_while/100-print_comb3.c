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

	for (a = 48; a <= 56; a++)
	{
		for (b = 48; a <= 57; b++)
		{
			if ( a == 56 && b == 57)
			{
				putchar(a);
				putchar(b);
			}
			else
			{
				putchar(a);
				putchar(b);
				putchar(',');
				putchar(' ');
			}

			if (b == 57)
			{
				break;
			}
		}

		if (a == 56)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}

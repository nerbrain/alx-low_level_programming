#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - start function
 * Return: return 0
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);

}

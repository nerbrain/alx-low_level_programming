#include <stdio.h>

/**
 * main - start function
 * Return: return 0
 */
int main(void)
{
	int a;
	char letters[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (a = 0 ; a < 52; a++)
		putchar(letters[a]);

	putchar('\n');
	return (0);

}

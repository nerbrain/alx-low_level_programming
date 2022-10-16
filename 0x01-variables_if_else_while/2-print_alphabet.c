#include <stdio.h>

/**
 * main - start function
 * Return: return 0
 */
int main(void)
{
	int a;
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";

	for (a = 0 ; a < 26; a++)
		putchar(letters[a]);

	putchar('\n');
	return (0);

}

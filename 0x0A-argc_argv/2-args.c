#include <stdio.h>
/**
 * main - print all arguments
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}

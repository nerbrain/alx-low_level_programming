#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcode
 * @argc: counter
 * @argv: array of pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int a;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < bytes; a++)
	{
		printf("%02x", opc[a] & 0xFF);

		if (a != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - amount of coins for change
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int money, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= 25)
			money -= 25;

		else if (money >= 10)
			money -= 10;

		else if (money >= 5)
			money -= 5;

		else if (money >= 2)
			money -= 2;

		else if (money >= 1)
			money -= 1;

		coins += 1;
	}

	printf("%d\n", coins);
	return (0);
}

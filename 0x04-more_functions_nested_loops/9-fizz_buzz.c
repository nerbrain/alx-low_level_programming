#include<stdio.h>

/**
 * main - print numbers 1 to 100 replacing values 3,5 and
 * numbers divisible by the same numbers
 *
 * Return: list of text with replaced numbers
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 ==0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ",a);
		}
	}
	printf("\n");
	return (0);
}

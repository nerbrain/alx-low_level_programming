/**
 *sqr - square conditions
 *@i: integer
 *@n: integer
 *
 *Return: square of number
 */

int sqr(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i > n / 2)
		return (-1);
	else
		return (sqr(i + 1, n));
}

/**
 *_sqrt_recursion - square integer
 *@n: integer
 *
 *Return: square of number
 */
int _sqrt_recursion(int n)
{
	return (sqr(1, n));
}

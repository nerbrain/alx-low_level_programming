#include "main.h"
/**
 * _pow_recursion - find power of int
 *
 * @x: int
 * @y: int
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	return (0);
}

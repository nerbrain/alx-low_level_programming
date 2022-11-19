#include "function_pointers.h"

/**
 * print_name - print name
 * @name: string
 * @f: function
 *
 * Return: n/a
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

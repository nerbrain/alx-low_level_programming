#include "main.h"

/**
 * _strspn - get length of prefix
 * @s: string
 * @accept: string
 *
 * Return: nummber
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (s[a] != accept[b])
			break;
	}
	return (a);
}

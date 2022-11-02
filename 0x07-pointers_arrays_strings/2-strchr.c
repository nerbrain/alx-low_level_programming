#include "main.h"
/**
 * _strchr - locates character
 * @s: string to find char
 * @c: char to find
 * Return: value
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '/0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	if (s[a] == c)
	{
		return (s + a);
	}

	return (0);
}

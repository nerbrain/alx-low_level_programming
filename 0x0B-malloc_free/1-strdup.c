#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string
 *@str: string
 *
 *Return: pointer to new space
 */

char *_strdup(char *str)
{
	char *strout;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		;
	}
	i++;
	strout = malloc(sizeof(char) * i);

	if (strout == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
		strout[j] = str[j];

	return (strout);
}

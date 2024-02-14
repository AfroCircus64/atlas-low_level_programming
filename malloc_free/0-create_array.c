#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: parameter
 * @c: parameter
 * Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *k = malloc(size * sizeof(char));
		unsigned int i = 0;

	if (k == 0)
	{
		return (NULL);
	}

	if (k == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		k[i] = c;
	}

	return (k);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 * Return: Always 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int k = 0;
	char *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	k = nmemb * size;
	c = malloc(k);

	if (c == NULL)
	{
		return (NULL);
	}

	while (i < k)
	{
		c[i] = 0;
		i++;
	}

	return (c);
}

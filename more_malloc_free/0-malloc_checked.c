#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter
 * Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);

	if (k == NULL)
	{
		exit(98);
	}

	return (k);
}

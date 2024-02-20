#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: parameter
 * @max: parameter
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *k;

	if (min > max)
	{
		return (NULL);
	}

	while (min <= max)
	{
		k[i] = min;
		i++;
		min++;
	}

	return (k);
}

#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: parameter
 * @index: parameter
 * Return: Always 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	i = 1 << index;
	k = n & i;

	if (k == i)
	{
		return (1);
	}

	return (0);
}

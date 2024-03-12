#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: parameter
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int k = 0;

	if (!b)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}

	i = 0;

	while (b[i] != '\0')
	{
		k <<= 1;
		if (b[i] == '1')
		{
			k += 1;
		}
		i++;
	}

	return (k);
}

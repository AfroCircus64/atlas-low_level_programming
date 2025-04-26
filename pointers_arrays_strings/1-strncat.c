#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL or contains invalid chars
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0; /* Index for iterating through the string */
	unsigned int k = 0; /* Variable to store the converted number */

	if (!b) /* Check if b is NULL */
	{
		return (0); /* Return 0 if b is NULL */
	}

	/* Validate that the string contains only '0' and '1' */
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1') /* Check for invalid characters */
		{
			return (0); /* Return 0 if invalid character is found */
		}
		i++;
	}

	i = 0; /* Reset index for conversion */

	/* Convert the binary string to an unsigned int */
	while (b[i] != '\0')
	{
		k <<= 1; /* Shift bits to the left */
		if (b[i] == '1') /* Add 1 if the current char is '1' */
		{
			k += 1;
		}
		i++;
	}

	return (k); /* Return the converted number */
}

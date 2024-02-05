#include "main.h"
#include <stdio.h>
/**
 * *string_toupper - change lowercase letters of a string to uppercase
 * @c: parameter
 * Return: Always 0
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
		i++;
	}
	return (c);
}

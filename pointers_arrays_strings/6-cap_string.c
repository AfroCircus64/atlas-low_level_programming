#include "main.h"
#include <stdio.h>
/**
 * *cap_string - capitalize all words of a string
 * @c: parameter
 * Return: Always 0
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] >= 'a' && c[i] <= 'z'; i++)
	{
		if (c[i - 1] == ' ' ||
		c[i - 1] == '\t' ||
		c[i - 1] == '\n' ||
		c[i - 1] == ',' ||
		c[i - 1] == ';' ||
		c[i - 1] == '.' ||
		c[i - 1] == '!' ||
		c[i - 1] == '?' ||
		c[i - 1] == '"' ||
		c[i - 1] == '(' ||
		c[i - 1] == ')' ||
		c[i - 1] == '{' ||
		c[i - 1] == '}' ||
		i == 0)
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}

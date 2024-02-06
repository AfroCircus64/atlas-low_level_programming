#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}

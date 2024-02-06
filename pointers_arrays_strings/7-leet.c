#include "main.h"
#include <stdio.h>
/**
 * *leet - function that encodes a string into 1337
 * @c: parameter
 * Return: Always 0
 */

char *leet(char *c)
{
	int i;
	int k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (c[i] == s1[k])
			{
				c[i] = s2[k];
			}
		}
	}
	return (c);
}

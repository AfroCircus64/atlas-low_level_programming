#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, k = 0, a = 0, b = 0;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	
	while (s1[i])
	{
		i++;
	}
	while (s2[k])
	{
		k++;
	}

	if (n >= k)
	{
		b = i + k;
	}
	else
	{
		b = i + n;
	}

	s = malloc(sizeof(char) * b + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	k = 0;
	while (a < b)
	{
		if (a <= i)
		{
			s[a] = s1[a];
		}
		if (j >= i)
		{
			s[a] = s2[k];
			k++;
		}
		a++;
	}
	s[a] = '\0';
	return (s);
}

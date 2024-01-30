#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: parameter
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	int mid = length / 2;

	for (i = 0; i < mid; i++)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}

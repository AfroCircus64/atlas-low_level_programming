#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	char *cat;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}

	cat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	memcpy(cat, s1, strlen(s1));
	memcpy(cat + strlen(s1), s2, strlen(s2) + 1);

	return (cat);
}

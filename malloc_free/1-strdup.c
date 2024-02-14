#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: parameter
 * Return: Always 0
 */

char *_strdup(char *str)
{
	char *rope;

	size_t len = 0;

	len = strlen(str);

	rope = malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (rope == NULL)
	{
		return (NULL);
	}

	strcpy(rope, str);

	return (rope);

	free(rope);
}

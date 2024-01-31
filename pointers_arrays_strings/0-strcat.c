#include "main.h"
#include <stdio.h>
/**
 * *_strcat - function that concatenates two strings
 * @dest: parameter
 * @src: parameter
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';

	return (dest);
}

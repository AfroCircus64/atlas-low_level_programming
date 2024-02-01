#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - function that copies a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';

	return (dest);
}

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
	int k = 0;

	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}

#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - function that copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: Always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

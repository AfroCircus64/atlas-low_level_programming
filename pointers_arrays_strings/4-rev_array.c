#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: parameter
 * @n: parameter
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int l = 0;
	int k = n - 1;

	while (i < k)
	{
		l = a[i];
		a[i] = a[k];
		a[k] = l;
		i++;
		k--;
	}
}

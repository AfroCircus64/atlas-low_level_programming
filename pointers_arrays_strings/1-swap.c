#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the integers a and b
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}

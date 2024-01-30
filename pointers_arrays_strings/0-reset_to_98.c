#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates the value of a int to 98
 * 
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int i = 5;
	int *n = &i;

	printf("n = %d\n", *n);

	i = 98;

	printf("n = %d\n", *n);
}

#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - updates the value of a int to 98
 * 
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n = 5;

	printf("n = %d\n", *n);

	reset_to_98(&n);

	printf("n = %d\n", *n);
}

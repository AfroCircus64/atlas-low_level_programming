#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two ints
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - gets the remainder of two ints
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

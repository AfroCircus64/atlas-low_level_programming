#include "main.h"
/**
 * sqrt_func - calculates the square root
 * @i: parameter
 * @k: parameter
 * Return: Always 0
 */

int sqrt_func(int i, int k)
{
	if (k * k == i)
	{
		return (k);
	}
	else if (k * k > i)
	{
		return (-1);
	}
	return (sqrt_func(i, k + 1));
}

/**
 * _sqrt_recursion - prints the square root
 * @n: paramater
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (sqrt_func(n, 0));
}

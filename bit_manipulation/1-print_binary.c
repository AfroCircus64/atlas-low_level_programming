#include "main.h"
#include <stdio.h>
/**
 * binary - num * power
 * @num: parameter
 * @power: parameter
 * Return: Always 0
 */

unsigned long int binary(unsigned int num, unsigned int power)
{
	unsigned long int a = 1;
	unsigned int b = 1;

	while (b <= power)
	{
		a *= num;
		b++;
	}
	return (a);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 * Return: Always 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, k;
	char c = 0;

	i = binary(2, sizeof(unsigned long int) * 8 - 1);

	while (i != 0)
	{
		k = n & i;

		if (k == i)
		{
			c = 1;
			_putchar('1');
		}
		else if (c == 1 || i == 1)
		{
			_putchar('0');
		}
		i >>= 1;
	}
}

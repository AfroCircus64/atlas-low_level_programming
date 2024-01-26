#include "main.h"
/**
 * print_line - draws a straight line
 *
 * Return: Always 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_' * n);
	}
	else 
	{
		_putchar('\n');
	}
}

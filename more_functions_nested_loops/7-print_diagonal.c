#include "main.h"
/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: parameter
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		int k;

		for (i = 0; i < n; i++)
		{
			if (n > 1)
			{
				for (k = 0; k < i; k++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

#include "main.h"
/**
 * print_most_numbers - prints 0 - 9 except 2 and 4
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		if (m != 2 && m != 4)
		{
			_putchar(m + '0');
		}
	}
	_putchar('\n');
}

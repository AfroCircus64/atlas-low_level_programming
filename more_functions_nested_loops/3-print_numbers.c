#include "main.h"
/**
 * print_numbers - prints 0 - 9 followed by a new line
 *
 * Return: 0 Always
 */

void print_numbers(void)
{
	int i;

	for(i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

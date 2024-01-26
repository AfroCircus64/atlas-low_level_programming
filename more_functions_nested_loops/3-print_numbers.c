#include "main.h"
/**
 * print_numbers - prints 0 - 9 followed by a new line
 *
 * Return: 0 Always
 */

void print_numbers(void)
{
	char c;
	int i;

	for(i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

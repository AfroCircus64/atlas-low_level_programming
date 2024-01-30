#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: parameter
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i;
	int n;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	n = (length - 1) / 2;

	while (n < length)
	{
		_putchar(str[i]);
		n++;
	}
	_putchar('\n');
}

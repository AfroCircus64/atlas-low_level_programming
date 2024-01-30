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
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = length - 1; i >= length / 2; i++)
	{
		_putchar(str[i]);
	}
}

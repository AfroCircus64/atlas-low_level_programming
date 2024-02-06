#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard
 * @a: parameter
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int k;

	for (i = 0; i < 8; i++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[i][k]);
		}
		_putchar('\n');
	}
}

#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: Always 0
 */

void print_triangle(int size)
{
        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
                int i;

		int m;

                int k;

                for (i = 1; i <= size; i++)
                {
			for (m = 1; m <= size - i; m++)
			{
				_putchar(' ');
			}
                        for (k = 1; k <= i; k++)
                        {
                                _putchar('#');
                        }
                        _putchar('\n');
                }
        }
}

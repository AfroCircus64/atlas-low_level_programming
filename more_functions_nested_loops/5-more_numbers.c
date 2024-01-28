#include "main.h"
/**
 * more_numbers - prints 0 - 14 ten times
 *
 * Returns: 0
 */

void more_numbers(void)
{
	int i;
	int k;

	for (i = 1; i <= 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}
}

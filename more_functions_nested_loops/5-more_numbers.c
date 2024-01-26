#include "main.h"
/**
 * more_numbers - prints 0 - 14 ten times
 *
 * Returns: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int k;

		for (k = 0; k <= 14; k++)
		{
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}

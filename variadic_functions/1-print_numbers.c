#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: parameter
 * @n: parameter
 * @...: variable number of parameters
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list k;
	unsigned int i;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(k, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(k);
}

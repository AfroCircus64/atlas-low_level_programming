#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter
 * @...: variable number of parameters
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list k;
	unsigned int i;
	unsigned int sum = 0;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(k, int);
	}

	va_end(k);

	return (sum);
}

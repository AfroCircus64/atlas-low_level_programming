#include "main.h"
/**
 * _islower - checks for a lower case letter
 *@c: parameter
 * Return: Always 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

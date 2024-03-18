#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - function that prints all the elements of a list
 * @h: parameter
 * Return: Always 0
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);

		i++;
		h = h->next;
	}

	return (i);
}

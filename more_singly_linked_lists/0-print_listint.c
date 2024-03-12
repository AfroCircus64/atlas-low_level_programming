#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints number of nodes
 * @h: parameter
 * Return: Always 0
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);

		i++;
		h = h->next;
	}
	return (i);
}

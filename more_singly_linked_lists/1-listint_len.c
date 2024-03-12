#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - returns number of elements
 * @h: parameter
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the length of the list
 * @h: parameter
 * Return: Always 0
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

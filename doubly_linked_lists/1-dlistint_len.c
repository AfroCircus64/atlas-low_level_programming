#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: parameter
 * Return: Always 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

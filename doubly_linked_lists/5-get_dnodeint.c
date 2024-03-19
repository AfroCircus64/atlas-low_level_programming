#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *get_dnodeint_at_index - function that returns the nth node of a list
 * @head: parameter
 * @index: parameter
 * Return: Always 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		i++;
		head = head->next;
	}
	return (head);
}

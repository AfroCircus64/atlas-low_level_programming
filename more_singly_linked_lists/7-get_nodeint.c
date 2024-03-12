#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *get_nodeint_at_index - returns the nth node of a list
 * @head: parameter
 * @index: parameter
 * Return: Always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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

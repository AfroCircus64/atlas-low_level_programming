#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: parameter
 * Return: Always 0
 */

int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}

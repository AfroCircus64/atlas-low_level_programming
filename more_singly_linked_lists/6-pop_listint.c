#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a list
 * @head: parameter
 * Return: Always 0
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (head == NULL)
	{
		return (0);
	}

	i = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (i);
}

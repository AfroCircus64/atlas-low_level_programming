#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a list
 * @head: parameter
 * Return: Always 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}

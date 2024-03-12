#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees a list
 * @head: parameter
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}

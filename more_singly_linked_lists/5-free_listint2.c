#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint2 - frees a list while setting head = NULL
 * @head: parameter
 * Return: Always 0
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	while ((node = *head) != NULL)
	{
		*head = (*head)->next;
		free(node);
	}

	head = NULL;
}

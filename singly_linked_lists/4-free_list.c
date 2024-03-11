#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: parameter
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}

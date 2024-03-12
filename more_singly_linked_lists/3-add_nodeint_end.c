#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_nodeint_end - adds a node to the end of the list
 * @head: parameter
 * @n: parameter
 * Return: Always 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	temp_node = *head;

	if (temp_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}

		temp_node->next = new_node;
	}

	return (new_node);
}

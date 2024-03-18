#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *add_dnodeint - adds a node
 * @head: parameter
 * @n: parameter
 * Return: Always 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *add_node - adds a node to the beginning of a list
 * @head: parameter
 * @str: parameter
 * Return: Always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	new_node->len = i;
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

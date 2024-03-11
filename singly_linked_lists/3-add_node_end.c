#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *add_node_end - adds a node to the end of a list
 * @head: parameter
 * @str: parameter
 * Return: Always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp_node;
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

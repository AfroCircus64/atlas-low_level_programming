#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *insert_dnodeint_at_index - function that inserts a new node at a given position
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: Always 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i;

	new_node = NULL;
	
	if (idx == 0)
	{
		new_node = add_nodeint(h, n);
	}
	else
	{
		temp = *h;
		i = 1;

		if (head != NULL)
		{
			while (temp->prev != NULL)
			{
				temp = temp->prev;
			}
		}

		while (temp != NULL)
		{


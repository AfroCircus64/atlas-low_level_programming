#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *hash_table_create - creates a hash table
 * @size: parameter
 * Return: Always 0
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size == 0)
	{
		return (NULL);
	}

	new_table = calloc(1, sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	return (new_table);
}
